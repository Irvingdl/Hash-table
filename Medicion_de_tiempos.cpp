std::ofstream log_file("a8_matricula.txt");
if (log_file.is_open()) {
    auto start = std::chrono::high_resolution_clock::now();
    // Ejecutar el proceso principal
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    log_file << "Tiempo total de ejecución: " << elapsed.count() << " segundos\n";
    log_file << "Número total de colisiones: " << collision_count << "\n";
}
log_file.close();

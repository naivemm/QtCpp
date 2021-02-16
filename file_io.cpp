void BTH::on_openfile_clicked()
{
    QString file_full, file_name, file_path,file_path_name;
    QFileInfo fi;

    file_full = QFileDialog::getOpenFileName(this);

    fi = QFileInfo(file_full);
    file_name = fi.fileName();
    file_path = fi.absolutePath();
    file_path_name = file_path + "/" + file_name;

}

find . -type f -name '*.sh' -exec sh -c "basename \"\$1\" .sh" sh {} \;

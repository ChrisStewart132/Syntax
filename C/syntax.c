int main(int argc, char* argv[])
{
	if (argc == 3) {
		printf("%s %s\n", argv[1], argv[2]);
		processFiles(argv[1], argv[2]);
	} else {
		char inputFilename[80];
		char outputFilename[80];
		getInputString(inputFilename, sizeof(inputFilename) - 1);
		getInputString(outputFilename, sizeof(outputFilename) - 1);
		processFiles(inputFilename, outputFilename);
	}

    return 0;
}
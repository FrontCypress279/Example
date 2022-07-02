from argparse import ArgumentParser, Namespace
def get_args() -> Namespace:
	parser = ArgumentParser(prog='python4Noobs')
	return parser.parse_args()
	

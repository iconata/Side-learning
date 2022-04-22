cc_numbers = []

for _ in range(int(input())):
	card_num = input()
	cc_numbers.append(card_num)

for card in cc_numbers:
	if card.startswith("4") or card.startswith("5") or card.startswith("6"):
		if "-" in card and not " " in card:
			if len(card) == 19:
				print("Valid")
			else:
				print("Invalid")
		elif len(card) == 16:
			if not " " in card:
				print("Valid")
		else:
			print("Invalid")

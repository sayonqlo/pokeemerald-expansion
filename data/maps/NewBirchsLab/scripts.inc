NewBirchsLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchsLab_EventScript_BallDefault
	.byte 0


NewBirchsLab_EventScript_BallDefault::
	setvar VAR_UNUSED_0x40F7, 0
	return


NewBirchsLab_EventScript_Birch::
	lockall
	faceplayer
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_Birch_4
NewBirchsLab_EventScript_Birch_3:
	msgbox NewBirchsLab_EventScript_Birch_Text_2
NewBirchsLab_EventScript_Birch_1:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_Birch_2:
	msgbox NewBirchsLab_EventScript_Birch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Birch_9
	msgbox NewBirchsLab_EventScript_Birch_Text_1
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_Birch_6
	goto NewBirchsLab_EventScript_Birch_3

NewBirchsLab_EventScript_Birch_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_Birch_2
	goto NewBirchsLab_EventScript_Birch_3

NewBirchsLab_EventScript_Birch_9:
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne NewBirchsLab_EventScript_Birch_13
	setvar VAR_UNUSED_0x40F7, 0
NewBirchsLab_EventScript_Birch_12:
	msgbox NewBirchsLab_EventScript_Birch_Text_1
	goto NewBirchsLab_EventScript_Birch_1

NewBirchsLab_EventScript_Birch_13:
	addvar VAR_UNUSED_0x40F7, 1
	goto NewBirchsLab_EventScript_Birch_12


NewBirchsLab_EventScript_PokeballOne::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballOne_4
NewBirchsLab_EventScript_PokeballOne_3:
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_PokeballOne_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballOne_11
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballOne_6
	goto NewBirchsLab_EventScript_PokeballOne_3

NewBirchsLab_EventScript_PokeballOne_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballOne_2
	goto NewBirchsLab_EventScript_PokeballOne_3

NewBirchsLab_EventScript_PokeballOne_9:
	call NewBirchsLab_EventScript_Mudkip
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_10:
	call NewBirchsLab_EventScript_Totodile
	goto NewBirchsLab_EventScript_PokeballOne_1

NewBirchsLab_EventScript_PokeballOne_11:
	call NewBirchsLab_EventScript_Squirtle
	goto NewBirchsLab_EventScript_PokeballOne_1


NewBirchsLab_EventScript_PokeballTwo::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballTwo_4
NewBirchsLab_EventScript_PokeballTwo_3:
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_PokeballTwo_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballTwo_11
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballTwo_6
	goto NewBirchsLab_EventScript_PokeballTwo_3

NewBirchsLab_EventScript_PokeballTwo_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballTwo_2
	goto NewBirchsLab_EventScript_PokeballTwo_3

NewBirchsLab_EventScript_PokeballTwo_9:
	call NewBirchsLab_EventScript_Treecko
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_10:
	call NewBirchsLab_EventScript_Chikorita
	goto NewBirchsLab_EventScript_PokeballTwo_1

NewBirchsLab_EventScript_PokeballTwo_11:
	call NewBirchsLab_EventScript_Bulbasaur
	goto NewBirchsLab_EventScript_PokeballTwo_1


NewBirchsLab_EventScript_PokeballThree::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchsLab_EventScript_PokeballThree_4
NewBirchsLab_EventScript_PokeballThree_3:
	msgbox NewBirchsLab_EventScript_PokeballOne_Text_0
NewBirchsLab_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

NewBirchsLab_EventScript_PokeballThree_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchsLab_EventScript_PokeballThree_11
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchsLab_EventScript_PokeballThree_6
	goto NewBirchsLab_EventScript_PokeballThree_3

NewBirchsLab_EventScript_PokeballThree_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchsLab_EventScript_PokeballThree_2
	goto NewBirchsLab_EventScript_PokeballThree_3

NewBirchsLab_EventScript_PokeballThree_9:
	call NewBirchsLab_EventScript_Torchic
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_10:
	call NewBirchsLab_EventScript_Cyndaquil
	goto NewBirchsLab_EventScript_PokeballThree_1

NewBirchsLab_EventScript_PokeballThree_11:
	call NewBirchsLab_EventScript_Charmander
	goto NewBirchsLab_EventScript_PokeballThree_1


NewBirchsLab_EventScript_Mudkip::
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox NewBirchsLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Mudkip_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Mudkip_1:
	givemon SPECIES_MUDKIP, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Mudkip_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Mudkip_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Mudkip_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Mudkip_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Mudkip_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Totodile::
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox NewBirchsLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Totodile_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Totodile_1:
	givemon SPECIES_TOTODILE, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Totodile_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Totodile_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Totodile_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Totodile_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Totodile_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Squirtle::
	showmonpic SPECIES_SQUIRTLE, 10, 3
	msgbox NewBirchsLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Squirtle_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Squirtle_1:
	givemon SPECIES_SQUIRTLE, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Squirtle_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Squirtle_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Squirtle_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Squirtle_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Squirtle_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Treecko::
	showmonpic SPECIES_TREECKO, 10, 3
	msgbox NewBirchsLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Treecko_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Treecko_1:
	givemon SPECIES_TREECKO, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Treecko_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Treecko_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Treecko_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Treecko_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Treecko_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Chikorita::
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox NewBirchsLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Chikorita_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Chikorita_1:
	givemon SPECIES_CHIKORITA, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Chikorita_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Chikorita_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Chikorita_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Chikorita_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Chikorita_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Bulbasaur::
	showmonpic SPECIES_BULBASAUR, 10, 3
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Bulbasaur_1:
	givemon SPECIES_BULBASAUR, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Bulbasaur_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Bulbasaur_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Bulbasaur_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Bulbasaur_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Torchic::
	showmonpic SPECIES_TORCHIC, 10, 3
	msgbox NewBirchsLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Torchic_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Torchic_1:
	givemon SPECIES_TORCHIC, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Torchic_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Torchic_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Torchic_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Torchic_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Torchic_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Cyndaquil::
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Cyndaquil_1:
	givemon SPECIES_CYNDAQUIL, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Cyndaquil_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Cyndaquil_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Cyndaquil_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Cyndaquil_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	return


NewBirchsLab_EventScript_Charmander::
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox NewBirchsLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchsLab_EventScript_Charmander_1
	hidemonpic
	msgbox NewBirchsLab_NotChosen
	return

NewBirchsLab_EventScript_Charmander_1:
	givemon SPECIES_CHARMANDER, 5, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchsLab_EventScript_Charmander_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchsLab_EventScript_Charmander_5
	hidemonpic
	msgbox NewBirchsLab_EventScript_Mudkip_Text_2
	return

NewBirchsLab_EventScript_Charmander_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	return

NewBirchsLab_EventScript_Charmander_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchsLab_EventScript_Charmander_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchsLab_EventScript_Birch_Text_0:
	.string "Hello, would you like to see more?$"

NewBirchsLab_EventScript_Birch_Text_1:
	.string "Choose your Pokemon wisely$"

NewBirchsLab_EventScript_Birch_Text_2:
	.string "Take care of your Pokemon$"

NewBirchsLab_EventScript_PokeballOne_Text_0:
	.string "Don't Take Another$"

NewBirchsLab_EventScript_Mudkip_Text_0:
	.string "Do you want to choose Mudkip?$"

NewBirchsLab_EventScript_Mudkip_Text_1:
	.string "Recieved Mudkip$"

NewBirchsLab_EventScript_Mudkip_Text_2:
	.string "No More Room$"

NewBirchsLab_EventScript_Totodile_Text_0:
	.string "Do you want to choose Totodile?$"

NewBirchsLab_EventScript_Totodile_Text_1:
	.string "Recieved Totodile$"

NewBirchsLab_EventScript_Squirtle_Text_0:
	.string "Do you want to choose Squirtle?$"

NewBirchsLab_EventScript_Squirtle_Text_1:
	.string "Recieved Squirtle$"

NewBirchsLab_EventScript_Treecko_Text_0:
	.string "Do you want to choose Treecko?$"

NewBirchsLab_EventScript_Treecko_Text_1:
	.string "Recieved Treecko$"

NewBirchsLab_EventScript_Chikorita_Text_0:
	.string "Do you want to choose Chikorita?$"

NewBirchsLab_EventScript_Chikorita_Text_1:
	.string "Recieved Chikorita$"

NewBirchsLab_EventScript_Bulbasaur_Text_0:
	.string "Do you want to choose Bulbasaur?$"

NewBirchsLab_EventScript_Bulbasaur_Text_1:
	.string "Recieved Bulbasaur$"

NewBirchsLab_EventScript_Torchic_Text_0:
	.string "Do you want to choose Torchic?$"

NewBirchsLab_EventScript_Torchic_Text_1:
	.string "Recieved Torchic$"

NewBirchsLab_EventScript_Cyndaquil_Text_0:
	.string "Do you want to choose Cyndaquil?$"

NewBirchsLab_EventScript_Cyndaquil_Text_1:
	.string "Recieved Cyndaquil$"

NewBirchsLab_EventScript_Charmander_Text_0:
	.string "Do you want to choose Charmander?$"

NewBirchsLab_EventScript_Charmander_Text_1:
	.string "Recieved Charmander$"

NicknamePartyMon_Text_0:
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC$"

NewBirchsLab_NotChosen::
	.string "You did not choose the Pokemon$"

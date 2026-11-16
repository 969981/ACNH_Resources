
byte FUN_028d4a98(short *param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*param_1 == 0 || *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248) goto LAB_028d4afc;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CalendarEventStop";
  iVar3 = FUN_02743000(&local_40);
  if (iVar3 != 0) goto LAB_028d4afc;
  puVar5 = *(undefined1 **)(param_2 + 8);
  bVar2 = 1;
  switch(*puVar5) {
  case 0x62:
    if ((puVar5[1] != 'o') || (puVar5[2] != 'c')) goto switchD_028d4b44_caseD_64;
    uVar4 = FUN_00a8117c(param_1);
    if ((uVar4 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 2) - 5 < 7;
      goto switchD_028d4b44_caseD_64;
    }
    break;
  case 99:
    if ((puVar5[1] != 'm') || (puVar5[2] != 'l')) goto switchD_028d4b44_caseD_64;
    goto LAB_028d4bec;
  default:
    goto switchD_028d4b44_caseD_64;
  case 0x67:
    if ((puVar5[1] != 's') || (puVar5[2] != 't')) goto switchD_028d4b44_caseD_64;
    uVar4 = FUN_00a8117c(param_1);
    if (((uVar4 & 1) != 0) || (0xfffffff0 < *(byte *)(param_1 + 2) - 0x14)) break;
LAB_028d4d20:
    bVar2 = 1;
    goto switchD_028d4b44_caseD_64;
  case 0x68:
    if ((puVar5[1] != 'g') || (puVar5[2] != 'c')) {
      if ((puVar5[1] != 'g') || (puVar5[2] != 'h')) goto switchD_028d4b44_caseD_64;
      goto LAB_028d4d04;
    }
LAB_028d4bec:
    bVar2 = FUN_00a8117c(param_1);
    bVar2 = '\x04' < (char)param_1[2] & (bVar2 ^ 0xff);
    goto switchD_028d4b44_caseD_64;
  case 0x6f:
    if ((puVar5[1] != 'w') || (puVar5[2] != 's')) goto switchD_028d4b44_caseD_64;
    uVar4 = FUN_00a8117c(param_1);
    if (((uVar4 & 1) == 0) && (*(byte *)(param_1 + 2) - 0x13 < 0xfffffff1)) goto LAB_028d4d20;
    break;
  case 0x70:
    if ((puVar5[1] == 'k') && (puVar5[2] == 'n')) {
      pcStack_38 = "Halloween";
    }
    else {
      if ((puVar5[1] != 'c') || (puVar5[2] != 'k')) goto switchD_028d4b44_caseD_64;
      pcStack_38 = "Carnival";
    }
    goto LAB_028d4d4c;
  case 0x72:
    if ((puVar5[1] != 'e') || (puVar5[2] != 'i')) goto switchD_028d4b44_caseD_64;
    pcStack_38 = "XmasEve";
    goto LAB_028d4d4c;
  case 0x73:
    if (((puVar5[1] != 'k') || (puVar5[2] != 'k')) && ((puVar5[1] != 'l' || (puVar5[2] != 'o'))))
    goto switchD_028d4b44_caseD_64;
LAB_028d4d04:
    uVar4 = FUN_00a8117c(param_1);
    if (((uVar4 & 1) == 0) && (*(byte *)(param_1 + 2) - 5 < 0x11)) goto LAB_028d4d20;
    break;
  case 0x74:
    if ((puVar5[1] != 'u') || (puVar5[2] != 'k')) goto switchD_028d4b44_caseD_64;
    pcStack_38 = "HarvestFestival";
LAB_028d4d4c:
    local_40 = puVar1 + 0x10;
    bVar2 = FUN_00884390(*(undefined8 *)PTR_DAT_04bb32f0,&local_40,*(undefined8 *)param_1);
    goto switchD_028d4b44_caseD_64;
  }
LAB_028d4afc:
  bVar2 = 0;
switchD_028d4b44_caseD_64:
  return bVar2 & 1;
}


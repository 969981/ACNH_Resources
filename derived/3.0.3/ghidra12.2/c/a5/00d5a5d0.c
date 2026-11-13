
undefined8 FUN_00d5a5d0(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined **local_140;
  char *local_138;
  undefined4 local_130;
  char local_12c [63];
  undefined1 local_ed;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  uint local_34;
  
  local_55 = 0;
  local_d4[0] = 0;
  puStack_e0 = local_d4;
  local_d8 = 0x80;
  local_130 = 0x40;
  local_ed = 0;
  local_138 = local_12c;
  local_12c[0] = '\0';
  local_e8 = &DAT_048fc708;
  local_140 = &PTR_LAB_048fb9f8;
  FUN_00aa0cd0(param_1 + 0x188,&local_e8,&local_140);
  puVar2 = PTR_s_cPlayer_04bb8020;
  local_34 = 0;
  uVar7 = 0;
  do {
    pcVar9 = "";
    if (uVar7 < 0x12) {
      pcVar9 = *(char **)(puVar2 + (ulong)uVar7 * 8 + 0x100);
    }
    (*(code *)local_140[3])(&local_140);
    if (pcVar9 == local_138) {
LAB_00d5a71c:
      local_34 = uVar7;
      break;
    }
    if (*pcVar9 == *local_138) {
      if (*pcVar9 == '\0') goto LAB_00d5a71c;
      lVar6 = 0x7fffe;
      pcVar5 = local_138;
      while( true ) {
        if (pcVar9[1] != pcVar5[1]) break;
        if (pcVar9[1] == '\0') goto LAB_00d5a71c;
        if (pcVar9[2] != pcVar5[2]) break;
        if (pcVar9[2] == '\0') goto LAB_00d5a71c;
        if ((lVar6 == 0) || (cVar1 = pcVar9[3], cVar1 != pcVar5[3])) break;
        lVar6 = lVar6 + -3;
        pcVar5 = pcVar5 + 3;
        pcVar9 = pcVar9 + 3;
        if (cVar1 == '\0') goto LAB_00d5a71c;
      }
    }
    uVar8 = 0x12;
    if ((int)uVar7 < 0x12) {
      uVar8 = uVar7 + 1;
    }
    uVar7 = uVar8;
  } while (uVar8 != 0x12);
  uVar4 = 0;
  switch(local_34) {
  case 0:
    uVar3 = FUN_0274f6e0(&local_e8);
    break;
  case 1:
    uVar3 = FUN_02755ab0(&local_e8);
    break;
  case 2:
    uVar3 = FUN_02753ba0(&local_e8);
    break;
  default:
    goto switchD_00d5a744_caseD_3;
  case 4:
    uVar3 = FUN_0273ef40(&local_e8);
    break;
  case 5:
    uVar3 = FUN_0273d420(&local_e8);
    break;
  case 9:
    uVar3 = FUN_02745680(&local_e8);
    break;
  case 10:
    uVar3 = FUN_0279b510(&local_e8);
    break;
  case 0xe:
    uVar3 = FUN_02759600(&local_e8);
  }
  *param_2 = uVar3;
  uVar4 = 1;
switchD_00d5a744_caseD_3:
  return uVar4;
}


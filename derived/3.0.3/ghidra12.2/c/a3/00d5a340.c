
undefined8 FUN_00d5a340(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 uStack_145;
  uint local_144;
  undefined **local_140;
  char *local_138;
  undefined4 local_130;
  char local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  
  local_55 = 0;
  local_d4[0] = 0;
  local_d8 = 0x80;
  puStack_e0 = local_d4;
  local_130 = 0x40;
  local_e8 = PTR_DAT_04bb2d88 + 0x10;
  local_138 = local_12c;
  local_ed = 0;
  local_140 = &PTR_LAB_048fb9f8;
  local_12c[0] = '\0';
  FUN_00aa0cd0(param_1 + 0x188,&local_e8,&local_140);
  puVar1 = PTR_s_cPlayer_04bb8020;
  local_144 = 0;
  uVar7 = 0;
  do {
    pcVar9 = "";
    if (uVar7 < 0x12) {
      pcVar9 = *(char **)(puVar1 + (ulong)uVar7 * 8 + 0x100);
    }
    (*(code *)local_140[3])(&local_140);
    if (pcVar9 == local_138) {
LAB_00d5a490:
      local_144 = uVar7;
      break;
    }
    if (*pcVar9 == *local_138) {
      if (*pcVar9 == '\0') goto LAB_00d5a490;
      lVar6 = 0x7fffe;
      pcVar5 = local_138;
      while( true ) {
        if (pcVar9[1] != pcVar5[1]) break;
        if (pcVar9[1] == '\0') goto LAB_00d5a490;
        if (pcVar9[2] != pcVar5[2]) break;
        if (pcVar9[2] == '\0') goto LAB_00d5a490;
        if ((lVar6 == 0) || (cVar2 = pcVar9[3], cVar2 != pcVar5[3])) break;
        lVar6 = lVar6 + -3;
        pcVar5 = pcVar5 + 3;
        pcVar9 = pcVar9 + 3;
        if (cVar2 == '\0') goto LAB_00d5a490;
      }
    }
    uVar8 = 0x12;
    if ((int)uVar7 < 0x12) {
      uVar8 = uVar7 + 1;
    }
    uVar7 = uVar8;
  } while (uVar8 != 0x12);
  uVar4 = 0;
  switch(local_144) {
  case 0:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar3 = FUN_0274bce0(puVar1,&local_e8);
    break;
  case 1:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar3 = FUN_02754e30(puVar1,&local_e8);
    break;
  case 2:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar3 = FUN_02753180(puVar1,&local_e8);
    break;
  default:
    goto switchD_00d5a4b8_caseD_3;
  case 4:
    uVar3 = FUN_0273ea30(&local_e8);
    break;
  case 5:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar3 = FUN_0273c2a0(puVar1,&local_e8);
    break;
  case 9:
    uVar3 = FUN_02743000(&local_e8);
    break;
  case 10:
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    uVar3 = FUN_027983c0(puVar1,&local_e8);
    break;
  case 0xc:
    uVar3 = FUN_02739b50(&local_e8);
    break;
  case 0xe:
    FUN_0252d11c(&uStack_145,0);
    uVar3 = FUN_02757a80(&uStack_145,&local_e8);
  }
  *param_2 = uVar3;
  uVar4 = 1;
switchD_00d5a4b8_caseD_3:
  return uVar4;
}


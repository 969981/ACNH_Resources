
void FUN_01e47710(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  puVar2 = PTR_DAT_04bb2020;
  uVar9 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "Carnival";
  puVar7 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar7 == 0) {
    local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)(local_70 >> 0x20) < '\x05') {
      local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_68 = local_68 + -0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
    }
    puVar7 = &local_70;
    uVar3 = local_70 >> 0x30;
    local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
    local_70 = CONCAT26((short)uVar3,(undefined6)local_70) & 0xff00ffffffffffff;
  }
  uVar3 = *puVar7;
  uVar3 = FUN_00879dd0(uVar9,&local_80,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_80 = puVar2 + 0x10;
  local_78 = "sza";
  lVar1 = param_1 + 0x3e0;
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar11 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar11) == '\0') goto LAB_01e4784c;
    lVar5 = *(long *)(param_1 + 1000) + lVar11;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01e4784c;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01e4784c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01e4784c:
  (**(code **)(local_80 + 0x18))(&local_80);
  lVar5 = 0;
  do {
    iVar10 = (int)lVar11;
    if (local_78[lVar5] == '\0') {
LAB_01e47898:
      iVar4 = (int)lVar5;
      if (iVar10 < iVar4) goto LAB_01e47944;
LAB_01e478b0:
      if ((int)lVar5 < 1) goto LAB_01e47928;
      uVar3 = 0;
      goto LAB_01e478c4;
    }
    if (local_78[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e47898;
    }
    if (local_78[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar10) goto LAB_01e478b0;
      goto LAB_01e47944;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (iVar10 < 0) goto LAB_01e47944;
LAB_01e47928:
  (**(code **)(local_80 + 0x18))(&local_80);
  goto LAB_01e47e9c;
  while( true ) {
    pcVar6 = local_78;
    lVar8 = lVar5;
    while( true ) {
      lVar8 = lVar8 + -1;
      if (*(char *)(lVar11 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar11 + uVar3) == '\0') ||
         (lVar11 = lVar11 + 1, pcVar6 = pcVar6 + 1, lVar8 == 0)) goto LAB_01e4793c;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar10 - iVar4) + 1) break;
LAB_01e478c4:
    lVar11 = *(long *)(param_1 + 1000);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((char *)(lVar11 + uVar3) == local_78) {
LAB_01e4793c:
      if ((int)uVar3 != -1) goto LAB_01e47e9c;
      break;
    }
  }
LAB_01e47944:
  local_80 = puVar2 + 0x10;
  local_78 = "rco";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar11 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar11) == '\0') goto LAB_01e479ac;
    lVar5 = *(long *)(param_1 + 1000) + lVar11;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01e479ac;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01e479ac;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01e479ac:
  (**(code **)(local_80 + 0x18))(&local_80);
  lVar5 = 0;
  do {
    iVar10 = (int)lVar11;
    if (local_78[lVar5] == '\0') {
LAB_01e479f8:
      iVar4 = (int)lVar5;
      if (iVar10 < iVar4) goto LAB_01e47aa4;
LAB_01e47a10:
      if ((int)lVar5 < 1) goto LAB_01e47a88;
      uVar3 = 0;
      goto LAB_01e47a24;
    }
    if (local_78[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e479f8;
    }
    if (local_78[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar10) goto LAB_01e47a10;
      goto LAB_01e47aa4;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (iVar10 < 0) goto LAB_01e47aa4;
LAB_01e47a88:
  (**(code **)(local_80 + 0x18))(&local_80);
  goto LAB_01e47ee8;
  while( true ) {
    pcVar6 = local_78;
    lVar8 = lVar5;
    while( true ) {
      lVar8 = lVar8 + -1;
      if (*(char *)(lVar11 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar11 + uVar3) == '\0') ||
         (lVar11 = lVar11 + 1, pcVar6 = pcVar6 + 1, lVar8 == 0)) goto LAB_01e47a9c;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar10 - iVar4) + 1) break;
LAB_01e47a24:
    lVar11 = *(long *)(param_1 + 1000);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((char *)(lVar11 + uVar3) == local_78) {
LAB_01e47a9c:
      if ((int)uVar3 != -1) goto LAB_01e47ee8;
      break;
    }
  }
LAB_01e47aa4:
  local_80 = puVar2 + 0x10;
  local_78 = "rct";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar11 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar11) == '\0') goto LAB_01e47b0c;
    lVar5 = *(long *)(param_1 + 1000) + lVar11;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01e47b0c;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01e47b0c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01e47b0c:
  (**(code **)(local_80 + 0x18))(&local_80);
  lVar5 = 0;
  do {
    iVar10 = (int)lVar11;
    if (local_78[lVar5] == '\0') {
LAB_01e47b58:
      iVar4 = (int)lVar5;
      if (iVar10 < iVar4) goto LAB_01e47c04;
LAB_01e47b70:
      if ((int)lVar5 < 1) goto LAB_01e47be8;
      uVar3 = 0;
      goto LAB_01e47b84;
    }
    if (local_78[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e47b58;
    }
    if (local_78[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar10) goto LAB_01e47b70;
      goto LAB_01e47c04;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (-1 < iVar10) {
LAB_01e47be8:
    (**(code **)(local_80 + 0x18))(&local_80);
LAB_01e47c60:
    local_80 = (undefined *)0xa34;
    goto LAB_01e47eec;
  }
  goto LAB_01e47c04;
  while( true ) {
    pcVar6 = local_78;
    lVar8 = lVar5;
    while( true ) {
      lVar8 = lVar8 + -1;
      if (*(char *)(lVar11 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar11 + uVar3) == '\0') ||
         (lVar11 = lVar11 + 1, pcVar6 = pcVar6 + 1, lVar8 == 0)) goto LAB_01e47d6c;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar10 - iVar4) + 1) break;
LAB_01e47cf0:
    lVar11 = *(long *)(param_1 + 1000);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((char *)(lVar11 + uVar3) == local_78) {
LAB_01e47d6c:
      if ((int)uVar3 != -1) goto LAB_01e47ec4;
      break;
    }
  }
  goto LAB_01e47d74;
  while (uVar3 = uVar3 + 1, (int)lVar11 - 2 != uVar3) {
LAB_01e47dfc:
    pcVar6 = (char *)(*(long *)(param_1 + 1000) + uVar3);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((pcVar6 == local_78) ||
       ((*pcVar6 == *local_78 &&
        ((*pcVar6 == '\0' ||
         ((pcVar6[1] == local_78[1] && ((pcVar6[1] == '\0' || (pcVar6[2] == local_78[2])))))))))) {
      if ((int)uVar3 != -1) goto LAB_01e47ec4;
      break;
    }
  }
  goto LAB_01e47e60;
  while( true ) {
    pcVar6 = local_78;
    lVar8 = lVar5;
    while( true ) {
      lVar8 = lVar8 + -1;
      if (*(char *)(lVar11 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar11 + uVar3) == '\0') ||
         (lVar11 = lVar11 + 1, pcVar6 = pcVar6 + 1, lVar8 == 0)) goto LAB_01e47bfc;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar10 - iVar4) + 1) break;
LAB_01e47b84:
    lVar11 = *(long *)(param_1 + 1000);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((char *)(lVar11 + uVar3) == local_78) {
LAB_01e47bfc:
      if ((int)uVar3 != -1) goto LAB_01e47c60;
      break;
    }
  }
LAB_01e47c04:
  local_80 = puVar2 + 0x10;
  local_78 = "rcm";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar11 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar11) == '\0') goto LAB_01e47c74;
    lVar5 = *(long *)(param_1 + 1000) + lVar11;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01e47c74;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01e47c74;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01e47c74:
  (**(code **)(local_80 + 0x18))(&local_80);
  lVar5 = 0;
  do {
    iVar10 = (int)lVar11;
    if (local_78[lVar5] == '\0') {
LAB_01e47cc4:
      iVar4 = (int)lVar5;
      if (iVar10 < iVar4) goto LAB_01e47d74;
LAB_01e47cdc:
      if ((int)lVar5 < 1) goto LAB_01e47d58;
      uVar3 = 0;
      goto LAB_01e47cf0;
    }
    if (local_78[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e47cc4;
    }
    if (local_78[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar10) goto LAB_01e47cdc;
      goto LAB_01e47d74;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (iVar10 < 0) {
LAB_01e47d74:
    local_80 = puVar2 + 0x10;
    local_78 = "dod";
    (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 1000) + lVar11) == '\0') {
LAB_01e47dd8:
        if (2 < (int)lVar11) {
          uVar3 = 0;
          goto LAB_01e47dfc;
        }
        break;
      }
      lVar5 = *(long *)(param_1 + 1000) + lVar11;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01e47dd8;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01e47dd8;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
LAB_01e47e60:
    local_78 = "hgh";
    local_80 = puVar2 + 0x10;
    uVar3 = FUN_0144b250(lVar1,&local_80);
    if ((uVar3 & 1) == 0) {
      local_78 = "kpgB";
      local_80 = puVar2 + 0x10;
      uVar3 = FUN_0144b250(lVar1,&local_80);
      if ((uVar3 & 1) == 0) {
        local_78 = "kpmB";
        local_80 = puVar2 + 0x10;
        uVar3 = FUN_0144b250(lVar1,&local_80);
        if ((uVar3 & 1) == 0) {
          local_78 = "kpsB";
          local_80 = puVar2 + 0x10;
          uVar3 = FUN_0144b250(lVar1,&local_80);
          if ((uVar3 & 1) == 0) {
            return;
          }
LAB_01e47ee8:
          local_80 = (undefined *)0x2605;
          goto LAB_01e47eec;
        }
        goto LAB_01e47ec4;
      }
    }
LAB_01e47e9c:
    local_80 = (undefined *)0x2606;
  }
  else {
LAB_01e47d58:
    (**(code **)(local_80 + 0x18))(&local_80);
LAB_01e47ec4:
    local_80 = (undefined *)0x2604;
  }
LAB_01e47eec:
  FUN_0277d4ac(&local_80);
  *(undefined4 *)(param_2 + 0x10) = (undefined4)local_80;
  *(undefined4 *)(param_2 + 0x14) = local_80._4_4_;
  return;
}


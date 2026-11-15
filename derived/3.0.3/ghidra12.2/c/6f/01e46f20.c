
void FUN_01e46f20(long param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined *local_f0;
  undefined1 *puStack_e8;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined *local_b0;
  char *local_a8;
  undefined *local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  undefined8 local_70;
  char *local_68;
  
  puVar7 = PTR_DAT_04bb2020;
  uVar10 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "XmasEve";
  puVar8 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar8 == 0) {
    local_90 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_90 >> 0x20) < '\x05') {
      lVar1 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_80 = (undefined *)(lVar1 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
    }
    puVar8 = &local_90;
    uVar3 = (ulong)local_90 >> 0x30;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90 = (undefined *)(CONCAT26((short)uVar3,(undefined6)local_90) & 0xff00ffffffffffff);
  }
  uVar3 = *puVar8;
  uVar3 = FUN_00879dd0(uVar10,&local_70,uVar3,uVar3 >> 0x10,uVar3 >> 0x18,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  local_70 = puVar7 + 0x10;
  local_68 = "sza";
  lVar1 = param_1 + 0x3e0;
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar12 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar12) == '\0') goto LAB_01e4705c;
    lVar5 = *(long *)(param_1 + 1000) + lVar12;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_01e4705c;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_01e4705c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_01e4705c:
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar5 = 0;
  do {
    iVar11 = (int)lVar12;
    if (local_68[lVar5] == '\0') {
LAB_01e470a8:
      iVar4 = (int)lVar5;
      if (iVar11 < iVar4) goto LAB_01e4714c;
LAB_01e470c0:
      if ((int)lVar5 < 1) goto LAB_01e47138;
      uVar3 = 0;
      goto LAB_01e470d4;
    }
    if (local_68[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e470a8;
    }
    if (local_68[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar11) goto LAB_01e470c0;
      goto LAB_01e4714c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (iVar11 < 0) goto LAB_01e4714c;
LAB_01e47138:
  ppuVar2 = (undefined **)&local_70;
  puVar7 = local_70;
  goto LAB_01e47560;
  while( true ) {
    pcVar6 = local_68;
    lVar9 = lVar5;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar12 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar12 + uVar3) == '\0') ||
         (lVar12 = lVar12 + 1, pcVar6 = pcVar6 + 1, lVar9 == 0)) goto LAB_01e47144;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar11 - iVar4) + 1) break;
LAB_01e470d4:
    lVar12 = *(long *)(param_1 + 1000);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar12 + uVar3) == local_68) {
LAB_01e47144:
      if ((int)uVar3 != -1) goto LAB_01e47568;
      break;
    }
  }
LAB_01e4714c:
  local_80 = puVar7 + 0x10;
  local_78 = "rco";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar12 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar12) == '\0') goto LAB_01e471b0;
    lVar5 = *(long *)(param_1 + 1000) + lVar12;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_01e471b0;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_01e471b0;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_01e471b0:
  (**(code **)(local_80 + 0x18))(&local_80);
  lVar5 = 0;
  do {
    iVar11 = (int)lVar12;
    if (local_78[lVar5] == '\0') {
LAB_01e47204:
      iVar4 = (int)lVar5;
      if (iVar11 < iVar4) goto LAB_01e472ac;
LAB_01e4721c:
      if ((int)lVar5 < 1) goto LAB_01e47298;
      uVar3 = 0;
      goto LAB_01e47230;
    }
    if (local_78[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e47204;
    }
    if (local_78[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar11) goto LAB_01e4721c;
      goto LAB_01e472ac;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (iVar11 < 0) goto LAB_01e472ac;
LAB_01e47298:
  ppuVar2 = &local_80;
  puVar7 = local_80;
  goto LAB_01e47560;
  while( true ) {
    pcVar6 = local_78;
    lVar9 = lVar5;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar12 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar12 + uVar3) == '\0') ||
         (lVar12 = lVar12 + 1, pcVar6 = pcVar6 + 1, lVar9 == 0)) goto LAB_01e472a4;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar11 - iVar4) + 1) break;
LAB_01e47230:
    lVar12 = *(long *)(param_1 + 1000);
    (**(code **)(local_80 + 0x18))(&local_80);
    if ((char *)(lVar12 + uVar3) == local_78) {
LAB_01e472a4:
      if ((int)uVar3 != -1) goto LAB_01e47568;
      break;
    }
  }
LAB_01e472ac:
  local_90 = puVar7 + 0x10;
  local_88 = "rct";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar12 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar12) == '\0') goto LAB_01e47310;
    lVar5 = *(long *)(param_1 + 1000) + lVar12;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_01e47310;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_01e47310;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_01e47310:
  (**(code **)(local_90 + 0x18))(&local_90);
  lVar5 = 0;
  do {
    iVar11 = (int)lVar12;
    if (local_88[lVar5] == '\0') {
LAB_01e47364:
      iVar4 = (int)lVar5;
      if (iVar11 < iVar4) goto LAB_01e4740c;
LAB_01e4737c:
      if ((int)lVar5 < 1) goto LAB_01e473f8;
      uVar3 = 0;
      goto LAB_01e47390;
    }
    if (local_88[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e47364;
    }
    if (local_88[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar11) goto LAB_01e4737c;
      goto LAB_01e4740c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (iVar11 < 0) goto LAB_01e4740c;
LAB_01e473f8:
  ppuVar2 = (undefined **)&local_90;
  puVar7 = local_90;
  goto LAB_01e47560;
  while( true ) {
    pcVar6 = local_98;
    lVar9 = lVar5;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar12 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar12 + uVar3) == '\0') ||
         (lVar12 = lVar12 + 1, pcVar6 = pcVar6 + 1, lVar9 == 0)) goto LAB_01e475a0;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar11 - iVar4) + 1) break;
LAB_01e474f0:
    lVar12 = *(long *)(param_1 + 1000);
    (**(code **)(local_a0 + 0x18))(&local_a0);
    if ((char *)(lVar12 + uVar3) == local_98) {
LAB_01e475a0:
      if ((int)uVar3 != -1) goto LAB_01e47568;
      break;
    }
  }
LAB_01e475a8:
  local_b0 = puVar7 + 0x10;
  local_a8 = "dod";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar12 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar12) == '\0') {
LAB_01e47608:
      if (2 < (int)lVar12) {
        uVar3 = 0;
        goto LAB_01e4762c;
      }
      break;
    }
    lVar5 = *(long *)(param_1 + 1000) + lVar12;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_01e47608;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_01e47608;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  goto LAB_01e47690;
  while (uVar3 = uVar3 + 1, (int)lVar12 - 2 != uVar3) {
LAB_01e4762c:
    pcVar6 = (char *)(*(long *)(param_1 + 1000) + uVar3);
    (**(code **)(local_b0 + 0x18))(&local_b0);
    if ((pcVar6 == local_a8) ||
       ((*pcVar6 == *local_a8 &&
        ((*pcVar6 == '\0' ||
         ((pcVar6[1] == local_a8[1] && ((pcVar6[1] == '\0' || (pcVar6[2] == local_a8[2])))))))))) {
      if ((int)uVar3 != -1) goto LAB_01e47568;
      break;
    }
  }
LAB_01e47690:
  puStack_b8 = &DAT_04086b30;
  local_c0 = puVar7 + 0x10;
  uVar3 = FUN_0144b250(lVar1,&local_c0);
  if ((uVar3 & 1) == 0) {
    puStack_c8 = &DAT_040e4ec8;
    local_d0 = puVar7 + 0x10;
    uVar3 = FUN_0144b250(lVar1,&local_d0);
    if ((uVar3 & 1) == 0) {
      puStack_d8 = &DAT_0407cab4;
      local_e0 = puVar7 + 0x10;
      uVar3 = FUN_0144b250(lVar1,&local_e0);
      if ((uVar3 & 1) == 0) {
        puStack_e8 = &DAT_040ff383;
        local_f0 = puVar7 + 0x10;
        uVar3 = FUN_0144b250(lVar1,&local_f0);
        if ((uVar3 & 1) == 0) {
          return;
        }
      }
    }
  }
  goto LAB_01e47568;
  while( true ) {
    pcVar6 = local_88;
    lVar9 = lVar5;
    while( true ) {
      lVar9 = lVar9 + -1;
      if (*(char *)(lVar12 + uVar3) != *pcVar6) break;
      if ((*(char *)(lVar12 + uVar3) == '\0') ||
         (lVar12 = lVar12 + 1, pcVar6 = pcVar6 + 1, lVar9 == 0)) goto LAB_01e47404;
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == (iVar11 - iVar4) + 1) break;
LAB_01e47390:
    lVar12 = *(long *)(param_1 + 1000);
    (**(code **)(local_90 + 0x18))(&local_90);
    if ((char *)(lVar12 + uVar3) == local_88) {
LAB_01e47404:
      if ((int)uVar3 != -1) goto LAB_01e47568;
      break;
    }
  }
LAB_01e4740c:
  local_a0 = puVar7 + 0x10;
  local_98 = "rcm";
  (**(code **)(*(long *)(param_1 + 0x3e0) + 0x18))(lVar1);
  lVar12 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 1000) + lVar12) == '\0') goto LAB_01e47470;
    lVar5 = *(long *)(param_1 + 1000) + lVar12;
    if (*(char *)(lVar5 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_01e47470;
    }
    if (*(char *)(lVar5 + 2) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_01e47470;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_01e47470:
  (**(code **)(local_a0 + 0x18))(&local_a0);
  lVar5 = 0;
  do {
    iVar11 = (int)lVar12;
    if (local_98[lVar5] == '\0') {
LAB_01e474c4:
      iVar4 = (int)lVar5;
      if (iVar11 < iVar4) goto LAB_01e475a8;
LAB_01e474dc:
      if ((int)lVar5 < 1) goto LAB_01e47558;
      uVar3 = 0;
      goto LAB_01e474f0;
    }
    if (local_98[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_01e474c4;
    }
    if (local_98[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      iVar4 = (int)lVar5;
      if (iVar4 <= iVar11) goto LAB_01e474dc;
      goto LAB_01e475a8;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  if (iVar11 < 0) goto LAB_01e475a8;
LAB_01e47558:
  ppuVar2 = &local_a0;
  puVar7 = local_a0;
LAB_01e47560:
  (**(code **)(puVar7 + 0x18))(ppuVar2);
LAB_01e47568:
  local_70 = (undefined *)0x14ba;
  FUN_0277d4ac(&local_70);
  *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
  *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
  return;
}


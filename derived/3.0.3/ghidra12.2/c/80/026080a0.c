
void FUN_026080a0(long param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int *local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined *local_98;
  undefined8 local_90;
  int local_74;
  long *local_70;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  local_64 = param_2;
  lVar5 = FUN_026eec4c();
  if (lVar5 == 0) {
    return;
  }
  lVar11 = lVar5 + 0x194b0;
  lVar8 = lVar11;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar8 = *(long *)(*(long *)puVar3 + 0x20);
  }
  if ((*(long **)(lVar8 + 0x2a840) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar8 + 0x2a840), puVar6 == (undefined8 *)0x0)) {
    uVar12 = *(undefined4 *)(*(long *)(lVar8 + 0x2a828) + *(long *)(lVar8 + 0x2a820) + 0x10);
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar12 = *(undefined4 *)(*(long *)(lVar8 + 0x2a828) + *(long *)(lVar8 + 0x2a820) + 0x10);
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0x2a840) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x2a840) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar3 + 0x20);
    plVar9 = *(long **)(lVar11 + 0x178);
  }
  else {
    plVar9 = *(long **)(lVar5 + 0x19628);
  }
  if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
    uVar13 = 1;
  }
  else {
    uVar13 = (*(code *)**(undefined8 **)*plVar9)();
    uVar13 = uVar13 ^ 1;
  }
  uVar10 = *(uint *)(*(long *)(lVar11 + 0x160) + *(long *)(lVar11 + 0x158) + 72000);
  if (8999 < uVar10) {
    uVar10 = 9000;
  }
  if ((((uVar13 & 1) == 0) && (*(long *)(lVar11 + 0x178) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x178) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  FUN_026083d0(param_1,param_2);
  puVar3 = PTR_DAT_04bb2268;
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 < 1) {
    uVar13 = 1;
  }
  else {
    uVar13 = (iVar4 + 499U) / 500;
  }
  uVar14 = 0;
  piVar1 = (int *)(PTR_DAT_04bb2020 + 0x10);
  puVar2 = PTR_DAT_04bc33a0 + 0x10;
  do {
    local_a8 = "parse_player_chest_item";
    local_b0 = piVar1;
    FUN_026012f4(&local_98,&local_b0,&local_64);
    local_70 = (long *)0x0;
    local_98 = puVar2;
    if (*(char *)(*(long *)puVar3 + 0xb1) == '\0') {
      local_70 = (long *)FUN_0260d56c(*(long *)puVar3,local_90,500);
    }
    local_a8 = (char *)CONCAT44(uVar13,uVar10);
    local_b0 = (int *)(param_1 + 8);
    local_a0 = uVar14;
    uStack_9c = uVar12;
    FUN_025c48cc(&local_98,&local_b0);
    lVar8 = *(long *)puVar3;
    lVar11 = *(long *)PTR_DAT_04bb3350;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar11 + 0x68));
    if ((*(long *)(lVar11 + 0x60) != lVar5) &&
       (uVar7 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar7 & 1) == 0)) {
      *(undefined1 *)(lVar8 + 0xb1) = 1;
    }
    local_98 = PTR_DAT_04bc33a0 + 0x10;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
    iVar4 = (**(code **)(local_98 + 0x20))(&local_98);
    if (iVar4 == -1) {
LAB_02608350:
      if (local_74 == 0) {
        local_74 = 1;
      }
    }
    else {
      iVar4 = (**(code **)(local_98 + 0x20))(&local_98);
      local_b0 = (int *)CONCAT44(local_b0._4_4_,iVar4);
      if (0xc < iVar4) goto LAB_02608350;
    }
    FUN_02601530(&local_98);
    uVar14 = uVar14 + 1;
    if (uVar13 == uVar14) {
      lVar11 = *(long *)puVar3;
      lVar8 = *(long *)PTR_DAT_04bb3350;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(lVar8 + 0x68));
      if ((*(long *)(lVar8 + 0x60) != lVar5) &&
         (uVar7 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar7 & 1) == 0)) {
        *(undefined1 *)(lVar11 + 0xb1) = 1;
      }
      return;
    }
  } while( true );
}


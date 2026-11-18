
void FUN_037c68c0(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *local_108;
  char *local_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined3 uStack_94;
  undefined1 local_91;
  undefined4 local_54;
  
  puVar2 = PTR_DAT_04bb2020;
  local_91 = 0;
  local_98 = 0x535f6c50;
  uStack_94 = 0x70696c;
  plVar8 = *(long **)(param_1 + 0x220);
  local_a8 = (char *)&local_98;
  local_a0 = 0x4000000007;
  local_e8 = 0;
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b0 = (undefined8 *)PTR_DAT_04bb2120;
  local_c0 = 0;
  local_f8 = &DAT_0407ebb1;
  puStack_f0 = &DAT_0407ebb1;
  local_e0 = &DAT_0407ebb1;
  local_d8 = &DAT_0407ebb1;
  if (plVar8 == (long *)0x0) {
    uVar10 = 0;
LAB_037c6a1c:
    local_b0 = local_d8;
  }
  else {
    (**(code **)(*plVar8 + 0x128))(plVar8,&local_f8,0);
    lVar9 = *(long *)(*(long *)(param_1 + 0x220) + 0x1138);
    if (lVar9 == 0) {
      uVar10 = 0;
    }
    else {
      local_54 = 0x22;
      uVar10 = FUN_03850a90(lVar9,0x22,0,0);
      uVar10 = uVar10 & 0xffffffff;
    }
    if (PTR_DAT_04bbe000 == "eelObject") {
      uVar7 = FUN_01709070(*(undefined8 *)(param_1 + 0x220),1);
      (**(code **)(**(long **)(param_1 + 0x220) + 0x128))
                (*(long **)(param_1 + 0x220),&local_f8,uVar7);
      lVar9 = *(long *)(param_1 + 0x220);
      uVar7 = FUN_01709070(lVar9,uVar7);
      lVar9 = *(long *)(lVar9 + 0x1138);
      if (lVar9 == 0) {
        uVar10 = 0;
      }
      else {
        local_54 = 0x22;
        uVar10 = FUN_03850a90(lVar9,0x22,0,uVar7);
        uVar10 = uVar10 & 0xffffffff;
      }
    }
    if (local_d8 != (undefined8 *)0x0) goto LAB_037c6a1c;
  }
  (**(code **)(local_b8 + 0x18))(&local_b8);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puVar11 = local_b0;
  (**(code **)(DAT_05ace368 + 0x18))(&DAT_05ace368);
  puVar3 = local_b0;
  if (puVar11 != DAT_05ace370) {
    uVar14 = 0;
    bVar6 = true;
    do {
      if (*(char *)((long)local_b0 + uVar14) != *(char *)((long)DAT_05ace370 + uVar14)) break;
      if (*(char *)((long)local_b0 + uVar14) == '\0') {
        if (bVar6) goto LAB_037c6b2c;
        break;
      }
      bVar6 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    puVar11 = local_b0;
    lVar9 = 0;
    do {
      if (*(char *)((long)local_b0 + lVar9) == '\0') {
LAB_037c6b00:
        iVar12 = (int)lVar9;
joined_r0x037c6b04:
        if ((0 < iVar12) && (*(char *)((long)puVar3 + (ulong)(iVar12 - 1)) == 'L')) {
          if ((uVar10 & 1) != 0) goto LAB_037c6b2c;
          goto LAB_037c6c9c;
        }
        break;
      }
      if (*(char *)((long)local_b0 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_037c6b00;
      }
      if (*(char *)((long)local_b0 + lVar9 + 2) == '\0') {
        iVar12 = (int)lVar9 + 2;
        goto joined_r0x037c6b04;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    lVar9 = 0;
    do {
      if (*(char *)((long)local_b0 + lVar9) == '\0') {
LAB_037c6c70:
        iVar12 = (int)lVar9;
joined_r0x037c6c84:
        if ((0 < iVar12) && (*(char *)((long)puVar11 + (ulong)(iVar12 - 1)) == 'R')) {
          if ((uVar10 & 1) != 0) goto LAB_037c6c9c;
          goto LAB_037c6b2c;
        }
        break;
      }
      if (*(char *)((long)local_b0 + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_037c6c70;
      }
      if (*(char *)((long)local_b0 + lVar9 + 2) == '\0') {
        iVar12 = (int)lVar9 + 2;
        goto joined_r0x037c6c84;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    *param_2 = 0;
    return;
  }
LAB_037c6b2c:
  puVar13 = (undefined4 *)(param_1 + 0x304);
LAB_037c6b30:
  FUN_0384db40(&local_a8,*puVar13);
  pcVar4 = local_a8;
  uVar5 = (uint)local_a0;
  uVar1 = 3;
  if (local_a0._4_4_ <= (int)((uint)local_a0 + 3)) {
    uVar1 = local_a0._4_4_ + ~(uint)local_a0;
  }
  if (0 < (int)uVar1) {
    memcpy(local_a8 + (int)(uint)local_a0,&DAT_040a053d,(ulong)uVar1);
    pcVar4[(int)(uVar1 + uVar5)] = '\0';
    local_a0 = CONCAT44(local_a0._4_4_,uVar1 + uVar5);
  }
  uVar15 = *(undefined8 *)(param_2 + 2);
  local_108 = puVar2 + 0x10;
  local_100 = local_a8;
  puVar11 = (undefined8 *)FUN_03f2d7f0(param_1 + 0x508);
  if (((*PTR_DAT_04bc4000 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bc4000), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bc3ff8 = PTR_DAT_04bb4448 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4000);
  }
  if ((((puVar11 == (undefined8 *)0x0) ||
       (uVar10 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc3ff8), (uVar10 & 1) == 0)) ||
      (*local_100 == '\0')) ||
     ((puVar11 = (undefined8 *)puVar11[5], puVar11 == (undefined8 *)0x0 ||
      (uVar10 = (**(code **)*puVar11)(puVar11,uVar15,&local_108), (uVar10 & 1) == 0)))) {
    uVar7 = 2;
  }
  else {
    uVar7 = 1;
  }
  *param_2 = uVar7;
  return;
LAB_037c6c9c:
  puVar13 = (undefined4 *)(param_1 + 0x300);
  goto LAB_037c6b30;
}



void FUN_03698b00(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined **local_50;
  int *piStack_48;
  int local_18;
  int iStack_14;
  
  uVar11 = (ulong)param_2;
  uVar15 = (ulong)param_1;
  uVar5 = FUN_0375f6e0();
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar9 == 0) {
    iVar4 = 0;
    iVar7 = 0;
    iVar8 = 0x10;
    iVar10 = 0x10;
  }
  else {
    iVar4 = *(int *)(lVar9 + 0xd88);
    iVar7 = *(int *)(lVar9 + 0xd8c);
    iVar10 = *(int *)(lVar9 + 0xd98);
    iVar8 = *(int *)(lVar9 + 0xd9c);
  }
  iVar1 = iVar4;
  if (iVar10 <= iVar4) {
    iVar1 = iVar10;
  }
  if (iVar4 <= iVar10) {
    iVar4 = iVar10;
  }
  iVar10 = iVar7;
  if (iVar8 <= iVar7) {
    iVar10 = iVar8;
  }
  if (iVar7 <= iVar8) {
    iVar7 = iVar8;
  }
  if (3 < param_1) {
    uVar15 = 0;
  }
  if (3 < param_2) {
    uVar11 = 0;
  }
  local_18 = ((iVar4 - iVar1) - (&DAT_04102850)[uVar15]) + 1;
  iStack_14 = ((iVar7 - iVar10) - (&DAT_04102850)[uVar11]) + 1;
  lVar9 = *(long *)PTR_DAT_04bb3968;
  if (lVar9 != 0) {
    piStack_48 = &local_18;
    local_50 = &PTR_FUN_04b43648;
    if (*(int *)(lVar9 + 0xb88) != 0) {
      lVar16 = (long)*(int *)(lVar9 + 0xb88) << 3;
      puVar12 = *(undefined8 **)(lVar9 + 0xb90);
      do {
        (*(code *)*local_50)(&local_50,*puVar12);
        lVar16 = lVar16 + -8;
        puVar12 = puVar12 + 1;
      } while (lVar16 != 0);
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar4 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  puVar3 = PTR_DAT_04bb27c0;
  iVar4 = *(int *)(puVar12 + 7);
  if ((((((DAT_05ac0a90 != iVar4) && (DAT_05ac0aa0 != iVar4)) && (DAT_05ac0ab0 != iVar4)) &&
       ((DAT_05ac0ac0 != iVar4 && (DAT_05ac0ad0 != iVar4)))) &&
      ((DAT_05ac0ae0 != iVar4 && ((DAT_05ac0af0 != iVar4 && (DAT_05ac0b00 != iVar4)))))) &&
     ((DAT_05ac0b10 != iVar4 && (DAT_05ac0b20 != iVar4)))) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar14 = *(uint *)PTR_DAT_04bb3958;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar14 = 1;
      goto joined_r0x03698db0;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03698db0;
    }
  }
  uVar14 = 0;
joined_r0x03698db0:
  if (plVar13 != (long *)0x0) {
    lVar9 = plVar13[0x2a];
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar15 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3928);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar14;
    }
    if (((uVar15 & 1) != 0) && (uVar2 != 0)) {
      FUN_020475d0(plVar13);
    }
  }
  return;
}


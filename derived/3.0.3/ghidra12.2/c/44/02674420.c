
void FUN_02674420(long param_1)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  short *psVar15;
  short *psVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((*(long **)(param_1 + 0x1aa0) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(param_1 + 0x1aa0), puVar6 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  puVar8 = (undefined4 *)FUN_02816430(*(long *)(param_1 + 0x1a88) + *(long *)(param_1 + 0x1a80));
  local_70 = *puVar8;
  uStack_6c = puVar8[1];
  uVar4 = FUN_028169a0(*(long *)(param_1 + 0x1a88) + *(long *)(param_1 + 0x1a80));
  puVar3 = PTR_DAT_04bb43c0;
  uVar13 = (ulong)uVar4;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 == 0) goto LAB_026746c0;
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (((*(uint *)(lVar12 + 0x1d8) <= uVar5) ||
      (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) || (0x27 < uVar4))
  goto LAB_026746c0;
  lVar12 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar12 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar12 + 0x98) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar12 + 0x98), puVar6 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar6)();
    uVar5 = uVar5 ^ 1;
  }
  lVar14 = *(long *)(lVar12 + 0x80) + *(long *)(lVar12 + 0x78);
  uVar11 = *(uint *)(lVar14 + 0x158);
  if (0x13 < uVar11) {
    uVar11 = 0x14;
  }
  uVar2 = uVar4 - uVar11;
  if (uVar4 < uVar11) {
    psVar16 = (short *)(lVar14 + uVar13 * 8 + 0xb8);
    sVar1 = *psVar16;
LAB_02674580:
    psVar15 = psVar16;
    if (sVar1 != -2) {
      lVar14 = *(long *)puVar3;
      uVar4 = FUN_0277d6c4(psVar16);
      if (*(long *)puVar3 == 0) goto LAB_026745e0;
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      psVar15 = (short *)PTR_DAT_04bb37e0;
      if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        psVar15 = psVar16;
      }
    }
  }
  else {
    if (-1 < (int)uVar2) {
      uVar4 = *(uint *)(lVar14 + 0xa0);
      if (0x13 < uVar4) {
        uVar4 = 0x14;
      }
      if (uVar2 < uVar4) {
        psVar16 = (short *)(lVar14 + (ulong)uVar2 * 8);
        sVar1 = *psVar16;
        goto LAB_02674580;
      }
    }
LAB_026745e0:
    psVar15 = &DAT_05586008;
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar12 + 0x98) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar12 + 0x98) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  lVar12 = *(long *)(param_1 + 0x1aa0);
  if (lVar12 == 0) {
    FUN_02816c30(*(long *)(param_1 + 0x1a88) + *(long *)(param_1 + 0x1a80),psVar15,uVar13,0);
    goto LAB_026746c0;
  }
  if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
    uVar9 = 0;
LAB_02674658:
    plVar10 = *(long **)(lVar12 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_68 = *(undefined8 *)(param_1 + 0x1a80);
      uStack_60 = *(undefined8 *)(param_1 + 0x1a88);
      local_58 = 0x8b8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_68);
    }
  }
  else {
    uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
    lVar12 = *(long *)(param_1 + 0x1aa0);
    uVar9 = uVar9 & 0xffffffff;
    if (lVar12 != 0) goto LAB_02674658;
  }
  FUN_02816c30(*(long *)(param_1 + 0x1a88) + *(long *)(param_1 + 0x1a80),psVar15,uVar13,0);
  if ((((uVar9 & 1) != 0) && (*(long *)(param_1 + 0x1aa0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x1aa0) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_026746c0:
  if ((((uVar7 & 1) != 0) && (*(long *)(param_1 + 0x1aa0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x1aa0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


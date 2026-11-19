
undefined8 FUN_03bea8f8(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  
  puVar4 = PTR_DAT_04bb38c8;
  puVar3 = PTR_DAT_04bb38c0;
  lVar15 = *(long *)(*(long *)(param_1 + 0x10) + 0x28);
  uVar8 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x18);
  uVar11 = *(ulong *)PTR_DAT_04bb38c8 | uVar8;
  uVar9 = uVar11 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar8) {
    uVar9 = uVar11;
  }
  lVar10 = *(long *)(*(long *)(lVar15 + 0x30) + 0x18);
  plVar7 = (long *)(lVar10 + 0x18);
  plVar2 = plVar7 + *(uint *)(lVar10 + 0x10);
  if (1 < *(uint *)(lVar10 + 0x10)) {
    plVar2 = plVar7;
  }
  if (*plVar2 == 0) {
LAB_03bea9b8:
    puVar14 = (uint *)0x0;
  }
  else {
    DataMemoryBarrier(2,1);
    if (*(char *)(*plVar2 + 0xb0) == '\0') goto LAB_03bea9b8;
    DataMemoryBarrier(2,1);
    uVar1 = *(int *)(uVar9 + 4) + param_2;
    if ((int)uVar1 < 0) goto LAB_03bea9b8;
    plVar2 = plVar7 + *(uint *)(lVar10 + 0x10);
    if (1 < *(uint *)(lVar10 + 0x10)) {
      plVar2 = plVar7;
    }
    if (*(int *)(*(long *)(*plVar2 + 8) + 8) <= (int)uVar1) goto LAB_03bea9b8;
    puVar14 = (uint *)(*(long *)(*plVar2 + 0x28) + (ulong)uVar1 * 0x20);
  }
  puVar16 = *(uint **)(param_1 + 8);
  uVar5 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x30) + 0x18) + 0x10))();
  if ((*(ushort *)((long)puVar16 + 6) & 1) == 0) {
LAB_03beaa40:
    ppuVar6 = &PTR_PTR_04c4bf38;
  }
  else {
    uVar8 = *(ulong *)puVar4;
    puVar12 = (uint *)(uVar8 | puVar16[6]);
    uVar9 = *(ulong *)puVar3;
    puVar13 = puVar12 + 0x40000000;
    if (uVar9 <= puVar16[6]) {
      puVar13 = puVar12;
    }
    if (puVar13 == (uint *)0x0) goto LAB_03beaa40;
    if (4 < *puVar13) {
      uVar8 = uVar8 | *puVar16;
      uVar11 = uVar8 + 0x100000000;
      if (uVar9 <= *puVar16) {
        uVar11 = uVar8;
      }
      FUN_03be8cd4(uVar5,"[%s] invalid container type(=%d)",uVar11);
      goto LAB_03beaa40;
    }
    ppuVar6 = (undefined **)(&PTR_PTR_04b7bcf8)[(int)*puVar13];
  }
  (**(code **)(*ppuVar6 + 0x18))();
  uVar5 = (**(code **)(**(long **)(*(long *)(lVar15 + 0x30) + 0x18) + 0x10))();
  if ((*(ushort *)((long)puVar14 + 6) & 1) != 0) {
    uVar8 = *(ulong *)puVar4;
    puVar13 = (uint *)(uVar8 | puVar14[6]);
    uVar9 = *(ulong *)puVar3;
    puVar16 = puVar13 + 0x40000000;
    if (uVar9 <= puVar14[6]) {
      puVar16 = puVar13;
    }
    if (puVar16 != (uint *)0x0) {
      if (*puVar16 < 5) {
        ppuVar6 = (undefined **)(&PTR_PTR_04b7bcf8)[(int)*puVar16];
        goto LAB_03beaadc;
      }
      uVar8 = uVar8 | *puVar14;
      uVar11 = uVar8 + 0x100000000;
      if (uVar9 <= *puVar14) {
        uVar11 = uVar8;
      }
      FUN_03be8cd4(uVar5,"[%s] invalid container type(=%d)",uVar11);
    }
  }
  ppuVar6 = &PTR_PTR_04c4bf38;
LAB_03beaadc:
  (**(code **)(*ppuVar6 + 0x18))();
  plVar7 = (long *)FUN_03be5c64(*(undefined8 *)(param_1 + 0x10),puVar14);
  uVar5 = 0;
  if (plVar7 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar7 + 0x20))();
    if ((uVar9 & 1) == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      uVar5 = 0;
    }
    else {
      *(long **)(param_1 + 0x18) = plVar7;
      uVar5 = 1;
    }
  }
  return uVar5;
}


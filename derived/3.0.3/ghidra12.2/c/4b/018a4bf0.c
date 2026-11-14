
undefined8 FUN_018a4bf0(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int local_64;
  undefined *local_60;
  undefined2 local_58;
  
  puVar2 = PTR_DAT_04bb27f8;
  lVar12 = *(long *)PTR_DAT_04bb47e0;
  if (lVar12 == 0) {
    return 0;
  }
  local_60 = PTR_DAT_04bb7648 + 0x10;
  local_58 = **(undefined2 **)PTR_DAT_04bb27f8;
  lVar6 = FUN_03775a30(&local_60);
  if (lVar6 == 0) {
    uVar14 = 0;
  }
  else {
    if (*(long **)(lVar6 + 0x108) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar6 + 0x108);
      uVar8 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar7)();
      }
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,1);
    uVar1 = *(ushort *)(*(long *)(lVar6 + 0xf0) + *(long *)(lVar6 + 0xe8));
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x108) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x108) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if ((uVar1 & 2) != 0) {
      return 0;
    }
    uVar14 = 0xc;
  }
  puVar5 = PTR_DAT_04bc3a48;
  puVar4 = PTR_DAT_04bc1530;
  lVar10 = *(long *)puVar2;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) && ((*(byte *)(lVar10 + 0x1a71) >> 2 & 1) == 0))
     || ((*(long *)PTR_DAT_04bc1530 == 0 ||
         (lVar16 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar16 == 0)))) {
LAB_018a4d5c:
    uVar8 = (ulong)*(ushort *)(lVar10 + 2);
  }
  else {
    if ((*(long **)(lVar16 + 0x1790) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar16 + 0x1790), puVar7 == (undefined8 *)0x0)) {
      lVar10 = *(long *)(lVar16 + 0x1778) + *(long *)(lVar16 + 6000);
      goto LAB_018a4d5c;
    }
    uVar9 = (**(code **)*puVar7)();
    uVar8 = (ulong)*(ushort *)(*(long *)(lVar16 + 0x1778) + *(long *)(lVar16 + 6000) + 2);
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x1790) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar16 + 0x1790) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  puVar3 = PTR_DAT_04bb37e0;
  uVar15 = (uint)uVar8;
  if (uVar15 < 0x2e && (1L << (uVar8 & 0x3f) & 0x210000004000U) != 0) {
    if (uVar15 == 0xe) {
      local_64 = 2;
    }
    else if (uVar15 == 0x2d) {
      local_64 = 1;
    }
    else {
      local_64 = 0;
    }
    lVar10 = *(long *)puVar2;
    if ((((*(ushort **)puVar5 == (ushort *)0x0) || ((**(ushort **)puVar5 & 1) == 0)) &&
        ((*(byte *)(lVar10 + 0x1a71) >> 2 & 1) == 0)) ||
       ((*(long *)puVar4 == 0 || (lVar16 = *(long *)(*(long *)puVar4 + 8), lVar16 == 0)))) {
      iVar13 = *(int *)(lVar10 + 4);
    }
    else if ((*(long **)(lVar16 + 0x1790) == (long *)0x0) ||
            (puVar7 = (undefined8 *)**(long **)(lVar16 + 0x1790), puVar7 == (undefined8 *)0x0)) {
      iVar13 = (int)*(char *)(*(long *)(lVar16 + 0x1778) + *(long *)(lVar16 + 6000) + 4);
    }
    else {
      uVar8 = (**(code **)*puVar7)();
      iVar13 = (int)*(char *)(*(long *)(lVar16 + 0x1778) + *(long *)(lVar16 + 6000) + 4);
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar16 + 0x1790) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar16 + 0x1790) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
    }
    puVar2 = PTR_DAT_04bb37e0;
    local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar13);
    if (local_64 == 2) {
      if (iVar13 == 2) {
        puVar11 = &DAT_049d0440;
        goto LAB_018a4ec0;
      }
    }
    else if ((local_64 == 1) && ((iVar13 == 0 || (iVar13 == 1)))) {
      puVar11 = &DAT_049d0430;
LAB_018a4ec0:
      uVar15 = *puVar11;
      uVar8 = (ulong)uVar15;
      if (0 < (int)uVar15) {
        lVar6 = *(long *)(puVar11 + 2);
        uVar9 = 0;
        do {
          local_60 = (undefined *)(ulong)(ushort)*(undefined4 *)(lVar6 + uVar9 * 4);
          FUN_0277d4ac(&local_60);
          FUN_01952064(lVar12,uVar9 & 0xffffffff,&local_60);
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
      puVar2 = PTR_DAT_04bb37e0;
      if ((int)uVar15 < (int)uVar14) {
        do {
          FUN_01952064(lVar12,uVar8,puVar2);
          uVar15 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar15;
        } while (uVar14 != uVar15);
      }
      return 1;
    }
    if (lVar6 != 0) {
      uVar15 = 0;
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      do {
        FUN_01952064(lVar12,uVar15,puVar2);
        uVar15 = uVar15 + 1;
      } while (uVar14 != uVar15);
    }
  }
  else if (lVar6 != 0) {
    uVar15 = 0;
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    do {
      FUN_01952064(lVar12,uVar15,puVar3);
      uVar15 = uVar15 + 1;
    } while (uVar14 != uVar15);
  }
  return 0;
}


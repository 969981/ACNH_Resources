
undefined8 FUN_01dd9ec4(long param_1,byte param_2,byte param_3)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  undefined *local_78;
  char *pcStack_70;
  byte local_68 [4];
  byte local_64 [4];
  
  *(undefined1 *)(param_1 + 0x97) = 1;
  if (*(int *)(param_1 + 0x108) != 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_01dd9f54:
    if (*pbVar12 < 8) goto LAB_01dd9fcc;
LAB_01dd9f60:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01dd9fc4:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_01dd9fcc;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar14 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar12 = (byte *)(lVar14 + 0x471);
      }
    }
    local_64[0] = *pbVar12;
    if (7 < local_64[0]) goto LAB_01dd9fc4;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar12) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dd9f54;
      }
      goto LAB_01dd9f60;
    }
LAB_01dd9fcc:
    local_64[0] = *pbVar12;
    if (7 < local_64[0]) {
      return 0;
    }
  }
  bVar4 = local_64[0];
  iVar5 = FUN_0252d29c();
  if (iVar5 == -1) {
    return 0;
  }
  local_68[0] = bVar4;
  lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_68,1);
  puVar1 = PTR_DAT_04bb46b0;
  if (lVar14 == 0) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return 0;
  }
  lVar6 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
  if (lVar6 == 0) {
    return 0;
  }
  *(byte *)(param_1 + 0x58) = bVar4;
  *(int *)(param_1 + 0x5c) = iVar5;
  lVar13 = lVar14 + 0x194b0;
  if (*(long *)(lVar14 + 0x194b8) == 0) {
    lVar13 = *(long *)(*(long *)puVar1 + 0x20);
  }
  if ((*(long **)(lVar13 + 0x2acd8) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar13 + 0x2acd8), puVar7 == (undefined8 *)0x0)) {
    *(undefined4 *)(param_1 + 0x60) =
         *(undefined4 *)(*(long *)(lVar13 + 0x2acc0) + *(long *)(lVar13 + 0x2acb8));
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    *(undefined4 *)(param_1 + 0x60) =
         *(undefined4 *)(*(long *)(lVar13 + 0x2acc0) + *(long *)(lVar13 + 0x2acb8));
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0x2acd8) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x2acd8) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  if ((*(long **)(lVar6 + 0x27f5c8) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x27f5c8), puVar7 == (undefined8 *)0x0)) {
    *(undefined4 *)(param_1 + 100) =
         *(undefined4 *)(*(long *)(lVar6 + 0x27f5b0) + *(long *)(lVar6 + 0x27f5a8));
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    *(undefined4 *)(param_1 + 100) =
         *(undefined4 *)(*(long *)(lVar6 + 0x27f5b0) + *(long *)(lVar6 + 0x27f5a8));
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x27f5c8) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x27f5c8) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  plVar15 = *(long **)(*(long *)PTR_DAT_04bb47c8 + 8);
  lVar14 = *(long *)PTR_DAT_04bb2698;
  if (lVar14 == 0) {
    pvVar10 = calloc(1,0x230f0);
    *(void **)(param_1 + 8) = pvVar10;
LAB_01dda1d0:
    pvVar10 = malloc(0x1182f0);
  }
  else {
    plVar9 = plVar15;
    if (plVar15 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar14 + 8);
      if (lVar6 != 0) {
        plVar9 = (long *)(lVar6 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) goto LAB_01dda178;
      lVar14 = *(long *)puVar1;
      memset((void *)0x0,0,0x230f0);
      *(undefined8 *)(param_1 + 8) = 0;
      if (lVar14 == 0) goto LAB_01dda1d0;
LAB_01dda1fc:
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar7 = (undefined8 *)(lVar14 + 8);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar9 = (long *)*puVar7;
    }
    else {
LAB_01dda178:
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x230f0,8);
      lVar14 = *(long *)puVar1;
      memset(pvVar10,0,0x230f0);
      *(void **)(param_1 + 8) = pvVar10;
      if (lVar14 == 0) goto LAB_01dda1d0;
      plVar9 = plVar15;
      if (plVar15 == (long *)0x0) goto LAB_01dda1fc;
    }
    pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,&LAB_001182f0,8);
  }
  memset(pvVar10,0,0x1182f0);
  *(void **)(param_1 + 0x10) = pvVar10;
  uVar8 = FUN_01d19420(*(undefined8 *)(param_1 + 8),local_64);
  if (((uVar8 & 1) == 0) ||
     (uVar8 = FUN_01d19de0(*(undefined8 *)(param_1 + 0x10)), (uVar8 & 1) == 0)) {
LAB_01dda36c:
    FUN_01dda3a0(param_1);
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 != 0) {
    lVar14 = *(long *)(param_1 + 0x50);
    uVar16 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      pcStack_70 = "NetProfileWorkHeap";
      local_78 = puVar1;
      uVar11 = FUN_038c6d48(0x200000,&local_78,plVar15,8,1,0);
      lVar6 = lVar14 + ((long)((ulong)uVar16 << 0x20) >> 0x1c);
      *(undefined8 *)(*(long *)(lVar6 + 8) + 8) = uVar11;
      lVar6 = *(long *)(lVar6 + 8);
      if (*(long *)(lVar6 + 8) == 0) goto LAB_01dda36c;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      uVar16 = uVar16 + 1;
    } while (uVar3 != uVar16);
  }
  lVar14 = *(long *)PTR_DAT_04bb36f0;
  uVar3 = *(uint *)(&LAB_001182e0 + *(long *)(param_1 + 0x10));
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
  puVar1 = local_78;
  *(byte *)(param_1 + 0x95) = (param_2 ^ 0xff) & 1;
  *(int *)(param_1 + 0x68) = ~(-1 << (ulong)(uVar3 & 0x1f));
  local_78._0_4_ = 9;
  if (*(uint *)(lVar14 + 0x20) < 10) {
    local_78._0_4_ = 0;
  }
  *(byte *)(*(long *)(lVar14 + 0x28) + (long)(int)local_78 * 0x38 + 0x30) = param_2 & 1;
  *(byte *)(param_1 + 0x94) = param_3 & 1;
  local_78 = puVar1;
  FUN_03ebb160(param_1 + 0x100,1);
  return 1;
}


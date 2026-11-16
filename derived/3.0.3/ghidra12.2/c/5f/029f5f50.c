
undefined8 FUN_029f5f50(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined2 *puVar14;
  long lVar15;
  
  puVar4 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  if (lVar15 == 0) {
    pvVar8 = malloc(0x1910);
    if (pvVar8 == (void *)0x0) goto LAB_029f601c;
LAB_029f5fc4:
    puVar11 = (undefined2 *)((long)pvVar8 + 0x10);
    uVar9 = 200;
    *(undefined8 *)((long)pvVar8 + 8) = 200;
    puVar14 = puVar11;
    do {
      *(undefined8 *)(puVar14 + 0xc) = 0;
      *(undefined8 *)(puVar14 + 8) = 0;
      *puVar14 = 0;
      *(undefined1 *)(puVar14 + 1) = 0;
      puVar14[0x10] = 0;
      *(undefined1 *)(puVar14 + 0x11) = 0;
      *(undefined8 *)(puVar14 + 0x1c) = 0;
      *(undefined8 *)(puVar14 + 0x18) = 0;
      puVar14 = puVar14 + 0x20;
    } while (puVar14 != (undefined2 *)((long)pvVar8 + 0x1910));
    *(undefined4 *)(param_1 + 0x40) = 200;
    *(undefined2 **)(param_1 + 0x48) = puVar11;
LAB_029f6028:
    uVar12 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x60);
      iVar13 = *(int *)(param_1 + 0x58);
      if (iVar10 < iVar13) {
        *(int *)(param_1 + 0x60) = iVar10 + 1;
        iVar10 = *(int *)(param_1 + 0x5c) + iVar10;
        iVar2 = 0;
        if (iVar13 <= iVar10) {
          iVar2 = iVar13;
        }
        *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar10 - iVar2) * 8) =
             (long)puVar11 + ((long)((ulong)uVar12 << 0x20) >> 0x1b);
      }
      uVar12 = uVar12 + 1;
    } while (uVar9 != uVar12);
  }
  else {
    plVar6 = (long *)*param_2;
    if (plVar6 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_029f601c;
    }
    pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1910,0x10);
    if (pvVar8 != (void *)0x0) goto LAB_029f5fc4;
LAB_029f601c:
    uVar9 = *(uint *)(param_1 + 0x40);
    if (uVar9 != 0) {
      puVar11 = *(undefined2 **)(param_1 + 0x48);
      goto LAB_029f6028;
    }
  }
  puVar5 = PTR_DAT_04bc41c0;
  lVar15 = *(long *)puVar4;
  *(undefined4 *)(param_1 + 0x19ac) = 0x18;
  *(long *)puVar5 = param_1;
  if (lVar15 == 0) {
    pvVar8 = malloc(0x2590);
    if (pvVar8 == (void *)0x0) goto LAB_029f6144;
LAB_029f60e8:
    puVar11 = (undefined2 *)((long)pvVar8 + 0x10);
    iVar10 = 200;
    *(undefined8 *)((long)pvVar8 + 8) = 200;
    puVar14 = puVar11;
    do {
      *puVar14 = 0;
      *(undefined1 *)(puVar14 + 1) = 0;
      puVar14[0x18] = 0;
      *(undefined1 *)(puVar14 + 0x19) = 0;
      *(undefined8 *)(puVar14 + 8) = 0;
      *(undefined8 *)(puVar14 + 0xc) = 0;
      *(undefined8 *)(puVar14 + 0x10) = 0;
      *(undefined8 *)(puVar14 + 0x14) = 0;
      *(undefined8 *)(puVar14 + 0x20) = 0;
      *(undefined8 *)(puVar14 + 0x24) = 0;
      *(undefined8 *)(puVar14 + 0x28) = 0;
      *(undefined8 *)(puVar14 + 0x2c) = 0;
      puVar14 = puVar14 + 0x30;
    } while (puVar14 != (undefined2 *)((long)pvVar8 + 0x2590));
    *(undefined4 *)(param_1 + 0x19b0) = 200;
    *(undefined2 **)(param_1 + 0x19b8) = puVar11;
  }
  else {
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar15 + 8);
      if (lVar7 != 0) {
        param_2 = (long *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) goto LAB_029f6144;
    }
    pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x2590,0x10);
    if (pvVar8 != (void *)0x0) goto LAB_029f60e8;
LAB_029f6144:
    iVar10 = *(int *)(param_1 + 0x19b0);
    if (iVar10 == 0) goto LAB_029f61ac;
    puVar11 = *(undefined2 **)(param_1 + 0x19b8);
  }
  iVar13 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x19d0);
    iVar3 = *(int *)(param_1 + 0x19c8);
    if (iVar2 < iVar3) {
      *(int *)(param_1 + 0x19d0) = iVar2 + 1;
      iVar2 = *(int *)(param_1 + 0x19cc) + iVar2;
      iVar1 = 0;
      if (iVar3 <= iVar2) {
        iVar1 = iVar3;
      }
      *(undefined2 **)(*(long *)(param_1 + 0x19c0) + (long)(iVar2 - iVar1) * 8) =
           puVar11 + (long)iVar13 * 0x18;
    }
    iVar13 = iVar13 + 1;
  } while (iVar10 != iVar13);
LAB_029f61ac:
  puVar4 = PTR_DAT_04bc41b8;
  *(undefined4 *)(param_1 + 0x331c) = 0x28;
  *(long *)puVar4 = param_1;
  return 1;
}


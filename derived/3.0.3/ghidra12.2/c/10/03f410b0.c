
undefined8 FUN_03f410b0(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  ulong __size;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  
  puVar4 = PTR_DAT_04bb2698;
  uVar10 = *param_2;
  uVar13 = (ulong)uVar10;
  if ((int)uVar10 < 1) {
    return 1;
  }
  __size = uVar13 << 10 | 8;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar7 = malloc(__size);
joined_r0x03f41154:
    if (puVar7 != (ulong *)0x0) {
      *puVar7 = uVar13;
      lVar11 = uVar13 << 10;
      puVar12 = puVar7 + 1;
      do {
        FUN_03f3d87c(puVar12);
        puVar12 = puVar12 + 0x80;
        lVar11 = lVar11 + -0x400;
      } while (lVar11 != 0);
      *(uint *)(param_1 + 8) = uVar10;
      *(ulong **)(param_1 + 0x10) = puVar7 + 1;
    }
  }
  else {
    plVar5 = *(long **)(param_2 + 2);
    if (plVar5 != (long *)0x0) {
LAB_03f41128:
      puVar7 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
      goto joined_r0x03f41154;
    }
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar11 + 8);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 != (long *)0x0) goto LAB_03f41128;
  }
  uVar10 = *param_2;
  if ((int)uVar10 < 1) {
    return 1;
  }
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    pvVar8 = malloc((ulong)uVar10 << 3);
  }
  else {
    plVar5 = *(long **)(param_2 + 2);
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_03f411f0;
    }
    pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar10 << 3,8);
  }
  if (pvVar8 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar8;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(uint *)(param_1 + 0x20) = uVar10;
  }
LAB_03f411f0:
  uVar10 = *param_2;
  if ((0 < (int)uVar10) && (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20))) {
    uVar9 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x28);
      iVar3 = *(int *)(param_1 + 0x20);
      if (iVar2 < iVar3) {
        uVar10 = uVar9;
        if (*(uint *)(param_1 + 8) <= uVar9) {
          uVar10 = 0;
        }
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        iVar2 = *(int *)(param_1 + 0x24) + iVar2;
        iVar1 = 0;
        if (iVar3 <= iVar2) {
          iVar1 = iVar3;
        }
        *(ulong *)(*(long *)(param_1 + 0x18) + (long)(iVar2 - iVar1) * 8) =
             *(long *)(param_1 + 0x10) + (ulong)uVar10 * 0x400;
        uVar10 = *param_2;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar10);
  }
  return 1;
}


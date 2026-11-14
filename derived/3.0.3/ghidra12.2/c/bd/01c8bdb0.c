
void FUN_01c8bdb0(undefined8 *param_1,undefined1 param_2,byte param_3)

{
  undefined8 *puVar1;
  int iVar2;
  size_t __size;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong __size_00;
  long lVar12;
  int iVar13;
  
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &DAT_04a444e0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  iVar2 = (uint)param_3 << 1;
  __size_00 = (ulong)param_3 << 1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  param_1[10] = 0;
  if (param_3 != 0) {
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      pvVar7 = malloc((ulong)param_3 << 4);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_01c8be88;
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(ulong)param_3 << 4,8);
    }
    if (pvVar7 != (void *)0x0) {
      param_1[3] = pvVar7;
      *(undefined4 *)(param_1 + 2) = 0;
      *(int *)((long)param_1 + 0x14) = iVar2;
    }
  }
LAB_01c8be88:
  if (0 < *(int *)((long)param_1 + 0x14)) {
    iVar13 = 0;
    do {
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
        pvVar7 = malloc(0x28);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        puVar1 = (undefined8 *)(lVar12 + 8);
        if (lVar5 != 0) {
          puVar1 = (undefined8 *)(lVar5 + 0xa8);
        }
        pvVar7 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x28,8);
      }
      FUN_01c86164(pvVar7,0,8);
      iVar9 = *(int *)((long)param_1 + 0x14);
      if (*(int *)(param_1 + 2) < iVar9) {
        *(void **)(param_1[3] + (long)*(int *)(param_1 + 2) * 8) = pvVar7;
        iVar9 = *(int *)((long)param_1 + 0x14);
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar9);
  }
  if (param_3 == 0) {
LAB_01c8bf98:
    __size_00 = (ulong)*(uint *)(param_1 + 7);
    if ((int)*(uint *)(param_1 + 7) < 1) goto LAB_01c8c014;
  }
  else {
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      pvVar7 = malloc(__size_00);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_01c8bf98;
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size_00,8);
    }
    if (pvVar7 == (void *)0x0) goto LAB_01c8bf98;
    *(int *)(param_1 + 7) = iVar2;
    param_1[8] = pvVar7;
  }
  uVar10 = __size_00 & 3;
  if (__size_00 - 1 < 3) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    do {
      *(undefined1 *)(param_1[8] + uVar11) = 0;
      *(undefined1 *)(param_1[8] + uVar11 + 1) = 0;
      *(undefined1 *)(param_1[8] + uVar11 + 2) = 0;
      lVar12 = param_1[8] + uVar11;
      uVar11 = uVar11 + 4;
      *(undefined1 *)(lVar12 + 3) = 0;
    } while ((__size_00 & 0xfffffffc) != uVar11);
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)(param_1[8] + uVar11) = 0;
    uVar11 = uVar11 + 1;
  }
LAB_01c8c014:
  if (param_3 != 0) {
    lVar12 = *(long *)puVar3;
    __size = (ulong)param_3 << 4;
    if (lVar12 == 0) {
      pvVar7 = malloc(__size);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
    if (pvVar7 != (void *)0x0) {
      lVar12 = 0;
      do {
        uVar8 = nn::os::GetSystemTick();
        *(undefined8 *)((long)pvVar7 + lVar12) = uVar8;
        lVar12 = lVar12 + 8;
      } while ((ulong)param_3 * 0x10 != lVar12);
      *(int *)(param_1 + 9) = iVar2;
      param_1[10] = pvVar7;
    }
  }
  return;
}


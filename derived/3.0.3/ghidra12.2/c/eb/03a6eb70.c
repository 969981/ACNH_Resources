
void FUN_03a6eb70(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  *(undefined4 *)(param_1 + 0x1098) = param_3;
  *(undefined4 *)(param_1 + 0x109c) = param_4;
  FUN_03a6af30(param_1 + 0x410,param_2,1,param_5);
  puVar4 = PTR_DAT_04bb2698;
  iVar3 = *(int *)(param_1 + 0x1098);
  if (0 < iVar3) {
    lVar12 = *(long *)PTR_DAT_04bb2698;
    if (lVar12 == 0) {
      pvVar7 = malloc((long)iVar3 << 3);
joined_r0x03a6ed0c:
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_1 + 0x1080) = pvVar7;
        *(undefined4 *)(param_1 + 0x1078) = 0;
        *(int *)(param_1 + 0x107c) = iVar3;
      }
    }
    else {
      plVar6 = param_5;
      if (param_5 != (long *)0x0) {
LAB_03a6ebfc:
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(long)iVar3 << 3,8);
        goto joined_r0x03a6ed0c;
      }
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_03a6ebfc;
    }
    iVar3 = *(int *)(param_1 + 0x1098);
    if (0 < iVar3) {
      lVar12 = *(long *)puVar4;
      if (lVar12 == 0) {
        pvVar7 = malloc((long)iVar3 << 3);
      }
      else {
        plVar6 = param_5;
        if (param_5 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar6 = (long *)(lVar12 + 8);
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar5 + 0xa8);
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_03a6ec94;
        }
        pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,(long)iVar3 << 3,8);
      }
      if (pvVar7 != (void *)0x0) {
        *(void **)(param_1 + 0x1448) = pvVar7;
        *(undefined4 *)(param_1 + 0x1440) = 0;
        *(int *)(param_1 + 0x1444) = iVar3;
      }
    }
  }
LAB_03a6ec94:
  uVar8 = *(uint *)(param_1 + 0x109c);
  uVar11 = (ulong)uVar8;
  if ((int)uVar8 < 1) {
LAB_03a6ed20:
    uVar11 = (ulong)*(uint *)(param_1 + 0x1088);
    if (0 < (int)*(uint *)(param_1 + 0x1088)) goto LAB_03a6ed2c;
  }
  else {
    lVar12 = *(long *)puVar4;
    if (lVar12 == 0) {
      pvVar7 = malloc(uVar11 << 2);
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar12 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_03a6ed20;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar11 << 2,8);
    }
    if (pvVar7 == (void *)0x0) goto LAB_03a6ed20;
    *(uint *)(param_1 + 0x1088) = uVar8;
    *(void **)(param_1 + 0x1090) = pvVar7;
LAB_03a6ed2c:
    uVar8 = 0;
    do {
      uVar1 = uVar8;
      if ((uint)uVar11 <= uVar8) {
        uVar1 = 0;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x1090) + (ulong)uVar1 * 4) = 0;
      uVar11 = (ulong)*(uint *)(param_1 + 0x1088);
    } while ((int)uVar8 < (int)*(uint *)(param_1 + 0x1088));
  }
  uVar8 = *(uint *)(param_1 + 0x1450);
  uVar11 = (ulong)uVar8;
  if ((int)uVar8 < 1) {
LAB_03a6edcc:
    uVar11 = (ulong)*(uint *)(param_1 + 0x1458);
    if (0 < (int)*(uint *)(param_1 + 0x1458)) goto LAB_03a6edd8;
  }
  else {
    lVar12 = *(long *)puVar4;
    if (lVar12 == 0) {
      pvVar7 = malloc(uVar11 << 3);
    }
    else {
      plVar6 = param_5;
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar12 + 8);
        if (lVar5 != 0) {
          plVar6 = (long *)(lVar5 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) goto LAB_03a6edcc;
      }
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar11 << 3,8);
    }
    if (pvVar7 == (void *)0x0) goto LAB_03a6edcc;
    *(uint *)(param_1 + 0x1458) = uVar8;
    *(void **)(param_1 + 0x1460) = pvVar7;
LAB_03a6edd8:
    uVar9 = uVar11 & 3;
    if (uVar11 - 1 < 3) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        lVar12 = uVar10 * 8;
        uVar10 = uVar10 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x1460) + lVar12) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1460) + lVar12 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1460) + lVar12 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x1460) + lVar12 + 0x18) = 0;
      } while ((uVar11 & 0xfffffffc) != uVar10);
    }
    if (uVar9 != 0) {
      lVar12 = uVar10 << 3;
      do {
        uVar9 = uVar9 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x1460) + lVar12) = 0;
        lVar12 = lVar12 + 8;
      } while (uVar9 != 0);
    }
  }
  uVar8 = *(uint *)(param_1 + 0x1450);
  uVar11 = (ulong)uVar8;
  if (0 < (int)uVar8) {
    lVar12 = *(long *)puVar4;
    if (lVar12 == 0) {
      pvVar7 = malloc(uVar11 << 3);
    }
    else {
      if (param_5 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar2 = (undefined8 *)(lVar12 + 8);
        if (lVar5 != 0) {
          puVar2 = (undefined8 *)(lVar5 + 0xa8);
        }
        param_5 = (long *)*puVar2;
        if (param_5 == (long *)0x0) goto LAB_03a6eed4;
      }
      pvVar7 = (void *)(**(code **)(*param_5 + 0x30))(param_5,uVar11 << 3,8);
    }
    if (pvVar7 != (void *)0x0) {
      *(uint *)(param_1 + 0x1470) = uVar8;
      *(void **)(param_1 + 0x1478) = pvVar7;
      goto LAB_03a6eee0;
    }
  }
LAB_03a6eed4:
  uVar11 = (ulong)*(uint *)(param_1 + 0x1470);
  if ((int)*(uint *)(param_1 + 0x1470) < 1) {
    return;
  }
LAB_03a6eee0:
  uVar9 = uVar11 & 3;
  if (uVar11 - 1 < 3) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar12 = uVar10 * 8;
      uVar10 = uVar10 + 4;
      *(undefined8 *)(*(long *)(param_1 + 0x1478) + lVar12) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x1478) + lVar12 + 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x1478) + lVar12 + 0x10) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x1478) + lVar12 + 0x18) = 0;
    } while ((uVar11 & 0xfffffffc) != uVar10);
  }
  if (uVar9 != 0) {
    lVar12 = uVar10 << 3;
    do {
      uVar9 = uVar9 - 1;
      *(undefined8 *)(*(long *)(param_1 + 0x1478) + lVar12) = 0;
      lVar12 = lVar12 + 8;
    } while (uVar9 != 0);
  }
  return;
}


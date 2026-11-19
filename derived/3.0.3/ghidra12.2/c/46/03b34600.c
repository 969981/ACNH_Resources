
void FUN_03b34600(long param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __size;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb2698;
  __size = (ulong)param_3;
  if ((int)param_3 < 1) {
LAB_03b346a4:
    uVar7 = (ulong)*(uint *)(param_1 + 0x1a0);
    if (0 < (int)*(uint *)(param_1 + 0x1a0)) goto LAB_03b346b0;
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      pvVar5 = malloc(__size);
    }
    else {
      plVar4 = param_2;
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar9 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03b346a4;
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (pvVar5 == (void *)0x0) goto LAB_03b346a4;
    *(uint *)(param_1 + 0x1a0) = param_3;
    *(void **)(param_1 + 0x1a8) = pvVar5;
    uVar7 = __size;
LAB_03b346b0:
    uVar6 = uVar7 & 3;
    if (uVar7 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x1a8) + uVar8) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x1a8) + uVar8 + 1) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x1a8) + uVar8 + 2) = 0;
        lVar9 = *(long *)(param_1 + 0x1a8) + uVar8;
        uVar8 = uVar8 + 4;
        *(undefined1 *)(lVar9 + 3) = 0;
      } while ((uVar7 & 0xfffffffc) != uVar8);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)(*(long *)(param_1 + 0x1a8) + uVar8) = 0;
      uVar8 = uVar8 + 1;
    }
  }
  if ((int)param_3 < 1) {
LAB_03b3479c:
    uVar7 = (ulong)*(uint *)(param_1 + 0x1b0);
    if (0 < (int)*(uint *)(param_1 + 0x1b0)) goto LAB_03b347a8;
  }
  else {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      pvVar5 = malloc(__size);
    }
    else {
      plVar4 = param_2;
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar9 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_03b3479c;
      }
      pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (pvVar5 == (void *)0x0) goto LAB_03b3479c;
    *(uint *)(param_1 + 0x1b0) = param_3;
    *(void **)(param_1 + 0x1b8) = pvVar5;
    uVar7 = __size;
LAB_03b347a8:
    uVar6 = uVar7 & 3;
    if (uVar7 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 0x1b8) + uVar8) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x1b8) + uVar8 + 1) = 0;
        *(undefined1 *)(*(long *)(param_1 + 0x1b8) + uVar8 + 2) = 0;
        lVar9 = *(long *)(param_1 + 0x1b8) + uVar8;
        uVar8 = uVar8 + 4;
        *(undefined1 *)(lVar9 + 3) = 0;
      } while ((uVar7 & 0xfffffffc) != uVar8);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)(*(long *)(param_1 + 0x1b8) + uVar8) = 0;
      uVar8 = uVar8 + 1;
    }
  }
  if (0 < (int)param_3) {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      pvVar5 = malloc((ulong)param_3 << 3);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar9 + 8);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        if (param_2 == (long *)0x0) goto LAB_03b3489c;
      }
      pvVar5 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(ulong)param_3 << 3,8);
    }
    if (pvVar5 != (void *)0x0) {
      *(uint *)(param_1 + 0x1c0) = param_3;
      *(void **)(param_1 + 0x1c8) = pvVar5;
      goto LAB_03b348a8;
    }
  }
LAB_03b3489c:
  __size = (ulong)*(uint *)(param_1 + 0x1c0);
  if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
    return;
  }
LAB_03b348a8:
  if (__size == 1) {
    uVar7 = 0;
  }
  else {
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 2;
      *(undefined8 *)(*(long *)(param_1 + 0x1c8) + lVar9) = 0;
      lVar3 = *(long *)(param_1 + 0x1c8) + lVar9;
      lVar9 = lVar9 + 0x10;
      *(undefined8 *)(lVar3 + 8) = 0;
    } while ((__size & 0xfffffffe) != uVar7);
  }
  if ((__size & 1) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x1c8) + uVar7 * 8) = 0;
  }
  return;
}


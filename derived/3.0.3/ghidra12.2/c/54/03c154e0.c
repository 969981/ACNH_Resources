
void FUN_03c154e0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  FUN_03c11314(param_1,param_2,"CtrlMgr");
  *param_1 = &PTR_LAB_04b7d610;
  param_1[0x45] = &PTR_LAB_04b7d6e8;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  puVar2 = PTR_DAT_04bb3350;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (lVar10 == 0) {
    pvVar5 = malloc(0x48);
    if (pvVar5 == (void *)0x0) goto LAB_03c155f4;
LAB_03c155d8:
    uVar6 = 9;
    param_1[0x67] = pvVar5;
    *(undefined4 *)(param_1 + 0x66) = 9;
LAB_03c15600:
    uVar9 = (ulong)uVar6;
    uVar7 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar10 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(param_1[0x67] + lVar10) = 0;
        *(undefined8 *)(param_1[0x67] + lVar10 + 8) = 0;
        *(undefined8 *)(param_1[0x67] + lVar10 + 0x10) = 0;
        *(undefined8 *)(param_1[0x67] + lVar10 + 0x18) = 0;
      } while ((uVar9 & 0xfffffffc) != uVar8);
    }
    if ((uVar6 & 3) != 0) {
      lVar10 = uVar8 << 3;
      do {
        uVar7 = uVar7 - 1;
        *(undefined8 *)(param_1[0x67] + lVar10) = 0;
        lVar10 = lVar10 + 8;
      } while (uVar7 != 0);
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if ((plVar4 != (long *)0x0) &&
       (pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x48,8), pvVar5 != (void *)0x0))
    goto LAB_03c155d8;
LAB_03c155f4:
    uVar6 = *(uint *)(param_1 + 0x66);
    if (0 < (int)uVar6) goto LAB_03c15600;
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    pvVar5 = malloc(8);
    if (pvVar5 == (void *)0x0) goto LAB_03c156e4;
LAB_03c156c8:
    uVar6 = 1;
    param_1[0x69] = pvVar5;
    *(undefined4 *)(param_1 + 0x68) = 1;
LAB_03c156f0:
    uVar9 = (ulong)uVar6;
    uVar7 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar10 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(param_1[0x69] + lVar10) = 0;
        *(undefined8 *)(param_1[0x69] + lVar10 + 8) = 0;
        *(undefined8 *)(param_1[0x69] + lVar10 + 0x10) = 0;
        *(undefined8 *)(param_1[0x69] + lVar10 + 0x18) = 0;
      } while ((uVar9 & 0xfffffffc) != uVar8);
    }
    if ((uVar6 & 3) != 0) {
      lVar10 = uVar8 << 3;
      do {
        uVar7 = uVar7 - 1;
        *(undefined8 *)(param_1[0x69] + lVar10) = 0;
        lVar10 = lVar10 + 8;
      } while (uVar7 != 0);
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if ((plVar4 != (long *)0x0) &&
       (pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8), pvVar5 != (void *)0x0))
    goto LAB_03c156c8;
LAB_03c156e4:
    uVar6 = *(uint *)(param_1 + 0x68);
    if (0 < (int)uVar6) goto LAB_03c156f0;
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    pvVar5 = malloc(8);
    if (pvVar5 == (void *)0x0) goto LAB_03c157d4;
LAB_03c157b8:
    uVar6 = 1;
    param_1[0x6b] = pvVar5;
    *(undefined4 *)(param_1 + 0x6a) = 1;
LAB_03c157e0:
    uVar9 = (ulong)uVar6;
    uVar7 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar10 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(param_1[0x6b] + lVar10) = 0;
        *(undefined8 *)(param_1[0x6b] + lVar10 + 8) = 0;
        *(undefined8 *)(param_1[0x6b] + lVar10 + 0x10) = 0;
        *(undefined8 *)(param_1[0x6b] + lVar10 + 0x18) = 0;
      } while ((uVar9 & 0xfffffffc) != uVar8);
    }
    if ((uVar6 & 3) != 0) {
      lVar10 = uVar8 << 3;
      do {
        uVar7 = uVar7 - 1;
        *(undefined8 *)(param_1[0x6b] + lVar10) = 0;
        lVar10 = lVar10 + 8;
      } while (uVar7 != 0);
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if ((plVar4 != (long *)0x0) &&
       (pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8), pvVar5 != (void *)0x0))
    goto LAB_03c157b8;
LAB_03c157d4:
    uVar6 = *(uint *)(param_1 + 0x6a);
    if (0 < (int)uVar6) goto LAB_03c157e0;
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    pvVar5 = malloc(8);
    if (pvVar5 == (void *)0x0) goto LAB_03c158c4;
LAB_03c158a8:
    uVar6 = 1;
    param_1[0x6d] = pvVar5;
    *(undefined4 *)(param_1 + 0x6c) = 1;
LAB_03c158d0:
    uVar9 = (ulong)uVar6;
    uVar7 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar10 = uVar8 * 8;
        uVar8 = uVar8 + 4;
        *(undefined8 *)(param_1[0x6d] + lVar10) = 0;
        *(undefined8 *)(param_1[0x6d] + lVar10 + 8) = 0;
        *(undefined8 *)(param_1[0x6d] + lVar10 + 0x10) = 0;
        *(undefined8 *)(param_1[0x6d] + lVar10 + 0x18) = 0;
      } while ((uVar9 & 0xfffffffc) != uVar8);
    }
    if ((uVar6 & 3) != 0) {
      lVar10 = uVar8 << 3;
      do {
        uVar7 = uVar7 - 1;
        *(undefined8 *)(param_1[0x6d] + lVar10) = 0;
        lVar10 = lVar10 + 8;
      } while (uVar7 != 0);
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if ((plVar4 != (long *)0x0) &&
       (pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8), pvVar5 != (void *)0x0))
    goto LAB_03c158a8;
LAB_03c158c4:
    uVar6 = *(uint *)(param_1 + 0x6c);
    if (0 < (int)uVar6) goto LAB_03c158d0;
  }
  lVar10 = *(long *)puVar1;
  if (lVar10 == 0) {
    pvVar5 = malloc(8);
    if (pvVar5 == (void *)0x0) goto LAB_03c159b4;
LAB_03c15998:
    uVar6 = 1;
    param_1[0x6f] = pvVar5;
    *(undefined4 *)(param_1 + 0x6e) = 1;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if ((plVar4 != (long *)0x0) &&
       (pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,8,8), pvVar5 != (void *)0x0))
    goto LAB_03c15998;
LAB_03c159b4:
    uVar6 = *(uint *)(param_1 + 0x6e);
    if ((int)uVar6 < 1) goto LAB_03c15a44;
  }
  uVar9 = (ulong)uVar6;
  uVar7 = uVar9 & 3;
  if (uVar9 - 1 < 3) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      lVar10 = uVar8 * 8;
      uVar8 = uVar8 + 4;
      *(undefined8 *)(param_1[0x6f] + lVar10) = 0;
      *(undefined8 *)(param_1[0x6f] + lVar10 + 8) = 0;
      *(undefined8 *)(param_1[0x6f] + lVar10 + 0x10) = 0;
      *(undefined8 *)(param_1[0x6f] + lVar10 + 0x18) = 0;
    } while ((uVar9 & 0xfffffffc) != uVar8);
  }
  if ((uVar6 & 3) != 0) {
    lVar10 = uVar8 << 3;
    do {
      uVar7 = uVar7 - 1;
      *(undefined8 *)(param_1[0x6f] + lVar10) = 0;
      lVar10 = lVar10 + 8;
    } while (uVar7 != 0);
  }
LAB_03c15a44:
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  return;
}


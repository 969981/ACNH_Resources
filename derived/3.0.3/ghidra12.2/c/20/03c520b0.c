
void FUN_03c520b0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  FUN_03c11314(param_1,param_2,"FuncForShow");
  *param_1 = &PTR_LAB_04b80f28;
  param_1[0x45] = &PTR_LAB_04b81000;
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
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar5 = malloc(0x18);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,8);
    }
  }
  puVar3 = PTR_DAT_04bd46f8;
  *(undefined4 *)(plVar5 + 1) = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  lVar12 = *(long *)puVar1;
  if (lVar12 == 0) {
    pvVar7 = malloc(0x24);
    if (pvVar7 != (void *)0x0) goto LAB_03c521ec;
LAB_03c52208:
    uVar8 = *(uint *)(plVar5 + 1);
    if ((int)uVar8 < 1) goto LAB_03c52298;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar4 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if ((plVar6 == (long *)0x0) ||
       (pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x24,8), pvVar7 == (void *)0x0))
    goto LAB_03c52208;
LAB_03c521ec:
    uVar8 = 9;
    plVar5[2] = (long)pvVar7;
    *(undefined4 *)(plVar5 + 1) = 9;
  }
  uVar11 = (ulong)uVar8;
  uVar9 = uVar11 & 3;
  if (uVar11 - 1 < 3) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar12 = uVar10 * 4;
      uVar10 = uVar10 + 4;
      *(undefined4 *)(plVar5[2] + lVar12) = 0;
      *(undefined4 *)(plVar5[2] + lVar12 + 4) = 0;
      *(undefined4 *)(plVar5[2] + lVar12 + 8) = 0;
      *(undefined4 *)(plVar5[2] + lVar12 + 0xc) = 0;
    } while ((uVar11 & 0xfffffffc) != uVar10);
  }
  if ((uVar8 & 3) != 0) {
    lVar12 = uVar10 << 2;
    do {
      uVar9 = uVar9 - 1;
      *(undefined4 *)(plVar5[2] + lVar12) = 0;
      lVar12 = lVar12 + 4;
    } while (uVar9 != 0);
  }
LAB_03c52298:
  param_1[0x6d] = plVar5;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((long)param_1 + 0x33c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)((long)param_1 + 0x374) = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0xffffffff00000000;
  return;
}



void FUN_03c0aab0(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_04b7ca80;
  FUN_038e18e4(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  FUN_038e3114(param_1 + 10,0,0x7fff);
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_038e3114(param_1 + 0x14,0,0x7fff);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x20] = param_1 + 0x20;
  param_1[0x21] = param_1 + 0x20;
  plVar1 = param_1 + 0x2f;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x23] = param_1 + 0x23;
  param_1[0x24] = param_1 + 0x23;
  param_1[0x26] = param_1 + 0x26;
  param_1[0x27] = param_1 + 0x26;
  param_1[0x2c] = param_1 + 0x2c;
  param_1[0x2d] = param_1 + 0x2c;
  *(undefined1 *)((long)param_1 + 0x3fdab) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x3fc00;
  param_1[0x29] = param_1 + 0x29;
  param_1[0x2a] = param_1 + 0x29;
  param_1[0x2f] = plVar1;
  param_1[0x30] = plVar1;
  *(undefined1 *)((long)param_1 + 0x1ac) = 0;
  param_1[0x33] = &DAT_04b7caa0;
  param_1[0x34] = (undefined1 *)((long)param_1 + 0x1ac);
  FUN_038e18e4(param_1 + 0x7fb6);
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  iVar8 = 0x200;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  do {
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      plVar7 = malloc(0x60);
    }
    else {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      puVar3 = (undefined8 *)(lVar9 + 8);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x60,8);
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(undefined1 *)((long)plVar7 + 0x24) = 0;
    *(undefined4 *)(plVar7 + 4) = 0x20;
    *(undefined1 *)((long)plVar7 + 0x43) = 0;
    plVar7[0xb] = (long)plVar1;
    plVar7[2] = (long)puVar2;
    plVar7[3] = (long)plVar7 + 0x24;
    plVar7[9] = 0;
    plVar7[10] = 0;
    lVar9 = *plVar1;
    *plVar1 = (long)plVar7;
    *plVar7 = lVar9;
    plVar7[1] = (long)plVar1;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar7;
    }
    iVar8 = iVar8 + -1;
    *(int *)(param_1 + 0x31) = *(int *)(param_1 + 0x31) + 1;
  } while (iVar8 != 0);
  param_1[0x32] = 0;
  return;
}


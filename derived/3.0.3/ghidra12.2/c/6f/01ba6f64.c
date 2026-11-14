
void FUN_01ba6f64(long *param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = (long)param_2;
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar6 = malloc(0x30);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      plVar6 = (long *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_01ba6ff0;
    }
    plVar6 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x30,8);
  }
LAB_01ba6ff0:
  *plVar6 = (long)param_2;
  plVar6[1] = 0;
  lVar9 = *(long *)puVar1;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  param_1[1] = (long)plVar6;
  if (lVar9 == 0) {
    plVar6 = malloc(0x1a8);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar6 = (long *)(lVar4 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_01ba7060;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1a8,8);
  }
LAB_01ba7060:
  *(undefined1 *)((long)plVar6 + 0x5b) = 0;
  *(undefined1 *)((long)plVar6 + 0x1c) = 0;
  *(undefined4 *)(plVar6 + 3) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0;
  plVar6[2] = (long)plVar6 + 0x1c;
  puVar2 = PTR_DAT_04bdf090;
  plVar6[0xe] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  *plVar6 = (long)param_2;
  plVar6[1] = (long)(puVar1 + 0x10);
  plVar6[0x12] = 0;
  *(undefined4 *)(plVar6 + 0x13) = 0;
  plVar6[0x16] = -0x100000000;
  plVar6[0xc] = (long)(puVar2 + 0x10);
  plVar6[0xd] = 0;
  *(undefined1 *)(plVar6 + 0xf) = 0x22;
  plVar6[0x14] = (long)(plVar6 + 0x14);
  plVar6[0x15] = (long)(plVar6 + 0x14);
  plVar6[0x17] = (long)(plVar6 + 0x17);
  plVar6[0x18] = (long)(plVar6 + 0x17);
  *(undefined4 *)(plVar6 + 0x19) = 0;
  *(undefined4 *)((long)plVar6 + 0xcc) = 0xffffffff;
  FUN_038e18e4(plVar6 + 0x1a);
  plVar6[0x28] = 0;
  plVar6[0x29] = 0;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  plVar6[0x24] = 0;
  plVar6[0x25] = 0;
  plVar6[0x22] = 0;
  plVar6[0x23] = 0;
  puVar2 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(plVar6 + 0x2c) = 0;
  *(undefined2 *)(plVar6 + 0x2d) = 0;
  *(undefined1 *)((long)plVar6 + 0x16b) = 0;
  plVar6[0x2a] = (long)puVar1;
  plVar6[0x2b] = (long)puVar2;
  *(undefined4 *)((long)plVar6 + 0xb4) = 0x98;
  *(undefined4 *)((long)plVar6 + 0xcc) = 0xa8;
  puVar1 = PTR_DAT_04bdf0c8 + 0x10;
  *(undefined4 *)((long)plVar6 + 0x17c) = 0;
  plVar6[0x2e] = (long)puVar1;
  *(undefined1 *)(plVar6 + 0x2f) = 1;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  plVar6[0x33] = 0;
  plVar6[0x34] = 0;
  plVar6[0x32] = 0;
  plVar6[0x30] = 0;
  plVar6[0x31] = (long)puVar1;
  param_1[2] = (long)plVar6;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[1] != 0) {
    FUN_01ba7220(plVar6,param_3,param_4);
    puVar7 = (undefined8 *)FUN_03f2d7f0(param_1[2] + 0x170);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if ((puVar7 != (undefined8 *)0x0) &&
       (uVar8 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb2820), (uVar8 & 1) != 0)) {
      FUN_01ba73f0(param_1[1],puVar7[1],*(undefined4 *)(puVar7 + 2));
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}


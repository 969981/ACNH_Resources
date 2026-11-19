
long * FUN_038f01ec(long param_1,long *param_2,uint param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_2 == (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_04bb2698;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_2 = (long *)(lVar3 + 8);
    if (lVar7 != 0) {
      param_2 = (long *)(lVar7 + 0xa8);
    }
    param_2 = (long *)*param_2;
    lVar7 = *(long *)puVar2;
    if (lVar7 == 0) goto LAB_038f02a4;
LAB_038f0224:
    plVar4 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_038f02b0;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x68,8);
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    if (lVar7 != 0) goto LAB_038f0224;
LAB_038f02a4:
    plVar4 = malloc(0x68);
  }
LAB_038f02b0:
  plVar4[4] = 0;
  *plVar4 = (long)&PTR_FUN_04b65930;
  plVar4[1] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)(plVar4 + 0xb) = 0;
  plVar4[0xc] = 0;
  *(undefined4 *)(plVar4 + 5) = param_4;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[6] = (long)(plVar4 + 6);
  plVar4[7] = (long)(plVar4 + 6);
  plVar4[9] = 0;
  plVar4[10] = 0;
  if (param_1 != 0) {
    FUN_038ec660(plVar4,param_1,param_2,param_3 & 1);
    if (plVar4[1] == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      return (long *)0x0;
    }
    goto LAB_038f03fc;
  }
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    plVar6 = malloc(0xd0);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar3 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      plVar6 = (long *)0x0;
      if (plVar5 == (long *)0x0) goto LAB_038f0374;
    }
    plVar6 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xd0,8);
  }
LAB_038f0374:
  plVar6[4] = 0;
  puVar2 = PTR_DAT_04bd0f48;
  puVar1 = (undefined8 *)((long)plVar6 + 0x3c);
  plVar6[6] = (long)puVar1;
  plVar6[2] = 0;
  plVar6[3] = 0;
  *(undefined4 *)(plVar6 + 7) = 0x40;
  *(undefined1 *)((long)plVar6 + 0x7b) = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  plVar6[1] = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  plVar6[0x10] = 0;
  *(undefined4 *)(plVar6 + 0x11) = 0;
  *(undefined1 *)((long)plVar6 + 0x8c) = 0;
  *(undefined4 *)(plVar6 + 0x12) = 0;
  *(undefined4 *)(plVar6 + 0x15) = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  *(undefined4 *)(plVar6 + 0x18) = 0;
  plVar6[0x19] = 0;
  plVar6[5] = (long)(puVar2 + 0x10);
  plVar6[0x13] = (long)(plVar6 + 0x13);
  plVar6[0x14] = (long)(plVar6 + 0x13);
  plVar4[1] = (long)plVar6;
  FUN_038eaaf0(plVar4,param_2);
LAB_038f03fc:
  plVar4[0xc] = (long)param_2;
  return plVar4;
}



long * FUN_00a8079c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (DAT_04da58f8 != (long *)0x0) {
    return DAT_04da58f8;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    plVar5 = malloc(0x80);
  }
  else {
    plVar5 = param_1;
    if (param_1 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar6 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_00a80824;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x80,8);
  }
LAB_00a80824:
  FUN_038c69f0(plVar5 + 0xc,param_1,3);
  puVar3 = PTR_DAT_04bb62a8;
  puVar2 = PTR_DAT_04bb4990;
  DAT_04da58f0 = plVar5 + 0xc;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[1] = 0;
  lVar6 = *(long *)puVar2;
  plVar5[0xc] = (long)&PTR_FUN_0492eae8;
  lVar4 = *(long *)(lVar6 + 0x138);
  plVar1 = (long *)((long)*(int *)(lVar6 + 0x14c) + (long)plVar5);
  *(long **)(lVar6 + 0x138) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = lVar6 + 0x138;
  if (lVar4 != 0) {
    *(long **)(lVar4 + 8) = plVar1;
  }
  *(int *)(lVar6 + 0x148) = *(int *)(lVar6 + 0x148) + 1;
  *plVar5 = (long)&PTR_LAB_0492eb08;
  puVar2 = PTR_DAT_04bd4738;
  plVar5[5] = 0xffffffff;
  plVar5[6] = 0xffffffff;
  *(undefined2 *)(plVar5 + 7) = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  plVar5[9] = 0;
  *(undefined4 *)(plVar5 + 10) = 0;
  plVar5[0xb] = 0;
  DAT_04da58f8 = plVar5;
  plVar5[3] = (long)(puVar2 + 0x10);
  plVar5[4] = 0xffffffff;
  return plVar5;
}


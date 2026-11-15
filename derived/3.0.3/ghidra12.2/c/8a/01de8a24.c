
long * FUN_01de8a24(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_05387118 != (long *)0x0) {
    return DAT_05387118;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0xd0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_01de8aac;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xd0,8);
  }
LAB_01de8aac:
  FUN_038c69f0(plVar3 + 0x16,param_1,3);
  *(undefined2 *)(plVar3 + 4) = 0;
  puVar1 = PTR_DAT_04bd4738;
  DAT_05386da0 = plVar3 + 0x16;
  plVar3[0x16] = (long)&PTR_FUN_04a5bc98;
  plVar3[2] = 0xffffffff;
  plVar3[3] = 0xffffffff;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  *(undefined4 *)((long)plVar3 + 0x4c) = 0;
  *(undefined1 *)(plVar3 + 9) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0xffffffff;
  puVar1 = PTR_DAT_04bb3950 + 0x10;
  plVar3[0x11] = 0;
  *(undefined2 *)(plVar3 + 0x12) = 0;
  *(undefined1 *)((long)plVar3 + 0x96) = 0;
  plVar3[0x13] = 0;
  *(undefined4 *)(plVar3 + 0x14) = 0;
  DAT_05387118 = plVar3;
  plVar3[0xb] = (long)puVar1;
  *(undefined4 *)((long)plVar3 + 0x92) = 0x101;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  return plVar3;
}


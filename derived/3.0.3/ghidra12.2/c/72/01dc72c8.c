
long * FUN_01dc72c8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (DAT_0537f088 != (long *)0x0) {
    return DAT_0537f088;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0xb0);
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
        goto LAB_01dc7350;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xb0,8);
  }
LAB_01dc7350:
  FUN_038c69f0(plVar3 + 0x12,param_1,3);
  puVar1 = PTR_DAT_04bd4738;
  DAT_0537f080 = plVar3 + 0x12;
  *(undefined2 *)(plVar3 + 4) = 0;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[2] = 0xffffffff;
  plVar3[3] = 0xffffffff;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  *(undefined1 *)(plVar3 + 9) = 0;
  *(undefined4 *)(plVar3 + 0xc) = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0xffffffff;
  plVar3[0xd] = (long)&PTR_LAB_04a5b4f8;
  DAT_0537f088 = plVar3;
  plVar3[0x11] = 0;
  plVar3[0x12] = (long)&PTR_FUN_04a5b450;
  return plVar3;
}


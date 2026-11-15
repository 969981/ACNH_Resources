
long * FUN_02237a70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (DAT_05462668 != (long *)0x0) {
    return DAT_05462668;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x48);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_02237af8;
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x48,8);
  }
LAB_02237af8:
  FUN_038c69f0(plVar4 + 5,param_1,3);
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  DAT_05462660 = plVar4 + 5;
  plVar4[4] = 0;
  plVar4[5] = (long)&PTR_FUN_04a784c8;
  *plVar4 = (long)puVar1;
  plVar4[1] = (long)puVar2;
  DAT_05462668 = plVar4;
  plVar4[2] = 0;
  plVar4[3] = (long)puVar2;
  return plVar4;
}


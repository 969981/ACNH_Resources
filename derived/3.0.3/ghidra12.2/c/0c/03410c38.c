
undefined8 * FUN_03410c38(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05751390 != (undefined8 *)0x0) {
    return DAT_05751390;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x50);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_03410cc0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x50,8);
  }
LAB_03410cc0:
  FUN_038c69f0(puVar3 + 6,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  DAT_05751388 = puVar3 + 6;
  *puVar3 = &PTR_LAB_04b29df8;
  puVar3[5] = 0x2000000000;
  puVar3[6] = &PTR_FUN_04b29dd8;
  puVar3[2] = 0;
  DAT_05751390 = puVar3;
  puVar3[3] = puVar3 + 3;
  puVar3[4] = puVar3 + 3;
  return puVar3;
}



undefined8 * FUN_0216fb1c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_053f7f98 != (undefined8 *)0x0) {
    return DAT_053f7f98;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x48);
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
        goto LAB_0216fba4;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x48,8);
  }
LAB_0216fba4:
  FUN_038c69f0(puVar3 + 5,param_1,3);
  DAT_053f7f90 = puVar3 + 5;
  *puVar3 = &PTR_LAB_04a75930;
  *(undefined1 *)(puVar3 + 1) = 0;
  puVar3[2] = &PTR_LAB_04a75950;
  *(undefined1 *)(puVar3 + 3) = 0;
  DAT_053f7f98 = puVar3;
  puVar3[4] = 0;
  puVar3[5] = &PTR_LAB_04a75910;
  return puVar3;
}


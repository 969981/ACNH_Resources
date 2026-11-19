
undefined8 * FUN_038c393c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05ae74c0 != (undefined8 *)0x0) {
    return DAT_05ae74c0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x790);
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
        goto LAB_038c39c4;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x790,8);
  }
LAB_038c39c4:
  FUN_038c69f0(puVar3 + 0xee,param_1,3);
  puVar3[0xea] = 0;
  *(undefined1 *)(puVar3 + 0xeb) = 0;
  DAT_05ae74b8 = puVar3 + 0xee;
  puVar3[0xee] = &PTR_FUN_04b64208;
  *puVar3 = &PTR_LAB_04b64228;
  *(undefined4 *)((long)puVar3 + 0x75c) = 0;
  puVar3[0xec] = 0;
  *(undefined8 *)((long)puVar3 + 0x765) = 0;
  *(undefined4 *)(puVar3 + 0xec) = 0x32000;
  DAT_05ae74c0 = puVar3;
  return puVar3;
}


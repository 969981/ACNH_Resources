
undefined8 * FUN_03c0f76c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aec750 != (undefined8 *)0x0) {
    return DAT_05aec750;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x158);
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
        goto LAB_03c0f7f4;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x158,8);
  }
LAB_03c0f7f4:
  FUN_038c69f0(puVar3 + 0x27,param_1,3);
  puVar3[0x27] = &PTR_FUN_04b7cef0;
  DAT_05aec748 = puVar3 + 0x27;
  *puVar3 = &PTR_FUN_04b7cf10;
  FUN_038e18e4(puVar3 + 1);
  *(undefined4 *)(puVar3 + 9) = 0;
  *(undefined4 *)((long)puVar3 + 0x4c) = 0;
  FUN_038e3114(puVar3 + 10,0,0x7fff);
  *(undefined4 *)(puVar3 + 0x13) = 0;
  FUN_038e3114(puVar3 + 0x14,0,0x7fff);
  *(undefined4 *)(puVar3 + 0x1d) = 0;
  puVar3[0x1e] = 0;
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  DAT_05aec750 = puVar3;
  return puVar3;
}


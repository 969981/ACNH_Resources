
undefined8 * FUN_03bbffd8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aec0b0 != (undefined8 *)0x0) {
    return DAT_05aec0b0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x98);
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
        goto LAB_03bc0060;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x98,8);
  }
LAB_03bc0060:
  FUN_038c69f0(puVar3 + 0xf,param_1,3);
  DAT_05aec0a8 = puVar3 + 0xf;
  puVar3[0xf] = &PTR_FUN_04b7aa98;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[1] = puVar3 + 1;
  puVar3[2] = puVar3 + 1;
  *puVar3 = &PTR_FUN_04b7aab8;
  *(undefined4 *)(puVar3 + 6) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  FUN_038e18e4(puVar3 + 7);
  DAT_05aec0b0 = puVar3;
  return puVar3;
}


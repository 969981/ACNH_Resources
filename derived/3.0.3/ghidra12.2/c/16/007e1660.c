
undefined8 * FUN_007e1660(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04cb32b8 != (undefined8 *)0x0) {
    return DAT_04cb32b8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xe80);
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
        goto LAB_007e16e8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xe80,8);
  }
LAB_007e16e8:
  FUN_038c69f0(puVar3 + 0x1cc,param_1,3);
  puVar3[0x1cc] = &PTR_FUN_04916d50;
  DAT_04cb32b0 = puVar3 + 0x1cc;
  *puVar3 = &PTR_LAB_04916d70;
  memset(puVar3 + 3,0,0xe38);
  *(undefined1 *)(puVar3 + 0x1cb) = 0;
  puVar3[1] = (long)puVar3 + 0x1c;
  puVar3[2] = 0x708;
  *(undefined4 *)((long)puVar3 + 0x72c) = 1;
  puVar3[0xe6] = (long)puVar3 + 0x744;
  *(undefined4 *)(puVar3 + 0xe7) = 0x708;
  puVar3[0x1ca] = 0x100000000;
  DAT_04cb32b8 = puVar3;
  return puVar3;
}


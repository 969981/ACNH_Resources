
undefined8 * FUN_0399c050(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05ae9320 != (undefined8 *)0x0) {
    return DAT_05ae9320;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0xa0);
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
        goto LAB_0399c0d8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0xa0,8);
  }
LAB_0399c0d8:
  FUN_038c69f0(puVar3 + 0x10,param_1,3);
  DAT_05ae9318 = puVar3 + 0x10;
  *puVar3 = &PTR_LAB_04b69a10;
  puVar3[9] = 0x100000000;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[0xe] = 0x4000000042be0000;
  DAT_05ae9320 = puVar3;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[0xf] = 0x3d4ccccd3cf5c28f;
  puVar3[0x10] = &PTR_FUN_04b699f0;
  return puVar3;
}



undefined8 * FUN_007b64a8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04ca9370 != (undefined8 *)0x0) {
    return DAT_04ca9370;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x90);
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
        goto LAB_007b6530;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x90,8);
  }
LAB_007b6530:
  FUN_038c69f0(puVar3 + 0xe,param_1,3);
  puVar3[0xe] = &PTR_FUN_04912640;
  DAT_04ca9368 = puVar3 + 0xe;
  *(undefined1 *)(puVar3 + 1) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_04912660;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  DAT_04ca9370 = puVar3;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[4] = 0;
  puVar3[5] = &PTR_FUN_04ba93e0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[8] = 0;
  puVar3[9] = &PTR_LAB_04912680;
  return puVar3;
}


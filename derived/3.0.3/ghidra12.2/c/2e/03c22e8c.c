
undefined8 * FUN_03c22e8c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aecb60 != (undefined8 *)0x0) {
    return DAT_05aecb60;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x138);
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
        goto LAB_03c22f14;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x138,8);
  }
LAB_03c22f14:
  FUN_038c69f0(puVar3 + 0x23,param_1,3);
  DAT_05aecb58 = puVar3 + 0x23;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar3[0x23] = &PTR_FUN_04b7e370;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_04b7e390;
  FUN_038e18e4(puVar3 + 3);
  *(undefined4 *)(puVar3 + 0xb) = 0;
  *(undefined4 *)((long)puVar3 + 0x5c) = 0;
  FUN_038e3114(puVar3 + 0xc,0,0x7fff);
  *(undefined4 *)(puVar3 + 0x15) = 0;
  FUN_038e3114(puVar3 + 0x16,0,0x7fff);
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  puVar3[0x20] = 0;
  *(undefined4 *)(puVar3 + 0x21) = 0;
  puVar3[0x22] = 0;
  DAT_05aecb60 = puVar3;
  return puVar3;
}


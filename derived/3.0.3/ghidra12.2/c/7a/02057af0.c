
undefined8 * FUN_02057af0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_053cfba8 != (undefined8 *)0x0) {
    return DAT_053cfba8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(800);
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
        goto LAB_02057b78;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,800,8);
  }
LAB_02057b78:
  FUN_038c69f0(puVar3 + 0x60,param_1,3);
  puVar3[0x10] = 0;
  DAT_053cfba0 = puVar3 + 0x60;
  puVar3[0x60] = &PTR_FUN_04a6f248;
  *(undefined4 *)(puVar3 + 0x11) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_0205f13c(puVar3 + 0x12);
  *(undefined1 *)(puVar3 + 0x5f) = 0;
  puVar3[0x5e] = 0;
  puVar3[0x5d] = 0;
  puVar3[0x5c] = 0;
  puVar3[0x5b] = 0;
  puVar3[0x5a] = 0;
  puVar3[0x58] = 0;
  *(undefined8 *)((long)puVar3 + 0x2c5) = 0;
  DAT_053cfba8 = puVar3;
  return puVar3;
}


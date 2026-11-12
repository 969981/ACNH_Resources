
undefined8 * FUN_007df88c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04cb3170 != (undefined8 *)0x0) {
    return DAT_04cb3170;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x1990);
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
        goto LAB_007df914;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1990,8);
  }
LAB_007df914:
  FUN_038c69f0(puVar3 + 0x32e,param_1,3);
  puVar3[0x32e] = &PTR_FUN_04916d10;
  DAT_04cb3140 = puVar3 + 0x32e;
  *puVar3 = &PTR_LAB_04916d30;
  memset(puVar3 + 3,0,0x1910);
  puVar3[0x194] = puVar3 + 0x195;
  puVar3[1] = 0x19000000000;
  puVar3[2] = puVar3 + 3;
  *(undefined4 *)((long)puVar3 + 0xc9c) = 400;
  *(undefined1 *)(puVar3 + 0x325) = 0;
  FUN_038e18e4(puVar3 + 0x326);
  DAT_04cb3170 = puVar3;
  return puVar3;
}


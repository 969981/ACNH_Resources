
undefined8 * FUN_01d86428(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05374bf0 != (undefined8 *)0x0) {
    return DAT_05374bf0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x4058);
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
        goto LAB_01d864b0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x4058,8);
  }
LAB_01d864b0:
  FUN_038c69f0(puVar3 + 0x807,param_1,3);
  *(undefined4 *)(puVar3 + 4) = 0;
  DAT_05374a78 = puVar3 + 0x807;
  puVar3[0x807] = &PTR_FUN_04a5a868;
  *puVar3 = &PTR_LAB_04a5a888;
  puVar3[1] = 0;
  puVar3[2] = puVar3 + 2;
  puVar3[3] = puVar3 + 2;
  memset(puVar3 + 6,0,0x4000);
  *(undefined1 *)(puVar3 + 5) = 0;
  puVar3[0x806] = 0xffffffffffffffff;
  DAT_05374bf0 = puVar3;
  *(undefined4 *)((long)puVar3 + 0x24) = 0xa0;
  return puVar3;
}


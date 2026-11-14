
undefined8 * FUN_01d7f330(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05372500 != (undefined8 *)0x0) {
    return DAT_05372500;
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
        goto LAB_01d7f3b8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x90,8);
  }
LAB_01d7f3b8:
  FUN_038c69f0(puVar3 + 0xe,param_1,3);
  DAT_053724f8 = puVar3 + 0xe;
  puVar3[0xe] = &PTR_FUN_04a5a598;
  *(undefined2 *)(puVar3 + 4) = 0;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  *puVar3 = &PTR_LAB_04ba4ef0;
  puVar3[1] = 0xffffffff;
  *(undefined4 *)(puVar3 + 7) = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  DAT_05372500 = puVar3;
  puVar3[8] = 0;
  puVar3[9] = &PTR_FUN_048fc6e0;
  return puVar3;
}


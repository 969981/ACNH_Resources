
undefined8 * FUN_014afb54(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_051e6d68 != (undefined8 *)0x0) {
    return DAT_051e6d68;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x310);
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
        goto LAB_014afbdc;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x310,8);
  }
LAB_014afbdc:
  FUN_038c69f0(puVar3 + 0x5e,param_1,3);
  puVar3[0x5e] = &PTR_FUN_049a6618;
  DAT_051e6d60 = puVar3 + 0x5e;
  *puVar3 = 0xfffe;
  FUN_0277d4ac(puVar3);
  puVar3[1] = 0xfffe;
  FUN_0277d4ac();
  puVar3[2] = 0xfffe;
  FUN_0277d4ac();
  puVar3[3] = 0xfffe;
  FUN_0277d4ac();
  puVar3[4] = 0xfffe;
  FUN_0277d4ac();
  puVar3[5] = 0xfffe;
  FUN_0277d4ac();
  puVar3[6] = 0xfffe;
  FUN_0277d4ac();
  puVar3[7] = 0xfffe;
  FUN_0277d4ac();
  puVar3[8] = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)puVar3 + 0x8c) = 0;
  *(undefined1 *)(puVar3 + 0x13) = 2;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  *(undefined4 *)((long)puVar3 + 0x94) = 0;
  *(undefined8 *)((long)puVar3 + 0x84) = 0;
  *(undefined8 *)((long)puVar3 + 0x9c) = 0;
  *(undefined8 *)((long)puVar3 + 0xa4) = 0;
  *(undefined8 *)((long)puVar3 + 0xac) = 0;
  *(undefined8 *)((long)puVar3 + 0xb1) = 0;
  *(undefined1 *)((long)puVar3 + 0xb9) = 0xee;
  *(undefined2 *)((long)puVar3 + 0xba) = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  memset(puVar3 + 0x18,0,0x230);
  DAT_051e6d68 = puVar3;
  return puVar3;
}


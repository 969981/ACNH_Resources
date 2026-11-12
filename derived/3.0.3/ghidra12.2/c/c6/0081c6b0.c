
undefined8 * FUN_0081c6b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_04ccf5e8 != (undefined8 *)0x0) {
    return DAT_04ccf5e8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x9c0);
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
        goto LAB_0081c738;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x9c0,8);
  }
LAB_0081c738:
  FUN_038c69f0(puVar3 + 0x134,param_1,3);
  puVar3[0x134] = &PTR_FUN_049179a8;
  DAT_04ccf5e0 = puVar3 + 0x134;
  *puVar3 = &PTR_LAB_049179c8;
  memset(puVar3 + 1,0,0x6c0);
  lVar4 = 0;
  do {
    lVar1 = lVar4 + 0x48;
    *(undefined8 *)((long)puVar3 + lVar4 + 8) = 0;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x10) = 0;
    *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x1c) = 0x3f80000000000000;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x24) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x2c) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x34) = 0;
    *(undefined8 *)((long)puVar3 + lVar4 + 0x3c) = 0;
    *(undefined4 *)((long)puVar3 + lVar4 + 0x44) = 1;
    *(undefined2 *)((long)puVar3 + lVar4 + 0x48) = 0xff;
    lVar4 = lVar1;
  } while (lVar1 != 0x6c0);
  puVar3[0xd9] = 0;
  *(undefined4 *)(puVar3 + 0xda) = 0;
  FUN_0081c808(puVar3 + 0xdb);
  puVar3[0x132] = 0;
  *(undefined4 *)(puVar3 + 0x133) = 0;
  *(undefined8 *)((long)puVar3 + 0x6e4) = 0;
  DAT_04ccf5e8 = puVar3;
  return puVar3;
}


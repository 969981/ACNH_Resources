
undefined8 * FUN_008291b8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_04cd2b98 != (undefined8 *)0x0) {
    return DAT_04cd2b98;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0xd8);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_00829240;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0xd8,8);
  }
LAB_00829240:
  FUN_038c69f0(puVar4 + 0x17,param_1,3);
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar1 = PTR_DAT_04bb2020;
  DAT_04cd2b90 = puVar4 + 0x17;
  puVar4[0x17] = &PTR_LAB_04917cc0;
  *puVar4 = &PTR_LAB_04917ce0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 5) = 0;
  *(undefined8 *)((long)puVar4 + 0x2c) = 0;
  *(undefined1 *)((long)puVar4 + 0x34) = 0;
  puVar4[7] = 0;
  *(undefined4 *)(puVar4 + 8) = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = 0;
  *(undefined1 *)((long)puVar4 + 100) = 0;
  puVar4[3] = puVar1 + 0x10;
  puVar4[4] = &DAT_0407ebb1;
  puVar4[9] = puVar1 + 0x10;
  puVar4[10] = &DAT_0407ebb1;
  puVar1 = PTR_DAT_04bd4738 + 0x10;
  *(undefined2 *)(puVar4 + 0x11) = 0;
  *(undefined4 *)(puVar4 + 0x12) = 0;
  puVar4[0x13] = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  puVar4[0x15] = 0;
  *(undefined1 *)((long)puVar4 + 0xb2) = 0;
  *(undefined4 *)((long)puVar4 + 0xb4) = 0;
  DAT_04cd2b98 = puVar4;
  puVar4[0xd] = puVar1;
  puVar4[0xe] = 0xffffffff;
  *(undefined2 *)(puVar4 + 0x16) = 1;
  puVar4[0xf] = 0xffffffff;
  puVar4[0x10] = 0xffffffff;
  return puVar4;
}


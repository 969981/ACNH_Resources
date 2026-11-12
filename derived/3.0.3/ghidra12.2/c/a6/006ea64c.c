
undefined8 * FUN_006ea64c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_04c88f78 != (undefined8 *)0x0) {
    return DAT_04c88f78;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x330);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_006ea6d4;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x330,8);
  }
LAB_006ea6d4:
  FUN_038c69f0(puVar4 + 0x62,param_1,3);
  *(undefined1 *)((long)puVar4 + 0x3b) = 0;
  *(undefined1 *)((long)puVar4 + 0x1c) = 0;
  DAT_04c88f70 = puVar4 + 0x62;
  puVar4[0x62] = &PTR_FUN_048fc168;
  puVar4[2] = (undefined1 *)((long)puVar4 + 0x1c);
  *(undefined4 *)(puVar4 + 3) = 0x20;
  *(undefined4 *)(puVar4 + 0x10) = 0x20;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  *(undefined1 *)((long)puVar4 + 0xa3) = 0;
  *puVar4 = &PTR_LAB_048fc188;
  puVar4[1] = &PTR_LAB_048f9700;
  puVar4[0xd] = 0x80000;
  puVar1 = (undefined8 *)((long)puVar4 + 0x84);
  puVar4[0xf] = puVar1;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar4[0xe] = &PTR_LAB_048f9700;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0x4b000;
  puVar4[0x17] = 0x40;
  puVar4[0x18] = 0x6400000064;
  *(undefined4 *)(puVar4 + 0x19) = 300;
  puVar4[0x1a] = 0x80;
  puVar4[0x1b] = 0x400;
  *(undefined4 *)(puVar4 + 0x1c) = 100;
  puVar4[0x1d] = 0x1000;
  *(undefined4 *)(puVar4 + 0x1e) = 4;
  puVar4[0x27] = 0;
  puVar4[0x25] = 0;
  *(undefined2 *)(puVar4 + 0x26) = 0;
  puVar4[0x1f] = 0x80;
  puVar4[0x20] = 0x400;
  puVar4[0x21] = 0x2800000078;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  memset(puVar4 + 0x29,0,0x1c8);
  DAT_04c88f78 = puVar4;
  return puVar4;
}


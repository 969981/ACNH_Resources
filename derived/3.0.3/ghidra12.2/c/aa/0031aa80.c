
undefined8 * FUN_0031aa80(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00185a6c(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar1 = PTR_DAT_04bc0ec8;
    *(undefined1 *)(puVar2 + 1) = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    puVar2[7] = puVar1 + 0x10;
    puVar2[10] = puVar2 + 8;
    puVar2[0xb] = 0x10;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_0484b030;
    *(undefined8 *)((long)puVar2 + 0x24) = 1;
    *(undefined8 *)((long)puVar2 + 0x2c) = 0x200;
    FUN_0018a58c(puVar2 + 7,&DAT_0407ebb1);
    *(undefined1 *)(puVar2 + 0xc) = 0;
    *puVar2 = &PTR_FUN_0484b450;
  }
  return puVar2;
}


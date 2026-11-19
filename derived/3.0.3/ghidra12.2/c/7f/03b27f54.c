
void FUN_03b27f54(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00367b30(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar1 + 7) = 0;
    puVar1[2] = puVar1 + 1;
    puVar1[3] = 0;
    puVar1[6] = puVar1 + 5;
    *(undefined1 *)((long)puVar1 + 0x3e) = 0;
    *(undefined8 *)((long)puVar1 + 0x44) = 0;
    *(undefined8 *)((long)puVar1 + 0x4c) = 0;
    *(undefined8 *)((long)puVar1 + 0x54) = 0;
    *(undefined8 *)((long)puVar1 + 0x5c) = 0;
    *(undefined4 *)((long)puVar1 + 100) = 0;
    puVar1[4] = 0;
    puVar1[5] = puVar1 + 5;
    puVar1[0xf] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = &PTR_LAB_04b74ce8;
    puVar1[1] = puVar1 + 1;
    *(undefined4 *)(puVar1 + 8) = 0x2a010;
  }
  return;
}


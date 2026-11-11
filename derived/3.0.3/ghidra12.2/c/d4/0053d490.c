
undefined8 * FUN_0053d490(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00438810(0xa0);
  *puVar1 = &DAT_048c9ed0;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  FUN_004385d0(puVar1 + 4);
  puVar1[0x12] = 0;
  puVar1[0x11] = *(undefined8 *)(param_1 + 0x88);
  FUN_004435a0();
  FUN_00438670(puVar1 + 4,param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
  puVar1[10] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
  puVar1[0xc] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  puVar1[0xf] = *(undefined8 *)(param_1 + 0x78);
  puVar1[0xe] = uVar2;
  FUN_0043c080(puVar1 + 0x12,param_1 + 0x90);
  *(undefined1 *)((long)puVar1 + 0x9d) = *(undefined1 *)(param_1 + 0x9d);
  *(undefined1 *)((long)puVar1 + 0x9c) = *(undefined1 *)(param_1 + 0x9c);
  *(undefined4 *)(puVar1 + 0x13) = *(undefined4 *)(param_1 + 0x98);
  *(undefined1 *)((long)puVar1 + 0x9e) = *(undefined1 *)(param_1 + 0x9e);
  puVar1[0x10] = *(undefined8 *)(param_1 + 0x80);
  *(undefined1 *)((long)puVar1 + 0x9f) = *(undefined1 *)(param_1 + 0x9f);
  return puVar1;
}


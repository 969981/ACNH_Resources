
void FUN_022a6204(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  byte bVar4;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  bVar4 = *PTR_DAT_04bb32e0;
  *param_1 = &PTR_LAB_04a7e9a8;
  puVar3 = PTR_DAT_04bb37e0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  uVar1 = *(undefined4 *)puVar3;
  uVar2 = *(undefined4 *)(puVar3 + 4);
  *(byte *)(param_1 + 2) = bVar4;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xfffe;
  FUN_0277d4ac();
  *(undefined8 *)((long)param_1 + 0x24) = 0xfffe;
  FUN_0277d4ac((undefined8 *)((long)param_1 + 0x24));
  param_1[9] = 0;
  puVar3 = PTR_DAT_04bb2010;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[10] = 0x2400000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[8] = puVar3 + 0x10;
  return;
}



void FUN_028163bc(undefined2 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = *(undefined2 *)puVar1;
  *(undefined *)(param_1 + 1) = puVar1[2];
  *(undefined *)((long)param_1 + 3) = puVar1[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 4);
  FUN_027c0ee4(param_1 + 8);
  memset(param_1 + 0x40,0,0x830);
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 1;
  param_1[0x458] = 0xff00;
  return;
}


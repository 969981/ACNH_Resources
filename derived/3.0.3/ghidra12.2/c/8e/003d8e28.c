
void FUN_003d8e28(undefined4 *param_1,undefined1 *param_2,undefined1 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_003d40b8(*param_2);
  *param_1 = uVar2;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 2) = param_2[1];
  *(ulong *)(param_1 + 4) = (ulong)*(uint *)(param_2 + 8);
  *(ulong *)(param_1 + 6) = (ulong)*(uint *)(param_2 + 0xc);
  *(ulong *)(param_1 + 8) = (ulong)*(uint *)(param_2 + 0x44);
  *(ulong *)(param_1 + 10) = (ulong)*(uint *)(param_2 + 0x48);
  *(ulong *)(param_1 + 0xe) = (ulong)*(uint *)(param_2 + 0x18);
  *(ulong *)(param_1 + 0x10) = (ulong)*(uint *)(param_2 + 0x14);
  *(ulong *)(param_1 + 0x14) = (ulong)*(uint *)(param_2 + 0x20);
  *(ulong *)(param_1 + 0x12) = (ulong)*(uint *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0xc) = param_3;
  param_1[0xd] = uVar2;
  bVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x36] = (uint)bVar1;
  return;
}


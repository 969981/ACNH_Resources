
void FUN_0049a8f0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 8);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x16);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0x8000000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  FUN_0043d3a0(param_1 + 0x23);
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (uVar1 == (*(uint *)((long)param_1 + 0xe4) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,param_1 + 0x1b,0x18);
    uVar1 = *(uint *)(param_1 + 0x1c);
  }
  puVar2 = (undefined8 *)(param_1[0x1b] + (long)(int)uVar1 * 0x18);
  puVar2[2] = 0x8000000000000000;
  *puVar2 = 0x100000000;
  puVar2[1] = 0;
  *(uint *)(param_1 + 0x1c) = uVar1 + 1;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  return;
}


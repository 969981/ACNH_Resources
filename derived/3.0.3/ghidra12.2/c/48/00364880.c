
void FUN_00364880(long param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = -(param_3 >> 0x1f & 1) & 0xffffffe000000000 | (param_3 & 0xffffffff) << 5;
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 8) + uVar1);
  param_2[1] = *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 8);
  param_2[2] = *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x10);
  param_2[3] = *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x18);
  return;
}


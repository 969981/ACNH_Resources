
void FUN_003648c4(long param_1,ulong param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = -(param_2 >> 0x1f & 1) & 0xffffffe000000000 | (param_2 & 0xffffffff) << 5;
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1) = *param_3;
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 8) = param_3[1];
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x10) = param_3[2];
  *(undefined8 *)(*(long *)(param_1 + 8) + uVar1 + 0x18) = param_3[3];
  return;
}



void FUN_03678e18(long *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (long)(int)param_1[0x11] ^ 1;
  uVar2 = (uint)uVar3;
  if (uVar2 < *(uint *)(param_1 + 0xd)) {
    uVar1 = *(undefined8 *)(param_1[0xe] + uVar3 * 8);
  }
  else {
    uVar1 = 0;
  }
  uVar3 = (**(code **)(*param_1 + 0x58))(param_1,uVar1);
  if ((uVar3 & 1) != 0) {
    *(uint *)(param_1 + 0x11) = uVar2;
  }
  return;
}



undefined8 FUN_006959dc(long param_1,undefined1 *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,local_24,1);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  *param_2 = local_24[0];
  if (param_4 != 0) {
    uVar1 = (**(code **)(*param_3 + 0x18))(param_3,param_2 + 8,param_4);
    if ((uVar1 & 1) == 0) {
      if (*(ulong *)(param_1 + 0x218) < param_4) {
        return 0;
      }
      uVar1 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x210),param_4);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x210);
    }
  }
  *(ulong *)(param_2 + 0x10) = param_4;
  return 1;
}



undefined8 FUN_00695884(long param_1,undefined8 *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  char *pcVar2;
  
  if (param_4 != 0) {
    uVar1 = (**(code **)(*param_3 + 0x18))(param_3,param_2,param_4);
    if ((uVar1 & 1) == 0) {
      if (*(ulong *)(param_1 + 0x218) < param_4) {
        return 0;
      }
      uVar1 = (**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x210),param_4);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      pcVar2 = *(char **)(param_1 + 0x210);
      *param_2 = pcVar2;
      uVar1 = nn::util::VerifyUtf8String(pcVar2,param_4);
    }
    else {
      uVar1 = nn::util::VerifyUtf8String((char *)*param_2,param_4);
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  param_2[1] = param_4;
  return 1;
}


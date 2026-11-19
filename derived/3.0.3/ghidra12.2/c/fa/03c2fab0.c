
ulong FUN_03c2fab0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  
  if ((param_5 & 7) != 0) {
    return 0xffffffff;
  }
  *(undefined8 *)(param_5 + 0x7190) = 0x8000001;
  *(undefined8 *)(param_5 + 0x7060) = 0;
  *(undefined4 *)(param_5 + 0x7110) = 0;
  *(undefined8 *)(param_5 + 0x716c) = 0;
  *(undefined4 *)(param_5 + 0x71c8) = 0;
  *(undefined4 *)(param_5 + 0x71d4) = 0;
  *(undefined4 *)(param_5 + 0x7150) = 0;
  *(undefined8 *)(param_5 + 29000) = 0x271f8;
  *(undefined8 *)(param_5 + 0x71a0) = 0;
  *(undefined8 *)(param_5 + 0x71c0) = 0;
  *(undefined8 *)(param_5 + 0x7158) = 0;
  *(undefined8 *)(param_5 + 0x7160) = 0;
  *(undefined8 *)(param_5 + 0x7180) = 0;
  *(ulong *)(param_5 + 0x7178) = param_5 + 0x271f8;
  uVar1 = FUN_03c31da0(param_5,param_1,param_2,param_3,param_4,0,0,0);
  if (0xffffffffffffff88 < uVar1) {
    uVar2 = 0xfffffffe;
    if ((int)uVar1 != -0x46) {
      uVar2 = 0xffffffff;
    }
    uVar1 = (ulong)uVar2;
  }
  return uVar1;
}


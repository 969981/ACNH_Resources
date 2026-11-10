
ulong FUN_00171a9c(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if ((uVar2 < param_3) && (*(code **)(param_1 + 0x848) != (code *)0x0)) {
    uVar1 = uVar2 + 0x100;
    if (param_3 <= uVar2 + 0x100) {
      uVar1 = param_3;
    }
    uVar3 = (**(code **)(param_1 + 0x848))(param_1,param_2,uVar1,*(undefined8 *)(param_1 + 0x8b8));
    uVar2 = 0xfffffffffffffc7a;
    if ((long)*param_2 <= (long)uVar3 && (long)uVar3 <= (long)uVar1) {
      uVar2 = uVar3;
    }
  }
  return uVar2;
}


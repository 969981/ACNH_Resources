
undefined8 FUN_003bcfec(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 uStack_31;
  
  if ((*(long *)(*(long *)(param_1 + 8) + 0xd8) == 0) || (uVar1 = FUN_003bbc10(), (uVar1 & 1) == 0))
  {
    return 0;
  }
  FUN_003de160(&uStack_31);
  uVar2 = FUN_003de168(&uStack_31,param_2 + (param_3 & 0xff) * 0x18 + 0x268,
                       param_2 + (param_3 & 0xff) * 0x20 + 0x1e8,param_4);
  FUN_003de164(&uStack_31);
  return uVar2;
}


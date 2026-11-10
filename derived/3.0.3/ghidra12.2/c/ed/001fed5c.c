
undefined8 FUN_001fed5c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0018b44c(*(undefined8 *)(param_2 + 0x18),"UserMessage");
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_0018b44c(*(undefined8 *)(param_2 + 0x18),&DAT_04064fff);
    return uVar2;
  }
  return 1;
}


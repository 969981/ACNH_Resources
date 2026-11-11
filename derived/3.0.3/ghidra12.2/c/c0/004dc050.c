
bool FUN_004dc050(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00428440(uVar2);
  if ((uVar1 & 0x1f) != 7) {
    uVar2 = 0;
  }
  uVar1 = FUN_00427d40(uVar2,param_2,0);
  return 1 < uVar1;
}


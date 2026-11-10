
void FUN_0021f320(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 - 2U < 0x19) {
    lVar2 = *(long *)(&DAT_0410d148 + (long)(int)(param_1 - 2U) * 8);
  }
  else {
    lVar2 = 0x19;
  }
  if ((int)DAT_04c60868 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *DAT_04c60870;
  }
  uVar1 = thunk_FUN_002862f4(param_2,param_3,uVar1,1,0);
  *(undefined8 *)(&DAT_04c5eff0 + lVar2 * 8) = uVar1;
  return;
}


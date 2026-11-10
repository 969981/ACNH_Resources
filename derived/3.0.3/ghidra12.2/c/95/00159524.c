
void FUN_00159524(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 0x802;
  }
  nnsocketFcntl(param_1,4,uVar1);
  return;
}


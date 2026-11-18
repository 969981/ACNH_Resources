
undefined8 FUN_034e8058(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_24 [4];
  
  uVar1 = FUN_01d77c78(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = FUN_01d7908c(param_1 + 8,param_2,auStack_24);
  }
  return uVar2;
}



int FUN_001717d8(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001689e8(param_1 + 0x890,0x98);
  if (lVar2 == 0) {
    iVar1 = -0x385;
  }
  else {
    FUN_0016bbec();
    FUN_00167720(lVar2,param_2,param_3,param_4);
    iVar1 = FUN_0016ca1c(param_1,lVar2);
    if (iVar1 != 0) {
      FUN_00167748(lVar2);
      FUN_001689f8(param_1 + 0x890,lVar2);
    }
  }
  return iVar1;
}


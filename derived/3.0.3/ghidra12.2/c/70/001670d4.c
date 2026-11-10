
int FUN_001670d4(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_50;
  int local_48;
  
  iVar1 = -0x1f5;
  if (((param_3 != 0) && (param_4 != (int *)0x0)) && (*param_4 != param_3)) {
    local_50 = *(undefined8 *)param_4;
    local_48 = param_4[2];
    FUN_001674d4(&local_50);
    lVar2 = FUN_001689e8(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_0016bbec();
      FUN_00167614(lVar2,param_3,&local_50);
      iVar1 = FUN_0016ca1c(param_1,lVar2);
      if (iVar1 != 0) {
        FUN_00167640(lVar2);
        FUN_001689f8(param_1 + 0x890,lVar2);
      }
    }
  }
  return iVar1;
}


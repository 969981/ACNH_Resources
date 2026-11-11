
long FUN_003d1610(long *param_1,undefined4 param_2,long *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_60 [2];
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if (lVar2 == 0) {
    local_60[0] = 0xffffffffffffffff;
    local_60[1] = 0;
    uVar3 = FUN_003b89a4(param_1[1],param_2,local_60);
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)local_60[0];
      uVar3 = local_60[0] & 0xffffffff;
      if (1 < (int)local_60[0] + 1U) {
        uVar4 = (**(code **)(*param_3 + 0x20))(param_3,uVar3,param_5 & 1);
        lVar2 = (**(code **)(*param_3 + 0x10))(param_3,uVar4);
        if ((lVar2 != 0) &&
           (lVar5 = FUN_003d19f0(param_1,param_2,lVar2,(long)iVar1,0,param_4), lVar5 == iVar1)) {
          FUN_003b6c7c(lVar2,uVar3);
          (**(code **)(*param_1 + 0x10))(param_1,param_2,lVar2);
          return lVar2;
        }
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}


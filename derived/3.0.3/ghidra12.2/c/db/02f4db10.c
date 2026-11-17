
uint FUN_02f4db10(long param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  short local_48 [4];
  
  uVar1 = param_2;
  uVar2 = param_3;
  if (-1 < param_4) {
    uVar1 = param_3;
    uVar2 = param_2;
  }
  if ((int)uVar2 <= (int)uVar1) {
    FUN_02f46668(local_48,param_1,uVar2);
    if (local_48[0] != -2) {
      return param_3;
    }
    do {
      uVar4 = uVar2;
      if (uVar1 == uVar4) break;
      FUN_02f46668(local_48,param_1,uVar4 + 1);
      uVar2 = uVar4 + 1;
    } while (local_48[0] == -2);
    if ((int)uVar4 < (int)uVar1) {
      return param_3;
    }
  }
  while( true ) {
    if ((int)param_3 < 0) {
      return 0;
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x382bc);
    if (2 < *(uint *)(param_1 + 0x382bc)) {
      uVar3 = 0;
    }
    uVar1 = *(uint *)(param_1 + 0x38150 + uVar3 * 4);
    if (uVar1 <= param_3) break;
    FUN_02f46668(local_48,param_1,param_3);
    param_3 = param_3 + param_4;
    if (local_48[0] != -2) {
      return param_3 - param_4;
    }
  }
  return uVar1;
}


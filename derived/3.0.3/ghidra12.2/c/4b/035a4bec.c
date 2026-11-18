
void FUN_035a4bec(ushort *param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = *param_1;
  uVar3 = (uVar2 + param_1[6]) - 1;
  if ((((uVar2 <= param_2) && (param_2 <= uVar3)) && (param_1[1] <= param_3)) &&
     (param_3 <= (ushort)((param_1[1] + param_1[8]) - 1))) {
    FUN_035a4360(param_1,param_2,param_3,DAT_057763c4);
    uVar2 = *param_1;
    uVar3 = (uVar2 + param_1[6]) - 1;
  }
  if ((param_2 <= uVar3) && (uVar2 <= param_2)) {
    uVar1 = DAT_057763a8 + param_3;
    if ((param_1[1] <= uVar1) && (uVar1 <= (ushort)((param_1[1] + param_1[8]) - 1))) {
      FUN_035a4360(param_1,param_2,uVar1,DAT_057763c8);
      uVar2 = *param_1;
      uVar3 = (uVar2 + param_1[6]) - 1;
    }
  }
  uVar1 = DAT_057763b0 + param_2;
  if (((uVar2 <= uVar1) && (uVar1 <= uVar3)) &&
     ((param_1[1] <= param_3 && (param_3 <= (ushort)((param_1[1] + param_1[8]) - 1))))) {
    FUN_035a4360(param_1,uVar1,param_3,DAT_057763cc);
    uVar2 = *param_1;
    uVar3 = (uVar2 + param_1[6]) - 1;
  }
  param_2 = DAT_057763b8 + param_2;
  if ((uVar2 <= param_2) && (param_2 <= uVar3)) {
    param_3 = DAT_057763c0 + param_3;
    if ((param_1[1] <= param_3) && (param_3 <= (ushort)((param_1[1] + param_1[8]) - 1))) {
      FUN_035a4360(param_1,param_2,param_3,DAT_057763d0);
      return;
    }
  }
  return;
}


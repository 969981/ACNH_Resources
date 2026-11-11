
bool FUN_003b115c(long *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *(ushort *)(*param_1 + 0xa4);
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fb50(&local_50);
  local_50 = CONCAT44(0x10,(uint)*(ushort *)(*param_1 + 0xa4));
  iVar2 = FUN_00347a58(param_2,&local_50);
  uVar3 = (ulong)((((uint)uVar1 + iVar2) - 1 & -iVar2) * (uint)*(byte *)((long)param_1 + 10));
  if (uVar3 - 1 < param_5) {
    param_1[6] = param_3;
    param_1[7] = param_4;
    FUN_003b0ea0(param_1,param_2,param_3,param_4);
  }
  return uVar3 <= param_5;
}


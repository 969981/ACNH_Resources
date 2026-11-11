
bool FUN_003b37c4(long *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *(ushort *)(*param_1 + 0x3a);
  uVar2 = *(ushort *)(*param_1 + 0x3c);
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fb50(&local_50);
  local_50 = CONCAT44(0x50,((uint)*(ushort *)(*param_1 + 0x3c) + (uint)*(ushort *)(*param_1 + 0x3a))
                           * 0x30);
  lVar3 = FUN_00347a58(param_2,&local_50);
  uVar4 = ((lVar3 + ((ulong)uVar2 + (ulong)uVar1) * 0x30) - 1 & -lVar3) *
          (ulong)*(byte *)((long)param_1 + 10);
  if (uVar4 - 1 < param_5) {
    param_1[6] = param_3;
    param_1[7] = param_4;
    FUN_003b3680(param_1,param_2,param_3,param_4);
  }
  return uVar4 <= param_5;
}


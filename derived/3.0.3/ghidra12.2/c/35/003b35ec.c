
long FUN_003b35ec(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = *(ushort *)(*param_1 + 0x3a);
  uVar2 = *(ushort *)(*param_1 + 0x3c);
  FUN_0034fb50(&local_40);
  local_40 = CONCAT44(0x50,((uint)*(ushort *)(*param_1 + 0x3c) + (uint)*(ushort *)(*param_1 + 0x3a))
                           * 0x30);
  lVar3 = FUN_00347a58(param_2,&local_40);
  return ((lVar3 + ((ulong)uVar2 + (ulong)uVar1) * 0x30) - 1 & -lVar3) *
         (ulong)*(byte *)((long)param_1 + 10);
}


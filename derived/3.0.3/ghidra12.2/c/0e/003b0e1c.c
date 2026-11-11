
int FUN_003b0e1c(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = *(ushort *)(*param_1 + 0xa4);
  FUN_0034fb50(&local_40);
  local_40 = CONCAT44(0x10,(uint)*(ushort *)(*param_1 + 0xa4));
  iVar2 = FUN_00347a58(param_2,&local_40);
  return (((uint)uVar1 + iVar2) - 1 & -iVar2) * (uint)*(byte *)((long)param_1 + 10);
}


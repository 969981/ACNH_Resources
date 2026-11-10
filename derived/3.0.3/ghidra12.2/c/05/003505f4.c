
long FUN_003505f4(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fb50(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar5 = FUN_00347a58(param_1,&local_50);
  bVar3 = *(byte *)(param_2 + 0x15);
  iVar4 = *(int *)(param_2 + 0x10);
  iVar1 = 0x40;
  if (*(char *)(param_2 + 0x16) != '\0') {
    iVar1 = 0x60;
  }
  lVar6 = FUN_00347a58(param_1,&local_50);
  uVar7 = (lVar6 + (long)iVar1 * (long)iVar4) - 1U & -lVar6;
  uVar2 = 0;
  if (*(char *)(param_2 + 0x14) != '\0') {
    uVar2 = uVar7;
  }
  return uVar7 + ((lVar5 + 0x7fU & -lVar5) << ((ulong)bVar3 & 0x3f)) + uVar2;
}


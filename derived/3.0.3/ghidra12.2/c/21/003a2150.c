
bool FUN_003a2150(long *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ushort uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  bVar2 = *(byte *)(*param_1 + 0xf3);
  if ((char)bVar2 < '\0') {
    bVar5 = true;
  }
  else {
    uVar1 = *(ushort *)(*(long *)(*param_1 + 0x58) + (ulong)bVar2 * 0x20 + 0x1a);
    local_50 = 0;
    uStack_48 = 0;
    FUN_0034fb50(&local_50);
    local_50 = CONCAT44(0x10,(uint)uVar1);
    lVar3 = FUN_00347a58(param_2,&local_50);
    uVar4 = (((ulong)uVar1 + lVar3) - 1 & -lVar3) * (ulong)*(byte *)(param_1 + 10);
    bVar5 = uVar4 <= param_5;
    if (uVar4 - 1 < param_5) {
      param_1[6] = param_3;
      param_1[7] = param_4;
      FUN_003a1eb0(param_1,param_2,param_3,param_4);
    }
  }
  return bVar5;
}


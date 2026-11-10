
int FUN_00100470(long param_1,long param_2,short param_3)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_3 != 0) {
    pbVar3 = (byte *)(param_2 + 1);
    pbVar4 = (byte *)(param_1 + 1);
    do {
      uVar1 = *(ushort *)(pbVar4 + -1);
      if ((uint)uVar1 != (uint)*(ushort *)(pbVar3 + -1)) {
        iVar2 = (uVar1 & 0xff) - (*(ushort *)(pbVar3 + -1) & 0xff);
        if (iVar2 == 0) {
          return (uint)*pbVar4 - (uint)*pbVar3;
        }
        return iVar2;
      }
      if (uVar1 == 0) {
        return 0;
      }
      param_3 = param_3 + -1;
      pbVar3 = pbVar3 + 2;
      pbVar4 = pbVar4 + 2;
    } while (param_3 != 0);
  }
  return 0;
}


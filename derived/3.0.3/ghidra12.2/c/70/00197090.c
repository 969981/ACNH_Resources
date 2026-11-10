
bool FUN_00197090(long param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_14 [4];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  memcpy(local_14,(void *)(*(long *)(param_1 + 0x18) +
                           *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28) + -1),1);
  uVar7 = *(long *)(param_1 + 0x18) - 1;
  pbVar5 = (byte *)(*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28));
  if (uVar7 < 4) {
    uVar6 = 0;
  }
  else {
    uVar8 = uVar7 >> 2 & 3;
    if ((uVar7 >> 2) - 1 < 3) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar9 = uVar7 >> 2 & 0x3ffffffffffffffc;
      do {
        iVar2 = *(int *)pbVar5;
        pbVar3 = pbVar5 + 4;
        uVar9 = uVar9 - 4;
        pbVar1 = pbVar5 + 8;
        pbVar4 = pbVar5 + 0xc;
        pbVar5 = pbVar5 + 0x10;
        uVar6 = *(int *)pbVar4 + *(int *)pbVar1 + *(int *)pbVar3 + iVar2 + uVar6;
      } while (uVar9 != 0);
    }
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      uVar6 = *(int *)pbVar5 + uVar6;
      pbVar5 = pbVar5 + 4;
    }
    pbVar5 = (byte *)(*(long *)(param_1 + 0x10) +
                     *(long *)(param_1 + 0x28) + (uVar7 & 0xfffffffffffffffc));
  }
  if ((uVar7 & 3) != 0) {
    param_2 = (uint)*pbVar5 + param_2;
    if (((uVar7 & 3) != 1) && (param_2 = (uint)pbVar5[1] + param_2, (uVar7 & 3) != 2)) {
      param_2 = (uint)pbVar5[2] + param_2;
    }
  }
  return (uint)local_14[0] ==
         (uVar6 + (uVar6 >> 8) + (uVar6 >> 0x10) + (uVar6 >> 0x18) + param_2 & 0xff);
}


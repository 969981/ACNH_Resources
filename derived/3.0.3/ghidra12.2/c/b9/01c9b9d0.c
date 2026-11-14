
void FUN_01c9b9d0(long *param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  ushort *puVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  
  (**(code **)(*param_1 + 0x18))();
  lVar9 = param_1[1];
  uVar1 = *(uint *)(param_1 + 2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if (uVar1 != 0) {
    uVar4 = 0;
    lVar6 = 0x7fffffff;
    puVar5 = (ushort *)param_2[1];
    do {
      pbVar8 = (byte *)(lVar9 + (ulong)uVar4);
      if (lVar6 == 0) goto LAB_01c9bac4;
      uVar2 = *puVar5;
      if (uVar2 == 0) goto LAB_01c9bac4;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar8 = bVar3;
        iVar7 = 1;
      }
      else if (uVar2 < 0x800) {
        if (uVar1 <= uVar4 + 1) break;
        *pbVar8 = (byte)(uVar2 >> 6) | 0xc0;
        pbVar8[1] = bVar3 & 0x3f | 0x80;
        iVar7 = 2;
      }
      else {
        if (uVar1 <= uVar4 + 2) break;
        *pbVar8 = (byte)(uVar2 >> 0xc) | 0xe0;
        pbVar8[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        pbVar8[2] = bVar3 & 0x3f | 0x80;
        iVar7 = 3;
      }
      uVar4 = iVar7 + uVar4;
      lVar6 = lVar6 + -1;
      puVar5 = puVar5 + 1;
    } while (uVar4 < uVar1);
    pbVar8 = (byte *)(lVar9 + (ulong)(uVar4 - 1));
LAB_01c9bac4:
    *pbVar8 = 0;
  }
  return;
}


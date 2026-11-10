
ulong FUN_00227ec0(long param_1,int param_2,long param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  byte *pbVar10;
  
  uVar7 = 0;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != 0)) {
    uVar4 = param_2 - 1;
    if (param_2 == 1) {
      uVar7 = 0;
    }
    else {
      lVar8 = 0;
      iVar2 = 0x7fffffff;
      if (param_4 != -1) {
        iVar2 = param_4;
      }
      uVar7 = 0;
      do {
        iVar6 = (int)uVar7;
        pbVar10 = (byte *)(param_1 + uVar7);
        if ((long)iVar2 <= lVar8 + 1) goto LAB_00227fc0;
        puVar1 = (ushort *)(param_3 + lVar8);
        bVar3 = (byte)*puVar1;
        uVar5 = *puVar1;
        if (uVar5 == 0) goto LAB_00227fc0;
        if (uVar5 < 0x80) {
          *pbVar10 = bVar3;
          iVar9 = 1;
        }
        else if (uVar5 < 0x800) {
          if (uVar4 <= iVar6 + 1U) break;
          *pbVar10 = (byte)(uVar5 >> 6) | 0xc0;
          pbVar10[1] = bVar3 & 0x3f | 0x80;
          iVar9 = 2;
        }
        else {
          if (uVar4 <= iVar6 + 2U) break;
          *pbVar10 = *(byte *)((long)puVar1 + 1) >> 4 | 0xe0;
          pbVar10[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
          pbVar10[2] = bVar3 & 0x3f | 0x80;
          iVar9 = 3;
        }
        uVar7 = (ulong)(uint)(iVar6 + iVar9);
        lVar8 = lVar8 + 2;
      } while ((uint)(iVar6 + iVar9) < uVar4);
    }
    pbVar10 = (byte *)(param_1 + uVar7);
LAB_00227fc0:
    *pbVar10 = 0;
  }
  return uVar7;
}


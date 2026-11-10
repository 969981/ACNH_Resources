
int FUN_0013a8b0(long param_1,long param_2,short param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  byte bVar13;
  
  puVar3 = (uint *)(param_1 +
                   ((ulong)*(byte *)(param_1 + 0x30) << 0x18 |
                    (ulong)*(byte *)(param_1 + 0x31) << 0x10 | (ulong)*(byte *)(param_1 + 0x32) << 8
                   | (ulong)*(byte *)(param_1 + 0x33)));
  iVar6 = (int)(short)(param_3 << 1);
  uVar4 = (*(uint *)(param_1 + 0x58) & 0xff00ff00) >> 8 |
          (*(uint *)(param_1 + 0x58) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  if ((int)uVar4 < 1 || iVar6 < 1) {
LAB_0013a8f0:
    iVar7 = 0;
LAB_0013a96c:
    puVar10 = (uint *)((long)puVar3 + (ulong)(uVar4 * 0x408 - 0x408));
    uVar4 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
    if (uVar4 >> 0x10 == 0 && (uVar4 & 0xffff) == 0) {
      iVar7 = iVar7 + 1;
      pbVar2 = (byte *)(param_2 + 1);
      sVar5 = (short)iVar7;
joined_r0x0013a9b4:
      if (sVar5 < iVar6) {
        lVar9 = (ulong)*pbVar2 * 4;
        iVar7 = iVar7 + 1;
        lVar11 = lVar9 + 4;
      }
      else {
        lVar9 = 0;
        lVar11 = 0x400;
      }
      uVar4 = *(uint *)((long)puVar10 + lVar9 + 4);
      uVar8 = *(uint *)((long)puVar10 + lVar11 + 4);
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      if (uVar4 < uVar8) {
        uVar8 = uVar8 - 1;
      }
      else if (uVar4 == uVar8) {
        return 0xffff;
      }
      *param_4 = uVar4;
      *param_5 = uVar8;
      return iVar7;
    }
  }
  else {
    puVar10 = puVar3;
    iVar12 = 1;
    do {
      bVar13 = (byte)*puVar10;
      if (bVar13 == 0) goto LAB_0013a8f0;
      lVar11 = 0;
      iVar7 = 0;
      while( true ) {
        if (bVar13 < *(byte *)(param_2 + lVar11)) {
          param_2 = param_2 + lVar11;
          goto LAB_0013a96c;
        }
        if (*(byte *)(param_2 + lVar11) < bVar13) break;
        bVar13 = *(byte *)((long)puVar10 + lVar11 + 1);
        sVar5 = (short)iVar7 + 1;
        iVar7 = (int)sVar5;
        if ((iVar6 <= iVar7) && (bVar13 != 0)) break;
        lVar11 = lVar11 + 1;
        if ((iVar6 <= iVar7) || (bVar13 == 0)) {
          pbVar2 = (byte *)(param_2 + lVar11);
          goto joined_r0x0013a9b4;
        }
      }
      puVar10 = puVar10 + 0x102;
      bVar1 = iVar12 < (int)uVar4;
      iVar12 = iVar12 + 1;
    } while (bVar1);
  }
  return 0xffff;
}


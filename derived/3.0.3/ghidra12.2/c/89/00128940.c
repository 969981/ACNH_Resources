
int FUN_00128940(long param_1,long param_2,short param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  byte bVar12;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x58);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  iVar5 = (int)(short)(param_3 << 1);
  if ((int)uVar3 < 1 || iVar5 < 1) {
LAB_00128960:
    iVar6 = 0;
LAB_001289dc:
    puVar9 = (uint *)((long)*(uint **)(param_1 + 0x10) + (ulong)(uVar3 * 0x408 - 0x408));
    uVar3 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    if (uVar3 >> 0x10 == 0 && (uVar3 & 0xffff) == 0) {
      iVar6 = iVar6 + 1;
      pbVar2 = (byte *)(param_2 + 1);
      sVar4 = (short)iVar6;
joined_r0x00128a24:
      if (sVar4 < iVar5) {
        lVar8 = (ulong)*pbVar2 * 4;
        iVar6 = iVar6 + 1;
        lVar10 = lVar8 + 4;
      }
      else {
        lVar8 = 0;
        lVar10 = 0x400;
      }
      uVar3 = *(uint *)((long)puVar9 + lVar8 + 4);
      uVar7 = *(uint *)((long)puVar9 + lVar10 + 4);
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      uVar7 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
      uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
      if (uVar3 < uVar7) {
        uVar7 = uVar7 - 1;
      }
      else if (uVar3 == uVar7) {
        return 0xffff;
      }
      *param_4 = uVar3;
      *param_5 = uVar7;
      return iVar6;
    }
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x10);
    iVar11 = 1;
    do {
      bVar12 = (byte)*puVar9;
      if (bVar12 == 0) goto LAB_00128960;
      lVar10 = 0;
      iVar6 = 0;
      while( true ) {
        if (bVar12 < *(byte *)(param_2 + lVar10)) {
          param_2 = param_2 + lVar10;
          goto LAB_001289dc;
        }
        if (*(byte *)(param_2 + lVar10) < bVar12) break;
        bVar12 = *(byte *)((long)puVar9 + lVar10 + 1);
        sVar4 = (short)iVar6 + 1;
        iVar6 = (int)sVar4;
        if ((iVar5 <= iVar6) && (bVar12 != 0)) break;
        lVar10 = lVar10 + 1;
        if ((iVar5 <= iVar6) || (bVar12 == 0)) {
          pbVar2 = (byte *)(param_2 + lVar10);
          goto joined_r0x00128a24;
        }
      }
      puVar9 = puVar9 + 0x102;
      bVar1 = iVar11 < (int)uVar3;
      iVar11 = iVar11 + 1;
    } while (bVar1);
  }
  return 0xffff;
}


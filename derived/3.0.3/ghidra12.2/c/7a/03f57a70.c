
void FUN_03f57a70(long param_1,ushort param_2,char param_3)

{
  short sVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  long lVar15;
  byte *pbVar16;
  int iVar17;
  
  if ((-0x4001 < (short)param_2) && ((param_2 & 0xf000) != 0x6000)) {
    return;
  }
  if (*(char *)(param_1 + 9) == '\0') {
    sVar1 = *(ushort *)(param_1 + 0xe) + 1;
    *(char *)(param_1 + (ulong)*(ushort *)(param_1 + 0xe) + 0x30) = param_3;
    *(short *)(param_1 + 0xe) = sVar1;
    if (*(short *)(param_1 + 0xc) != sVar1) {
      return;
    }
    cVar13 = *(char *)(param_1 + 0xb);
  }
  else {
    *(char *)(param_1 + 0xb) = param_3;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    switch(param_3) {
    case '\x01':
      *(undefined2 *)(param_1 + 0xc) = 0x20;
      return;
    default:
      *(undefined2 *)(param_1 + 0xc) = 0;
      cVar13 = param_3;
      break;
    case '\x03':
    case '\x05':
    case '\x06':
      *(undefined2 *)(param_1 + 0xc) = 1;
      return;
    case '\t':
      *(undefined2 *)(param_1 + 0xc) = 4;
      return;
    case '\r':
      *(undefined2 *)(param_1 + 0xc) = 2;
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  switch(cVar13) {
  case '\x01':
    lVar15 = 0;
    *(undefined2 *)(param_1 + 0x10) = 0x20;
    pbVar16 = (byte *)(param_1 + 0x241);
    do {
      pbVar2 = (byte *)(param_1 + 0x30 + lVar15);
      lVar15 = lVar15 + 4;
      bVar8 = *pbVar2;
      bVar9 = pbVar2[1];
      bVar7 = pbVar2[2];
      bVar6 = pbVar2[3];
      bVar12 = bVar7 >> 1;
      pbVar16[-0x10] =
           (bVar8 & 2) << 5 | (bVar8 >> 5) << 7 | bVar9 & 0x20 | (bVar9 >> 1 & 1) << 4 |
           bVar7 >> 2 & 8 | (bVar12 & 1) << 2 | bVar6 >> 4 & 2 | bVar6 >> 1 & 1;
      pbVar16[-0x11] =
           (bVar8 & 0xf0) << 3 | (bVar8 & 1) << 6 | (bVar9 >> 4 & 1) << 5 | (bVar9 & 1) << 4 |
           bVar12 & 8 | (bVar7 & 1) << 2 | bVar6 & 1 | bVar6 >> 3 & 2;
      pbVar16[-1] = (bVar8 & 4) << 4 | (bVar8 >> 6) << 7 | bVar9 >> 1 & 0x20 | (bVar9 >> 2 & 1) << 4
                    | bVar7 & 4 | bVar7 >> 3 & 8 | bVar6 >> 5 & 2 | bVar6 >> 2 & 1;
      *pbVar16 = bVar8 & 0x80 | (bVar8 >> 3 & 1) << 6 | bVar9 >> 2 & 0x20 | (bVar9 >> 3 & 1) << 4 |
                 bVar7 >> 4 & 8 | bVar12 & 4 | bVar6 >> 6 & 2 | bVar6 >> 3 & 1;
      pbVar16 = pbVar16 + 2;
    } while ((int)lVar15 != 0x20);
    return;
  default:
    goto switchD_03f57b44_caseD_2;
  case '\x03':
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x30) & 0xf;
    return;
  case '\x05':
    if (*(char *)(param_1 + 0x14) != '\0') {
      uVar10 = *(uint *)(param_1 + 0x18);
      *(undefined1 *)(param_1 + 0x14) = 0;
      *(short *)(param_1 + 0x10) = (short)uVar10;
      if ((int)uVar10 < 1) {
        return;
      }
      lVar15 = 0;
      do {
        bVar7 = *(byte *)((ulong)uVar10 + param_1 + 0x30 + lVar15);
        lVar3 = param_1 + lVar15;
        lVar15 = lVar15 + 1;
        bVar9 = *(byte *)(lVar3 + 0x30);
        bVar8 = bVar9;
        if (*(byte *)(param_1 + 0x1c) != bVar7 >> 4) {
          bVar8 = bVar7;
        }
        bVar9 = bVar9 & 0xf;
        if ((bVar7 & 0xf) != *(byte *)(param_1 + 0x1c)) {
          bVar9 = bVar7 & 0xf;
        }
        *(byte *)(lVar3 + 0x230) = bVar8 & 0xf0 | bVar9;
      } while ((int)lVar15 < *(int *)(param_1 + 0x18));
      return;
    }
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(uint *)(param_1 + 0x18) = (uint)*(byte *)(param_1 + 0x30);
    *(ushort *)(param_1 + 0xc) = (ushort)*(byte *)(param_1 + 0x30) << 1;
    *(undefined1 *)(param_1 + 0x14) = 1;
    break;
  case '\x06':
    if (*(char *)(param_1 + 0x1d) != '\0') {
      uVar10 = *(uint *)(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x1d) = 0;
      *(short *)(param_1 + 0x10) = (short)uVar10;
      if ((int)uVar10 < 1) {
        return;
      }
      lVar15 = 0;
      pbVar16 = (byte *)((ulong)uVar10 + param_1 + 0x22f);
      do {
        bVar8 = *(byte *)(param_1 + 0x30 + lVar15);
        lVar15 = lVar15 + 1;
        *pbVar16 = bVar8 >> 4 | bVar8 << 4;
        pbVar16 = pbVar16 + -1;
      } while (lVar15 < *(int *)(param_1 + 0x20));
      return;
    }
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(uint *)(param_1 + 0x20) = (uint)*(byte *)(param_1 + 0x30);
    *(ushort *)(param_1 + 0xc) = (ushort)*(byte *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    break;
  case '\t':
    *(undefined2 *)(param_1 + 0x10) = 4;
    *(uint *)(param_1 + 0x230) =
         (uint)*(ushort *)(param_1 + 0x32) * (uint)*(ushort *)(param_1 + 0x30);
    return;
  case '\r':
    if (*(char *)(param_1 + 0x24) != '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x24) = 0;
      *(short *)(param_1 + 0x10) = (short)iVar5;
      if (iVar5 < 1) {
        return;
      }
      iVar14 = 0;
      iVar17 = 0;
      pbVar16 = (byte *)(param_1 + 0x230);
      do {
        iVar4 = *(int *)(param_1 + 0x28);
        iVar14 = iVar14 + 2;
        uVar10 = 0;
        if (iVar4 != 0) {
          uVar10 = iVar17 / iVar4;
        }
        iVar17 = *(int *)(param_1 + 0x2c) + iVar17;
        uVar11 = 0;
        if (iVar4 != 0) {
          uVar11 = iVar17 / iVar4;
        }
        iVar17 = iVar17 + *(int *)(param_1 + 0x2c);
        bVar8 = *(byte *)(param_1 + 0x30 + (long)((int)uVar10 >> 1));
        bVar9 = *(byte *)(param_1 + 0x30 + (long)((int)uVar11 >> 1));
        bVar7 = bVar8 >> 4;
        if ((uVar10 & 1) != 0) {
          bVar7 = bVar8;
        }
        bVar8 = bVar9 >> 4;
        if ((uVar11 & 1) != 0) {
          bVar8 = bVar9 & 0xf;
        }
        *pbVar16 = bVar8 | bVar7 << 4;
        pbVar16 = pbVar16 + 1;
      } while (iVar14 < iVar5 * 2);
      return;
    }
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(uint *)(param_1 + 0x28) = (uint)*(byte *)(param_1 + 0x31);
    *(uint *)(param_1 + 0x2c) = (uint)*(byte *)(param_1 + 0x30);
    *(short *)(param_1 + 0xc) = (short)(*(byte *)(param_1 + 0x30) + 1 >> 1);
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
    return;
  }
switchD_03f57b44_caseD_2:
  return;
}


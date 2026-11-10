
undefined8 FUN_0011c940(long param_1,long *param_2,long param_3,ushort *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  ushort uVar10;
  long lVar11;
  ushort uVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar15;
  byte *pbVar16;
  
  lVar11 = *param_2;
  uVar2 = *(undefined1 *)(lVar11 + 0x32);
  uVar3 = *(undefined1 *)(lVar11 + 0x33);
  uVar15 = CONCAT11(*(undefined1 *)(lVar11 + 0x2a),*(undefined1 *)(lVar11 + 0x2b));
  if (uVar15 != 0) {
    uVar12 = *(ushort *)(param_3 + 0x42);
    uVar14 = 0;
    do {
      uVar10 = 0;
      if ((ushort)(uVar12 + 1) < uVar15) {
        uVar10 = uVar12 + 1;
      }
      uVar12 = uVar10;
      if ((*(byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x20) << 0x18 |
                               (ulong)*(byte *)(lVar11 + 0x21) << 0x10 |
                               (ulong)*(byte *)(lVar11 + 0x22) << 8 |
                              (ulong)*(byte *)(lVar11 + 0x23)) +
                    (ulong)CONCAT11(*(undefined1 *)(lVar11 + 0x2e),*(undefined1 *)(lVar11 + 0x2f)) *
                    (ulong)uVar12) & 3) != 0) goto LAB_0011c9c4;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar15);
    uVar12 = 0;
LAB_0011c9c4:
    if (uVar12 < uVar15) {
      pbVar16 = (byte *)(lVar11 + ((ulong)*(byte *)(lVar11 + 0x20) << 0x18 |
                                   (ulong)*(byte *)(lVar11 + 0x21) << 0x10 |
                                   (ulong)*(byte *)(lVar11 + 0x22) << 8 |
                                  (ulong)*(byte *)(lVar11 + 0x23)) +
                        (ulong)CONCAT11(*(undefined1 *)(lVar11 + 0x2e),
                                        *(undefined1 *)(lVar11 + 0x2f)) * (ulong)uVar12);
      *(ushort *)(param_1 + 0x60798) = uVar12;
      bVar4 = *pbVar16;
      *(char *)(param_1 + 0x6079e) = (char)(bVar4 & 3);
      *(short *)(param_1 + 0x6079a) =
           (short)(((uint)(*(ushort *)(pbVar16 + 1) >> 8) |
                   (*(ushort *)(pbVar16 + 1) & 0xff00ff) << 8) >> 7);
      *(short *)(param_1 + 0x6079c) =
           (short)(((uint)(*(ushort *)(pbVar16 + 3) >> 8) |
                   (*(ushort *)(pbVar16 + 3) & 0xff00ff) << 8) >> 7);
      bVar5 = pbVar16[2];
      *(byte *)(param_1 + 0x607a1) = bVar5 & 0x7f;
      *(byte *)(param_1 + 0x6079f) = bVar5 >> 1 & 0x3f;
      bVar5 = pbVar16[4];
      *(byte *)(param_1 + 0x607a2) = bVar5 & 0x7f;
      *(byte *)(param_1 + 0x607a0) = bVar5 >> 1 & 0x3f;
      *(byte *)(param_1 + 0x607a3) = *pbVar16 >> 6 & 1;
      if (1 < (bVar4 & 3) - 1) {
        return 0x9955;
      }
      *(ushort *)(param_3 + 0x42) = uVar12;
      uVar1 = (uint)CONCAT11(uVar2,uVar3);
      sVar6 = *(short *)(param_1 + 0x6079a);
      *(ushort *)(param_3 + 0x70) = *(ushort *)(param_3 + 0x70) & 0x7f | sVar6 << 7;
      sVar7 = *(short *)(param_1 + 0x6079c);
      *(ushort *)(param_3 + 0x72) = *(ushort *)(param_3 + 0x72) & 0x7f | sVar7 << 7;
      lVar11 = *param_2;
      iVar13 = uVar12 - uVar1;
      if (uVar12 < uVar1) {
        iVar13 = (uint)CONCAT11(*(undefined1 *)(lVar11 + 0x2a),*(undefined1 *)(lVar11 + 0x2b)) +
                 iVar13;
      }
      uVar1 = (*(uint *)(lVar11 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar11 + 8) & 0xff00ff) << 8;
      if ((uVar1 >> 0x10 | uVar1 << 0x10) == 0x80030000) {
        uVar15 = *param_4;
      }
      else {
        uVar1 = (uint)CONCAT11(*(undefined1 *)(lVar11 + 0x2a),*(undefined1 *)(lVar11 + 0x2b));
        if (uVar1 < 2) {
          uVar15 = param_4[1];
        }
        else {
          iVar9 = uVar1 - 1;
          sVar8 = 0;
          if (iVar9 != 0) {
            sVar8 = (short)((int)(((uint)param_4[1] - (uint)*param_4) * iVar13) / iVar9);
          }
          uVar15 = *param_4 + sVar8;
        }
      }
      if (999 < (short)uVar15) {
        uVar15 = 1000;
      }
      *(ushort *)(param_3 + 8) = uVar15 & ((ushort)((uint)(int)(short)uVar15 >> 0xf) ^ 0xffff);
      *(ushort *)(param_3 + 0x70) = sVar6 << 7 | *(byte *)(param_1 + 0x6079f) & 0x7f;
      bVar4 = *(byte *)(param_1 + 0x607a0);
      if (bVar4 == 0) {
        bVar4 = *(byte *)(param_1 + 0x6079f);
      }
      *(undefined1 *)(param_3 + 0x74) = 0;
      *(ushort *)(param_3 + 0x72) = sVar7 << 7 | bVar4 & 0x7f;
      return 1;
    }
  }
  return 0x9955;
}


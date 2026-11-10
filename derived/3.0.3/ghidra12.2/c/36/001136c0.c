
uint FUN_001136c0(long param_1,char *param_2,ushort *param_3,long param_4,ulong param_5)

{
  short sVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ushort uVar21;
  ulong uVar22;
  
  param_4 = param_4 + (param_5 & 0xffff) * 0x20;
  uVar20 = *(uint *)(param_4 + 0x10);
  uVar16 = (ulong)uVar20;
  if (uVar20 == 0xffffffff) {
    uVar20 = 0xffff;
  }
  else {
    pcVar3 = (char *)(param_1 + (ulong)*(uint *)(param_4 + 0x14));
    pcVar4 = pcVar3 + uVar16;
    if (pcVar4 < param_2) {
      lVar18 = *(long *)(param_3 + 4);
      bVar6 = *(byte *)(lVar18 + 0x32);
      uVar13 = (uint)*(byte *)(lVar18 + 0x33);
      if ((*(byte *)(lVar18 + 0x1c) & 3) != 0) {
        uVar13 = uVar13 + 1;
      }
      uVar14 = (uint)*param_3;
      uVar9 = 0x10 - *(byte *)(lVar18 + 0x2f);
      uVar10 = 0x10 - bVar6;
      uVar2 = (ulong)bVar6 + (ulong)*(byte *)(lVar18 + 0x30) + (ulong)*(byte *)(lVar18 + 0x31) +
              ((ulong)uVar13 & 0xff) + 1;
      uVar5 = uVar2 + *(byte *)(lVar18 + 0x2f);
      bVar11 = false;
      uVar17 = 0;
      uVar19 = 0xffff;
      pcVar12 = pcVar4;
      do {
        if (((char)*(byte *)(lVar18 + 0x1c) < '\0') && (*pcVar12 < '\0')) {
          bVar7 = *(byte *)(lVar18 + 0x35);
          uVar21 = (ushort)(0xffff >> (ulong)(0x10 - bVar7 & 0x1f)) &
                   CONCAT11(pcVar12[uVar5 >> 3],(pcVar12 + (uVar5 >> 3))[1]) >>
                   (ulong)((0x10 - ((uint)uVar5 & 7)) - (uint)bVar7 & 0x1f);
          uVar22 = (ulong)((uint)uVar5 + (uint)bVar7);
        }
        else {
          uVar21 = 0;
          uVar22 = uVar5;
        }
        sVar1 = uVar21 + (CONCAT11(pcVar12[uVar2 >> 3],(pcVar12 + (uVar2 >> 3))[1]) >>
                          (ulong)(uVar9 - ((uint)uVar2 & 7) & 0x1f) &
                         (ushort)(0xffff >> (ulong)(uVar9 & 0x1f))) +
                ((ushort)((int)uVar22 + 7U >> 3) & 0xff);
        if ((char *)(param_1 + (ulong)*(uint *)(param_4 + 0x18)) < pcVar12 + sVar1) {
          uVar15 = 0xffffffff;
          uVar20 = 0xffff;
          if (((uVar14 & 0xffff) == 0) || (bVar11)) goto LAB_00113964;
          uVar16 = 0;
          uVar14 = uVar14 - 1;
          bVar11 = true;
          pcVar12 = pcVar3;
        }
        else {
          uVar16 = (ulong)(uint)((int)uVar16 + (int)sVar1);
          pcVar12 = pcVar12 + sVar1;
        }
        if (((~uVar19 & 0xffff) != 0) && (pcVar12 == pcVar4)) {
          uVar15 = (uint)uVar17;
          uVar20 = uVar19;
          goto LAB_00113964;
        }
        if (bVar6 == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = CONCAT11(pcVar12[((ulong)uVar13 & 0xff) + 1 >> 3],
                            (pcVar12 + (((ulong)uVar13 & 0xff) + 1 >> 3))[1]) >>
                   ((ulong)(uVar10 - (uVar13 + 1 & 7)) & 0x3f) &
                   (ushort)(0xffffL >> ((ulong)uVar10 & 0x3f));
        }
        bVar7 = *(byte *)(lVar18 + ((ulong)*(byte *)(lVar18 + 0x26) << 0x18 |
                                    (ulong)*(byte *)(lVar18 + 0x27) << 0x10 |
                                    (ulong)*(byte *)(lVar18 + 0x28) << 8 |
                                   (ulong)*(byte *)(lVar18 + 0x29)) + (long)(short)uVar21);
        uVar20 = (uint)bVar7;
        uVar15 = (*(uint *)(lVar18 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar18 + 4) & 0xff00ff) << 8
        ;
        if ((uVar15 >> 0x10 | uVar15 << 0x10) != 0x30000) {
          iVar8 = ((uint)param_3[3] - (uint)param_3[2]) * (uint)bVar7;
          uVar20 = (uint)param_3[2] +
                   ((uint)((ulong)((long)iVar8 * 0x82082083) >> 0x25) - (iVar8 >> 0x1f));
        }
        uVar15 = (uint)uVar16;
        if ((uVar20 & 0xffff) == (uVar14 & 0xffff)) {
          uVar20 = uVar14;
          goto LAB_00113964;
        }
        if (((short)uVar20 < (short)uVar14) &&
           (((short)uVar19 < (short)uVar20 ||
            ((uVar15 < (uint)uVar17 && ((uVar20 & 0xffff) == (uVar19 & 0xffff))))))) {
          uVar17 = uVar16;
          uVar19 = uVar20;
        }
      } while (pcVar12 < param_2);
    }
    uVar15 = 0xffffffff;
    uVar20 = 0xffff;
LAB_00113964:
    *(uint *)(param_4 + 0x10) = uVar15;
  }
  return uVar20;
}



uint FUN_00112480(long *param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  undefined2 *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  undefined2 *puVar20;
  undefined2 auStack_a0 [56];
  
  puVar20 = auStack_a0;
  if (0x1f < *(byte *)((long)param_1 + 0x67)) {
    return 0x9b10;
  }
  lVar12 = param_1[2];
  pbVar17 = (byte *)(lVar12 + ((ulong)*(byte *)(lVar12 + 0x2b) << 0x18 |
                               (ulong)*(byte *)(lVar12 + 0x2c) << 0x10 |
                               (ulong)*(byte *)(lVar12 + 0x2d) << 8 |
                              (ulong)*(byte *)(lVar12 + 0x2e)) +
                    (ulong)(uint)((int)param_1[8] + *(int *)((long)param_1 + 0x44)));
  bVar8 = *(byte *)(lVar12 + 0x1c);
  bVar4 = *(byte *)(lVar12 + 0x33);
  bVar5 = bVar4;
  if ((bVar8 & 3) != 0) {
    bVar5 = bVar4 + 1;
  }
  uVar14 = (ulong)*(byte *)(lVar12 + 0x32) + (ulong)*(byte *)(lVar12 + 0x30) +
           (ulong)*(byte *)(lVar12 + 0x31) + (ulong)bVar5 + 1;
  uVar19 = uVar14 >> 3;
  bVar5 = (pbVar17 + uVar19)[1];
  bVar6 = pbVar17[uVar19];
  bVar7 = *(byte *)(lVar12 + 0x2f);
  uVar16 = (uint)uVar14;
  uVar11 = 0x10 - bVar7;
  iVar3 = uVar16 + bVar7;
  uVar16 = uVar11 - (uVar16 & 7);
  uVar18 = 0xffffL >> ((ulong)uVar11 & 0x3f);
  uVar14 = (ushort)(CONCAT11(bVar6,bVar5) >> ((ulong)uVar16 & 0x3f)) & uVar18;
  uVar13 = (uint)uVar14;
  iVar10 = iVar3;
  if (((char)bVar8 < '\0') && ((char)*pbVar17 < '\0')) {
    iVar10 = iVar3 + (uint)*(byte *)(lVar12 + 0x35);
  }
  if (uVar13 >> 1 == 0) {
    if (*(byte *)((long)param_1 + 0x67) < 0x10) {
      uVar11 = *(ushort *)(param_1 + 0xe) & 0x7f;
      if (uVar11 * 2 + 2 <= (param_3 & 0xffff)) {
        puVar20 = (undefined2 *)*param_1;
LAB_00112760:
        if ((*pbVar17 >> 6 & 1) != 0) {
          FUN_00114550(puVar20,param_2,uVar11);
          return uVar11;
        }
        if ((uVar11 & 0xffff) == 0) {
          param_2[0] = 0;
          param_2[1] = 0;
          return uVar11;
        }
        uVar16 = uVar11 - 1 & 0xffff;
        pbVar17 = (byte *)(ulong)uVar16;
        uVar13 = uVar11 & 3;
        if (2 < uVar16) {
          uVar16 = uVar11 - uVar13;
          do {
            *(undefined2 *)param_2 = *puVar20;
            *(undefined2 *)(param_2 + 2) = puVar20[1];
            *(undefined2 *)(param_2 + 4) = puVar20[2];
            puVar2 = puVar20 + 3;
            puVar20 = puVar20 + 4;
            pbVar17 = param_2 + 8;
            uVar16 = uVar16 - 4;
            *(undefined2 *)(param_2 + 6) = *puVar2;
            param_2 = pbVar17;
          } while ((uVar16 & 0xffff) != 0);
        }
        if ((uVar11 & 3) != 0) {
          do {
            uVar13 = uVar13 - 1;
            pbVar17 = param_2 + 2;
            *(undefined2 *)param_2 = *puVar20;
            param_2 = pbVar17;
            puVar20 = puVar20 + 1;
          } while ((uVar13 & 0xffff) != 0);
        }
        pbVar17[0] = 0;
        pbVar17[1] = 0;
        return uVar11;
      }
    }
    else {
      pbVar15 = pbVar17;
      if (-1 < (char)*pbVar17) {
        uVar9 = (ushort)(iVar3 + 7U >> 3) & 0xff;
        pbVar15 = pbVar17 + (short)((CONCAT11(bVar6,bVar5) >> (ulong)(uVar16 & 0x1f) &
                                    (ushort)uVar18) + uVar9);
        bVar5 = *pbVar15;
        while (-1 < (char)bVar5) {
          pbVar15 = pbVar15 + (short)((CONCAT11(pbVar15[uVar19],(pbVar15 + uVar19)[1]) >>
                                       (ulong)(uVar16 & 0x1f) & (ushort)uVar18) + uVar9);
          bVar5 = *pbVar15;
        }
      }
      iVar3 = (uint)bVar4 + (uint)*(byte *)(lVar12 + 0x32);
      if ((bVar8 & 3) != 0) {
        iVar3 = iVar3 + 1;
      }
      uVar19 = (ulong)(iVar3 + 1) + (ulong)*(byte *)(lVar12 + 0x30) +
               (ulong)*(byte *)(lVar12 + 0x31);
      uVar14 = bVar7 + uVar19;
      if ((char)bVar8 < '\0') {
        uVar1 = uVar14 >> 3;
        bVar5 = *(byte *)(lVar12 + 0x35);
        uVar16 = (uint)uVar14;
        uVar14 = (ulong)(uVar16 + bVar5);
        uVar16 = (uint)(ushort)(CONCAT11(pbVar15[uVar1],(pbVar15 + uVar1)[1]) >>
                               (ulong)((0x10 - (uVar16 & 7)) - (uint)bVar5 & 0x1f)) &
                 0xffffU >> (ulong)(0x10 - bVar5 & 0x1f);
      }
      else {
        uVar16 = 0;
      }
      uVar11 = FUN_00112820(lVar12,pbVar15,auStack_a0,
                            ((uint)(ushort)(CONCAT11(pbVar15[uVar19 >> 3],
                                                     (pbVar15 + (uVar19 >> 3))[1]) >>
                                           (ulong)(uVar11 - ((uint)uVar19 & 7) & 0x1f)) &
                            (uint)uVar18) + ((int)uVar14 + 7U >> 3 & 0xff),uVar16,param_3);
      if ((uVar11 & 0xffff) * 2 + 2 <= (param_3 & 0xffff)) goto LAB_00112760;
    }
  }
  else {
    uVar11 = uVar13 >> 1;
    if (uVar14 + 2 <= (ulong)(ushort)param_3) {
      pbVar17 = pbVar17 + (iVar10 + 7U >> 3 & 0xff);
      uVar16 = uVar13 >> 1 & 1;
      if (uVar11 != 1) {
        uVar13 = uVar11 - uVar16;
        do {
          *param_2 = *pbVar17;
          param_2[1] = pbVar17[1];
          param_2[2] = pbVar17[2];
          pbVar15 = pbVar17 + 3;
          uVar13 = uVar13 - 2;
          pbVar17 = pbVar17 + 4;
          param_2[3] = *pbVar15;
          param_2 = param_2 + 4;
        } while ((uVar13 & 0xffff) != 0);
      }
      if (uVar16 != 0) {
        *param_2 = *pbVar17;
        param_2[1] = pbVar17[1];
        param_2 = param_2 + 2;
      }
      param_2[0] = 0;
      param_2[1] = 0;
      return uVar11;
    }
  }
  return 0x9410;
}


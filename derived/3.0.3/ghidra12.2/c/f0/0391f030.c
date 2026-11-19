
void FUN_0391f030(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  short sVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 uVar20;
  byte *pbVar21;
  int iVar22;
  long lVar23;
  
  sVar11 = DAT_05ae7b28;
  lVar23 = (long)DAT_05ae7b28;
  iVar22 = (int)DAT_05ae7b28;
  DAT_05ae7b28 = DAT_05ae7b28 + 1;
  DAT_05ae7c2c = (int)DAT_05ae7b28;
  lVar13 = (long)iVar22 * 0x28;
  (**(code **)(*param_1 + 0x18))();
  (&DAT_05ae7c30)[(long)iVar22 * 5] = param_1[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar14 = param_2[1];
  *(undefined4 *)(&DAT_05ae7c48 + lVar13) = param_4;
  *(int *)(&DAT_05ae7c4c + lVar13) = (int)sVar11;
  *(undefined4 *)(&DAT_05ae7c50 + lVar13) = param_5;
  *(short *)(&DAT_05ae7b2a + lVar23 * 2) = sVar11;
  *(long *)(&DAT_05ae7c38 + lVar13) = lVar14;
  *(undefined8 *)(&DAT_05ae7c40 + lVar13) = param_3;
  if (0 < lVar23) {
    uVar15 = (ulong)(uint)(int)sVar11;
    do {
      lVar13 = uVar15 * 0x28;
      puVar16 = &DAT_05ae7c30 + uVar15 * 5;
      uVar18 = uVar15 - 1 & 0xffffffff;
      lVar14 = uVar18 * 0x28;
      puVar17 = &DAT_05ae7c30 + uVar18 * 5;
      if (*(int *)(&DAT_05ae7c48 + lVar14) <= *(int *)(&DAT_05ae7c48 + lVar13)) {
        if (*(int *)(&DAT_05ae7c48 + lVar13) != *(int *)(&DAT_05ae7c48 + lVar14)) {
          return;
        }
        if ((byte *)*puVar16 == (byte *)*puVar17) {
          return;
        }
        pbVar19 = (byte *)*puVar16;
        pbVar21 = (byte *)*puVar17;
        lVar23 = 0x7ffff;
        while( true ) {
          bVar10 = *pbVar19;
          if (bVar10 != *pbVar21) break;
          if (bVar10 == 0) {
            return;
          }
          bVar1 = lVar23 == 0;
          pbVar19 = pbVar19 + 1;
          pbVar21 = pbVar21 + 1;
          lVar23 = lVar23 + -1;
          if (bVar1) {
            return;
          }
        }
        if (*pbVar21 <= bVar10) {
          return;
        }
      }
      uVar2 = *(undefined8 *)(&DAT_05ae7c40 + lVar14);
      uVar6 = *(undefined8 *)(&DAT_05ae7c48 + lVar14);
      iVar22 = *(int *)(&DAT_05ae7c4c + uVar18 * 0x28);
      uVar20 = *(undefined8 *)(&DAT_05ae7c50 + lVar14);
      uVar3 = *puVar17;
      uVar7 = *(undefined8 *)(&DAT_05ae7c38 + lVar14);
      iVar12 = *(int *)(&DAT_05ae7c4c + uVar15 * 0x28);
      sVar11 = *(short *)(&DAT_05ae7b2a + (long)iVar12 * 2);
      *puVar17 = *puVar16;
      uVar4 = *(undefined8 *)(&DAT_05ae7c38 + lVar13);
      uVar8 = *(undefined8 *)(&DAT_05ae7c40 + lVar13);
      *(short *)(&DAT_05ae7b2a + (long)iVar12 * 2) = sVar11 + -1;
      uVar5 = *(undefined8 *)(&DAT_05ae7c48 + lVar13);
      uVar9 = *(undefined8 *)(&DAT_05ae7c50 + lVar13);
      *(undefined8 *)(&DAT_05ae7c38 + lVar14) = uVar4;
      *(undefined8 *)(&DAT_05ae7c40 + lVar14) = uVar8;
      *(undefined8 *)(&DAT_05ae7c48 + lVar14) = uVar5;
      *(undefined8 *)(&DAT_05ae7c50 + lVar14) = uVar9;
      sVar11 = *(short *)(&DAT_05ae7b2a + (long)iVar22 * 2);
      *(undefined8 *)(&DAT_05ae7c50 + lVar13) = uVar20;
      *(short *)(&DAT_05ae7b2a + (long)iVar22 * 2) = sVar11 + 1;
      *(undefined8 *)(&DAT_05ae7c40 + lVar13) = uVar2;
      *(undefined8 *)(&DAT_05ae7c48 + lVar13) = uVar6;
      *puVar16 = uVar3;
      *(undefined8 *)(&DAT_05ae7c38 + lVar13) = uVar7;
      bVar1 = 1 < (long)uVar15;
      uVar15 = uVar15 - 1;
    } while (bVar1);
  }
  return;
}


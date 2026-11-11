
bool FUN_004d0f70(undefined8 *param_1)

{
  byte bVar1;
  byte bVar7;
  int iVar2;
  uint uVar3;
  byte bVar5;
  byte bVar6;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  undefined8 uVar4;
  byte bVar12;
  int iVar9;
  byte bVar13;
  byte bVar19;
  int iVar14;
  uint uVar15;
  byte bVar17;
  byte bVar18;
  byte bVar20;
  byte bVar22;
  byte bVar23;
  undefined8 uVar16;
  byte bVar24;
  int iVar21;
  int iVar25;
  int iVar26;
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  undefined8 uVar33;
  int iVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  uVar33 = param_1[1];
  uVar27 = *param_1;
  uVar36 = param_1[3];
  uVar35 = param_1[2];
  uVar16 = *(undefined8 *)(PTR_DAT_04c1eb10 + 8);
  uVar4 = *(undefined8 *)PTR_DAT_04c1eb10;
  bVar1 = (byte)uVar4;
  bVar5 = (byte)((ulong)uVar4 >> 8);
  bVar6 = (byte)((ulong)uVar4 >> 0x10);
  bVar7 = (byte)((ulong)uVar4 >> 0x18);
  iVar14 = CONCAT13(bVar7 & (byte)((ulong)uVar27 >> 0x18),
                    CONCAT12(bVar6 & (byte)((ulong)uVar27 >> 0x10),
                             CONCAT11(bVar5 & (byte)((ulong)uVar27 >> 8),bVar1 & (byte)uVar27)));
  bVar8 = (byte)((ulong)uVar4 >> 0x20);
  bVar10 = (byte)((ulong)uVar4 >> 0x28);
  bVar11 = (byte)((ulong)uVar4 >> 0x30);
  bVar12 = (byte)((ulong)uVar4 >> 0x38);
  bVar13 = (byte)uVar16;
  bVar17 = (byte)((ulong)uVar16 >> 8);
  bVar18 = (byte)((ulong)uVar16 >> 0x10);
  bVar19 = (byte)((ulong)uVar16 >> 0x18);
  iVar26 = CONCAT13(bVar19 & (byte)((ulong)uVar33 >> 0x18),
                    CONCAT12(bVar18 & (byte)((ulong)uVar33 >> 0x10),
                             CONCAT11(bVar17 & (byte)((ulong)uVar33 >> 8),bVar13 & (byte)uVar33)));
  bVar20 = (byte)((ulong)uVar16 >> 0x20);
  bVar22 = (byte)((ulong)uVar16 >> 0x28);
  bVar23 = (byte)((ulong)uVar16 >> 0x30);
  bVar24 = (byte)((ulong)uVar16 >> 0x38);
  iVar2 = (int)uVar4;
  iVar25 = -(uint)(iVar14 == iVar2);
  iVar9 = (int)((ulong)uVar4 >> 0x20);
  iVar28 = -(uint)((int)(CONCAT17(bVar12 & (byte)((ulong)uVar27 >> 0x38),
                                  CONCAT16(bVar11 & (byte)((ulong)uVar27 >> 0x30),
                                           CONCAT15(bVar10 & (byte)((ulong)uVar27 >> 0x28),
                                                    CONCAT14(bVar8 & (byte)((ulong)uVar27 >> 0x20),
                                                             iVar14)))) >> 0x20) == iVar9);
  iVar14 = (int)uVar16;
  iVar29 = -(uint)(iVar26 == iVar14);
  iVar21 = (int)((ulong)uVar16 >> 0x20);
  iVar34 = -(uint)((int)(CONCAT17(bVar24 & (byte)((ulong)uVar33 >> 0x38),
                                  CONCAT16(bVar23 & (byte)((ulong)uVar33 >> 0x30),
                                           CONCAT15(bVar22 & (byte)((ulong)uVar33 >> 0x28),
                                                    CONCAT14(bVar20 & (byte)((ulong)uVar33 >> 0x20),
                                                             iVar26)))) >> 0x20) == iVar21);
  uVar3 = CONCAT13(~(byte)((uint)iVar25 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar25 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar25 >> 8),~(byte)iVar25)));
  uVar30 = CONCAT13(~(byte)((uint)iVar29 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar29 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar29 >> 8),~(byte)iVar29)));
  iVar25 = CONCAT13((byte)((ulong)uVar35 >> 0x18) & bVar7,
                    CONCAT12((byte)((ulong)uVar35 >> 0x10) & bVar6,
                             CONCAT11((byte)((ulong)uVar35 >> 8) & bVar5,(byte)uVar35 & bVar1)));
  iVar29 = CONCAT13((byte)((ulong)uVar36 >> 0x18) & bVar19,
                    CONCAT12((byte)((ulong)uVar36 >> 0x10) & bVar18,
                             CONCAT11((byte)((ulong)uVar36 >> 8) & bVar17,(byte)uVar36 & bVar13)));
  iVar26 = -(uint)(iVar25 == iVar2);
  iVar25 = -(uint)((int)(CONCAT17((byte)((ulong)uVar35 >> 0x38) & bVar12,
                                  CONCAT16((byte)((ulong)uVar35 >> 0x30) & bVar11,
                                           CONCAT15((byte)((ulong)uVar35 >> 0x28) & bVar10,
                                                    CONCAT14((byte)((ulong)uVar35 >> 0x20) & bVar8,
                                                             iVar25)))) >> 0x20) == iVar9);
  iVar31 = -(uint)(iVar29 == iVar14);
  iVar29 = -(uint)((int)(CONCAT17((byte)((ulong)uVar36 >> 0x38) & bVar24,
                                  CONCAT16((byte)((ulong)uVar36 >> 0x30) & bVar23,
                                           CONCAT15((byte)((ulong)uVar36 >> 0x28) & bVar22,
                                                    CONCAT14((byte)((ulong)uVar36 >> 0x20) & bVar20,
                                                             iVar29)))) >> 0x20) == iVar21);
  uVar15 = CONCAT13(~(byte)((uint)iVar26 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar26 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar26 >> 8),~(byte)iVar26)));
  uVar32 = CONCAT13(~(byte)((uint)iVar31 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar31 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar31 >> 8),~(byte)iVar31)));
  if ((uVar3 & (uint)(CONCAT17(~(byte)((uint)iVar28 >> 0x18),
                               CONCAT16(~(byte)((uint)iVar28 >> 0x10),
                                        CONCAT15(~(byte)((uint)iVar28 >> 8),
                                                 CONCAT14(~(byte)iVar28,uVar3)))) >> 0x20) & uVar30
      & (uint)(CONCAT17(~(byte)((uint)iVar34 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar34 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar34 >> 8),CONCAT14(~(byte)iVar34,uVar30))
                                )) >> 0x20)) == 0 ||
      (uVar15 & (uint)(CONCAT17(~(byte)((uint)iVar25 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar25 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar25 >> 8),
                                                  CONCAT14(~(byte)iVar25,uVar15)))) >> 0x20) &
       uVar32 & (uint)(CONCAT17(~(byte)((uint)iVar29 >> 0x18),
                                CONCAT16(~(byte)((uint)iVar29 >> 0x10),
                                         CONCAT15(~(byte)((uint)iVar29 >> 8),
                                                  CONCAT14(~(byte)iVar29,uVar32)))) >> 0x20)) == 0)
  {
    return false;
  }
  uVar16 = param_1[5];
  uVar4 = param_1[4];
  uVar33 = param_1[7];
  uVar27 = param_1[6];
  iVar28 = CONCAT13((byte)((ulong)uVar27 >> 0x18) & bVar7,
                    CONCAT12((byte)((ulong)uVar27 >> 0x10) & bVar6,
                             CONCAT11((byte)((ulong)uVar27 >> 8) & bVar5,(byte)uVar27 & bVar1)));
  iVar31 = CONCAT13((byte)((ulong)uVar33 >> 0x18) & bVar19,
                    CONCAT12((byte)((ulong)uVar33 >> 0x10) & bVar18,
                             CONCAT11((byte)((ulong)uVar33 >> 8) & bVar17,(byte)uVar33 & bVar13)));
  iVar25 = CONCAT13((byte)((ulong)uVar4 >> 0x18) & bVar7,
                    CONCAT12((byte)((ulong)uVar4 >> 0x10) & bVar6,
                             CONCAT11((byte)((ulong)uVar4 >> 8) & bVar5,(byte)uVar4 & bVar1)));
  iVar26 = CONCAT13((byte)((ulong)uVar16 >> 0x18) & bVar19,
                    CONCAT12((byte)((ulong)uVar16 >> 0x10) & bVar18,
                             CONCAT11((byte)((ulong)uVar16 >> 8) & bVar17,(byte)uVar16 & bVar13)));
  iVar29 = -(uint)(iVar28 == iVar2);
  iVar28 = -(uint)((int)(CONCAT17((byte)((ulong)uVar27 >> 0x38) & bVar12,
                                  CONCAT16((byte)((ulong)uVar27 >> 0x30) & bVar11,
                                           CONCAT15((byte)((ulong)uVar27 >> 0x28) & bVar10,
                                                    CONCAT14((byte)((ulong)uVar27 >> 0x20) & bVar8,
                                                             iVar28)))) >> 0x20) == iVar9);
  iVar34 = -(uint)(iVar31 == iVar14);
  iVar31 = -(uint)((int)(CONCAT17((byte)((ulong)uVar33 >> 0x38) & bVar24,
                                  CONCAT16((byte)((ulong)uVar33 >> 0x30) & bVar23,
                                           CONCAT15((byte)((ulong)uVar33 >> 0x28) & bVar22,
                                                    CONCAT14((byte)((ulong)uVar33 >> 0x20) & bVar20,
                                                             iVar31)))) >> 0x20) == iVar21);
  iVar2 = -(uint)(iVar25 == iVar2);
  iVar9 = -(uint)((int)(CONCAT17((byte)((ulong)uVar4 >> 0x38) & bVar12,
                                 CONCAT16((byte)((ulong)uVar4 >> 0x30) & bVar11,
                                          CONCAT15((byte)((ulong)uVar4 >> 0x28) & bVar10,
                                                   CONCAT14((byte)((ulong)uVar4 >> 0x20) & bVar8,
                                                            iVar25)))) >> 0x20) == iVar9);
  iVar14 = -(uint)(iVar26 == iVar14);
  iVar21 = -(uint)((int)(CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar24,
                                  CONCAT16((byte)((ulong)uVar16 >> 0x30) & bVar23,
                                           CONCAT15((byte)((ulong)uVar16 >> 0x28) & bVar22,
                                                    CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar20,
                                                             iVar26)))) >> 0x20) == iVar21);
  uVar30 = CONCAT13(~(byte)((uint)iVar29 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar29 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar29 >> 8),~(byte)iVar29)));
  uVar32 = CONCAT13(~(byte)((uint)iVar34 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar34 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar34 >> 8),~(byte)iVar34)));
  uVar3 = CONCAT13(~(byte)((uint)iVar2 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar2 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar2 >> 8),~(byte)iVar2)));
  uVar15 = CONCAT13(~(byte)((uint)iVar14 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar14 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar14 >> 8),~(byte)iVar14)));
  return (uVar3 & (uint)(CONCAT17(~(byte)((uint)iVar9 >> 0x18),
                                  CONCAT16(~(byte)((uint)iVar9 >> 0x10),
                                           CONCAT15(~(byte)((uint)iVar9 >> 8),
                                                    CONCAT14(~(byte)iVar9,uVar3)))) >> 0x20) &
          uVar15 & (uint)(CONCAT17(~(byte)((uint)iVar21 >> 0x18),
                                   CONCAT16(~(byte)((uint)iVar21 >> 0x10),
                                            CONCAT15(~(byte)((uint)iVar21 >> 8),
                                                     CONCAT14(~(byte)iVar21,uVar15)))) >> 0x20)) !=
         0 && (uVar30 & (uint)(CONCAT17(~(byte)((uint)iVar28 >> 0x18),
                                        CONCAT16(~(byte)((uint)iVar28 >> 0x10),
                                                 CONCAT15(~(byte)((uint)iVar28 >> 8),
                                                          CONCAT14(~(byte)iVar28,uVar30)))) >> 0x20)
               & uVar32 &
              (uint)(CONCAT17(~(byte)((uint)iVar31 >> 0x18),
                              CONCAT16(~(byte)((uint)iVar31 >> 0x10),
                                       CONCAT15(~(byte)((uint)iVar31 >> 8),
                                                CONCAT14(~(byte)iVar31,uVar32)))) >> 0x20)) != 0;
}



bool FUN_004d1aa0(undefined8 *param_1)

{
  byte bVar6;
  int iVar1;
  uint uVar2;
  byte bVar4;
  byte bVar5;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  undefined8 uVar3;
  byte bVar11;
  int iVar8;
  byte bVar16;
  int iVar12;
  byte bVar14;
  byte bVar15;
  undefined8 uVar13;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  
  uVar18 = param_1[1];
  uVar17 = *param_1;
  uVar20 = param_1[3];
  uVar19 = param_1[2];
  uVar13 = *(undefined8 *)(PTR_DAT_04c1eb10 + 8);
  uVar3 = *(undefined8 *)PTR_DAT_04c1eb10;
  bVar4 = (byte)((ulong)uVar3 >> 8);
  bVar5 = (byte)((ulong)uVar3 >> 0x10);
  bVar6 = (byte)((ulong)uVar3 >> 0x18);
  bVar7 = (byte)((ulong)uVar3 >> 0x20);
  bVar9 = (byte)((ulong)uVar3 >> 0x28);
  bVar10 = (byte)((ulong)uVar3 >> 0x30);
  bVar11 = (byte)((ulong)uVar3 >> 0x38);
  bVar14 = (byte)((ulong)uVar13 >> 8);
  bVar15 = (byte)((ulong)uVar13 >> 0x10);
  bVar16 = (byte)((ulong)uVar13 >> 0x18);
  iVar21 = -(uint)(CONCAT13(bVar6 & (byte)((ulong)uVar17 >> 0x18),
                            CONCAT12(bVar5 & (byte)((ulong)uVar17 >> 0x10),
                                     CONCAT11(bVar4 & (byte)((ulong)uVar17 >> 8),
                                              (byte)uVar3 & (byte)uVar17))) == (int)uVar3);
  iVar8 = (int)((ulong)uVar3 >> 0x20);
  iVar22 = -(uint)(CONCAT13(bVar11 & (byte)((ulong)uVar17 >> 0x38),
                            CONCAT12(bVar10 & (byte)((ulong)uVar17 >> 0x30),
                                     CONCAT11(bVar9 & (byte)((ulong)uVar17 >> 0x28),
                                              bVar7 & (byte)((ulong)uVar17 >> 0x20)))) == iVar8);
  iVar23 = -(uint)(CONCAT13(bVar16 & (byte)((ulong)uVar18 >> 0x18),
                            CONCAT12(bVar15 & (byte)((ulong)uVar18 >> 0x10),
                                     CONCAT11(bVar14 & (byte)((ulong)uVar18 >> 8),
                                              (byte)uVar13 & (byte)uVar18))) == (int)uVar13);
  iVar1 = -(uint)(CONCAT13((byte)((ulong)uVar19 >> 0x18) & bVar6,
                           CONCAT12((byte)((ulong)uVar19 >> 0x10) & bVar5,
                                    CONCAT11((byte)((ulong)uVar19 >> 8) & bVar4,
                                             (byte)uVar19 & (byte)uVar3))) == (int)uVar3);
  iVar8 = -(uint)(CONCAT13((byte)((ulong)uVar19 >> 0x38) & bVar11,
                           CONCAT12((byte)((ulong)uVar19 >> 0x30) & bVar10,
                                    CONCAT11((byte)((ulong)uVar19 >> 0x28) & bVar9,
                                             (byte)((ulong)uVar19 >> 0x20) & bVar7))) == iVar8);
  iVar12 = -(uint)(CONCAT13((byte)((ulong)uVar20 >> 0x18) & bVar16,
                            CONCAT12((byte)((ulong)uVar20 >> 0x10) & bVar15,
                                     CONCAT11((byte)((ulong)uVar20 >> 8) & bVar14,
                                              (byte)uVar20 & (byte)uVar13))) == (int)uVar13);
  uVar2 = CONCAT13(~(byte)((uint)iVar1 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar1 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar1 >> 8),~(byte)iVar1)));
  return ((CONCAT13(~(byte)((uint)iVar21 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar21 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar21 >> 8),~(byte)iVar21))) &
           CONCAT13(~(byte)((uint)iVar22 >> 0x18),
                    CONCAT12(~(byte)((uint)iVar22 >> 0x10),
                             CONCAT11(~(byte)((uint)iVar22 >> 8),~(byte)iVar22))) &
          CONCAT13(~(byte)((uint)iVar23 >> 0x18),
                   CONCAT12(~(byte)((uint)iVar23 >> 0x10),
                            CONCAT11(~(byte)((uint)iVar23 >> 8),~(byte)iVar23)))) != 0 &&
         (uVar2 & (uint)(CONCAT17(~(byte)((uint)iVar8 >> 0x18),
                                  CONCAT16(~(byte)((uint)iVar8 >> 0x10),
                                           CONCAT15(~(byte)((uint)iVar8 >> 8),
                                                    CONCAT14(~(byte)iVar8,uVar2)))) >> 0x20) &
         CONCAT13(~(byte)((uint)iVar12 >> 0x18),
                  CONCAT12(~(byte)((uint)iVar12 >> 0x10),
                           CONCAT11(~(byte)((uint)iVar12 >> 8),~(byte)iVar12)))) != 0) &&
         ((float)uVar18 <= (float)uVar20 &&
         ((float)uVar17 <= (float)uVar19 &&
         (float)((ulong)uVar17 >> 0x20) <= (float)((ulong)uVar19 >> 0x20)));
}


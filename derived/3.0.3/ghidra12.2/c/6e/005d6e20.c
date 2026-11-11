
void FUN_005d6e20(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  
  iVar5 = *(int *)(param_2 + 0x30);
  if (0 < iVar5) {
    uVar10 = *param_3;
    lVar6 = *(long *)(param_1 + 0x20);
    pfVar7 = (float *)(*(long *)(param_2 + 0x28) + 4);
    do {
      lVar9 = (ulong)*(ushort *)((long)pfVar7 + -2) * 0x10;
      lVar8 = (ulong)*(ushort *)(pfVar7 + -1) * 0x10;
      puVar1 = (undefined8 *)(lVar6 + lVar9);
      uVar20 = *puVar1;
      puVar2 = (undefined8 *)(lVar6 + lVar8);
      uVar23 = *puVar2;
      fVar19 = (float)uVar20 - (float)uVar23;
      fVar21 = (float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar23 >> 0x20);
      fVar22 = (float)puVar1[1] - (float)puVar2[1];
      fVar3 = *pfVar7 * *pfVar7;
      fVar19 = fVar19 * fVar19;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      iVar4 = -(uint)((float)uVar10 * fVar3 < fVar19 + fVar21 + fVar22);
      bVar11 = (byte)iVar4;
      bVar12 = (byte)((uint)iVar4 >> 8);
      bVar13 = (byte)((uint)iVar4 >> 0x10);
      bVar14 = (byte)((uint)iVar4 >> 0x18);
      iVar4 = -(uint)((float)((ulong)uVar10 >> 0x20) * fVar3 < fVar19 + fVar21 + fVar22);
      bVar15 = (byte)iVar4;
      bVar16 = (byte)((uint)iVar4 >> 8);
      bVar17 = (byte)((uint)iVar4 >> 0x10);
      bVar18 = (byte)((uint)iVar4 >> 0x18);
      uVar23 = ((undefined8 *)(param_4 + lVar8))[1];
      uVar20 = *(undefined8 *)(param_4 + lVar8);
      ((undefined8 *)(param_4 + lVar8))[1] =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~bVar18,
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~bVar17,
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) & ~bVar16,
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) & ~bVar15,
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) & ~bVar14,
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                                 ~bVar13,CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) & ~bVar12,(byte)uVar23 & ~bVar11)))))
                            ));
      *(undefined8 *)(param_4 + lVar8) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) & ~bVar18,
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) & ~bVar17,
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) & ~bVar16,
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) & ~bVar15,
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) & ~bVar14,
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                 ~bVar13,CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) & ~bVar12,(byte)uVar20 & ~bVar11)))))
                            ));
      uVar23 = ((undefined8 *)(param_4 + lVar9))[1];
      uVar20 = *(undefined8 *)(param_4 + lVar9);
      iVar5 = iVar5 + -1;
      ((undefined8 *)(param_4 + lVar9))[1] =
           CONCAT17((byte)((ulong)uVar23 >> 0x38) & ~bVar18,
                    CONCAT16((byte)((ulong)uVar23 >> 0x30) & ~bVar17,
                             CONCAT15((byte)((ulong)uVar23 >> 0x28) & ~bVar16,
                                      CONCAT14((byte)((ulong)uVar23 >> 0x20) & ~bVar15,
                                               CONCAT13((byte)((ulong)uVar23 >> 0x18) & ~bVar14,
                                                        CONCAT12((byte)((ulong)uVar23 >> 0x10) &
                                                                 ~bVar13,CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) & ~bVar12,(byte)uVar23 & ~bVar11)))))
                            ));
      *(undefined8 *)(param_4 + lVar9) =
           CONCAT17((byte)((ulong)uVar20 >> 0x38) & ~bVar18,
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) & ~bVar17,
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) & ~bVar16,
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) & ~bVar15,
                                               CONCAT13((byte)((ulong)uVar20 >> 0x18) & ~bVar14,
                                                        CONCAT12((byte)((ulong)uVar20 >> 0x10) &
                                                                 ~bVar13,CONCAT11((byte)((ulong)
                                                  uVar20 >> 8) & ~bVar12,(byte)uVar20 & ~bVar11)))))
                            ));
      pfVar7 = pfVar7 + 3;
    } while (iVar5 != 0);
  }
  return;
}


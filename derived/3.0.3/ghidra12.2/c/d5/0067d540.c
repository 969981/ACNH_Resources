
undefined1 * thunk_FUN_0067d550(long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint3 uVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 *puVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  undefined2 auStack_70 [4];
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  
  lVar18 = 0;
  puVar17 = (undefined1 *)(param_1 + 0x10);
  do {
    puVar17 = puVar17 + (*(byte *)(param_1 + lVar18) >> 4);
    puVar2 = puVar17 + ((ulong)*(byte *)(param_1 + lVar18) & 0xf);
    uVar10 = CONCAT12(puVar17[-2],CONCAT11(puVar17[-1],*puVar17));
    iVar11 = CONCAT13(puVar17[-3],uVar10);
    uVar3 = uVar10 & 0xf;
    uVar6 = 0xe - uVar3;
    uVar1 = uVar3 * 2 + 4;
    uVar5 = (int)(short)(((iVar11 << 0xe) >> 0x10 & 0xfffffffcU) << (ulong)(uVar6 & 0x1f)) >>
            (uVar6 & 0x1f);
    uVar4 = CONCAT13(puVar17[-0xb],CONCAT12(puVar17[-10],CONCAT11(puVar17[-9],puVar17[-8])));
    sVar13 = (short)uVar5;
    sVar16 = (short)((int)(short)((int)(short)((iVar11 >> uVar3 + 4) << 2) << (ulong)(uVar6 & 0x1f))
                    >> (uVar6 & 0x1f)) + sVar13;
    uVar22 = (ulong)(uVar4 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar3 * -2 + 0x3c) & 0x3f) |
             CONCAT17(puVar17[-7],
                      CONCAT16(puVar17[-6],CONCAT15(puVar17[-5],CONCAT14(puVar17[-4],iVar11)))) >>
             uVar1;
    uVar20 = (uint)uVar22;
    uVar3 = uVar20 & 0xf;
    uVar6 = 0xe - uVar3;
    uVar19 = CONCAT17(puVar17[-0xf],
                      CONCAT16(puVar17[-0xe],CONCAT15(puVar17[-0xd],CONCAT14(puVar17[-0xc],uVar4))))
             >> uVar1;
    uVar1 = uVar3 * 2 + 4;
    sVar15 = sVar16 + (short)((int)(short)(((int)(uVar20 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar6 & 0x1f)) >> (uVar6 & 0x1f));
    sVar16 = sVar16 + sVar13;
    sVar14 = sVar15 + (short)((int)(short)((int)(short)(((int)uVar20 >> uVar3 + 4) << 2) <<
                                          (ulong)(uVar6 & 0x1f)) >> (uVar6 & 0x1f));
    sVar15 = sVar15 + sVar16;
    sVar16 = sVar16 + sVar13;
    uVar22 = (uVar19 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar3 * -2 + 0x3c) & 0x3f) | uVar22 >> uVar1;
    uVar21 = (uint)uVar22;
    uVar6 = uVar21 & 0xf;
    uVar7 = 0xe - uVar6;
    uVar3 = uVar6 * 2 + 4;
    uVar20 = (uint)((uVar19 >> uVar1 & (ulong)(~(-1 << (ulong)(uVar3 & 0x1e)) - (uVar3 >> 5))) <<
                   ((ulong)(uVar6 * -2 + 0x3c) & 0x3f)) | (uint)(uVar22 >> uVar3);
    uVar8 = 0xe - (uVar20 & 0xf);
    uVar10 = CONCAT12(puVar2[-1],CONCAT11(*puVar2,puVar2[1]));
    iVar11 = CONCAT13(puVar2[-2],uVar10);
    uVar4 = uVar10 & 0xf;
    uVar9 = 0xe - uVar4;
    uVar1 = uVar4 * 2 + 4;
    uVar3 = CONCAT13(puVar2[-10],CONCAT12(puVar2[-9],CONCAT11(puVar2[-8],puVar2[-7])));
    auStack_70[0] = (short)(uVar5 >> 2);
    sVar13 = sVar14 + (short)((int)(short)(((int)(uVar21 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar7 & 0x1f)) >> (uVar7 & 0x1f));
    sVar14 = sVar14 + sVar15;
    sVar15 = sVar15 + sVar16;
    auStack_70[1] = (short)((uint)(int)sVar16 >> 2);
    sVar12 = sVar13 + (short)((int)(short)((int)(short)(((int)uVar21 >> uVar6 + 4) << 2) <<
                                          (ulong)(uVar7 & 0x1f)) >> (uVar7 & 0x1f));
    sVar13 = sVar13 + sVar14;
    sVar14 = sVar14 + sVar15;
    auStack_70[2] = (short)((uint)(int)sVar15 >> 2);
    uVar19 = (ulong)(uVar3 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar4 * -2 + 0x3c) & 0x3f) |
             CONCAT17(puVar2[-6],
                      CONCAT16(puVar2[-5],CONCAT15(puVar2[-4],CONCAT14(puVar2[-3],iVar11)))) >>
             uVar1;
    uVar23 = (uint)uVar19;
    uVar6 = uVar23 & 0xf;
    uVar7 = 0xe - uVar6;
    uVar22 = CONCAT17(puVar2[-0xe],
                      CONCAT16(puVar2[-0xd],CONCAT15(puVar2[-0xc],CONCAT14(puVar2[-0xb],uVar3)))) >>
             uVar1;
    uVar1 = uVar6 * 2 + 4;
    uVar19 = (uVar22 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar6 * -2 + 0x3c) & 0x3f) | uVar19 >> uVar1;
    uVar24 = (uint)uVar19;
    uVar5 = uVar24 & 0xf;
    uVar3 = uVar5 * 2 + 4;
    uVar21 = 0xe - uVar5;
    sVar16 = sVar12 + (short)((int)(short)(((int)(uVar20 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar8 & 0x1f)) >> (uVar8 & 0x1f));
    sVar12 = sVar12 + sVar13;
    sVar13 = sVar13 + sVar14;
    auStack_70[3] = (short)((uint)(int)sVar14 >> 2);
    sVar14 = sVar16 + (short)((int)(short)((int)(short)(((int)uVar20 >> (uVar20 & 0xf) + 4) << 2) <<
                                          (ulong)(uVar8 & 0x1f)) >> (uVar8 & 0x1f));
    sVar16 = sVar16 + sVar12;
    sVar12 = sVar12 + sVar13;
    uStack_68 = (short)((uint)(int)sVar13 >> 2);
    sVar13 = sVar14 + (short)((int)(short)(((iVar11 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar9 & 0x1f)) >> (uVar9 & 0x1f));
    sVar14 = sVar14 + sVar16;
    sVar16 = sVar16 + sVar12;
    uStack_66 = (short)((uint)(int)sVar12 >> 2);
    sVar15 = sVar13 + (short)((int)(short)((int)(short)((iVar11 >> uVar4 + 4) << 2) <<
                                          (ulong)(uVar9 & 0x1f)) >> (uVar9 & 0x1f));
    sVar13 = sVar13 + sVar14;
    sVar14 = sVar14 + sVar16;
    uStack_64 = (short)((uint)(int)sVar16 >> 2);
    sVar16 = sVar15 + (short)((int)(short)(((int)(uVar23 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar7 & 0x1f)) >> (uVar7 & 0x1f));
    sVar15 = sVar15 + sVar13;
    sVar13 = sVar13 + sVar14;
    uStack_62 = (short)((uint)(int)sVar14 >> 2);
    sVar14 = sVar16 + (short)((int)(short)((int)(short)(((int)uVar23 >> uVar6 + 4) << 2) <<
                                          (ulong)(uVar7 & 0x1f)) >> (uVar7 & 0x1f));
    sVar16 = sVar16 + sVar15;
    sVar15 = sVar15 + sVar13;
    uStack_60 = (short)((uint)(int)sVar13 >> 2);
    sVar13 = sVar14 + (short)((int)(short)(((int)(uVar24 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar21 & 0x1f)) >> (uVar21 & 0x1f));
    sVar14 = sVar14 + sVar16;
    sVar16 = sVar16 + sVar15;
    uStack_5e = (short)((uint)(int)sVar15 >> 2);
    sVar15 = sVar13 + (short)((int)(short)((int)(short)(((int)uVar24 >> uVar5 + 4) << 2) <<
                                          (ulong)(uVar21 & 0x1f)) >> (uVar21 & 0x1f));
    sVar13 = sVar13 + sVar14;
    sVar14 = sVar14 + sVar16;
    uVar1 = (uint)((uVar22 >> uVar1 & (ulong)(~(-1 << (ulong)(uVar3 & 0x1e)) - (uVar3 >> 5))) <<
                  ((ulong)(uVar5 * -2 + 0x3c) & 0x3f)) | (uint)(uVar19 >> uVar3);
    uVar3 = 0xe - (uVar1 & 0xf);
    uStack_5c = (short)((uint)(int)sVar16 >> 2);
    sVar16 = sVar15 + (short)((int)(short)(((int)(uVar1 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar3 & 0x1f)) >> (uVar3 & 0x1f));
    sVar15 = sVar15 + sVar13;
    sVar13 = sVar13 + sVar14;
    uStack_5a = (short)((uint)(int)sVar14 >> 2);
    sVar14 = sVar16 + sVar15;
    sVar15 = sVar15 + sVar13;
    uStack_58 = (short)((uint)(int)sVar13 >> 2);
    uStack_56 = (short)((uint)(int)sVar15 >> 2);
    sVar15 = sVar14 + sVar15;
    uStack_54 = (short)((uint)(int)sVar15 >> 2);
    uStack_52 = (short)((uint)(int)(short)(sVar16 + (short)((int)(short)((int)(short)(((int)uVar1 >>
                                                                                      (uVar1 & 0xf)
                                                                                      + 4) << 2) <<
                                                                        (ulong)(uVar3 & 0x1f)) >>
                                                           (uVar3 & 0x1f)) + sVar14 + sVar15) >> 2);
    *(undefined2 *)(param_3 + lVar18 * 2) = auStack_70[param_2];
    lVar18 = lVar18 + 1;
    puVar17 = puVar2 + 2;
  } while (lVar18 != 0x10);
  return puVar17;
}


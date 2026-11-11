
undefined1 * thunk_FUN_0067db40(long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint3 uVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  undefined2 auStack_80 [4];
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  
  lVar19 = 0;
  puVar18 = (undefined1 *)(param_1 + 0x10);
  do {
    puVar18 = puVar18 + (*(byte *)(param_1 + lVar19) >> 4);
    puVar2 = puVar18 + ((ulong)*(byte *)(param_1 + lVar19) & 0xf);
    uVar11 = CONCAT12(puVar18[-2],CONCAT11(puVar18[-1],*puVar18));
    iVar12 = CONCAT13(puVar18[-3],uVar11);
    uVar4 = uVar11 & 0xf;
    uVar7 = 0xe - uVar4;
    uVar1 = uVar4 * 2 + 4;
    uVar6 = (int)(short)(((iVar12 << 0xe) >> 0x10 & 0xfffffffcU) << (ulong)(uVar7 & 0x1f)) >>
            (uVar7 & 0x1f);
    uVar5 = CONCAT13(puVar18[-0xb],CONCAT12(puVar18[-10],CONCAT11(puVar18[-9],puVar18[-8])));
    sVar14 = (short)uVar6;
    sVar17 = (short)((int)(short)((int)(short)((iVar12 >> uVar4 + 4) << 2) << (ulong)(uVar7 & 0x1f))
                    >> (uVar7 & 0x1f)) + sVar14;
    uVar23 = (ulong)(uVar5 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar4 * -2 + 0x3c) & 0x3f) |
             CONCAT17(puVar18[-7],
                      CONCAT16(puVar18[-6],CONCAT15(puVar18[-5],CONCAT14(puVar18[-4],iVar12)))) >>
             uVar1;
    uVar21 = (uint)uVar23;
    uVar4 = uVar21 & 0xf;
    uVar7 = 0xe - uVar4;
    uVar20 = CONCAT17(puVar18[-0xf],
                      CONCAT16(puVar18[-0xe],CONCAT15(puVar18[-0xd],CONCAT14(puVar18[-0xc],uVar5))))
             >> uVar1;
    uVar1 = uVar4 * 2 + 4;
    sVar16 = sVar17 + (short)((int)(short)(((int)(uVar21 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar7 & 0x1f)) >> (uVar7 & 0x1f));
    sVar17 = sVar17 + sVar14;
    sVar15 = sVar16 + (short)((int)(short)((int)(short)(((int)uVar21 >> uVar4 + 4) << 2) <<
                                          (ulong)(uVar7 & 0x1f)) >> (uVar7 & 0x1f));
    sVar16 = sVar16 + sVar17;
    sVar17 = sVar17 + sVar14;
    uVar23 = (uVar20 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar4 * -2 + 0x3c) & 0x3f) | uVar23 >> uVar1;
    uVar22 = (uint)uVar23;
    uVar7 = uVar22 & 0xf;
    uVar8 = 0xe - uVar7;
    uVar4 = uVar7 * 2 + 4;
    uVar21 = (uint)((uVar20 >> uVar1 & (ulong)(~(-1 << (ulong)(uVar4 & 0x1e)) - (uVar4 >> 5))) <<
                   ((ulong)(uVar7 * -2 + 0x3c) & 0x3f)) | (uint)(uVar23 >> uVar4);
    uVar9 = 0xe - (uVar21 & 0xf);
    uVar11 = CONCAT12(puVar2[-1],CONCAT11(*puVar2,puVar2[1]));
    iVar12 = CONCAT13(puVar2[-2],uVar11);
    uVar5 = uVar11 & 0xf;
    uVar10 = 0xe - uVar5;
    uVar1 = uVar5 * 2 + 4;
    uVar4 = CONCAT13(puVar2[-10],CONCAT12(puVar2[-9],CONCAT11(puVar2[-8],puVar2[-7])));
    auStack_80[0] = (short)(uVar6 >> 2);
    sVar14 = sVar15 + (short)((int)(short)(((int)(uVar22 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar8 & 0x1f)) >> (uVar8 & 0x1f));
    sVar15 = sVar15 + sVar16;
    sVar16 = sVar16 + sVar17;
    auStack_80[1] = (short)((uint)(int)sVar17 >> 2);
    sVar13 = sVar14 + (short)((int)(short)((int)(short)(((int)uVar22 >> uVar7 + 4) << 2) <<
                                          (ulong)(uVar8 & 0x1f)) >> (uVar8 & 0x1f));
    sVar14 = sVar14 + sVar15;
    sVar15 = sVar15 + sVar16;
    auStack_80[2] = (short)((uint)(int)sVar16 >> 2);
    uVar20 = (ulong)(uVar4 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar5 * -2 + 0x3c) & 0x3f) |
             CONCAT17(puVar2[-6],
                      CONCAT16(puVar2[-5],CONCAT15(puVar2[-4],CONCAT14(puVar2[-3],iVar12)))) >>
             uVar1;
    uVar24 = (uint)uVar20;
    uVar7 = uVar24 & 0xf;
    uVar8 = 0xe - uVar7;
    uVar23 = CONCAT17(puVar2[-0xe],
                      CONCAT16(puVar2[-0xd],CONCAT15(puVar2[-0xc],CONCAT14(puVar2[-0xb],uVar4)))) >>
             uVar1;
    uVar1 = uVar7 * 2 + 4;
    uVar20 = (uVar23 & ~(-1 << (ulong)(uVar1 & 0x1e)) - (uVar1 >> 5)) <<
             ((ulong)(uVar7 * -2 + 0x3c) & 0x3f) | uVar20 >> uVar1;
    uVar25 = (uint)uVar20;
    uVar6 = uVar25 & 0xf;
    uVar4 = uVar6 * 2 + 4;
    uVar22 = 0xe - uVar6;
    sVar17 = sVar13 + (short)((int)(short)(((int)(uVar21 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar9 & 0x1f)) >> (uVar9 & 0x1f));
    sVar13 = sVar13 + sVar14;
    sVar14 = sVar14 + sVar15;
    auStack_80[3] = (short)((uint)(int)sVar15 >> 2);
    sVar15 = sVar17 + (short)((int)(short)((int)(short)(((int)uVar21 >> (uVar21 & 0xf) + 4) << 2) <<
                                          (ulong)(uVar9 & 0x1f)) >> (uVar9 & 0x1f));
    sVar17 = sVar17 + sVar13;
    sVar13 = sVar13 + sVar14;
    uStack_78 = (short)((uint)(int)sVar14 >> 2);
    sVar14 = sVar15 + (short)((int)(short)(((iVar12 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar10 & 0x1f)) >> (uVar10 & 0x1f));
    sVar15 = sVar15 + sVar17;
    sVar17 = sVar17 + sVar13;
    uStack_76 = (short)((uint)(int)sVar13 >> 2);
    sVar16 = sVar14 + (short)((int)(short)((int)(short)((iVar12 >> uVar5 + 4) << 2) <<
                                          (ulong)(uVar10 & 0x1f)) >> (uVar10 & 0x1f));
    sVar14 = sVar14 + sVar15;
    sVar15 = sVar15 + sVar17;
    uStack_74 = (short)((uint)(int)sVar17 >> 2);
    sVar17 = sVar16 + (short)((int)(short)(((int)(uVar24 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar8 & 0x1f)) >> (uVar8 & 0x1f));
    sVar16 = sVar16 + sVar14;
    sVar14 = sVar14 + sVar15;
    uStack_72 = (short)((uint)(int)sVar15 >> 2);
    sVar15 = sVar17 + (short)((int)(short)((int)(short)(((int)uVar24 >> uVar7 + 4) << 2) <<
                                          (ulong)(uVar8 & 0x1f)) >> (uVar8 & 0x1f));
    sVar17 = sVar17 + sVar16;
    sVar16 = sVar16 + sVar14;
    uStack_70 = (short)((uint)(int)sVar14 >> 2);
    sVar14 = sVar15 + (short)((int)(short)(((int)(uVar25 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar22 & 0x1f)) >> (uVar22 & 0x1f));
    sVar15 = sVar15 + sVar17;
    sVar17 = sVar17 + sVar16;
    uStack_6e = (short)((uint)(int)sVar16 >> 2);
    sVar16 = sVar14 + (short)((int)(short)((int)(short)(((int)uVar25 >> uVar6 + 4) << 2) <<
                                          (ulong)(uVar22 & 0x1f)) >> (uVar22 & 0x1f));
    sVar14 = sVar14 + sVar15;
    sVar15 = sVar15 + sVar17;
    uVar1 = (uint)((uVar23 >> uVar1 & (ulong)(~(-1 << (ulong)(uVar4 & 0x1e)) - (uVar4 >> 5))) <<
                  ((ulong)(uVar6 * -2 + 0x3c) & 0x3f)) | (uint)(uVar20 >> uVar4);
    uVar4 = 0xe - (uVar1 & 0xf);
    uStack_6c = (short)((uint)(int)sVar17 >> 2);
    sVar17 = sVar16 + (short)((int)(short)(((int)(uVar1 << 0xe) >> 0x10 & 0xfffffffcU) <<
                                          (ulong)(uVar4 & 0x1f)) >> (uVar4 & 0x1f));
    sVar16 = sVar16 + sVar14;
    sVar14 = sVar14 + sVar15;
    uStack_6a = (short)((uint)(int)sVar15 >> 2);
    sVar15 = sVar17 + sVar16;
    sVar16 = sVar16 + sVar14;
    uStack_68 = (short)((uint)(int)sVar14 >> 2);
    uStack_66 = (short)((uint)(int)sVar16 >> 2);
    sVar16 = sVar15 + sVar16;
    puVar3 = (undefined2 *)(param_3 + lVar19 * 2);
    lVar19 = lVar19 + 1;
    uStack_64 = (short)((uint)(int)sVar16 >> 2);
    uStack_62 = (short)((uint)(int)(short)(sVar17 + (short)((int)(short)((int)(short)(((int)uVar1 >>
                                                                                      (uVar1 & 0xf)
                                                                                      + 4) << 2) <<
                                                                        (ulong)(uVar4 & 0x1f)) >>
                                                           (uVar4 & 0x1f)) + sVar15 + sVar16) >> 2);
    *puVar3 = auStack_80[param_2];
    puVar18 = puVar2 + 2;
    puVar3[0x10] = auStack_80[(long)param_2 + 1];
  } while (lVar19 != 0x10);
  return puVar18;
}


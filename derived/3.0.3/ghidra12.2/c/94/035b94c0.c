
void FUN_035b94c0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar57;
  undefined8 uVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar74;
  uint uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  int iVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  long lVar84;
  long lVar85;
  short sVar86;
  ulong uVar87;
  short sVar88;
  ushort uVar89;
  undefined8 uVar90;
  ushort uVar91;
  undefined8 uVar92;
  short sVar93;
  undefined8 uVar94;
  undefined2 uVar95;
  undefined2 uVar96;
  undefined2 uVar97;
  uint uVar98;
  uint uVar99;
  undefined2 uVar100;
  
  if (*(char *)(param_5 + 0x11) == '\0') {
    if (*(char *)(param_5 + 0x12) == '\0') {
      lVar84 = 0;
      do {
        uVar94 = *(undefined8 *)(param_5 + 4);
        lVar85 = 0;
        sVar93 = (short)uVar94;
        uVar90 = *(undefined8 *)(param_5 + 2);
        uVar92 = *(undefined8 *)(param_5 + 0xc);
        sVar88 = (short)((ulong)uVar94 >> 0x10);
        sVar86 = (short)((ulong)uVar94 >> 0x20);
        uVar87 = 0xfffffffffffffff8;
        do {
          puVar1 = (undefined8 *)(param_3 + lVar85);
          puVar2 = (undefined8 *)(param_2 + lVar85);
          uVar52 = puVar1[5];
          uVar46 = puVar1[4];
          uVar17 = puVar1[1];
          uVar94 = *puVar1;
          uVar33 = puVar1[3];
          uVar22 = puVar1[2];
          uVar87 = uVar87 + 8;
          puVar1 = (undefined8 *)(param_1 + lVar85);
          lVar85 = lVar85 + 0x30;
          uVar45 = puVar2[1];
          uVar32 = *puVar2;
          uVar78 = puVar2[3];
          uVar77 = puVar2[2];
          uVar89 = (ushort)uVar90;
          uVar3 = (uint)uVar89;
          uVar57 = ((uint)uVar32 & 0xffff) * uVar3;
          iVar59 = (ushort)((ulong)uVar32 >> 0x10) * uVar3;
          iVar60 = (ushort)((ulong)uVar32 >> 0x20) * uVar3;
          iVar61 = (ushort)((ulong)uVar32 >> 0x30) * uVar3;
          uVar3 = (uint)uVar89;
          uVar31 = (ushort)uVar45 * uVar3;
          iVar34 = (ushort)((ulong)uVar45 >> 0x10) * uVar3;
          iVar35 = (ushort)((ulong)uVar45 >> 0x20) * uVar3;
          iVar36 = (ushort)((ulong)uVar45 >> 0x30) * uVar3;
          uVar91 = (ushort)uVar92;
          uVar4 = (uint)uVar91;
          uVar74 = ((uint)uVar94 & 0xffff) * uVar4;
          iVar79 = (ushort)((ulong)uVar94 >> 0x10) * uVar4;
          uVar3 = (uint)uVar91;
          uVar9 = (ushort)uVar17 * uVar3;
          iVar10 = (ushort)((ulong)uVar17 >> 0x10) * uVar3;
          iVar11 = (ushort)((ulong)uVar17 >> 0x20) * uVar3;
          iVar12 = (ushort)((ulong)uVar17 >> 0x30) * uVar3;
          uVar98 = (uint)puVar2[5];
          uVar99 = (uint)((ulong)puVar2[5] >> 0x20);
          uVar51 = puVar2[4];
          uVar97 = (undefined2)((uint)iVar59 >> 8);
          uVar80 = (undefined1)((uint)iVar59 >> 0x18);
          uVar100 = (undefined2)((uint)iVar79 >> 8);
          uVar81 = (undefined1)((uint)iVar79 >> 0x18);
          uVar96 = (undefined2)((uint)iVar34 >> 8);
          uVar82 = (undefined1)((uint)iVar34 >> 0x18);
          uVar95 = (undefined2)((uint)iVar10 >> 8);
          uVar83 = (undefined1)((uint)iVar10 >> 0x18);
          auVar56._4_2_ = uVar97;
          auVar56._0_4_ = uVar57 >> 8;
          auVar56[6] = uVar80;
          auVar56[7] = 0;
          auVar56._8_2_ = (short)((uint)iVar60 >> 8);
          auVar56[10] = (char)((uint)iVar60 >> 0x18);
          auVar56[0xb] = 0;
          auVar56._12_2_ = (short)((uint)iVar61 >> 8);
          auVar56[0xe] = (char)((uint)iVar61 >> 0x18);
          auVar56[0xf] = 0;
          uVar58 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar97,uVar57 >> 8)),auVar56,4);
          auVar71._4_2_ = uVar100;
          auVar71._0_4_ = uVar74 >> 8;
          auVar71[6] = uVar81;
          auVar71[7] = 0;
          auVar71._8_4_ = (ushort)((ulong)uVar94 >> 0x20) * uVar4 >> 8;
          auVar71._12_4_ = (ushort)((ulong)uVar94 >> 0x30) * uVar4 >> 8;
          uVar76 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar100,uVar74 >> 8)),auVar71,4);
          auVar29._4_2_ = uVar96;
          auVar29._0_4_ = uVar31 >> 8;
          auVar29[6] = uVar82;
          auVar29[7] = 0;
          auVar29._8_2_ = (short)((uint)iVar35 >> 8);
          auVar29[10] = (char)((uint)iVar35 >> 0x18);
          auVar29[0xb] = 0;
          auVar29._12_2_ = (short)((uint)iVar36 >> 8);
          auVar29[0xe] = (char)((uint)iVar36 >> 0x18);
          auVar29[0xf] = 0;
          uVar32 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar31 >> 8)),auVar29,4);
          auVar8._4_2_ = uVar95;
          auVar8._0_4_ = uVar9 >> 8;
          auVar8[6] = uVar83;
          auVar8[7] = 0;
          auVar8._8_2_ = (short)((uint)iVar11 >> 8);
          auVar8[10] = (char)((uint)iVar11 >> 0x18);
          auVar8[0xb] = 0;
          auVar8._12_2_ = (short)((uint)iVar12 >> 8);
          auVar8[0xe] = (char)((uint)iVar12 >> 0x18);
          auVar8[0xf] = 0;
          uVar94 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar8,4);
          uVar4 = (uint)uVar89;
          uVar74 = ((uint)uVar77 & 0xffff) * uVar4;
          iVar79 = (ushort)((ulong)uVar77 >> 0x10) * uVar4;
          uVar3 = (uint)uVar89;
          uVar57 = (ushort)uVar78 * uVar3;
          iVar59 = (ushort)((ulong)uVar78 >> 0x10) * uVar3;
          iVar60 = (ushort)((ulong)uVar78 >> 0x20) * uVar3;
          iVar61 = (ushort)((ulong)uVar78 >> 0x30) * uVar3;
          uVar3 = (uint)uVar91;
          uVar31 = ((uint)uVar22 & 0xffff) * uVar3;
          iVar34 = (ushort)((ulong)uVar22 >> 0x10) * uVar3;
          iVar35 = (ushort)((ulong)uVar22 >> 0x20) * uVar3;
          iVar36 = (ushort)((ulong)uVar22 >> 0x30) * uVar3;
          uVar3 = (uint)uVar91;
          uVar9 = (ushort)uVar33 * uVar3;
          iVar10 = (ushort)((ulong)uVar33 >> 0x10) * uVar3;
          iVar11 = (ushort)((ulong)uVar33 >> 0x20) * uVar3;
          iVar12 = (ushort)((ulong)uVar33 >> 0x30) * uVar3;
          uVar100 = (undefined2)((uint)iVar79 >> 8);
          uVar80 = (undefined1)((uint)iVar79 >> 0x18);
          uVar96 = (undefined2)((uint)iVar34 >> 8);
          uVar81 = (undefined1)((uint)iVar34 >> 0x18);
          uVar97 = (undefined2)((uint)iVar59 >> 8);
          uVar82 = (undefined1)((uint)iVar59 >> 0x18);
          uVar95 = (undefined2)((uint)iVar10 >> 8);
          uVar83 = (undefined1)((uint)iVar10 >> 0x18);
          auVar72._4_2_ = uVar100;
          auVar72._0_4_ = uVar74 >> 8;
          auVar72[6] = uVar80;
          auVar72[7] = 0;
          auVar72._8_4_ = (ushort)((ulong)uVar77 >> 0x20) * uVar4 >> 8;
          auVar72._12_4_ = (ushort)((ulong)uVar77 >> 0x30) * uVar4 >> 8;
          uVar77 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar74 >> 8)),auVar72,4);
          auVar30._4_2_ = uVar96;
          auVar30._0_4_ = uVar31 >> 8;
          auVar30[6] = uVar81;
          auVar30[7] = 0;
          auVar30._8_2_ = (short)((uint)iVar35 >> 8);
          auVar30[10] = (char)((uint)iVar35 >> 0x18);
          auVar30[0xb] = 0;
          auVar30._12_2_ = (short)((uint)iVar36 >> 8);
          auVar30[0xe] = (char)((uint)iVar36 >> 0x18);
          auVar30[0xf] = 0;
          uVar33 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar96,uVar31 >> 8)),auVar30,4);
          auVar43._4_2_ = uVar97;
          auVar43._0_4_ = uVar57 >> 8;
          auVar43[6] = uVar82;
          auVar43[7] = 0;
          auVar43._8_2_ = (short)((uint)iVar60 >> 8);
          auVar43[10] = (char)((uint)iVar60 >> 0x18);
          auVar43[0xb] = 0;
          auVar43._12_2_ = (short)((uint)iVar61 >> 8);
          auVar43[0xe] = (char)((uint)iVar61 >> 0x18);
          auVar43[0xf] = 0;
          uVar45 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar97,uVar57 >> 8)),auVar43,4);
          auVar16._4_2_ = uVar95;
          auVar16._0_4_ = uVar9 >> 8;
          auVar16[6] = uVar83;
          auVar16[7] = 0;
          auVar16._8_2_ = (short)((uint)iVar11 >> 8);
          auVar16[10] = (char)((uint)iVar11 >> 0x18);
          auVar16[0xb] = 0;
          auVar16._12_2_ = (short)((uint)iVar12 >> 8);
          auVar16[0xe] = (char)((uint)iVar12 >> 0x18);
          auVar16[0xf] = 0;
          uVar17 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar16,4);
          uVar9 = (uint)uVar89;
          uVar75 = ((uint)uVar51 & 0xffff) * uVar9;
          iVar60 = (ushort)((ulong)uVar51 >> 0x10) * uVar9;
          uVar3 = (uint)uVar89;
          uVar74 = (uVar98 & 0xffff) * uVar3;
          iVar59 = (uVar98 >> 0x10) * uVar3;
          uVar4 = (uint)uVar91;
          uVar57 = ((uint)uVar46 & 0xffff) * uVar4;
          iVar34 = (ushort)((ulong)uVar46 >> 0x10) * uVar4;
          iVar35 = (ushort)((ulong)uVar46 >> 0x20) * uVar4;
          iVar36 = (ushort)((ulong)uVar46 >> 0x30) * uVar4;
          uVar4 = (uint)uVar91;
          uVar31 = (ushort)uVar52 * uVar4;
          iVar10 = (ushort)((ulong)uVar52 >> 0x10) * uVar4;
          iVar11 = (ushort)((ulong)uVar52 >> 0x20) * uVar4;
          iVar12 = (ushort)((ulong)uVar52 >> 0x30) * uVar4;
          uVar100 = (undefined2)((uint)iVar60 >> 8);
          uVar80 = (undefined1)((uint)iVar60 >> 0x18);
          uVar97 = (undefined2)((uint)iVar59 >> 8);
          uVar81 = (undefined1)((uint)iVar59 >> 0x18);
          uVar96 = (undefined2)((uint)iVar34 >> 8);
          uVar82 = (undefined1)((uint)iVar34 >> 0x18);
          uVar95 = (undefined2)((uint)iVar10 >> 8);
          uVar83 = (undefined1)((uint)iVar10 >> 0x18);
          auVar73._4_2_ = uVar100;
          auVar73._0_4_ = uVar75 >> 8;
          auVar73[6] = uVar80;
          auVar73[7] = 0;
          auVar73._8_4_ = (ushort)((ulong)uVar51 >> 0x20) * uVar9 >> 8;
          auVar73._12_4_ = (ushort)((ulong)uVar51 >> 0x30) * uVar9 >> 8;
          uVar78 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar75 >> 8)),auVar73,4);
          auVar50._4_2_ = uVar97;
          auVar50._0_4_ = uVar74 >> 8;
          auVar50[6] = uVar81;
          auVar50[7] = 0;
          auVar50._8_4_ = (uVar99 & 0xffff) * uVar3 >> 8;
          auVar50._12_4_ = (uVar99 >> 0x10) * uVar3 >> 8;
          uVar52 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar97,uVar74 >> 8)),auVar50,4);
          auVar44._4_2_ = uVar96;
          auVar44._0_4_ = uVar57 >> 8;
          auVar44[6] = uVar82;
          auVar44[7] = 0;
          auVar44._8_2_ = (short)((uint)iVar35 >> 8);
          auVar44[10] = (char)((uint)iVar35 >> 0x18);
          auVar44[0xb] = 0;
          auVar44._12_2_ = (short)((uint)iVar36 >> 8);
          auVar44[0xe] = (char)((uint)iVar36 >> 0x18);
          auVar44[0xf] = 0;
          uVar46 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar57 >> 8)),auVar44,4);
          auVar21._4_2_ = uVar95;
          auVar21._0_4_ = uVar31 >> 8;
          auVar21[6] = uVar83;
          auVar21[7] = 0;
          auVar21._8_2_ = (short)((uint)iVar11 >> 8);
          auVar21[10] = (char)((uint)iVar11 >> 0x18);
          auVar21[0xb] = 0;
          auVar21._12_2_ = (short)((uint)iVar12 >> 8);
          auVar21[0xe] = (char)((uint)iVar12 >> 0x18);
          auVar21[0xf] = 0;
          uVar22 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar31 >> 8)),auVar21,4);
          puVar1[1] = CONCAT26((short)((ulong)uVar94 >> 0x30) + (short)((ulong)uVar32 >> 0x30) +
                               sVar93,CONCAT24((short)((ulong)uVar94 >> 0x20) +
                                               (short)((ulong)uVar32 >> 0x20) + sVar93,
                                               CONCAT22((short)((ulong)uVar94 >> 0x10) +
                                                        (short)((ulong)uVar32 >> 0x10) + sVar93,
                                                        (short)uVar94 + (short)uVar32 + sVar93)));
          *puVar1 = CONCAT26((short)((ulong)uVar76 >> 0x30) + (short)((ulong)uVar58 >> 0x30) +
                             sVar93,CONCAT24((short)((ulong)uVar76 >> 0x20) +
                                             (short)((ulong)uVar58 >> 0x20) + sVar93,
                                             CONCAT22((short)((ulong)uVar76 >> 0x10) +
                                                      (short)((ulong)uVar58 >> 0x10) + sVar93,
                                                      (short)uVar76 + (short)uVar58 + sVar93)));
          puVar1[3] = CONCAT26((short)((ulong)uVar17 >> 0x30) + (short)((ulong)uVar45 >> 0x30) +
                               sVar88,CONCAT24((short)((ulong)uVar17 >> 0x20) +
                                               (short)((ulong)uVar45 >> 0x20) + sVar88,
                                               CONCAT22((short)((ulong)uVar17 >> 0x10) +
                                                        (short)((ulong)uVar45 >> 0x10) + sVar88,
                                                        (short)uVar17 + (short)uVar45 + sVar88)));
          puVar1[2] = CONCAT26((short)((ulong)uVar33 >> 0x30) + (short)((ulong)uVar77 >> 0x30) +
                               sVar88,CONCAT24((short)((ulong)uVar33 >> 0x20) +
                                               (short)((ulong)uVar77 >> 0x20) + sVar88,
                                               CONCAT22((short)((ulong)uVar33 >> 0x10) +
                                                        (short)((ulong)uVar77 >> 0x10) + sVar88,
                                                        (short)uVar33 + (short)uVar77 + sVar88)));
          puVar1[5] = CONCAT26((short)((ulong)uVar22 >> 0x30) + (short)((ulong)uVar52 >> 0x30) +
                               sVar86,CONCAT24((short)((ulong)uVar22 >> 0x20) +
                                               (short)((ulong)uVar52 >> 0x20) + sVar86,
                                               CONCAT22((short)((ulong)uVar22 >> 0x10) +
                                                        (short)((ulong)uVar52 >> 0x10) + sVar86,
                                                        (short)uVar22 + (short)uVar52 + sVar86)));
          puVar1[4] = CONCAT26((short)((ulong)uVar46 >> 0x30) + (short)((ulong)uVar78 >> 0x30) +
                               sVar86,CONCAT24((short)((ulong)uVar46 >> 0x20) +
                                               (short)((ulong)uVar78 >> 0x20) + sVar86,
                                               CONCAT22((short)((ulong)uVar46 >> 0x10) +
                                                        (short)((ulong)uVar78 >> 0x10) + sVar86,
                                                        (short)uVar46 + (short)uVar78 + sVar86)));
        } while (uVar87 < 0x98);
        lVar84 = lVar84 + 1;
        param_1 = param_1 + 0x3c0;
        param_2 = param_2 + 0x3c0;
        param_3 = param_3 + 0x3c0;
      } while (lVar84 != 0x90);
    }
    else {
      lVar84 = 0;
      do {
        uVar94 = *(undefined8 *)(param_5 + 4);
        lVar85 = 0;
        sVar93 = (short)uVar94;
        uVar90 = *(undefined8 *)(param_5 + 2);
        uVar92 = *(undefined8 *)(param_5 + 0xc);
        sVar88 = (short)((ulong)uVar94 >> 0x10);
        sVar86 = (short)((ulong)uVar94 >> 0x20);
        uVar87 = 0xfffffffffffffff8;
        do {
          puVar1 = (undefined8 *)(param_3 + lVar85);
          puVar2 = (undefined8 *)(param_2 + lVar85);
          uVar52 = puVar1[5];
          uVar46 = puVar1[4];
          uVar17 = puVar1[1];
          uVar94 = *puVar1;
          uVar33 = puVar1[3];
          uVar22 = puVar1[2];
          uVar87 = uVar87 + 8;
          puVar1 = (undefined8 *)(param_1 + lVar85);
          lVar85 = lVar85 + 0x30;
          uVar45 = puVar2[1];
          uVar32 = *puVar2;
          uVar78 = puVar2[3];
          uVar77 = puVar2[2];
          uVar89 = (ushort)uVar90;
          uVar3 = (uint)uVar89;
          uVar57 = ((uint)uVar32 & 0xffff) * uVar3;
          iVar59 = (ushort)((ulong)uVar32 >> 0x10) * uVar3;
          iVar60 = (ushort)((ulong)uVar32 >> 0x20) * uVar3;
          iVar61 = (ushort)((ulong)uVar32 >> 0x30) * uVar3;
          uVar3 = (uint)uVar89;
          uVar31 = (ushort)uVar45 * uVar3;
          iVar34 = (ushort)((ulong)uVar45 >> 0x10) * uVar3;
          iVar35 = (ushort)((ulong)uVar45 >> 0x20) * uVar3;
          iVar36 = (ushort)((ulong)uVar45 >> 0x30) * uVar3;
          uVar91 = (ushort)uVar92;
          uVar4 = (uint)uVar91;
          uVar74 = ((uint)uVar94 & 0xffff) * uVar4;
          iVar79 = (ushort)((ulong)uVar94 >> 0x10) * uVar4;
          uVar3 = (uint)uVar91;
          uVar9 = (ushort)uVar17 * uVar3;
          iVar10 = (ushort)((ulong)uVar17 >> 0x10) * uVar3;
          iVar11 = (ushort)((ulong)uVar17 >> 0x20) * uVar3;
          iVar12 = (ushort)((ulong)uVar17 >> 0x30) * uVar3;
          uVar98 = (uint)puVar2[5];
          uVar99 = (uint)((ulong)puVar2[5] >> 0x20);
          uVar51 = puVar2[4];
          uVar97 = (undefined2)((uint)iVar59 >> 8);
          uVar80 = (undefined1)((uint)iVar59 >> 0x18);
          uVar100 = (undefined2)((uint)iVar79 >> 8);
          uVar81 = (undefined1)((uint)iVar79 >> 0x18);
          uVar96 = (undefined2)((uint)iVar34 >> 8);
          uVar82 = (undefined1)((uint)iVar34 >> 0x18);
          uVar95 = (undefined2)((uint)iVar10 >> 8);
          uVar83 = (undefined1)((uint)iVar10 >> 0x18);
          auVar55._4_2_ = uVar97;
          auVar55._0_4_ = uVar57 >> 8;
          auVar55[6] = uVar80;
          auVar55[7] = 0;
          auVar55._8_2_ = (short)((uint)iVar60 >> 8);
          auVar55[10] = (char)((uint)iVar60 >> 0x18);
          auVar55[0xb] = 0;
          auVar55._12_2_ = (short)((uint)iVar61 >> 8);
          auVar55[0xe] = (char)((uint)iVar61 >> 0x18);
          auVar55[0xf] = 0;
          uVar58 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar97,uVar57 >> 8)),auVar55,4);
          auVar68._4_2_ = uVar100;
          auVar68._0_4_ = uVar74 >> 8;
          auVar68[6] = uVar81;
          auVar68[7] = 0;
          auVar68._8_4_ = (ushort)((ulong)uVar94 >> 0x20) * uVar4 >> 8;
          auVar68._12_4_ = (ushort)((ulong)uVar94 >> 0x30) * uVar4 >> 8;
          uVar76 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar100,uVar74 >> 8)),auVar68,4);
          auVar27._4_2_ = uVar96;
          auVar27._0_4_ = uVar31 >> 8;
          auVar27[6] = uVar82;
          auVar27[7] = 0;
          auVar27._8_2_ = (short)((uint)iVar35 >> 8);
          auVar27[10] = (char)((uint)iVar35 >> 0x18);
          auVar27[0xb] = 0;
          auVar27._12_2_ = (short)((uint)iVar36 >> 8);
          auVar27[0xe] = (char)((uint)iVar36 >> 0x18);
          auVar27[0xf] = 0;
          uVar32 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar31 >> 8)),auVar27,4);
          auVar7._4_2_ = uVar95;
          auVar7._0_4_ = uVar9 >> 8;
          auVar7[6] = uVar83;
          auVar7[7] = 0;
          auVar7._8_2_ = (short)((uint)iVar11 >> 8);
          auVar7[10] = (char)((uint)iVar11 >> 0x18);
          auVar7[0xb] = 0;
          auVar7._12_2_ = (short)((uint)iVar12 >> 8);
          auVar7[0xe] = (char)((uint)iVar12 >> 0x18);
          auVar7[0xf] = 0;
          uVar94 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar7,4);
          uVar4 = (uint)uVar89;
          uVar74 = ((uint)uVar77 & 0xffff) * uVar4;
          iVar79 = (ushort)((ulong)uVar77 >> 0x10) * uVar4;
          uVar3 = (uint)uVar89;
          uVar57 = (ushort)uVar78 * uVar3;
          iVar59 = (ushort)((ulong)uVar78 >> 0x10) * uVar3;
          iVar60 = (ushort)((ulong)uVar78 >> 0x20) * uVar3;
          iVar61 = (ushort)((ulong)uVar78 >> 0x30) * uVar3;
          uVar3 = (uint)uVar91;
          uVar31 = ((uint)uVar22 & 0xffff) * uVar3;
          iVar34 = (ushort)((ulong)uVar22 >> 0x10) * uVar3;
          iVar35 = (ushort)((ulong)uVar22 >> 0x20) * uVar3;
          iVar36 = (ushort)((ulong)uVar22 >> 0x30) * uVar3;
          uVar3 = (uint)uVar91;
          uVar9 = (ushort)uVar33 * uVar3;
          iVar10 = (ushort)((ulong)uVar33 >> 0x10) * uVar3;
          iVar11 = (ushort)((ulong)uVar33 >> 0x20) * uVar3;
          iVar12 = (ushort)((ulong)uVar33 >> 0x30) * uVar3;
          uVar100 = (undefined2)((uint)iVar79 >> 8);
          uVar80 = (undefined1)((uint)iVar79 >> 0x18);
          uVar96 = (undefined2)((uint)iVar34 >> 8);
          uVar81 = (undefined1)((uint)iVar34 >> 0x18);
          uVar97 = (undefined2)((uint)iVar59 >> 8);
          uVar82 = (undefined1)((uint)iVar59 >> 0x18);
          uVar95 = (undefined2)((uint)iVar10 >> 8);
          uVar83 = (undefined1)((uint)iVar10 >> 0x18);
          auVar69._4_2_ = uVar100;
          auVar69._0_4_ = uVar74 >> 8;
          auVar69[6] = uVar80;
          auVar69[7] = 0;
          auVar69._8_4_ = (ushort)((ulong)uVar77 >> 0x20) * uVar4 >> 8;
          auVar69._12_4_ = (ushort)((ulong)uVar77 >> 0x30) * uVar4 >> 8;
          uVar77 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar74 >> 8)),auVar69,4);
          auVar28._4_2_ = uVar96;
          auVar28._0_4_ = uVar31 >> 8;
          auVar28[6] = uVar81;
          auVar28[7] = 0;
          auVar28._8_2_ = (short)((uint)iVar35 >> 8);
          auVar28[10] = (char)((uint)iVar35 >> 0x18);
          auVar28[0xb] = 0;
          auVar28._12_2_ = (short)((uint)iVar36 >> 8);
          auVar28[0xe] = (char)((uint)iVar36 >> 0x18);
          auVar28[0xf] = 0;
          uVar33 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar96,uVar31 >> 8)),auVar28,4);
          auVar41._4_2_ = uVar97;
          auVar41._0_4_ = uVar57 >> 8;
          auVar41[6] = uVar82;
          auVar41[7] = 0;
          auVar41._8_2_ = (short)((uint)iVar60 >> 8);
          auVar41[10] = (char)((uint)iVar60 >> 0x18);
          auVar41[0xb] = 0;
          auVar41._12_2_ = (short)((uint)iVar61 >> 8);
          auVar41[0xe] = (char)((uint)iVar61 >> 0x18);
          auVar41[0xf] = 0;
          uVar45 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar97,uVar57 >> 8)),auVar41,4);
          auVar15._4_2_ = uVar95;
          auVar15._0_4_ = uVar9 >> 8;
          auVar15[6] = uVar83;
          auVar15[7] = 0;
          auVar15._8_2_ = (short)((uint)iVar11 >> 8);
          auVar15[10] = (char)((uint)iVar11 >> 0x18);
          auVar15[0xb] = 0;
          auVar15._12_2_ = (short)((uint)iVar12 >> 8);
          auVar15[0xe] = (char)((uint)iVar12 >> 0x18);
          auVar15[0xf] = 0;
          uVar17 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar15,4);
          uVar9 = (uint)uVar89;
          uVar75 = ((uint)uVar51 & 0xffff) * uVar9;
          iVar60 = (ushort)((ulong)uVar51 >> 0x10) * uVar9;
          uVar3 = (uint)uVar89;
          uVar74 = (uVar98 & 0xffff) * uVar3;
          iVar59 = (uVar98 >> 0x10) * uVar3;
          uVar4 = (uint)uVar91;
          uVar57 = ((uint)uVar46 & 0xffff) * uVar4;
          iVar34 = (ushort)((ulong)uVar46 >> 0x10) * uVar4;
          iVar35 = (ushort)((ulong)uVar46 >> 0x20) * uVar4;
          iVar36 = (ushort)((ulong)uVar46 >> 0x30) * uVar4;
          uVar4 = (uint)uVar91;
          uVar31 = (ushort)uVar52 * uVar4;
          iVar10 = (ushort)((ulong)uVar52 >> 0x10) * uVar4;
          iVar11 = (ushort)((ulong)uVar52 >> 0x20) * uVar4;
          iVar12 = (ushort)((ulong)uVar52 >> 0x30) * uVar4;
          uVar100 = (undefined2)((uint)iVar60 >> 8);
          uVar80 = (undefined1)((uint)iVar60 >> 0x18);
          uVar97 = (undefined2)((uint)iVar59 >> 8);
          uVar81 = (undefined1)((uint)iVar59 >> 0x18);
          uVar96 = (undefined2)((uint)iVar34 >> 8);
          uVar82 = (undefined1)((uint)iVar34 >> 0x18);
          uVar95 = (undefined2)((uint)iVar10 >> 8);
          uVar83 = (undefined1)((uint)iVar10 >> 0x18);
          auVar70._4_2_ = uVar100;
          auVar70._0_4_ = uVar75 >> 8;
          auVar70[6] = uVar80;
          auVar70[7] = 0;
          auVar70._8_4_ = (ushort)((ulong)uVar51 >> 0x20) * uVar9 >> 8;
          auVar70._12_4_ = (ushort)((ulong)uVar51 >> 0x30) * uVar9 >> 8;
          uVar78 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar75 >> 8)),auVar70,4);
          auVar49._4_2_ = uVar97;
          auVar49._0_4_ = uVar74 >> 8;
          auVar49[6] = uVar81;
          auVar49[7] = 0;
          auVar49._8_4_ = (uVar99 & 0xffff) * uVar3 >> 8;
          auVar49._12_4_ = (uVar99 >> 0x10) * uVar3 >> 8;
          uVar52 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar97,uVar74 >> 8)),auVar49,4);
          auVar42._4_2_ = uVar96;
          auVar42._0_4_ = uVar57 >> 8;
          auVar42[6] = uVar82;
          auVar42[7] = 0;
          auVar42._8_2_ = (short)((uint)iVar35 >> 8);
          auVar42[10] = (char)((uint)iVar35 >> 0x18);
          auVar42[0xb] = 0;
          auVar42._12_2_ = (short)((uint)iVar36 >> 8);
          auVar42[0xe] = (char)((uint)iVar36 >> 0x18);
          auVar42[0xf] = 0;
          uVar46 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar57 >> 8)),auVar42,4);
          auVar20._4_2_ = uVar95;
          auVar20._0_4_ = uVar31 >> 8;
          auVar20[6] = uVar83;
          auVar20[7] = 0;
          auVar20._8_2_ = (short)((uint)iVar11 >> 8);
          auVar20[10] = (char)((uint)iVar11 >> 0x18);
          auVar20[0xb] = 0;
          auVar20._12_2_ = (short)((uint)iVar12 >> 8);
          auVar20[0xe] = (char)((uint)iVar12 >> 0x18);
          auVar20[0xf] = 0;
          uVar22 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar31 >> 8)),auVar20,4);
          puVar1[1] = CONCAT26((short)((ulong)uVar94 >> 0x30) + (short)((ulong)uVar32 >> 0x30) +
                               sVar93,CONCAT24((short)((ulong)uVar94 >> 0x20) +
                                               (short)((ulong)uVar32 >> 0x20) + sVar93,
                                               CONCAT22((short)((ulong)uVar94 >> 0x10) +
                                                        (short)((ulong)uVar32 >> 0x10) + sVar93,
                                                        (short)uVar94 + (short)uVar32 + sVar93)));
          *puVar1 = CONCAT26((short)((ulong)uVar76 >> 0x30) + (short)((ulong)uVar58 >> 0x30) +
                             sVar93,CONCAT24((short)((ulong)uVar76 >> 0x20) +
                                             (short)((ulong)uVar58 >> 0x20) + sVar93,
                                             CONCAT22((short)((ulong)uVar76 >> 0x10) +
                                                      (short)((ulong)uVar58 >> 0x10) + sVar93,
                                                      (short)uVar76 + (short)uVar58 + sVar93)));
          puVar1[3] = CONCAT26((short)((ulong)uVar17 >> 0x30) + (short)((ulong)uVar45 >> 0x30) +
                               sVar88,CONCAT24((short)((ulong)uVar17 >> 0x20) +
                                               (short)((ulong)uVar45 >> 0x20) + sVar88,
                                               CONCAT22((short)((ulong)uVar17 >> 0x10) +
                                                        (short)((ulong)uVar45 >> 0x10) + sVar88,
                                                        (short)uVar17 + (short)uVar45 + sVar88)));
          puVar1[2] = CONCAT26((short)((ulong)uVar33 >> 0x30) + (short)((ulong)uVar77 >> 0x30) +
                               sVar88,CONCAT24((short)((ulong)uVar33 >> 0x20) +
                                               (short)((ulong)uVar77 >> 0x20) + sVar88,
                                               CONCAT22((short)((ulong)uVar33 >> 0x10) +
                                                        (short)((ulong)uVar77 >> 0x10) + sVar88,
                                                        (short)uVar33 + (short)uVar77 + sVar88)));
          puVar1[5] = CONCAT26((short)((ulong)uVar22 >> 0x30) + (short)((ulong)uVar52 >> 0x30) +
                               sVar86,CONCAT24((short)((ulong)uVar22 >> 0x20) +
                                               (short)((ulong)uVar52 >> 0x20) + sVar86,
                                               CONCAT22((short)((ulong)uVar22 >> 0x10) +
                                                        (short)((ulong)uVar52 >> 0x10) + sVar86,
                                                        (short)uVar22 + (short)uVar52 + sVar86)));
          puVar1[4] = CONCAT26((short)((ulong)uVar46 >> 0x30) + (short)((ulong)uVar78 >> 0x30) +
                               sVar86,CONCAT24((short)((ulong)uVar46 >> 0x20) +
                                               (short)((ulong)uVar78 >> 0x20) + sVar86,
                                               CONCAT22((short)((ulong)uVar46 >> 0x10) +
                                                        (short)((ulong)uVar78 >> 0x10) + sVar86,
                                                        (short)uVar46 + (short)uVar78 + sVar86)));
        } while (uVar87 < 0x98);
        lVar84 = lVar84 + 1;
        param_1 = param_1 + 0x3c0;
        param_2 = param_2 + 0x3c0;
        param_3 = param_3 + 0x3c0;
      } while (lVar84 != 0x90);
    }
  }
  else if (*(char *)(param_5 + 0x12) == '\0') {
    lVar84 = 0;
    do {
      uVar94 = *(undefined8 *)(param_5 + 4);
      lVar85 = 0;
      sVar93 = (short)uVar94;
      uVar90 = *(undefined8 *)(param_5 + 2);
      uVar92 = *(undefined8 *)(param_5 + 0xc);
      sVar88 = (short)((ulong)uVar94 >> 0x10);
      sVar86 = (short)((ulong)uVar94 >> 0x20);
      uVar87 = 0xfffffffffffffff8;
      do {
        puVar1 = (undefined8 *)(param_3 + lVar85);
        puVar2 = (undefined8 *)(param_2 + lVar85);
        uVar52 = puVar1[5];
        uVar46 = puVar1[4];
        uVar17 = puVar1[1];
        uVar94 = *puVar1;
        uVar33 = puVar1[3];
        uVar22 = puVar1[2];
        uVar87 = uVar87 + 8;
        puVar1 = (undefined8 *)(param_1 + lVar85);
        lVar85 = lVar85 + 0x30;
        uVar45 = puVar2[1];
        uVar32 = *puVar2;
        uVar78 = puVar2[3];
        uVar77 = puVar2[2];
        uVar89 = (ushort)uVar90;
        uVar3 = (uint)uVar89;
        uVar57 = ((uint)uVar32 & 0xffff) * uVar3;
        iVar59 = (ushort)((ulong)uVar32 >> 0x10) * uVar3;
        iVar60 = (ushort)((ulong)uVar32 >> 0x20) * uVar3;
        iVar61 = (ushort)((ulong)uVar32 >> 0x30) * uVar3;
        uVar3 = (uint)uVar89;
        uVar31 = (ushort)uVar45 * uVar3;
        iVar34 = (ushort)((ulong)uVar45 >> 0x10) * uVar3;
        iVar35 = (ushort)((ulong)uVar45 >> 0x20) * uVar3;
        iVar36 = (ushort)((ulong)uVar45 >> 0x30) * uVar3;
        uVar91 = (ushort)uVar92;
        uVar4 = (uint)uVar91;
        uVar74 = ((uint)uVar94 & 0xffff) * uVar4;
        iVar79 = (ushort)((ulong)uVar94 >> 0x10) * uVar4;
        uVar3 = (uint)uVar91;
        uVar9 = (ushort)uVar17 * uVar3;
        iVar10 = (ushort)((ulong)uVar17 >> 0x10) * uVar3;
        iVar11 = (ushort)((ulong)uVar17 >> 0x20) * uVar3;
        iVar12 = (ushort)((ulong)uVar17 >> 0x30) * uVar3;
        uVar98 = (uint)puVar2[5];
        uVar99 = (uint)((ulong)puVar2[5] >> 0x20);
        uVar51 = puVar2[4];
        uVar97 = (undefined2)((uint)iVar59 >> 8);
        uVar80 = (undefined1)((uint)iVar59 >> 0x18);
        uVar100 = (undefined2)((uint)iVar79 >> 8);
        uVar81 = (undefined1)((uint)iVar79 >> 0x18);
        uVar96 = (undefined2)((uint)iVar34 >> 8);
        uVar82 = (undefined1)((uint)iVar34 >> 0x18);
        uVar95 = (undefined2)((uint)iVar10 >> 8);
        uVar83 = (undefined1)((uint)iVar10 >> 0x18);
        auVar54._4_2_ = uVar97;
        auVar54._0_4_ = uVar57 >> 8;
        auVar54[6] = uVar80;
        auVar54[7] = 0;
        auVar54._8_2_ = (short)((uint)iVar60 >> 8);
        auVar54[10] = (char)((uint)iVar60 >> 0x18);
        auVar54[0xb] = 0;
        auVar54._12_2_ = (short)((uint)iVar61 >> 8);
        auVar54[0xe] = (char)((uint)iVar61 >> 0x18);
        auVar54[0xf] = 0;
        uVar58 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar97,uVar57 >> 8)),auVar54,4);
        auVar65._4_2_ = uVar100;
        auVar65._0_4_ = uVar74 >> 8;
        auVar65[6] = uVar81;
        auVar65[7] = 0;
        auVar65._8_4_ = (ushort)((ulong)uVar94 >> 0x20) * uVar4 >> 8;
        auVar65._12_4_ = (ushort)((ulong)uVar94 >> 0x30) * uVar4 >> 8;
        uVar76 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar100,uVar74 >> 8)),auVar65,4);
        auVar25._4_2_ = uVar96;
        auVar25._0_4_ = uVar31 >> 8;
        auVar25[6] = uVar82;
        auVar25[7] = 0;
        auVar25._8_2_ = (short)((uint)iVar35 >> 8);
        auVar25[10] = (char)((uint)iVar35 >> 0x18);
        auVar25[0xb] = 0;
        auVar25._12_2_ = (short)((uint)iVar36 >> 8);
        auVar25[0xe] = (char)((uint)iVar36 >> 0x18);
        auVar25[0xf] = 0;
        uVar32 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar31 >> 8)),auVar25,4);
        auVar6._4_2_ = uVar95;
        auVar6._0_4_ = uVar9 >> 8;
        auVar6[6] = uVar83;
        auVar6[7] = 0;
        auVar6._8_2_ = (short)((uint)iVar11 >> 8);
        auVar6[10] = (char)((uint)iVar11 >> 0x18);
        auVar6[0xb] = 0;
        auVar6._12_2_ = (short)((uint)iVar12 >> 8);
        auVar6[0xe] = (char)((uint)iVar12 >> 0x18);
        auVar6[0xf] = 0;
        uVar94 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar6,4);
        uVar4 = (uint)uVar89;
        uVar74 = ((uint)uVar77 & 0xffff) * uVar4;
        iVar79 = (ushort)((ulong)uVar77 >> 0x10) * uVar4;
        uVar3 = (uint)uVar89;
        uVar57 = (ushort)uVar78 * uVar3;
        iVar59 = (ushort)((ulong)uVar78 >> 0x10) * uVar3;
        iVar60 = (ushort)((ulong)uVar78 >> 0x20) * uVar3;
        iVar61 = (ushort)((ulong)uVar78 >> 0x30) * uVar3;
        uVar3 = (uint)uVar91;
        uVar31 = ((uint)uVar22 & 0xffff) * uVar3;
        iVar34 = (ushort)((ulong)uVar22 >> 0x10) * uVar3;
        iVar35 = (ushort)((ulong)uVar22 >> 0x20) * uVar3;
        iVar36 = (ushort)((ulong)uVar22 >> 0x30) * uVar3;
        uVar3 = (uint)uVar91;
        uVar9 = (ushort)uVar33 * uVar3;
        iVar10 = (ushort)((ulong)uVar33 >> 0x10) * uVar3;
        iVar11 = (ushort)((ulong)uVar33 >> 0x20) * uVar3;
        iVar12 = (ushort)((ulong)uVar33 >> 0x30) * uVar3;
        uVar100 = (undefined2)((uint)iVar79 >> 8);
        uVar80 = (undefined1)((uint)iVar79 >> 0x18);
        uVar96 = (undefined2)((uint)iVar34 >> 8);
        uVar81 = (undefined1)((uint)iVar34 >> 0x18);
        uVar97 = (undefined2)((uint)iVar59 >> 8);
        uVar82 = (undefined1)((uint)iVar59 >> 0x18);
        uVar95 = (undefined2)((uint)iVar10 >> 8);
        uVar83 = (undefined1)((uint)iVar10 >> 0x18);
        auVar66._4_2_ = uVar100;
        auVar66._0_4_ = uVar74 >> 8;
        auVar66[6] = uVar80;
        auVar66[7] = 0;
        auVar66._8_4_ = (ushort)((ulong)uVar77 >> 0x20) * uVar4 >> 8;
        auVar66._12_4_ = (ushort)((ulong)uVar77 >> 0x30) * uVar4 >> 8;
        uVar77 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar74 >> 8)),auVar66,4);
        auVar26._4_2_ = uVar96;
        auVar26._0_4_ = uVar31 >> 8;
        auVar26[6] = uVar81;
        auVar26[7] = 0;
        auVar26._8_2_ = (short)((uint)iVar35 >> 8);
        auVar26[10] = (char)((uint)iVar35 >> 0x18);
        auVar26[0xb] = 0;
        auVar26._12_2_ = (short)((uint)iVar36 >> 8);
        auVar26[0xe] = (char)((uint)iVar36 >> 0x18);
        auVar26[0xf] = 0;
        uVar33 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar96,uVar31 >> 8)),auVar26,4);
        auVar39._4_2_ = uVar97;
        auVar39._0_4_ = uVar57 >> 8;
        auVar39[6] = uVar82;
        auVar39[7] = 0;
        auVar39._8_2_ = (short)((uint)iVar60 >> 8);
        auVar39[10] = (char)((uint)iVar60 >> 0x18);
        auVar39[0xb] = 0;
        auVar39._12_2_ = (short)((uint)iVar61 >> 8);
        auVar39[0xe] = (char)((uint)iVar61 >> 0x18);
        auVar39[0xf] = 0;
        uVar45 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar97,uVar57 >> 8)),auVar39,4);
        auVar14._4_2_ = uVar95;
        auVar14._0_4_ = uVar9 >> 8;
        auVar14[6] = uVar83;
        auVar14[7] = 0;
        auVar14._8_2_ = (short)((uint)iVar11 >> 8);
        auVar14[10] = (char)((uint)iVar11 >> 0x18);
        auVar14[0xb] = 0;
        auVar14._12_2_ = (short)((uint)iVar12 >> 8);
        auVar14[0xe] = (char)((uint)iVar12 >> 0x18);
        auVar14[0xf] = 0;
        uVar17 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar14,4);
        uVar9 = (uint)uVar89;
        uVar75 = ((uint)uVar51 & 0xffff) * uVar9;
        iVar60 = (ushort)((ulong)uVar51 >> 0x10) * uVar9;
        uVar3 = (uint)uVar89;
        uVar74 = (uVar98 & 0xffff) * uVar3;
        iVar59 = (uVar98 >> 0x10) * uVar3;
        uVar4 = (uint)uVar91;
        uVar57 = ((uint)uVar46 & 0xffff) * uVar4;
        iVar34 = (ushort)((ulong)uVar46 >> 0x10) * uVar4;
        iVar35 = (ushort)((ulong)uVar46 >> 0x20) * uVar4;
        iVar36 = (ushort)((ulong)uVar46 >> 0x30) * uVar4;
        uVar4 = (uint)uVar91;
        uVar31 = (ushort)uVar52 * uVar4;
        iVar10 = (ushort)((ulong)uVar52 >> 0x10) * uVar4;
        iVar11 = (ushort)((ulong)uVar52 >> 0x20) * uVar4;
        iVar12 = (ushort)((ulong)uVar52 >> 0x30) * uVar4;
        uVar100 = (undefined2)((uint)iVar60 >> 8);
        uVar80 = (undefined1)((uint)iVar60 >> 0x18);
        uVar97 = (undefined2)((uint)iVar59 >> 8);
        uVar81 = (undefined1)((uint)iVar59 >> 0x18);
        uVar96 = (undefined2)((uint)iVar34 >> 8);
        uVar82 = (undefined1)((uint)iVar34 >> 0x18);
        uVar95 = (undefined2)((uint)iVar10 >> 8);
        uVar83 = (undefined1)((uint)iVar10 >> 0x18);
        auVar67._4_2_ = uVar100;
        auVar67._0_4_ = uVar75 >> 8;
        auVar67[6] = uVar80;
        auVar67[7] = 0;
        auVar67._8_4_ = (ushort)((ulong)uVar51 >> 0x20) * uVar9 >> 8;
        auVar67._12_4_ = (ushort)((ulong)uVar51 >> 0x30) * uVar9 >> 8;
        uVar78 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar75 >> 8)),auVar67,4);
        auVar48._4_2_ = uVar97;
        auVar48._0_4_ = uVar74 >> 8;
        auVar48[6] = uVar81;
        auVar48[7] = 0;
        auVar48._8_4_ = (uVar99 & 0xffff) * uVar3 >> 8;
        auVar48._12_4_ = (uVar99 >> 0x10) * uVar3 >> 8;
        uVar52 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar97,uVar74 >> 8)),auVar48,4);
        auVar40._4_2_ = uVar96;
        auVar40._0_4_ = uVar57 >> 8;
        auVar40[6] = uVar82;
        auVar40[7] = 0;
        auVar40._8_2_ = (short)((uint)iVar35 >> 8);
        auVar40[10] = (char)((uint)iVar35 >> 0x18);
        auVar40[0xb] = 0;
        auVar40._12_2_ = (short)((uint)iVar36 >> 8);
        auVar40[0xe] = (char)((uint)iVar36 >> 0x18);
        auVar40[0xf] = 0;
        uVar46 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar57 >> 8)),auVar40,4);
        auVar19._4_2_ = uVar95;
        auVar19._0_4_ = uVar31 >> 8;
        auVar19[6] = uVar83;
        auVar19[7] = 0;
        auVar19._8_2_ = (short)((uint)iVar11 >> 8);
        auVar19[10] = (char)((uint)iVar11 >> 0x18);
        auVar19[0xb] = 0;
        auVar19._12_2_ = (short)((uint)iVar12 >> 8);
        auVar19[0xe] = (char)((uint)iVar12 >> 0x18);
        auVar19[0xf] = 0;
        uVar22 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar31 >> 8)),auVar19,4);
        puVar1[1] = CONCAT26((short)((ulong)uVar94 >> 0x30) + (short)((ulong)uVar32 >> 0x30) +
                             sVar93,CONCAT24((short)((ulong)uVar94 >> 0x20) +
                                             (short)((ulong)uVar32 >> 0x20) + sVar93,
                                             CONCAT22((short)((ulong)uVar94 >> 0x10) +
                                                      (short)((ulong)uVar32 >> 0x10) + sVar93,
                                                      (short)uVar94 + (short)uVar32 + sVar93)));
        *puVar1 = CONCAT26((short)((ulong)uVar76 >> 0x30) + (short)((ulong)uVar58 >> 0x30) + sVar93,
                           CONCAT24((short)((ulong)uVar76 >> 0x20) + (short)((ulong)uVar58 >> 0x20)
                                    + sVar93,CONCAT22((short)((ulong)uVar76 >> 0x10) +
                                                      (short)((ulong)uVar58 >> 0x10) + sVar93,
                                                      (short)uVar76 + (short)uVar58 + sVar93)));
        puVar1[3] = CONCAT26((short)((ulong)uVar17 >> 0x30) + (short)((ulong)uVar45 >> 0x30) +
                             sVar88,CONCAT24((short)((ulong)uVar17 >> 0x20) +
                                             (short)((ulong)uVar45 >> 0x20) + sVar88,
                                             CONCAT22((short)((ulong)uVar17 >> 0x10) +
                                                      (short)((ulong)uVar45 >> 0x10) + sVar88,
                                                      (short)uVar17 + (short)uVar45 + sVar88)));
        puVar1[2] = CONCAT26((short)((ulong)uVar33 >> 0x30) + (short)((ulong)uVar77 >> 0x30) +
                             sVar88,CONCAT24((short)((ulong)uVar33 >> 0x20) +
                                             (short)((ulong)uVar77 >> 0x20) + sVar88,
                                             CONCAT22((short)((ulong)uVar33 >> 0x10) +
                                                      (short)((ulong)uVar77 >> 0x10) + sVar88,
                                                      (short)uVar33 + (short)uVar77 + sVar88)));
        puVar1[5] = CONCAT26((short)((ulong)uVar22 >> 0x30) + (short)((ulong)uVar52 >> 0x30) +
                             sVar86,CONCAT24((short)((ulong)uVar22 >> 0x20) +
                                             (short)((ulong)uVar52 >> 0x20) + sVar86,
                                             CONCAT22((short)((ulong)uVar22 >> 0x10) +
                                                      (short)((ulong)uVar52 >> 0x10) + sVar86,
                                                      (short)uVar22 + (short)uVar52 + sVar86)));
        puVar1[4] = CONCAT26((short)((ulong)uVar46 >> 0x30) + (short)((ulong)uVar78 >> 0x30) +
                             sVar86,CONCAT24((short)((ulong)uVar46 >> 0x20) +
                                             (short)((ulong)uVar78 >> 0x20) + sVar86,
                                             CONCAT22((short)((ulong)uVar46 >> 0x10) +
                                                      (short)((ulong)uVar78 >> 0x10) + sVar86,
                                                      (short)uVar46 + (short)uVar78 + sVar86)));
      } while (uVar87 < 0x98);
      lVar84 = lVar84 + 1;
      param_1 = param_1 + 0x3c0;
      param_2 = param_2 + 0x3c0;
      param_3 = param_3 + 0x3c0;
    } while (lVar84 != 0x90);
  }
  else {
    lVar84 = 0;
    do {
      uVar94 = *(undefined8 *)(param_5 + 4);
      lVar85 = 0;
      sVar93 = (short)uVar94;
      uVar90 = *(undefined8 *)(param_5 + 2);
      uVar92 = *(undefined8 *)(param_5 + 0xc);
      sVar88 = (short)((ulong)uVar94 >> 0x10);
      sVar86 = (short)((ulong)uVar94 >> 0x20);
      uVar87 = 0xfffffffffffffff8;
      do {
        puVar1 = (undefined8 *)(param_3 + lVar85);
        puVar2 = (undefined8 *)(param_2 + lVar85);
        uVar52 = puVar1[5];
        uVar46 = puVar1[4];
        uVar17 = puVar1[1];
        uVar94 = *puVar1;
        uVar33 = puVar1[3];
        uVar22 = puVar1[2];
        uVar87 = uVar87 + 8;
        puVar1 = (undefined8 *)(param_1 + lVar85);
        lVar85 = lVar85 + 0x30;
        uVar45 = puVar2[1];
        uVar32 = *puVar2;
        uVar78 = puVar2[3];
        uVar77 = puVar2[2];
        uVar89 = (ushort)uVar90;
        uVar3 = (uint)uVar89;
        uVar57 = ((uint)uVar32 & 0xffff) * uVar3;
        iVar59 = (ushort)((ulong)uVar32 >> 0x10) * uVar3;
        iVar60 = (ushort)((ulong)uVar32 >> 0x20) * uVar3;
        iVar61 = (ushort)((ulong)uVar32 >> 0x30) * uVar3;
        uVar3 = (uint)uVar89;
        uVar31 = (ushort)uVar45 * uVar3;
        iVar34 = (ushort)((ulong)uVar45 >> 0x10) * uVar3;
        iVar35 = (ushort)((ulong)uVar45 >> 0x20) * uVar3;
        iVar36 = (ushort)((ulong)uVar45 >> 0x30) * uVar3;
        uVar91 = (ushort)uVar92;
        uVar4 = (uint)uVar91;
        uVar74 = ((uint)uVar94 & 0xffff) * uVar4;
        iVar79 = (ushort)((ulong)uVar94 >> 0x10) * uVar4;
        uVar3 = (uint)uVar91;
        uVar9 = (ushort)uVar17 * uVar3;
        iVar10 = (ushort)((ulong)uVar17 >> 0x10) * uVar3;
        iVar11 = (ushort)((ulong)uVar17 >> 0x20) * uVar3;
        iVar12 = (ushort)((ulong)uVar17 >> 0x30) * uVar3;
        uVar98 = (uint)puVar2[5];
        uVar99 = (uint)((ulong)puVar2[5] >> 0x20);
        uVar51 = puVar2[4];
        uVar97 = (undefined2)((uint)iVar59 >> 8);
        uVar80 = (undefined1)((uint)iVar59 >> 0x18);
        uVar100 = (undefined2)((uint)iVar79 >> 8);
        uVar81 = (undefined1)((uint)iVar79 >> 0x18);
        uVar96 = (undefined2)((uint)iVar34 >> 8);
        uVar82 = (undefined1)((uint)iVar34 >> 0x18);
        uVar95 = (undefined2)((uint)iVar10 >> 8);
        uVar83 = (undefined1)((uint)iVar10 >> 0x18);
        auVar53._4_2_ = uVar97;
        auVar53._0_4_ = uVar57 >> 8;
        auVar53[6] = uVar80;
        auVar53[7] = 0;
        auVar53._8_2_ = (short)((uint)iVar60 >> 8);
        auVar53[10] = (char)((uint)iVar60 >> 0x18);
        auVar53[0xb] = 0;
        auVar53._12_2_ = (short)((uint)iVar61 >> 8);
        auVar53[0xe] = (char)((uint)iVar61 >> 0x18);
        auVar53[0xf] = 0;
        uVar58 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar97,uVar57 >> 8)),auVar53,4);
        auVar62._4_2_ = uVar100;
        auVar62._0_4_ = uVar74 >> 8;
        auVar62[6] = uVar81;
        auVar62[7] = 0;
        auVar62._8_4_ = (ushort)((ulong)uVar94 >> 0x20) * uVar4 >> 8;
        auVar62._12_4_ = (ushort)((ulong)uVar94 >> 0x30) * uVar4 >> 8;
        uVar76 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar100,uVar74 >> 8)),auVar62,4);
        auVar23._4_2_ = uVar96;
        auVar23._0_4_ = uVar31 >> 8;
        auVar23[6] = uVar82;
        auVar23[7] = 0;
        auVar23._8_2_ = (short)((uint)iVar35 >> 8);
        auVar23[10] = (char)((uint)iVar35 >> 0x18);
        auVar23[0xb] = 0;
        auVar23._12_2_ = (short)((uint)iVar36 >> 8);
        auVar23[0xe] = (char)((uint)iVar36 >> 0x18);
        auVar23[0xf] = 0;
        uVar32 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar31 >> 8)),auVar23,4);
        auVar5._4_2_ = uVar95;
        auVar5._0_4_ = uVar9 >> 8;
        auVar5[6] = uVar83;
        auVar5[7] = 0;
        auVar5._8_2_ = (short)((uint)iVar11 >> 8);
        auVar5[10] = (char)((uint)iVar11 >> 0x18);
        auVar5[0xb] = 0;
        auVar5._12_2_ = (short)((uint)iVar12 >> 8);
        auVar5[0xe] = (char)((uint)iVar12 >> 0x18);
        auVar5[0xf] = 0;
        uVar94 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar5,4);
        uVar4 = (uint)uVar89;
        uVar74 = ((uint)uVar77 & 0xffff) * uVar4;
        iVar79 = (ushort)((ulong)uVar77 >> 0x10) * uVar4;
        uVar3 = (uint)uVar89;
        uVar57 = (ushort)uVar78 * uVar3;
        iVar59 = (ushort)((ulong)uVar78 >> 0x10) * uVar3;
        iVar60 = (ushort)((ulong)uVar78 >> 0x20) * uVar3;
        iVar61 = (ushort)((ulong)uVar78 >> 0x30) * uVar3;
        uVar3 = (uint)uVar91;
        uVar31 = ((uint)uVar22 & 0xffff) * uVar3;
        iVar34 = (ushort)((ulong)uVar22 >> 0x10) * uVar3;
        iVar35 = (ushort)((ulong)uVar22 >> 0x20) * uVar3;
        iVar36 = (ushort)((ulong)uVar22 >> 0x30) * uVar3;
        uVar3 = (uint)uVar91;
        uVar9 = (ushort)uVar33 * uVar3;
        iVar10 = (ushort)((ulong)uVar33 >> 0x10) * uVar3;
        iVar11 = (ushort)((ulong)uVar33 >> 0x20) * uVar3;
        iVar12 = (ushort)((ulong)uVar33 >> 0x30) * uVar3;
        uVar100 = (undefined2)((uint)iVar79 >> 8);
        uVar80 = (undefined1)((uint)iVar79 >> 0x18);
        uVar96 = (undefined2)((uint)iVar34 >> 8);
        uVar81 = (undefined1)((uint)iVar34 >> 0x18);
        uVar97 = (undefined2)((uint)iVar59 >> 8);
        uVar82 = (undefined1)((uint)iVar59 >> 0x18);
        uVar95 = (undefined2)((uint)iVar10 >> 8);
        uVar83 = (undefined1)((uint)iVar10 >> 0x18);
        auVar63._4_2_ = uVar100;
        auVar63._0_4_ = uVar74 >> 8;
        auVar63[6] = uVar80;
        auVar63[7] = 0;
        auVar63._8_4_ = (ushort)((ulong)uVar77 >> 0x20) * uVar4 >> 8;
        auVar63._12_4_ = (ushort)((ulong)uVar77 >> 0x30) * uVar4 >> 8;
        uVar77 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar74 >> 8)),auVar63,4);
        auVar24._4_2_ = uVar96;
        auVar24._0_4_ = uVar31 >> 8;
        auVar24[6] = uVar81;
        auVar24[7] = 0;
        auVar24._8_2_ = (short)((uint)iVar35 >> 8);
        auVar24[10] = (char)((uint)iVar35 >> 0x18);
        auVar24[0xb] = 0;
        auVar24._12_2_ = (short)((uint)iVar36 >> 8);
        auVar24[0xe] = (char)((uint)iVar36 >> 0x18);
        auVar24[0xf] = 0;
        uVar33 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar96,uVar31 >> 8)),auVar24,4);
        auVar37._4_2_ = uVar97;
        auVar37._0_4_ = uVar57 >> 8;
        auVar37[6] = uVar82;
        auVar37[7] = 0;
        auVar37._8_2_ = (short)((uint)iVar60 >> 8);
        auVar37[10] = (char)((uint)iVar60 >> 0x18);
        auVar37[0xb] = 0;
        auVar37._12_2_ = (short)((uint)iVar61 >> 8);
        auVar37[0xe] = (char)((uint)iVar61 >> 0x18);
        auVar37[0xf] = 0;
        uVar45 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar97,uVar57 >> 8)),auVar37,4);
        auVar13._4_2_ = uVar95;
        auVar13._0_4_ = uVar9 >> 8;
        auVar13[6] = uVar83;
        auVar13[7] = 0;
        auVar13._8_2_ = (short)((uint)iVar11 >> 8);
        auVar13[10] = (char)((uint)iVar11 >> 0x18);
        auVar13[0xb] = 0;
        auVar13._12_2_ = (short)((uint)iVar12 >> 8);
        auVar13[0xe] = (char)((uint)iVar12 >> 0x18);
        auVar13[0xf] = 0;
        uVar17 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar9 >> 8)),auVar13,4);
        uVar9 = (uint)uVar89;
        uVar75 = ((uint)uVar51 & 0xffff) * uVar9;
        iVar60 = (ushort)((ulong)uVar51 >> 0x10) * uVar9;
        uVar3 = (uint)uVar89;
        uVar74 = (uVar98 & 0xffff) * uVar3;
        iVar59 = (uVar98 >> 0x10) * uVar3;
        uVar4 = (uint)uVar91;
        uVar57 = ((uint)uVar46 & 0xffff) * uVar4;
        iVar34 = (ushort)((ulong)uVar46 >> 0x10) * uVar4;
        iVar35 = (ushort)((ulong)uVar46 >> 0x20) * uVar4;
        iVar36 = (ushort)((ulong)uVar46 >> 0x30) * uVar4;
        uVar4 = (uint)uVar91;
        uVar31 = (ushort)uVar52 * uVar4;
        iVar10 = (ushort)((ulong)uVar52 >> 0x10) * uVar4;
        iVar11 = (ushort)((ulong)uVar52 >> 0x20) * uVar4;
        iVar12 = (ushort)((ulong)uVar52 >> 0x30) * uVar4;
        uVar100 = (undefined2)((uint)iVar60 >> 8);
        uVar80 = (undefined1)((uint)iVar60 >> 0x18);
        uVar97 = (undefined2)((uint)iVar59 >> 8);
        uVar81 = (undefined1)((uint)iVar59 >> 0x18);
        uVar96 = (undefined2)((uint)iVar34 >> 8);
        uVar82 = (undefined1)((uint)iVar34 >> 0x18);
        uVar95 = (undefined2)((uint)iVar10 >> 8);
        uVar83 = (undefined1)((uint)iVar10 >> 0x18);
        auVar64._4_2_ = uVar100;
        auVar64._0_4_ = uVar75 >> 8;
        auVar64[6] = uVar80;
        auVar64[7] = 0;
        auVar64._8_4_ = (ushort)((ulong)uVar51 >> 0x20) * uVar9 >> 8;
        auVar64._12_4_ = (ushort)((ulong)uVar51 >> 0x30) * uVar9 >> 8;
        uVar78 = NEON_uqxtn((ulong)CONCAT16(uVar80,CONCAT24(uVar100,uVar75 >> 8)),auVar64,4);
        auVar47._4_2_ = uVar97;
        auVar47._0_4_ = uVar74 >> 8;
        auVar47[6] = uVar81;
        auVar47[7] = 0;
        auVar47._8_4_ = (uVar99 & 0xffff) * uVar3 >> 8;
        auVar47._12_4_ = (uVar99 >> 0x10) * uVar3 >> 8;
        uVar52 = NEON_uqxtn((ulong)CONCAT16(uVar81,CONCAT24(uVar97,uVar74 >> 8)),auVar47,4);
        auVar38._4_2_ = uVar96;
        auVar38._0_4_ = uVar57 >> 8;
        auVar38[6] = uVar82;
        auVar38[7] = 0;
        auVar38._8_2_ = (short)((uint)iVar35 >> 8);
        auVar38[10] = (char)((uint)iVar35 >> 0x18);
        auVar38[0xb] = 0;
        auVar38._12_2_ = (short)((uint)iVar36 >> 8);
        auVar38[0xe] = (char)((uint)iVar36 >> 0x18);
        auVar38[0xf] = 0;
        uVar46 = NEON_uqxtn((ulong)CONCAT16(uVar82,CONCAT24(uVar96,uVar57 >> 8)),auVar38,4);
        auVar18._4_2_ = uVar95;
        auVar18._0_4_ = uVar31 >> 8;
        auVar18[6] = uVar83;
        auVar18[7] = 0;
        auVar18._8_2_ = (short)((uint)iVar11 >> 8);
        auVar18[10] = (char)((uint)iVar11 >> 0x18);
        auVar18[0xb] = 0;
        auVar18._12_2_ = (short)((uint)iVar12 >> 8);
        auVar18[0xe] = (char)((uint)iVar12 >> 0x18);
        auVar18[0xf] = 0;
        uVar22 = NEON_uqxtn((ulong)CONCAT16(uVar83,CONCAT24(uVar95,uVar31 >> 8)),auVar18,4);
        puVar1[1] = CONCAT26((short)((ulong)uVar94 >> 0x30) + (short)((ulong)uVar32 >> 0x30) +
                             sVar93,CONCAT24((short)((ulong)uVar94 >> 0x20) +
                                             (short)((ulong)uVar32 >> 0x20) + sVar93,
                                             CONCAT22((short)((ulong)uVar94 >> 0x10) +
                                                      (short)((ulong)uVar32 >> 0x10) + sVar93,
                                                      (short)uVar94 + (short)uVar32 + sVar93)));
        *puVar1 = CONCAT26((short)((ulong)uVar76 >> 0x30) + (short)((ulong)uVar58 >> 0x30) + sVar93,
                           CONCAT24((short)((ulong)uVar76 >> 0x20) + (short)((ulong)uVar58 >> 0x20)
                                    + sVar93,CONCAT22((short)((ulong)uVar76 >> 0x10) +
                                                      (short)((ulong)uVar58 >> 0x10) + sVar93,
                                                      (short)uVar76 + (short)uVar58 + sVar93)));
        puVar1[3] = CONCAT26((short)((ulong)uVar17 >> 0x30) + (short)((ulong)uVar45 >> 0x30) +
                             sVar88,CONCAT24((short)((ulong)uVar17 >> 0x20) +
                                             (short)((ulong)uVar45 >> 0x20) + sVar88,
                                             CONCAT22((short)((ulong)uVar17 >> 0x10) +
                                                      (short)((ulong)uVar45 >> 0x10) + sVar88,
                                                      (short)uVar17 + (short)uVar45 + sVar88)));
        puVar1[2] = CONCAT26((short)((ulong)uVar33 >> 0x30) + (short)((ulong)uVar77 >> 0x30) +
                             sVar88,CONCAT24((short)((ulong)uVar33 >> 0x20) +
                                             (short)((ulong)uVar77 >> 0x20) + sVar88,
                                             CONCAT22((short)((ulong)uVar33 >> 0x10) +
                                                      (short)((ulong)uVar77 >> 0x10) + sVar88,
                                                      (short)uVar33 + (short)uVar77 + sVar88)));
        puVar1[5] = CONCAT26((short)((ulong)uVar22 >> 0x30) + (short)((ulong)uVar52 >> 0x30) +
                             sVar86,CONCAT24((short)((ulong)uVar22 >> 0x20) +
                                             (short)((ulong)uVar52 >> 0x20) + sVar86,
                                             CONCAT22((short)((ulong)uVar22 >> 0x10) +
                                                      (short)((ulong)uVar52 >> 0x10) + sVar86,
                                                      (short)uVar22 + (short)uVar52 + sVar86)));
        puVar1[4] = CONCAT26((short)((ulong)uVar46 >> 0x30) + (short)((ulong)uVar78 >> 0x30) +
                             sVar86,CONCAT24((short)((ulong)uVar46 >> 0x20) +
                                             (short)((ulong)uVar78 >> 0x20) + sVar86,
                                             CONCAT22((short)((ulong)uVar46 >> 0x10) +
                                                      (short)((ulong)uVar78 >> 0x10) + sVar86,
                                                      (short)uVar46 + (short)uVar78 + sVar86)));
      } while (uVar87 < 0x98);
      lVar84 = lVar84 + 1;
      param_1 = param_1 + 0x3c0;
      param_2 = param_2 + 0x3c0;
      param_3 = param_3 + 0x3c0;
    } while (lVar84 != 0x90);
  }
  return;
}


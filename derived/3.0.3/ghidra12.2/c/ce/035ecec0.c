
/* WARNING: Removing unreachable block (ram,0x035eef90) */
/* WARNING: Removing unreachable block (ram,0x035eef98) */
/* WARNING: Removing unreachable block (ram,0x035ef0f0) */
/* WARNING: Removing unreachable block (ram,0x035eefc4) */
/* WARNING: Removing unreachable block (ram,0x035ef098) */
/* WARNING: Removing unreachable block (ram,0x035ef0c8) */
/* WARNING: Removing unreachable block (ram,0x035eefcc) */
/* WARNING: Removing unreachable block (ram,0x035ef10c) */
/* WARNING: Removing unreachable block (ram,0x03609db4) */
/* WARNING: Removing unreachable block (ram,0x0362cb8c) */
/* WARNING: Removing unreachable block (ram,0x03609dbc) */
/* WARNING: Removing unreachable block (ram,0x035ef024) */
/* WARNING: Removing unreachable block (ram,0x035ef034) */
/* WARNING: Removing unreachable block (ram,0x035ef120) */
/* WARNING: Removing unreachable block (ram,0x035ef060) */
/* WARNING: Removing unreachable block (ram,0x035ef068) */
/* WARNING: Removing unreachable block (ram,0x035ef078) */
/* WARNING: Removing unreachable block (ram,0x035ef0d0) */
/* WARNING: Removing unreachable block (ram,0x035ef0dc) */
/* WARNING: Removing unreachable block (ram,0x035ed318) */
/* WARNING: Removing unreachable block (ram,0x035ed328) */
/* WARNING: Removing unreachable block (ram,0x035fdb84) */
/* WARNING: Removing unreachable block (ram,0x035ff78c) */
/* WARNING: Removing unreachable block (ram,0x035fb7b0) */
/* WARNING: Removing unreachable block (ram,0x03609d2c) */
/* WARNING: Removing unreachable block (ram,0x03609d30) */
/* WARNING: Removing unreachable block (ram,0x03609d34) */
/* WARNING: Removing unreachable block (ram,0x03609d94) */
/* WARNING: Removing unreachable block (ram,0x03609d98) */
/* WARNING: Removing unreachable block (ram,0x03609da0) */
/* WARNING: Removing unreachable block (ram,0x03609da4) */
/* WARNING: Removing unreachable block (ram,0x035f8004) */
/* WARNING: Removing unreachable block (ram,0x035f8008) */
/* WARNING: Removing unreachable block (ram,0x03601b80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ErrorResultVariant *
FUN_035ecec0(undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
            ErrorResultVariant *param_5,long param_6,undefined8 param_7,int param_8,uint param_9)

{
  ulong *puVar1;
  uint *puVar2;
  int *piVar3;
  ErrorResultVariant EVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  undefined *puVar8;
  ErrorResultVariant EVar9;
  bool bVar10;
  ErrorResultVariant EVar11;
  short sVar12;
  int iVar13;
  ErrorResultVariant *pEVar14;
  void *__s;
  long *plVar15;
  ushort *puVar16;
  size_t sVar17;
  undefined2 uVar18;
  ushort uVar19;
  uint uVar20;
  int iVar21;
  ushort *puVar22;
  code *pcVar23;
  ErrorResultVariant EVar24;
  uint uVar25;
  long lVar26;
  byte *pbVar27;
  short *psVar28;
  undefined4 *puVar29;
  ulong uVar30;
  ushort *puVar31;
  ErrorResultVariant *pEVar32;
  ulong uVar33;
  undefined *in_x11;
  ulong in_x12;
  undefined2 *puVar34;
  uint in_w13;
  char *pcVar35;
  byte bVar36;
  long *unaff_x20;
  uint uVar37;
  ErrorResultVariant *unaff_x21;
  ulong *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  undefined8 unaff_x29;
  undefined4 unaff_w30;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined2 uStack0000000000000000;
  undefined2 uStack0000000000000004;
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  undefined2 uStack0000000000000010;
  undefined2 uStack0000000000000014;
  undefined2 uStack0000000000000018;
  undefined2 uStack000000000000001c;
  undefined2 uStack0000000000000020;
  undefined2 uStack0000000000000024;
  undefined2 uStack0000000000000028;
  undefined2 uStack000000000000002c;
  undefined2 uStack0000000000000030;
  undefined2 uStack0000000000000034;
  undefined2 uStack0000000000000038;
  undefined2 uStack000000000000003c;
  undefined2 uStack0000000000000040;
  undefined2 uStack0000000000000044;
  undefined2 uStack0000000000000048;
  undefined2 uStack000000000000004c;
  undefined2 uStack0000000000000050;
  undefined2 uStack0000000000000054;
  undefined2 uStack0000000000000058;
  undefined2 uStack000000000000005c;
  undefined2 uStack0000000000000060;
  undefined2 uStack0000000000000064;
  undefined2 uStack0000000000000068;
  undefined2 uStack000000000000006c;
  undefined2 uStack0000000000000070;
  undefined2 uStack0000000000000074;
  undefined2 uStack0000000000000078;
  undefined2 uStack000000000000007c;
  undefined2 uStack0000000000000080;
  undefined2 uStack0000000000000084;
  undefined2 uStack0000000000000088;
  undefined2 uStack000000000000008c;
  undefined2 uStack0000000000000090;
  undefined2 uStack0000000000000094;
  undefined2 uStack0000000000000098;
  undefined2 uStack000000000000009c;
  undefined2 uStack00000000000000a0;
  undefined2 uStack00000000000000a4;
  undefined2 uStack00000000000000a8;
  undefined2 uStack00000000000000ac;
  undefined2 uStack00000000000000b0;
  undefined2 uStack00000000000000b4;
  undefined2 uStack00000000000000b8;
  undefined2 uStack00000000000000bc;
  undefined2 uStack00000000000000c0;
  undefined2 uStack00000000000000c4;
  undefined2 uStack00000000000000c8;
  undefined2 uStack00000000000000cc;
  undefined2 uStack00000000000000d0;
  undefined2 uStack00000000000000d4;
  undefined2 uStack00000000000000d8;
  undefined2 uStack00000000000000dc;
  undefined2 uStack00000000000000e0;
  undefined2 uStack00000000000000e4;
  undefined2 uStack00000000000000e8;
  undefined2 uStack00000000000000ec;
  undefined2 uStack00000000000000f0;
  undefined2 uStack00000000000000f4;
  undefined1 uStack00000000000000f8;
  undefined1 auStack_7ffffffe [2147483598];
  undefined8 uStack_28;
  undefined8 uStack_8;
  
  auVar40._8_8_ = param_6;
  auVar40._0_8_ = param_5;
  uVar19 = *(ushort *)(param_5 + 0xe6);
  EVar11 = param_5[0xe5];
  puVar16 = (ushort *)(ulong)(byte)EVar11;
  *(ushort *)(param_5 + 0xe6) = uVar19 + 1;
  param_5[0xe5] = (ErrorResultVariant)((char)EVar11 + 1);
  param_5[0xe9] =
       (ErrorResultVariant)
       ((byte)param_5[0xe9] |
       ((uVar19 - 5 & 0x80000003) == 0 && param_5[0xe8] != (ErrorResultVariant)0x0));
  puVar8 = PTR_LAB_04bca5e0;
  if (3 < (byte)param_5[0xe4]) {
                    /* WARNING: Could not recover jumptable at 0x035ecf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pEVar14 = (ErrorResultVariant *)
              (*(code *)(&UNK_035ecf2c + (ulong)(byte)puVar16[0x20c7fc4] * 4))();
    return pEVar14;
  }
  if (param_5[0xe4] != (ErrorResultVariant)0x2) {
    pEVar14 = (ErrorResultVariant *)FUN_035f1510(param_5,2);
    if (param_5[0xe4] != (ErrorResultVariant)0x5) {
      return pEVar14;
    }
    goto LAB_035ed674;
  }
  puVar22 = &switchD_035ecf7c::switchdataD_0418ff7c;
  uVar19 = (&switchD_035ecf7c::switchdataD_0418ff7c)[(long)puVar16];
  pEVar32 = (ErrorResultVariant *)(ulong)uVar19;
  lVar26 = (long)pEVar32 * 4;
  puVar31 = (ushort *)(lVar26 + 0x35ecf80);
  uVar25 = (uint)puVar31;
  uVar20 = (uint)param_6;
  uVar37 = (uint)unaff_x21;
  bVar10 = true;
  pEVar14 = param_5;
  switch(EVar11) {
  case (ErrorResultVariant)0x0:
  case (ErrorResultVariant)0x55:
  case (ErrorResultVariant)0x5c:
  case (ErrorResultVariant)0x64:
  case (ErrorResultVariant)0x6c:
  case (ErrorResultVariant)0x8c:
  case (ErrorResultVariant)0x94:
  case (ErrorResultVariant)0x9c:
  case (ErrorResultVariant)0xbc:
  case (ErrorResultVariant)0xc4:
  case (ErrorResultVariant)0xcc:
  case (ErrorResultVariant)0xd4:
  case (ErrorResultVariant)0xdc:
  case (ErrorResultVariant)0xe4:
  case (ErrorResultVariant)0xec:
  case (ErrorResultVariant)0xf4:
  case (ErrorResultVariant)0xfc:
    EVar11 = param_5[0x109];
    param_5[0x10a] = EVar11;
    if (param_5[0x163] == (ErrorResultVariant)0x0) {
      lVar26 = ((ulong)(byte)*param_5 & 8) << 7;
      uVar33 = ((ulong)(byte)EVar11 + (ulong)(byte)param_5[3]) - 8;
    }
    else {
      lVar26 = ((ulong)(byte)*param_5 & 0x40) << 4;
      uVar33 = ~(ulong)(byte)param_5[0xe] + (ulong)(byte)EVar11;
    }
    uVar33 = (uVar33 >> 3 & 0x1f) + lVar26 + ((ulong)*(ushort *)(param_5 + 0x166) & 0xf8) * 4 +
             0x1800 | (ulong)*(ushort *)(param_5 + 0xd74);
    EVar11 = *(ErrorResultVariant *)(*(long *)(param_5 + 0xc10) + uVar33);
    param_5[0x10f] = param_5[0x163];
    *(short *)(param_5 + 0xd72) = (short)uVar33;
    param_5[0x10b] = EVar11;
    param_5[0x110] = (ErrorResultVariant)((byte)param_5[0x162] ^ (byte)EVar11);
    if (param_5[0xd70] == (ErrorResultVariant)0x0) {
      *(undefined2 *)(param_5 + 0xd74) = 0;
    }
    param_5[0xd70] = (ErrorResultVariant)((byte)param_5[0xd70] | 2);
    EVar11 = (ErrorResultVariant)0x0;
    if (param_5[0x17] != (ErrorResultVariant)0x0) {
      EVar11 = *(ErrorResultVariant *)(*(long *)(param_5 + 0xc10) + uVar33 + 0x2000);
    }
    param_5[0x10c] = EVar11;
    goto LAB_035ed660;
  case (ErrorResultVariant)0x1:
  case (ErrorResultVariant)0x3:
    goto switchD_035ecf7c_caseD_1;
  case (ErrorResultVariant)0x2:
    uVar33 = 0;
    if (((byte)param_5[0x10c] & 0x40) != 0) {
      uVar33 = 7;
    }
    uVar33 = ((ulong)*(ushort *)(param_5 + 0x160) | ((ulong)(byte)param_5[0x10c] & 8) << 10) +
             (ulong)(byte)param_5[0x110] * 0x10 +
             (uVar33 ^ (ulong)*(ushort *)(param_5 + 0x166) & 7) * 2;
    uVar30 = uVar33 | *(ushort *)(param_5 + 0xd74);
    param_5[0x10d] = *(ErrorResultVariant *)(*(long *)(param_5 + 0xc10) + uVar30);
    EVar9 = *(ErrorResultVariant *)(*(long *)(param_5 + 0xc10) + uVar33);
    EVar11 = param_5[0xd70];
    if (EVar11 == (ErrorResultVariant)0x0) {
      *(undefined2 *)(param_5 + 0xd74) = 0;
    }
    *(ushort *)(param_5 + 0xd72) = (ushort)uVar30 & 0xf;
    EVar24 = (ErrorResultVariant)((byte)EVar11 & 0xfd);
    param_5[0xd76] = EVar9;
    param_5[0xd70] = (ErrorResultVariant)((byte)EVar11 & 0xfd);
    goto joined_r0x035ed518;
  case (ErrorResultVariant)0x4:
    uVar33 = 0;
    if (((byte)param_5[0x10c] & 0x40) != 0) {
      uVar33 = 7;
    }
    uVar33 = uVar33 ^ (ulong)*(ushort *)(param_5 + 0x166) & 7;
    pEVar32 = param_5 + 0xd70;
    uVar30 = ((ulong)*(ushort *)(param_5 + 0x160) | ((ulong)(byte)param_5[0x10c] & 8) << 10) +
             (ulong)(byte)param_5[0x110] * 0x10 + uVar33 * 2 + 1 |
             (ulong)*(ushort *)(param_5 + 0xd74);
    EVar11 = *(ErrorResultVariant *)(*(long *)(param_5 + 0xc10) + uVar30);
    param_5[0x10e] = EVar11;
    EVar24 = *(ErrorResultVariant *)
              (*(long *)(param_5 + 0xc10) +
              ((ulong)*(ushort *)(param_5 + 0xd74) & 0xfff0 | uVar33 << 1));
    if (param_5[0xd70] == (ErrorResultVariant)0x0) {
      *(undefined2 *)(param_5 + 0xd74) = 0;
    }
    param_5[0xd76] = EVar24;
    EVar24 = (ErrorResultVariant)((byte)param_5[0xd70] | 2);
    *pEVar32 = EVar24;
    *(ushort *)(param_5 + 0xd72) = (ushort)uVar30 & 0xf;
    if ((param_5[0x10f] == (ErrorResultVariant)0x0) || (param_5[0x163] != (ErrorResultVariant)0x0))
    {
      EVar24 = param_5[0x10c];
      EVar9 = param_5[0x10d];
      bVar36 = (byte)EVar24 & 7 | ((byte)EVar24 >> 7) << 3;
      uVar39 = NEON_ushl(CONCAT17(EVar9,CONCAT16(EVar9,CONCAT15(EVar9,CONCAT14(EVar9,CONCAT13(EVar9,
                                                  CONCAT12(EVar9,CONCAT11(EVar9,EVar9))))))),
                         *(undefined8 *)(&DAT_04102390 + ((ulong)((byte)EVar24 >> 5) & 1) * 8),1);
      uVar38 = NEON_ushl(CONCAT17(EVar11,CONCAT16(EVar11,CONCAT15(EVar11,CONCAT14(EVar11,CONCAT13(
                                                  EVar11,CONCAT12(EVar11,CONCAT11(EVar11,EVar11)))))
                                                 )),
                         *(undefined8 *)(&DAT_04102390 + ((ulong)((byte)EVar24 >> 5) & 1) * 8),1);
      uVar38 = NEON_sli(CONCAT17((byte)((ulong)uVar39 >> 0x3f),
                                 CONCAT16((byte)((ulong)uVar39 >> 0x30) >> 7,
                                          CONCAT15((byte)((ulong)uVar39 >> 0x28) >> 7,
                                                   CONCAT14((byte)((ulong)uVar39 >> 0x20) >> 7,
                                                            CONCAT13((byte)((ulong)uVar39 >> 0x18)
                                                                     >> 7,CONCAT12((byte)((ulong)
                                                  uVar39 >> 0x10) >> 7,
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) >> 7,
                                                           (byte)uVar39 >> 7))))))),
                        CONCAT17((byte)((ulong)uVar38 >> 0x3f),
                                 CONCAT16((byte)((ulong)uVar38 >> 0x30) >> 7,
                                          CONCAT15((byte)((ulong)uVar38 >> 0x28) >> 7,
                                                   CONCAT14((byte)((ulong)uVar38 >> 0x20) >> 7,
                                                            CONCAT13((byte)((ulong)uVar38 >> 0x18)
                                                                     >> 7,CONCAT12((byte)((ulong)
                                                  uVar38 >> 0x10) >> 7,
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) >> 7,
                                                           (byte)uVar38 >> 7))))))),1,1);
      uVar33 = NEON_sli(uVar38,CONCAT17(bVar36,CONCAT16(bVar36,CONCAT15(bVar36,CONCAT14(bVar36,
                                                  CONCAT13(bVar36,CONCAT12(bVar36,CONCAT11(bVar36,
                                                  bVar36))))))),2,1);
      *(ulong *)(param_5 + 0x100) = uVar33 & -(long)(char)param_5[0x17];
      EVar24 = *pEVar32;
    }
    EVar24 = (ErrorResultVariant)((byte)EVar24 & 0xfd);
    *pEVar32 = EVar24;
joined_r0x035ed518:
    if (EVar24 == (ErrorResultVariant)0x0) {
      *(undefined4 *)(param_5 + 0xd72) = 0;
    }
LAB_035ed660:
    if (param_5[0xe4] != (ErrorResultVariant)0x4) {
      return param_5;
    }
LAB_035ed66c:
    *(undefined8 *)(param_5 + 0xf8) = *(undefined8 *)(param_5 + 0x100);
LAB_035ed674:
    if (((param_5[0x16] == (ErrorResultVariant)0x0) || (param_5[0xe9] == (ErrorResultVariant)0x0))
       || (param_5[0x163] != (ErrorResultVariant)0x0)) {
LAB_035ed71c:
      EVar11 = param_5[0x115];
      if ((uint)(byte)EVar11 < (uint)(byte)param_5[0x16a]) {
        EVar9 = *(ErrorResultVariant *)
                 (*(long *)(param_5 + 0xc28) + (ulong)(byte)param_5[(ulong)(byte)EVar11 + 0x16b] * 4
                 + 1);
        EVar24 = param_5[0x108];
        if ((EVar9 == param_5[0x108] && param_5[0x12] == (ErrorResultVariant)0x0) &&
           (EVar24 = EVar9, (*(ushort *)(param_5 + 0x112) >> (ulong)((byte)EVar11 & 0x1f) & 1) == 0)
           ) {
          if (param_5[0xe4] == (ErrorResultVariant)0x5) {
            *(undefined2 *)(param_5 + 0xe4) = 3;
            param_5[0x164] = (ErrorResultVariant)0x1;
            return pEVar14;
          }
          return pEVar14;
        }
      }
      else {
        EVar24 = param_5[0x108];
      }
      if (EVar24 == (ErrorResultVariant)0xa7) {
        param_5[0xe4] = (ErrorResultVariant)0x6;
      }
    }
    else {
      EVar11 = param_5[10];
      if ((byte)EVar11 == 0) {
        if ((param_5[0x109] != (ErrorResultVariant)0x1) ||
           (param_5[0x164] != (ErrorResultVariant)0x0)) goto LAB_035ed71c;
        EVar24 = (ErrorResultVariant)((char)param_5[0xd] + '\x01');
        param_5[0xd] = EVar24;
        if (((char)param_5[3] + 1U & 6) != 0) {
          param_5[0x109] = (ErrorResultVariant)((char)param_5[0x108] + '\b');
        }
      }
      else {
        if (((byte)EVar11 + 1 != (uint)(byte)param_5[0x108]) ||
           (param_5[0x164] != (ErrorResultVariant)0x0)) goto LAB_035ed71c;
        EVar24 = (ErrorResultVariant)((char)param_5[0xd] + '\x01');
        param_5[0xd] = EVar24;
      }
      param_5[0xe] = EVar11;
      param_5[0x163] = (ErrorResultVariant)0x1;
      *(ushort *)(param_5 + 0x166) = (ushort)(byte)EVar24;
      param_5[0x17] = (ErrorResultVariant)0x1;
      *(undefined2 *)(param_5 + 0xe4) = 2;
    }
switchD_035ecf7c_caseD_1:
    return pEVar14;
  case (ErrorResultVariant)0x5:
    *(undefined2 *)(param_5 + 0xe4) = 4;
    goto LAB_035ed66c;
  case (ErrorResultVariant)0x6:
    return param_5;
  case (ErrorResultVariant)0x7:
    if ((byte)param_5[0xd2] < 3) {
      unaff_x21 = (ErrorResultVariant *)0x1;
      *(undefined2 *)(param_5 + 0xd0) = 0;
      do {
        pEVar14 = (ErrorResultVariant *)FUN_0361bf5c(param_5);
        *(char *)((long)unaff_x20 + 1) = (char)*unaff_x20;
        if (*(int *)(param_5 + 0xf68) == 7) {
          param_5[0xf79] = param_5[0xf78];
        }
        if ((char)unaff_x20[8] != '\0') {
          iVar13 = *(int *)((long)unaff_x20 + 0x44);
          if (iVar13 == 1) {
            iVar13 = 0;
            *(char *)((long)unaff_x20 + 0x42) = (char)unaff_x21;
            *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
            *(undefined1 *)((long)unaff_x20 + 0x41) = *(undefined1 *)((long)unaff_x20 + 0x43);
          }
          puVar31 = *(ushort **)(param_5 + 0x4108);
          if ((puVar31 != (ushort *)0x0) && (*(int *)(puVar31 + 10) == 1)) {
switchD_035ecf7c_caseD_8:
            *(undefined1 *)((long)puVar31 + 0x11) = *(undefined1 *)((long)puVar31 + 0x13);
            *(char *)(*(long *)(param_5 + 0x4108) + 0x12) = (char)unaff_x21;
            *(undefined4 *)(*(long *)(param_5 + 0x4108) + 0x14) = 0;
            iVar13 = *(int *)((long)unaff_x20 + 0x44);
          }
          if (iVar13 == 2) {
            if (*(long *)(param_5 + 0x4108) != 0) {
              *(undefined1 *)(*(long *)(param_5 + 0x4108) + 0x12) = 0;
            }
            *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
          }
        }
      } while (param_5[0xd0] == (ErrorResultVariant)0x0);
    }
    else if ((char)param_5[0x200] < '\0') {
      *(undefined2 *)(param_5 + 0xd0) = 0;
      do {
        pEVar14 = (ErrorResultVariant *)FUN_0361d4d4(param_5);
        *(char *)((long)unaff_x20 + 1) = (char)*unaff_x20;
        if (*(int *)(param_5 + 0xf68) == 7) {
          param_5[0xf79] = param_5[0xf78];
        }
        if ((char)unaff_x20[8] != '\0') {
          iVar13 = *(int *)((long)unaff_x20 + 0x44);
          if (iVar13 == 1) {
            iVar13 = 0;
            *(undefined1 *)((long)unaff_x20 + 0x42) = 1;
            *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
            *(undefined1 *)((long)unaff_x20 + 0x41) = *(undefined1 *)((long)unaff_x20 + 0x43);
          }
          lVar26 = *(long *)(param_5 + 0x4108);
          if ((lVar26 != 0) && (*(int *)(lVar26 + 0x14) == 1)) {
            *(undefined1 *)(lVar26 + 0x11) = *(undefined1 *)(lVar26 + 0x13);
            *(undefined1 *)(*(long *)(param_5 + 0x4108) + 0x12) = 1;
            *(undefined4 *)(*(long *)(param_5 + 0x4108) + 0x14) = 0;
            iVar13 = *(int *)((long)unaff_x20 + 0x44);
          }
          if (iVar13 == 2) {
            if (*(long *)(param_5 + 0x4108) != 0) {
              *(undefined1 *)(*(long *)(param_5 + 0x4108) + 0x12) = 0;
            }
            *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
          }
        }
      } while (param_5[0xd0] == (ErrorResultVariant)0x0);
    }
    else {
      *(undefined2 *)(param_5 + 0xd0) = 0;
      if (((byte)param_5[0xec3] >> 2 & 1) == 0) {
        do {
          pEVar14 = (ErrorResultVariant *)FUN_0361cd78(param_5);
          *(char *)((long)unaff_x20 + 1) = (char)*unaff_x20;
          if (*(int *)(param_5 + 0xf68) == 7) {
            param_5[0xf79] = param_5[0xf78];
          }
          if ((char)unaff_x20[8] != '\0') {
            iVar13 = *(int *)((long)unaff_x20 + 0x44);
            if (iVar13 == 1) {
              iVar13 = 0;
              *(undefined1 *)((long)unaff_x20 + 0x42) = 1;
              *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
              *(undefined1 *)((long)unaff_x20 + 0x41) = *(undefined1 *)((long)unaff_x20 + 0x43);
            }
            lVar26 = *(long *)(param_5 + 0x4108);
            if ((lVar26 != 0) && (*(int *)(lVar26 + 0x14) == 1)) {
              *(undefined1 *)(lVar26 + 0x11) = *(undefined1 *)(lVar26 + 0x13);
              *(undefined1 *)(*(long *)(param_5 + 0x4108) + 0x12) = 1;
              *(undefined4 *)(*(long *)(param_5 + 0x4108) + 0x14) = 0;
              iVar13 = *(int *)((long)unaff_x20 + 0x44);
            }
            if (iVar13 == 2) {
              if (*(long *)(param_5 + 0x4108) != 0) {
                *(undefined1 *)(*(long *)(param_5 + 0x4108) + 0x12) = 0;
              }
              *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
            }
          }
        } while (param_5[0xd0] == (ErrorResultVariant)0x0);
      }
      else {
        do {
          pEVar14 = (ErrorResultVariant *)FUN_0361c670(param_5);
          *(char *)((long)unaff_x20 + 1) = (char)*unaff_x20;
          if (*(int *)(param_5 + 0xf68) == 7) {
            param_5[0xf79] = param_5[0xf78];
          }
          if ((char)unaff_x20[8] != '\0') {
            iVar13 = *(int *)((long)unaff_x20 + 0x44);
            if (iVar13 == 1) {
              iVar13 = 0;
              *(undefined1 *)((long)unaff_x20 + 0x42) = 1;
              *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
              *(undefined1 *)((long)unaff_x20 + 0x41) = *(undefined1 *)((long)unaff_x20 + 0x43);
            }
            lVar26 = *(long *)(param_5 + 0x4108);
            if ((lVar26 != 0) && (*(int *)(lVar26 + 0x14) == 1)) {
              *(undefined1 *)(lVar26 + 0x11) = *(undefined1 *)(lVar26 + 0x13);
              *(undefined1 *)(*(long *)(param_5 + 0x4108) + 0x12) = 1;
              *(undefined4 *)(*(long *)(param_5 + 0x4108) + 0x14) = 0;
              iVar13 = *(int *)((long)unaff_x20 + 0x44);
            }
            if (iVar13 == 2) {
              if (*(long *)(param_5 + 0x4108) != 0) {
                *(undefined1 *)(*(long *)(param_5 + 0x4108) + 0x12) = 0;
              }
              *(undefined4 *)((long)unaff_x20 + 0x44) = 0;
            }
          }
        } while (param_5[0xd0] == (ErrorResultVariant)0x0);
      }
    }
    return pEVar14;
  case (ErrorResultVariant)0x8:
    goto switchD_035ecf7c_caseD_8;
  case (ErrorResultVariant)0x9:
    FUN_0362c548(param_5,(ulong)unaff_x20 & 0xffffffff);
    pcVar23 = *(code **)(param_5 + 0x160);
    if ((*(ulong *)(param_5 + 0x168) & 1) != 0) {
      pcVar23 = *(code **)(pcVar23 +
                          *(long *)(param_5 + ((long)*(ulong *)(param_5 + 0x168) >> 1) + 0xec0));
    }
    EVar11 = (ErrorResultVariant)
             (*pcVar23)(param_5 + ((long)*(ulong *)(param_5 + 0x168) >> 1) + 0xec0,
                        (ulong)unaff_x20 & 0xffffffff,*(undefined4 *)(param_5 + 0x15c));
    if (param_5[0xd7] == (ErrorResultVariant)0x0) {
      *(short *)(param_5 + 0x10ca) = (short)unaff_x20 + 1;
    }
    else {
      param_5[0xd7] = (ErrorResultVariant)0x0;
    }
    param_5[0x150] = EVar11;
    pEVar14 = (ErrorResultVariant *)FUN_0361af70(param_5,EVar11);
    *(ErrorResultVariant **)(param_5 + 0x4138) = pEVar14;
    if (pEVar14 != (ErrorResultVariant *)0x0) {
      param_5[0x140] = (ErrorResultVariant)0xc;
      return pEVar14;
    }
    EVar11 = param_5[0x1cc];
    if (((EVar11 == (ErrorResultVariant)0x0) ||
        (param_5[0x1cd] == (ErrorResultVariant)0x0 && EVar11 != (ErrorResultVariant)0x1)) ||
       (*(int *)(param_5 + 0x10cc) != 0)) {
      param_5[0x140] = (ErrorResultVariant)0x0;
      return (ErrorResultVariant *)0x0;
    }
    sVar12 = ((byte)param_5[0x1c5] & 0x7f) * 0x40 + 0x40;
    if (EVar11 != (ErrorResultVariant)0x1) {
      sVar12 = 0x40;
    }
    *(short *)(param_5 + 0x144) = sVar12;
    param_5[0x140] = (ErrorResultVariant)0x7;
    *(undefined2 *)(param_5 + 0x142) = 0;
    return (ErrorResultVariant *)0x0;
  case (ErrorResultVariant)0xa:
    *(ErrorResultVariant **)(param_6 + 0x60) = pEVar32;
    *(byte *)(param_6 + 5) = *(byte *)(param_6 + 5) & 0xfe | param_5[2] != (ErrorResultVariant)0x0;
    if (param_5[1] != (ErrorResultVariant)0x0) {
      EVar11 = param_5[6];
      if ((byte)*(ErrorResultVariant *)(param_6 + 400) < (byte)EVar11) {
        *(undefined8 *)(param_6 + 0x198) = *(undefined8 *)(param_6 + -0xdb0);
      }
      else if ((byte)EVar11 < (byte)*(ErrorResultVariant *)(param_6 + 400)) {
        *(long *)(param_6 + 0x1a0) =
             (*(long *)(param_6 + -0xdb0) - *(long *)(param_6 + 0x198)) + *(long *)(param_6 + 0x1a0)
        ;
      }
      *(ErrorResultVariant *)(param_6 + 400) = EVar11;
      param_5[1] = (ErrorResultVariant)0x0;
    }
    return param_5;
  case (ErrorResultVariant)0xb:
  case (ErrorResultVariant)0xc:
  case (ErrorResultVariant)0xd:
  case (ErrorResultVariant)0xe:
  case (ErrorResultVariant)0x10:
  case (ErrorResultVariant)0x11:
  case (ErrorResultVariant)0x12:
  case (ErrorResultVariant)0x13:
  case (ErrorResultVariant)0x14:
  case (ErrorResultVariant)0x15:
  case (ErrorResultVariant)0x16:
    param_5[6] = (ErrorResultVariant)0x7c;
    *(undefined4 *)(param_5 + 2) = 0x80008000;
    return param_5;
  case (ErrorResultVariant)0xf:
    uVar19 = *(ushort *)(&DAT_035ed0e8 + lVar26);
    if (uVar19 == 0) {
LAB_035f40d0:
      param_5[(ulong)param_9 * 8 + 0x16e] = EVar11;
      param_5[-0xc3e] = EVar11;
      return param_5;
    }
    if (uVar19 < 0x100) {
      if (param_9 == 1) {
        param_5[0x176] = (ErrorResultVariant)0x0;
      }
      if ((uVar19 & 1) == 0) goto LAB_035f40d0;
    }
    return param_5;
  case (ErrorResultVariant)0x17:
    if (uVar25 != 0) {
      if (0xff < uVar25) {
        return param_5;
      }
      if (param_8 == 1) {
        param_5[0x20c7fd4e] = EVar11;
      }
    }
    param_5[0x20c7fd4e] = EVar11;
    pEVar14 = (ErrorResultVariant *)FUN_035b51b4(param_5 + -0xcc0,uVar20 + 0x100 & 0xffff);
    return pEVar14;
  case (ErrorResultVariant)0x18:
    (**(code **)(*unaff_x20 + 0x30))();
    (**(code **)(*unaff_x20 + 0x20))();
    if ((int)unaff_x20[1] == 2) {
      (**(code **)(*unaff_x20 + 0x20))();
    }
    else if ((int)unaff_x20[1] == 1) {
      (**(code **)(*unaff_x20 + 0x30))();
    }
    else {
      (**(code **)(*unaff_x20 + 0x20))();
      *(short *)(unaff_x21 + 0x2a0) = 0;
    }
    (**(code **)(*unaff_x20 + 0x20))();
    unaff_x21 = unaff_x21 + 0x1928;
    if (*(char *)((long)unaff_x20 + 0xc) != '\0') {
      puVar22 = (ushort *)*unaff_x20;
      goto switchD_035ecf7c_caseD_28;
    }
    goto LAB_036064f0;
  case (ErrorResultVariant)0x19:
  case (ErrorResultVariant)0x1a:
  case (ErrorResultVariant)0x1b:
  case (ErrorResultVariant)0x1c:
  case (ErrorResultVariant)0x1d:
  case (ErrorResultVariant)0x1e:
  case (ErrorResultVariant)0x1f:
  case (ErrorResultVariant)0x20:
  case (ErrorResultVariant)0x21:
  case (ErrorResultVariant)0x22:
  case (ErrorResultVariant)0x23:
  case (ErrorResultVariant)0x24:
  case (ErrorResultVariant)0x26:
  case (ErrorResultVariant)0x27:
  case (ErrorResultVariant)0x29:
    goto switchD_035ecf7c_caseD_19;
  case (ErrorResultVariant)0x25:
    goto switchD_035ecf7c_caseD_25;
  case (ErrorResultVariant)0x28:
switchD_035ecf7c_caseD_28:
    (**(code **)(puVar22 + 0x10))();
LAB_036064f0:
    if ((int)unaff_x20[1] == 2) {
      (**(code **)(*unaff_x20 + 0x20))();
    }
    else if ((int)unaff_x20[1] == 1) {
switchD_035ecf7c_caseD_19:
      (**(code **)(*unaff_x20 + 0x40))();
    }
    else {
      (**(code **)(*unaff_x20 + 0x20))();
      *(undefined8 *)unaff_x21 = 0;
    }
    return (ErrorResultVariant *)(ulong)((uint)param_5 & 1);
  case (ErrorResultVariant)0x2a:
    uVar39 = NEON_ushl(param_3,*(undefined8 *)(&DAT_04102390 + in_x12 * 8),1);
    uVar38 = NEON_ushl(param_4,*(undefined8 *)(&DAT_04102390 + in_x12 * 8),1);
    uVar38 = NEON_sli(CONCAT17((byte)((ulong)uVar39 >> 0x3f),
                               CONCAT16((byte)((ulong)uVar39 >> 0x30) >> 7,
                                        CONCAT15((byte)((ulong)uVar39 >> 0x28) >> 7,
                                                 CONCAT14((byte)((ulong)uVar39 >> 0x20) >> 7,
                                                          CONCAT13((byte)((ulong)uVar39 >> 0x18) >>
                                                                   7,CONCAT12((byte)((ulong)uVar39
                                                                                    >> 0x10) >> 7,
                                                                              CONCAT11((byte)((ulong
                                                  )uVar39 >> 8) >> 7,(byte)uVar39 >> 7))))))),
                      CONCAT17((byte)((ulong)uVar38 >> 0x3f),
                               CONCAT16((byte)((ulong)uVar38 >> 0x30) >> 7,
                                        CONCAT15((byte)((ulong)uVar38 >> 0x28) >> 7,
                                                 CONCAT14((byte)((ulong)uVar38 >> 0x20) >> 7,
                                                          CONCAT13((byte)((ulong)uVar38 >> 0x18) >>
                                                                   7,CONCAT12((byte)((ulong)uVar38
                                                                                    >> 0x10) >> 7,
                                                                              CONCAT11((byte)((ulong
                                                  )uVar38 >> 8) >> 7,(byte)uVar38 >> 7))))))),1,1);
    uVar33 = NEON_sli(uVar38,param_1,2,1);
    *(ulong *)(param_5 + 0x100) = uVar33 & (ulong)pEVar32;
    param_5[0xe4] = (ErrorResultVariant)0x5;
    if ((byte)param_5[0x16a] == 0) {
      EVar24 = param_5[0x108];
      if (EVar24 == (ErrorResultVariant)0x0) {
        if (((byte)param_5[3] & 7) <= ((byte)param_5[0x109] & 7)) goto LAB_035ed1a4;
        param_5[0x109] = (ErrorResultVariant)((char)param_5[0x109] + 1);
        goto LAB_035ed370;
      }
      if (7 < (byte)EVar24) {
        uVar33 = *(ulong *)(param_5 + 0xf8);
        puVar34 = *(undefined2 **)(param_5 + 0x7e0);
        pcVar35 = *(char **)(param_5 + 0x7f0);
        *puVar34 = *(undefined2 *)(param_5 + (uVar33 & 0x1f) * 2 + 0x26);
        *pcVar35 = ((byte)uVar33 & 0x1f) + 1;
        *(undefined2 **)(param_5 + 0x7e0) = puVar34 + 1;
        *(char **)(param_5 + 0x7f0) = pcVar35 + 1;
      }
LAB_035ed1a4:
      *(ulong *)(param_5 + 0xf8) = *(ulong *)(param_5 + 0xf8) >> 8;
LAB_035ed354:
      param_5[0x108] = (ErrorResultVariant)((char)EVar24 + 1);
      param_5[0x109] = (ErrorResultVariant)((char)param_5[0x109] + '\x01');
    }
    else {
      EVar9 = param_5[0x115];
      if ((uint)(byte)param_5[0x16a] <= (uint)(byte)EVar9) {
        EVar24 = param_5[0x108];
LAB_035ed2c0:
        EVar9 = (ErrorResultVariant)0x0;
        param_5[0x164] = (ErrorResultVariant)0x0;
        if (EVar24 == (ErrorResultVariant)0x0) goto LAB_035ed290;
LAB_035ed2cc:
        if ((bool)EVar9) goto LAB_035ed370;
        if (7 < (byte)EVar24) {
          uVar33 = *(ulong *)(param_5 + 0xf8);
          puVar34 = *(undefined2 **)(param_5 + 0x7e0);
          pcVar35 = *(char **)(param_5 + 0x7f0);
          *puVar34 = *(undefined2 *)(param_5 + (uVar33 & 0x1f) * 2 + 0x26);
          *pcVar35 = ((byte)uVar33 & 0x1f) + 1;
          *(undefined2 **)(param_5 + 0x7e0) = puVar34 + 1;
          *(char **)(param_5 + 0x7f0) = pcVar35 + 1;
        }
LAB_035ed330:
        EVar9 = param_5[0x119];
        *(ulong *)(param_5 + 0xf8) = *(ulong *)(param_5 + 0xf8) >> 8;
        *(undefined8 *)(param_5 + (ulong)(byte)EVar9 * 8 + 0x120) = 0;
        param_5[0x119] = (ErrorResultVariant)((char)EVar9 + 1U & 7);
        goto LAB_035ed354;
      }
      EVar4 = *(ErrorResultVariant *)
               (*(long *)(param_5 + 0xc28) + (ulong)(byte)param_5[(ulong)(byte)EVar9 + 0x16b] * 4 +
               1);
      EVar24 = param_5[0x108];
      if (EVar4 != EVar24 || param_5[0x12] != (ErrorResultVariant)0x0) goto LAB_035ed2c0;
      EVar9 = (ErrorResultVariant)
              ((*(ushort *)(param_5 + 0x112) >> (ulong)((byte)EVar9 & 0x1f) & 1) == 0);
      param_5[0x164] = EVar9;
      EVar24 = EVar4;
      if (EVar4 != (ErrorResultVariant)0x0) goto LAB_035ed2cc;
LAB_035ed290:
      if (((byte)param_5[0x109] & 7) < ((byte)param_5[3] & 7)) {
        param_5[0x109] = (ErrorResultVariant)((char)param_5[0x109] + 1);
      }
      else if (!(bool)EVar9) goto LAB_035ed330;
    }
LAB_035ed370:
    if (EVar11 != (ErrorResultVariant)0x7) goto LAB_035ed674;
    puVar22 = (ushort *)(ulong)(byte)param_5[0x109];
  case (ErrorResultVariant)0xea:
  case (ErrorResultVariant)0xf2:
  case (ErrorResultVariant)0xfa:
    if ((uint)puVar22 == (uint)(byte)param_5[0x10a]) {
      *(undefined8 *)(param_5 + 0xf8) = *(undefined8 *)(param_5 + 0x100);
      *(undefined2 *)(param_5 + 0xe4) = 4;
    }
    goto LAB_035ed674;
  case (ErrorResultVariant)0x2b:
  case (ErrorResultVariant)0x2c:
  case (ErrorResultVariant)0x2d:
  case (ErrorResultVariant)0x2e:
  case (ErrorResultVariant)0x2f:
  case (ErrorResultVariant)0x30:
  case (ErrorResultVariant)0x32:
  case (ErrorResultVariant)0x33:
  case (ErrorResultVariant)0x34:
  case (ErrorResultVariant)0x35:
  case (ErrorResultVariant)0x36:
  case (ErrorResultVariant)0x38:
  case (ErrorResultVariant)0x39:
  case (ErrorResultVariant)0x3a:
  case (ErrorResultVariant)0x3c:
  case (ErrorResultVariant)0x3d:
  case (ErrorResultVariant)0x3e:
  case (ErrorResultVariant)0x3f:
  case (ErrorResultVariant)0x40:
    *(undefined1 *)(unaff_x20 + 2) = 0x7c;
    (**(code **)(*(long *)param_5 + 0x28))();
    uStack_8._0_5_ = CONCAT14(*(undefined1 *)((long)unaff_x20 + 0x12),(uint)uStack_8);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(long)&uStack_8 + 4);
    *(bool *)((long)unaff_x20 + 0x12) = uStack_8._4_1_ != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x13));
    FUN_03602950(param_5,(undefined1 *)((long)unaff_x20 + 0x14));
    return (ErrorResultVariant *)(ulong)(uVar37 & 1);
  case (ErrorResultVariant)0x31:
                    /* WARNING: Could not recover jumptable at 0x035f3a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pEVar14 = (ErrorResultVariant *)
              (*(code *)((ulong)*(ushort *)(&DAT_04192b6c + (ulong)*(uint *)(param_5 + 0xa8) * 2) *
                         4 + 0x35f3590))();
    return pEVar14;
  case (ErrorResultVariant)0x37:
    EVar11 = *(ErrorResultVariant *)
              (*(long *)(param_5 + 0x50) + ((ulong)(uVar37 - 0x4000) & 0xffff));
    param_5[0x16e] = EVar11;
    *(short *)(param_5 + 0x16c) = (short)(uVar37 - 0x4000);
    return (ErrorResultVariant *)(ulong)(byte)EVar11;
  case (ErrorResultVariant)0x3b:
    DAT_05aa8e68 = 0x418ff7c;
    nn::err::ErrorResultVariant::ErrorResultVariant(param_5);
    DAT_05aa8e78 = 0x8004ef;
    DAT_05aa8e80 = (ErrorResultVariant *)nn::os::GetSystemTick();
    DAT_05aa8e88 = 0;
    return DAT_05aa8e80;
  case (ErrorResultVariant)0x41:
    return param_5;
  case (ErrorResultVariant)0x42:
  case (ErrorResultVariant)0x43:
  case (ErrorResultVariant)0x45:
                    /* WARNING: Could not recover jumptable at 0x035f5bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pEVar14 = (ErrorResultVariant *)
              (*(code *)(&UNK_035f5bd8 + (ulong)*(byte *)(lVar26 + 0x777cefc) * 4))();
    return pEVar14;
  case (ErrorResultVariant)0x44:
  case (ErrorResultVariant)0x46:
  case (ErrorResultVariant)0x47:
                    /* WARNING: Could not recover jumptable at 0x035f5c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pEVar14 = (ErrorResultVariant *)
              (*(code *)(&UNK_035f5c1c + (ulong)*(byte *)(lVar26 + 0x777cefc) * 4))();
    return pEVar14;
  case (ErrorResultVariant)0x48:
    return param_5;
  case (ErrorResultVariant)0x49:
  case (ErrorResultVariant)0x4c:
  case (ErrorResultVariant)0x4f:
  case (ErrorResultVariant)0x52:
    while( true ) {
      uVar33 = ((ulong)in_x11 & 0xff00ff00ff00ff00) >> 8 | ((ulong)in_x11 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar30 = (in_x12 & 0xff00ff00ff00ff00) >> 8 | (in_x12 & 0xff00ff00ff00ff) << 8;
      uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
      *(ulong *)pEVar32 = uVar33 >> 0x20 | uVar33 << 0x20;
      *(ulong *)(pEVar32 + 8) = uVar30 >> 0x20 | uVar30 << 0x20;
      if (bVar10) break;
      pEVar32 = param_5 + (long)puVar22 * 8;
      puVar22 = puVar22 + 1;
      bVar10 = puVar31 == puVar22;
      in_x11 = *(undefined **)pEVar32;
      in_x12 = *(ulong *)(pEVar32 + 8);
    }
    if (((uint)unaff_x22 >> 3 & 1) != 0) {
      uVar33 = (*(ulong *)(param_5 + (long)puVar22 * 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_5 + (long)puVar22 * 8) & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      *(ulong *)(param_5 + (long)puVar22 * 8) = uVar33 >> 0x20 | uVar33 << 0x20;
    }
    return param_5;
  case (ErrorResultVariant)0x4a:
    *(ushort **)(param_5 + 0x60) =
         &switchD_035ecf7c::switchdataD_0418ff7c +
         (*(ulong *)(in_x11 + (long)pEVar32 * 8 + 0xb08) & (ulong)puVar31) * 0x1000;
    *(ErrorResultVariant **)(param_5 + 0x128) = param_5;
    EVar11 = (ErrorResultVariant)((byte)param_5[5] & 0xbf | 1);
    if (param_5[0xb2] != (ErrorResultVariant)0x0) {
      EVar11 = (ErrorResultVariant)((byte)param_5[5] | 0x41);
    }
    param_5[5] = EVar11;
    return param_5;
  case (ErrorResultVariant)0x4b:
    if (puVar16 < puVar31) {
      auVar40 = FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
      puVar22 = (ushort *)(ulong)*(uint *)(unaff_x20 + 0x15);
    }
    pEVar14 = auVar40._0_8_;
    bVar10 = (int)puVar22 == 2;
    if (bVar10) {
      pEVar14 = (ErrorResultVariant *)unaff_x20[3];
switchD_03601ffc_caseD_2:
      sVar17 = 0x2000;
switchD_03601ffc_caseD_1:
      pEVar14 = memcpy(pEVar14,param_5,sVar17);
switchD_03601ffc_caseD_17:
      bVar10 = (int)unaff_x20[0x15] == 2;
switchD_03601ffc_caseD_11:
      if (bVar10) {
        puVar22 = (ushort *)0x2000;
switchD_03601ffc_caseD_1f:
      }
      else {
        puVar22 = (ushort *)unaff_x20[1];
switchD_03601ffc_caseD_9:
        puVar22 = *(ushort **)(&DAT_04194b68 + (long)*(char *)((long)puVar22 + 0x149) * 8);
      }
    }
    else {
      pbVar27 = (byte *)(ulong)*(byte *)(unaff_x20[1] + 0x149);
switchD_03601ffc_caseD_22:
      if ((int)pbVar27 != 0) {
        pEVar14 = (ErrorResultVariant *)unaff_x20[3];
        uVar20 = (int)pbVar27 - 1;
        puVar22 = (ushort *)(ulong)uVar20;
        pbVar27 = &switchD_03601ffc::switchdataD_04193568;
switchD_03601ffc_caseD_7:
switchD_03601ffc_caseD_15:
        sVar17 = 0x800;
        puVar16 = (ushort *)pbVar27;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(byte *)(unaff_x20[1] + 0x149)) {
        case 1:
          goto switchD_03601ffc_caseD_1;
        case 2:
        case 6:
        case 0xe:
          goto switchD_03601ffc_caseD_2;
        case 3:
          sVar17 = 0x8000;
          goto switchD_03601ffc_caseD_1;
        case 4:
        case 0x13:
          sVar17 = 0x20000;
          goto switchD_03601ffc_caseD_1;
        case 5:
        case 0x19:
          sVar17 = 0x10000;
          goto switchD_03601ffc_caseD_1;
        case 7:
        case 8:
          goto switchD_03601ffc_caseD_7;
        case 9:
          goto switchD_03601ffc_caseD_9;
        default:
          *(undefined4 *)(param_5 + 0xa8) = 3;
          uVar38 = 0x2000;
          if (2 < (byte)param_5[-0xdee]) {
            uVar38 = 0x4000;
          }
          uVar38 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,uVar38,0);
          *(undefined8 *)(param_5 + 0x10) = uVar38;
          uVar38 = 0x2000;
          if (2 < (byte)param_5[-0xdee]) {
            uVar38 = 0x8000;
          }
          uVar38 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,uVar38,0);
          *(undefined8 *)(param_5 + 0x20) = uVar38;
          uVar38 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x100,0);
          *(undefined8 *)(param_5 + 0x28) = uVar38;
          uVar38 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x7f,0);
          *(undefined8 *)(param_5 + 0x30) = uVar38;
          if (*(int *)(param_5 + 0xa8) != 2) {
                    /* WARNING: Could not recover jumptable at 0x036025e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pEVar14 = (ErrorResultVariant *)
                      (*(code *)((ulong)*(byte *)((long)&USHORT_0419366c +
                                                 (ulong)*(byte *)(*(long *)(param_5 + 8) + 0x149) +
                                                 1) * 4 + 0x3602574))();
            return pEVar14;
          }
          __s = (void *)(**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x2000,0);
          *(void **)(param_5 + 0x18) = __s;
          pEVar14 = param_5 + -0xe78;
          if ((*(ulong *)(param_5 + -0xe88) & 1) != 0) {
            pEVar14 = *(ErrorResultVariant **)(param_5 + -0xe78);
          }
          iVar13 = strcmp((char *)pEVar14,"95127b901bbce2407daf43cce9f45d4c27ef635d");
          if (iVar13 == 0) {
            if (*(int *)(param_5 + 0xa8) != 2) {
              sVar17 = *(size_t *)
                        (&DAT_04194b68 + (long)*(char *)(*(long *)(param_5 + 8) + 0x149) * 8);
            }
            else {
              sVar17 = 0x2000;
            }
            iVar13 = 0;
          }
          else {
            if (*(int *)(param_5 + 0xa8) != 2) {
              sVar17 = *(size_t *)
                        (&DAT_04194b68 + (long)*(char *)(*(long *)(param_5 + 8) + 0x149) * 8);
            }
            else {
              sVar17 = 0x2000;
            }
            iVar13 = 0xff;
          }
          memset(__s,iVar13,sVar17);
          if (*(int *)(param_5 + 0xa8) == 6) {
            if (unaff_x20 == (long *)0x200000) {
              uVar38 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x200,0);
              uVar18 = 0x100;
            }
            else {
              uVar38 = (**(code **)(*(long *)*unaff_x22 + 0x10))((long *)*unaff_x22,0x100,0);
              uVar18 = 0x80;
            }
            *(undefined8 *)(param_5 + 0xd0) = uVar38;
            *(undefined2 *)(param_5 + 200) = uVar18;
          }
          FUN_035fef88(param_5);
          return (ErrorResultVariant *)0x1;
        case 0xb:
          goto switchD_03601ffc_caseD_b;
        case 0xc:
          goto switchD_03601ffc_caseD_c;
        case 0xf:
          goto switchD_03601ffc_caseD_f;
        case 0x11:
        case 0x12:
          goto switchD_03601ffc_caseD_11;
        case 0x15:
        case 0x16:
          goto switchD_03601ffc_caseD_15;
        case 0x17:
        case 0x18:
          goto switchD_03601ffc_caseD_17;
        case 0x1f:
        case 0x20:
          goto switchD_03601ffc_caseD_1f;
        case 0x21:
          pEVar14[0x1cc] = SUB41(uVar20,0);
          pEVar14[0x1ce] = SUB41(uVar20,0);
          EVar11 = *pEVar14;
          *pEVar14 = (ErrorResultVariant)((byte)EVar11 | (byte)auVar40[8]);
          uVar20 = (uint)(EVar11 != (ErrorResultVariant)0x0 || (auVar40._8_8_ & 0xff) != 0) << 1;
        case 0x24:
          pEVar14[0x1d0] = (ErrorResultVariant)0x68;
          pEVar14[0x1d2] = (ErrorResultVariant)0x68;
          pEVar14[0x1c0] = SUB41(uVar20,0);
          pEVar14[0x1d4] = (ErrorResultVariant)0x5;
          pEVar14[0x1d6] = (ErrorResultVariant)0x5;
          pEVar14[0x1d8] = (ErrorResultVariant)0x6;
          uVar20 = 7;
switchD_03601ffc_caseD_26:
          pEVar14[0x1da] = SUB41(uVar20,0);
          pEVar14[0x1dc] = (ErrorResultVariant)0x8;
          return pEVar14;
        case 0x22:
        case 0x23:
          goto switchD_03601ffc_caseD_22;
        case 0x26:
          goto switchD_03601ffc_caseD_26;
        case 0x28:
          pEVar32 = pEVar14;
          if ((((uint)(byte)pEVar14[3] ^ auVar40._8_4_ & 0xff) >> 2 & 1) != 0) {
            pEVar14[-0xdf0] = (ErrorResultVariant)0x1;
            plVar15 = *(long **)(pEVar14 + -0xe68);
            pEVar14[-0xdef] = (ErrorResultVariant)((byte)pEVar14[-0xdef] | 4);
            pEVar32 = (ErrorResultVariant *)0x0;
            if (plVar15 != (long *)0x0) {
              uStack_28 = param_5;
              pEVar32 = (ErrorResultVariant *)(**(code **)(*plVar15 + 0x10))(plVar15,4);
            }
          }
          pEVar14[3] = auVar40[8];
          return pEVar32;
        }
      }
      if (((int)puVar22 != 6) || (*(ushort *)(unaff_x20 + 0x19) == 0)) goto LAB_03602020;
      pEVar14 = memcpy((void *)unaff_x20[0x1a],param_5,(ulong)*(ushort *)(unaff_x20 + 0x19) << 1);
switchD_03601ffc_caseD_b:
      bVar10 = (int)unaff_x20[0x15] == 6;
switchD_03601ffc_caseD_c:
      puVar16 = (ushort *)((ulong)*(ushort *)(unaff_x20 + 0x19) << 1);
switchD_03601ffc_caseD_f:
      puVar22 = puVar16;
      if (!bVar10) {
        puVar22 = (ushort *)0x0;
      }
    }
    param_5 = param_5 + (long)puVar22;
LAB_03602020:
    if (uVar37 < 3) {
      uVar38 = *(undefined8 *)(param_5 + 8);
      *(undefined8 *)((long)unaff_x20 + 0x144) = *(undefined8 *)param_5;
      *(undefined8 *)((long)unaff_x20 + 0x14c) = uVar38;
      uVar38 = *(undefined8 *)(param_5 + 0x18);
      *(undefined8 *)((long)unaff_x20 + 0x154) = *(undefined8 *)(param_5 + 0x10);
      *(undefined8 *)((long)unaff_x20 + 0x15c) = uVar38;
    }
    return pEVar14;
  case (ErrorResultVariant)0x4d:
    uVar25 = uVar20 >> 0xc & 0xf;
    uVar33 = (ulong)uVar25;
switchD_035f7f98_caseD_e:
    switch(uVar25) {
    case 0:
    case 1:
switchD_035f7f98_caseD_0:
      param_5[0xb0] = (ErrorResultVariant)(((byte)EVar11 & 0xf) == 10);
      return param_5;
    case 2:
    case 3:
switchD_035f7f98_caseD_2:
      param_5[0xb1] = (ErrorResultVariant)((byte)EVar11 & 0x1f);
      return param_5;
    case 4:
    case 5:
      param_5[0xb2] = (ErrorResultVariant)((byte)EVar11 & 3);
      return param_5;
    case 6:
    case 7:
      param_5[0xb3] = (ErrorResultVariant)((byte)EVar11 & 1);
      return param_5;
    case 8:
    case 9:
switchD_035f7f98_caseD_8:
      if ((*(ushort *)(param_5 + 0x178) & 0xff01) == 0) {
        param_5[0x17e] = EVar11;
        *(ErrorResultVariant *)(*(long *)(param_5 + 0x68) + ((ulong)(uVar20 + 0x4000) & 0xffff)) =
             EVar11;
        return param_5;
      }
      return param_5;
    case 0xc:
switchD_035f7f98_caseD_c:
      param_5[0xb1] = (ErrorResultVariant)((byte)EVar11 & 0x7f);
      return param_5;
    case 0xe:
      goto switchD_035f7f98_caseD_e;
    case 0xf:
      switch(uVar25) {
      case 0:
      case 1:
        return param_5;
      case 2:
      case 3:
        switch(uVar25) {
        default:
          goto switchD_035f7f98_caseD_0;
        case 2:
        case 3:
          goto switchD_035f7f98_caseD_c;
        case 4:
        case 5:
          param_5[0xb2] = (ErrorResultVariant)((byte)EVar11 & 0xf);
          return param_5;
        case 6:
        case 7:
          if (EVar11 == (ErrorResultVariant)0x1) {
            if (*(int *)(param_5 + 0xb4) == 1) {
              *(undefined4 *)(param_5 + 0xb4) = 2;
              return param_5;
            }
          }
          else if (EVar11 == (ErrorResultVariant)0x0) {
            *(undefined4 *)(param_5 + 0xb4) = 1;
            return param_5;
          }
          break;
        case 8:
        case 9:
          goto switchD_035f7f98_caseD_8;
        case 10:
        case 0xb:
          break;
        case 0xe:
        case 0xf:
          goto switchD_035f7f98_caseD_2;
        }
        break;
      case 4:
      case 5:
        return param_5;
      case 6:
      case 7:
        (&UNK_035f808e)[(ulong)(&switchD_035f7f98::switchdataD_0419324a)[uVar33] * 8] = 0;
        uVar20 = uVar20 + 0x200;
        param_5[uVar33 * 8 + 0x16e] = EVar11;
        uVar25 = uVar20 | 0x30;
        if ((uVar20 & 0xffff) < 0xc0) {
          uVar25 = uVar20;
        }
        *(ErrorResultVariant *)(*(long *)(param_5 + 0x88) + ((ulong)uVar25 & 0xffff)) = EVar11;
        *(short *)(param_5 + 6) = (short)uVar25;
        return param_5;
      case 8:
      case 9:
        if ((uVar20 >> 0xc & 1) == 0) {
          param_5[0x16e] = EVar11;
                    /* WARNING: Could not recover jumptable at 0x035f839c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pEVar14 = (ErrorResultVariant *)
                    (*(code *)(&UNK_035f83a0 +
                              (ulong)(&BYTE_04193256)[*(uint *)(param_5 + 0xa8)] * 4))();
          return pEVar14;
        }
        return param_5;
      case 0xc:
        param_5[uVar33 * 8 + 0x16e] = EVar11;
        pEVar14 = (ErrorResultVariant *)FUN_035b6470(param_5 + -0xcc0,0x324a);
        return pEVar14;
      case 0xe:
        if (((uVar20 & 0xffff) >> 8 & 1) != 0) {
          param_5[0xb1] = (ErrorResultVariant)((byte)EVar11 & 0xf);
          return param_5;
        }
        break;
      case 0xf:
                    /* WARNING: Could not recover jumptable at 0x035f805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pEVar14 = (ErrorResultVariant *)
                  (*(code *)((ulong)(&switchD_035f7f98::switchdataD_0419324a)[uVar33] * 0xc +
                            0x35f7f20))();
        return pEVar14;
      }
    }
    return param_5;
  case (ErrorResultVariant)0x4e:
    goto switchD_035ecf7c_caseD_4e;
  case (ErrorResultVariant)0x50:
    param_5[0xb0] = (ErrorResultVariant)0x0;
                    /* WARNING: Could not recover jumptable at 0x035f7ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pEVar14 = (ErrorResultVariant *)
              (*(code *)(&LAB_035f7a94 + (ulong)(byte)(&DAT_0419320e)[*(uint *)(param_5 + 0xa8)] * 4
                        ))();
    return pEVar14;
  case (ErrorResultVariant)0x51:
    (*_USHORT_0418ff9c)();
    if (((int)unaff_x20[1] == 2) || ((int)unaff_x20[1] != 1)) {
      (**(code **)(*unaff_x20 + 0x20))();
    }
    else {
      (**(code **)(*unaff_x20 + 0x38))();
    }
    (**(code **)(*unaff_x20 + 0x28))();
    (**(code **)(*unaff_x20 + 0x28))();
    if ((int)unaff_x20[1] == 2) {
      (**(code **)(*unaff_x20 + 0x20))();
    }
    else if ((int)unaff_x20[1] == 1) {
      (**(code **)(*unaff_x20 + 0x30))();
    }
    else {
      (**(code **)(*unaff_x20 + 0x20))();
      *(undefined2 *)(param_5 + 0xbe) = 0;
    }
    (**(code **)(*unaff_x20 + 0x28))();
    (**(code **)(*unaff_x20 + 0x28))();
    (**(code **)(*unaff_x20 + 0x28))();
    if ((int)unaff_x20[1] == 2) {
      (**(code **)(*unaff_x20 + 0x20))();
    }
    else if ((int)unaff_x20[1] == 1) {
      (**(code **)(*unaff_x20 + 0x30))();
    }
    else {
      (**(code **)(*unaff_x20 + 0x20))();
      *(undefined2 *)(param_5 + 0xc4) = 0;
    }
    EVar11 = param_5[0xc6];
    (**(code **)(*unaff_x20 + 0x28))();
    unaff_x21 = param_5 + 200;
    param_5[0xc6] = (ErrorResultVariant)(EVar11 != (ErrorResultVariant)0x0);
    if ((int)unaff_x20[1] == 2) {
      (**(code **)(*unaff_x20 + 0x20))();
      goto LAB_03601790;
    }
    if ((int)unaff_x20[1] == 1) {
      (**(code **)(*unaff_x20 + 0x30))();
      goto LAB_03601790;
    }
    (**(code **)(*unaff_x20 + 0x20))();
    puVar31 = (ushort *)0x0;
    in_x11 = (undefined *)0xff00;
    puVar22 = (ushort *)(ulong)*(uint *)(unaff_x20 + 2);
    goto switchD_035ecf7c_caseD_4e;
  case (ErrorResultVariant)0x53:
    if (param_8 == 1) {
      param_5[0x20c7fd4e] = (ErrorResultVariant)0x0;
    }
    uVar20 = uVar20 + 0x200;
    param_5[0x20c7fd4e] = EVar11;
    uVar25 = uVar20 | 0x30;
    if ((uVar20 & 0xffff) < 0xc0) {
      uVar25 = uVar20;
    }
    *(ErrorResultVariant *)(*(long *)(param_5 + 0x88) + ((ulong)uVar25 & 0xffff)) = EVar11;
    *(short *)(param_5 + 6) = (short)uVar25;
    return param_5;
  case (ErrorResultVariant)0x54:
    (**(code **)(*(long *)param_5 + 0x18))();
    (**(code **)(*(long *)*unaff_x20 + 0x18))((long *)*unaff_x20,*(undefined8 *)(param_5 + 0x20));
    (**(code **)(*(long *)*unaff_x20 + 0x18))((long *)*unaff_x20,*(undefined8 *)(param_5 + 0x28));
    pEVar14 = (ErrorResultVariant *)
              (**(code **)(*(long *)*unaff_x20 + 0x18))
                        ((long *)*unaff_x20,*(undefined8 *)(param_5 + 0x30));
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 0x30) = 0;
    *(undefined8 *)(param_5 + 0x20) = 0;
    *(undefined8 *)(param_5 + 0x28) = 0;
    return pEVar14;
  default:
    *(undefined2 *)(param_5 + 0x10c0) = 0xff70;
    *(short *)(param_5 + 0x10c8) = *(short *)(param_5 + 0x10c8) + 2;
    return (ErrorResultVariant *)0x0;
  case (ErrorResultVariant)0x58:
  case (ErrorResultVariant)0x60:
  case (ErrorResultVariant)0x68:
    unaff_x21[3] = (ErrorResultVariant)0x7c;
    return (ErrorResultVariant *)0x0;
  case (ErrorResultVariant)0x59:
  case (ErrorResultVariant)0x61:
  case (ErrorResultVariant)0x69:
    puVar22 = (ushort *)PTR_LAB_04bca5e8;
    puVar31 = (ushort *)PTR_LAB_04bca8f8;
    break;
  case (ErrorResultVariant)0x5a:
  case (ErrorResultVariant)0x62:
  case (ErrorResultVariant)0x6a:
    uVar20 = ((uint)in_x11 | (uint)uVar19) & 8;
    if (((uVar25 == 0) || (uVar20 != 0)) || (in_w13 == 0)) {
      bVar36 = (byte)in_x12;
      if ((uVar20 == 0 && in_w13 == 0) && uVar25 != 0) {
        bVar36 = 0x7d;
      }
    }
    else {
      bVar36 = 0x7e;
    }
    param_5[0x26] = (ErrorResultVariant)(bVar36 & 0xf);
    if (param_5[0x22] != (ErrorResultVariant)0x0) {
      *(undefined2 *)(param_5 + 0x3a) = 0x17d;
      return param_5;
    }
    sVar7 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_5[0x26] * 2);
    *(short *)(param_5 + 0x2e) = sVar7;
    sVar12 = 0x17d;
    if ((*(ushort *)(param_5 + 0x28) & 1) != 0) {
      sVar12 = sVar7 + 0x17d;
    }
    *(short *)(param_5 + 0x3a) = sVar12;
    return param_5;
  case (ErrorResultVariant)0x5b:
  case (ErrorResultVariant)0x63:
  case (ErrorResultVariant)0x6b:
  case (ErrorResultVariant)0xb8:
  case (ErrorResultVariant)0xc0:
  case (ErrorResultVariant)0xc8:
    goto switchD_035ecf7c_caseD_5b;
  case (ErrorResultVariant)0x5d:
  case (ErrorResultVariant)0x65:
  case (ErrorResultVariant)0x6d:
  case (ErrorResultVariant)0x87:
  case (ErrorResultVariant)0x8d:
  case (ErrorResultVariant)0x8f:
  case (ErrorResultVariant)0x95:
  case (ErrorResultVariant)0x97:
  case (ErrorResultVariant)0x9d:
  case (ErrorResultVariant)0x9f:
  case (ErrorResultVariant)0xa1:
  case (ErrorResultVariant)0xa3:
  case (ErrorResultVariant)0xa7:
  case (ErrorResultVariant)0xa9:
  case (ErrorResultVariant)0xab:
  case (ErrorResultVariant)0xaf:
  case (ErrorResultVariant)0xb1:
  case (ErrorResultVariant)0xb3:
  case (ErrorResultVariant)0xb9:
  case (ErrorResultVariant)0xbb:
  case (ErrorResultVariant)0xbd:
  case (ErrorResultVariant)0xc1:
  case (ErrorResultVariant)0xc3:
  case (ErrorResultVariant)0xc5:
  case (ErrorResultVariant)0xc9:
  case (ErrorResultVariant)0xcb:
  case (ErrorResultVariant)0xcd:
  case (ErrorResultVariant)0xd1:
  case (ErrorResultVariant)0xd3:
  case (ErrorResultVariant)0xd5:
  case (ErrorResultVariant)0xd9:
  case (ErrorResultVariant)0xdb:
  case (ErrorResultVariant)0xdd:
  case (ErrorResultVariant)0xe1:
  case (ErrorResultVariant)0xe3:
  case (ErrorResultVariant)0xe5:
  case (ErrorResultVariant)0xe9:
  case (ErrorResultVariant)0xeb:
  case (ErrorResultVariant)0xed:
  case (ErrorResultVariant)0xf1:
  case (ErrorResultVariant)0xf3:
  case (ErrorResultVariant)0xf5:
  case (ErrorResultVariant)0xf9:
  case (ErrorResultVariant)0xfb:
  case (ErrorResultVariant)0xfd:
    sVar12 = (*(code *)&switchD_035ecf7c::switchdataD_0418ff7c)
                       (param_5 + ((long)puVar31 >> 1) + 0xec0,(ulong)unaff_x20 & 0xffffffff,
                        *(undefined4 *)(param_5 + 0x178));
    FUN_03638cac(param_5);
    *(ushort *)(param_5 + 0x1a2) = (ushort)(byte)param_5[0x1a0] | sVar12 << 8;
    return (ErrorResultVariant *)&LAB_0362cea0;
  case (ErrorResultVariant)0x6f:
  case (ErrorResultVariant)0x77:
  case (ErrorResultVariant)0x7f:
    break;
  case (ErrorResultVariant)0x70:
  case (ErrorResultVariant)0x78:
  case (ErrorResultVariant)0x80:
    *unaff_x21 = (ErrorResultVariant)0xc;
    return (ErrorResultVariant *)0x0;
  case (ErrorResultVariant)0x72:
  case (ErrorResultVariant)0x7a:
  case (ErrorResultVariant)0x82:
    return param_5;
  case (ErrorResultVariant)0x73:
  case (ErrorResultVariant)0x7b:
  case (ErrorResultVariant)0x83:
    goto switchD_035ecf7c_caseD_73;
  case (ErrorResultVariant)0x74:
  case (ErrorResultVariant)0x7c:
  case (ErrorResultVariant)0x84:
    uVar20 = (uint)(byte)USHORT_041900ea;
    if ((uVar19 & 2) != 0) {
      uVar20 = 0xffffffff;
    }
    return (ErrorResultVariant *)(ulong)uVar20;
  case (ErrorResultVariant)0x75:
  case (ErrorResultVariant)0x7d:
  case (ErrorResultVariant)0x85:
    *(uint *)(param_5 + 0x172) = uVar25;
    puVar22 = (ushort *)PTR_LAB_04bca640;
    puVar31 = (ushort *)PTR_LAB_04bca950;
    break;
  case (ErrorResultVariant)0x86:
  case (ErrorResultVariant)0x8e:
  case (ErrorResultVariant)0x96:
    goto switchD_035ecf7c_caseD_86;
  case (ErrorResultVariant)0x8a:
  case (ErrorResultVariant)0x92:
  case (ErrorResultVariant)0x9a:
    (**(code **)(*unaff_x20 + 0x38))();
    (**(code **)(*unaff_x20 + 0x20))();
    (**(code **)(*unaff_x20 + 0x20))();
    unaff_x21 = param_5 + 6;
    if ((int)unaff_x20[1] == 2) {
      (**(code **)(*unaff_x20 + 0x20))();
      goto LAB_03601d48;
    }
    if ((int)unaff_x20[1] == 1) {
      (**(code **)(*unaff_x20 + 0x30))();
      goto LAB_03601d48;
    }
    puVar22 = (ushort *)*unaff_x20;
    goto switchD_035ecf7c_caseD_25;
  case (ErrorResultVariant)0x8b:
  case (ErrorResultVariant)0x93:
  case (ErrorResultVariant)0x9b:
    puVar22 = (ushort *)0x418ff;
    pEVar32 = (ErrorResultVariant *)PTR_DAT_04bca9e8;
    goto switchD_035ecf7c_caseD_86;
  case (ErrorResultVariant)0x9e:
  case (ErrorResultVariant)0xa6:
  case (ErrorResultVariant)0xae:
    if ((undefined1 *)(ulong)*(ushort *)(param_5 + 0x15a) <=
        (undefined1 *)((long)unaff_x20 + -0x418ff7c)) {
      FUN_0362aa18(param_5,(ulong)unaff_x20 & 0xffffffff);
    }
    pcVar23 = *(code **)(param_5 + 0x160);
    if ((*(ulong *)(param_5 + 0x168) & 1) != 0) {
      pcVar23 = *(code **)(pcVar23 +
                          *(long *)(param_5 + ((long)*(ulong *)(param_5 + 0x168) >> 1) + 0xec0));
    }
    EVar11 = (ErrorResultVariant)
             (*pcVar23)(param_5 + ((long)*(ulong *)(param_5 + 0x168) >> 1) + 0xec0,
                        (ulong)unaff_x20 & 0xffffffff,*(undefined4 *)(param_5 + 0x15c));
    FUN_03638a84(param_5);
    param_5[0x1a0] = EVar11;
    *(short *)(param_5 + 0x10ca) = *(short *)(param_5 + 0x10ca) + 1;
    return (ErrorResultVariant *)&LAB_0362b480;
  case (ErrorResultVariant)0xa0:
  case (ErrorResultVariant)0xa8:
  case (ErrorResultVariant)0xb0:
    uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
    uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
    if ((uint)in_x11 != 0x418ff7c) {
      uVar20 = uVar25;
    }
    uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
    (**(code **)(*(long *)param_5 + 0x38))(param_5);
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)(unaff_x20 + 0x86);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,8);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar1 = (ulong *)(unaff_x20 + 0x84);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar1,8);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar30 = *puVar1;
      uVar33 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uStack_8 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uStack_8 = uVar30;
      }
      (**(code **)(*(long *)param_5 + 0x40))(param_5,&uStack_8);
    }
    else {
      uStack_8 = 0;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,8);
      uVar33 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar33 = uStack_8;
      }
      *puVar1 = uVar33;
    }
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x434));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    puVar16 = (ushort *)((long)unaff_x20 + 0x436);
    *(bool *)((long)unaff_x20 + 0x434) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    puVar16 = (ushort *)(unaff_x20 + 0x87);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x419);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x419) = (char)uStack_8 != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,unaff_x20 + 0x85);
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x43a);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x43a) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 0) {
      bVar10 = false;
      if ((*(char *)((long)unaff_x20 + 0x419) != '\0') && ((char)unaff_x20[0x83] != '\0')) {
        bVar10 = (int)*unaff_x22 != 0;
      }
      *(byte *)((long)unaff_x20 + 0x414) = *(byte *)((long)unaff_x20 + 0x414) & 0xfe | bVar10;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x43b));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x43c));
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x43d);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x43d) = (char)uStack_8 != '\0';
    uStack_8._0_1_ = *(undefined1 *)((long)unaff_x20 + 0x43e);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    if (*(int *)(param_5 + 8) == 0) {
      *(char *)((long)unaff_x20 + 0x43e) = (char)uStack_8;
    }
    if (unaff_w25 == 0) {
      sVar12 = *(short *)(&DAT_04057c80 + (ulong)*(byte *)((long)unaff_x20 + 0x43e) * 2);
      *(short *)((long)unaff_x20 + 0x44a) = sVar12;
      uVar19 = (ushort)*(byte *)((long)unaff_x20 + 0x419);
      if (((*(byte *)((long)unaff_x20 + 0x419) != 0) &&
          (uVar19 = 0x17f, (char)unaff_x20[0x83] != '\0')) &&
         (*(char *)((long)unaff_x20 + 0x43a) == '\0')) {
        uVar19 = 0x17f;
        if (*(char *)((long)unaff_x20 + 0x447) != '\0') {
          uVar19 = sVar12 + 0x17f;
        }
      }
      *(ushort *)((long)unaff_x20 + 0x4fc) = uVar19;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x43f));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,unaff_x20 + 0x88);
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x441);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x441) = (char)uStack_8 != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x442));
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x443));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    puVar16 = (ushort *)(unaff_x20 + 0x89);
    *(bool *)((long)unaff_x20 + 0x443) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x444));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x445));
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x44c);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x44c) = (char)uStack_8 != '\0';
    if (unaff_w25 == 0) {
      uVar25 = 0x7ee18180 >> (ulong)((*(byte *)((long)unaff_x20 + 0x445) & 3) << 3);
      *(char *)((long)unaff_x20 + 0x446) = (char)uVar25;
      uVar20 = 0;
      if ((char)uStack_8 == '\0') {
        uVar20 = (uVar25 & 0xff) >> (ulong)(*(byte *)((long)unaff_x20 + 0x444) & 0x1f) & 1;
      }
      *(char *)((long)unaff_x20 + 0x447) = (char)uVar20;
      uVar19 = (ushort)*(byte *)((long)unaff_x20 + 0x419);
      if (((*(byte *)((long)unaff_x20 + 0x419) != 0) &&
          (uVar19 = 0x17f, (char)unaff_x20[0x83] != '\0')) &&
         (*(char *)((long)unaff_x20 + 0x43a) == '\0')) {
        uVar19 = 0x17f;
        if (uVar20 != 0) {
          uVar19 = *(short *)((long)unaff_x20 + 0x44a) + 0x17f;
        }
      }
      *(ushort *)((long)unaff_x20 + 0x4fc) = uVar19;
    }
    iVar13 = *(int *)(param_5 + 8);
    uStack_8 = CONCAT71(uStack_8._1_7_,(char)unaff_x20[0x8a]);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)(unaff_x20 + 0x8a) = (char)uStack_8 != '\0';
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)((long)unaff_x20 + 0x464);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)(unaff_x20 + 0x8d);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,8);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar1 = (ulong *)(unaff_x20 + 0x8b);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar1,8);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar30 = *puVar1;
      uVar33 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uStack_8 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uStack_8 = uVar30;
      }
      (**(code **)(*(long *)param_5 + 0x40))(param_5,&uStack_8);
    }
    else {
      uStack_8 = 0;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,8);
      uVar33 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar33 = uStack_8;
      }
      *puVar1 = uVar33;
    }
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x46c));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    puVar16 = (ushort *)((long)unaff_x20 + 0x46e);
    *(bool *)((long)unaff_x20 + 0x46c) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    puVar16 = (ushort *)(unaff_x20 + 0x8e);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x451);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x451) = (char)uStack_8 != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,unaff_x20 + 0x8c);
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x472);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x472) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 0) {
      bVar36 = 0;
      if ((*(int *)((long)unaff_x20 + 0x464) != 0 && (char)unaff_x20[0x8a] != '\0') &&
          *(char *)((long)unaff_x20 + 0x451) != '\0') {
        bVar36 = 2;
      }
      *(byte *)((long)unaff_x20 + 0x414) = bVar36 | *(byte *)((long)unaff_x20 + 0x414) & 0xfd;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x473));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x474));
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x475);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x475) = (char)uStack_8 != '\0';
    uStack_8._0_1_ = *(undefined1 *)((long)unaff_x20 + 0x476);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    if (*(int *)(param_5 + 8) == 0) {
      *(char *)((long)unaff_x20 + 0x476) = (char)uStack_8;
    }
    if (iVar13 == 0) {
      sVar12 = *(short *)(&DAT_04057c80 + (ulong)*(byte *)((long)unaff_x20 + 0x476) * 2);
      *(short *)((long)unaff_x20 + 0x482) = sVar12;
      uVar19 = (ushort)*(byte *)((long)unaff_x20 + 0x451);
      if (((*(byte *)((long)unaff_x20 + 0x451) != 0) &&
          (uVar19 = 0x17f, (char)unaff_x20[0x8a] != '\0')) &&
         (*(char *)((long)unaff_x20 + 0x472) == '\0')) {
        uVar19 = 0x17f;
        if (*(char *)((long)unaff_x20 + 0x47f) != '\0') {
          uVar19 = sVar12 + 0x17f;
        }
      }
      *(ushort *)((long)unaff_x20 + 0x4fe) = uVar19;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x477));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,unaff_x20 + 0x8f);
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x479);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x479) = (char)uStack_8 != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x47a));
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x47b));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    puVar16 = (ushort *)(unaff_x20 + 0x90);
    *(bool *)((long)unaff_x20 + 0x47b) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x47c));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x47d));
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x484);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x484) = (char)uStack_8 != '\0';
    if (iVar13 == 0) {
      uVar25 = 0x7ee18180 >> (ulong)((*(byte *)((long)unaff_x20 + 0x47d) & 3) << 3);
      *(char *)((long)unaff_x20 + 0x47e) = (char)uVar25;
      uVar20 = 0;
      if ((char)uStack_8 == '\0') {
        uVar20 = (uVar25 & 0xff) >> (ulong)(*(byte *)((long)unaff_x20 + 0x47c) & 0x1f) & 1;
      }
      *(char *)((long)unaff_x20 + 0x47f) = (char)uVar20;
      uVar19 = (ushort)*(byte *)((long)unaff_x20 + 0x451);
      if (((*(byte *)((long)unaff_x20 + 0x451) != 0) &&
          (uVar19 = 0x17f, (char)unaff_x20[0x8a] != '\0')) &&
         (*(char *)((long)unaff_x20 + 0x472) == '\0')) {
        uVar19 = 0x17f;
        if (uVar20 != 0) {
          uVar19 = *(short *)((long)unaff_x20 + 0x482) + 0x17f;
        }
      }
      *(ushort *)((long)unaff_x20 + 0x4fe) = uVar19;
    }
    iVar13 = *(int *)(param_5 + 8);
    uStack_8 = CONCAT71(uStack_8._1_7_,(char)unaff_x20[0x91]);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)(unaff_x20 + 0x91) = (char)uStack_8 != '\0';
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)((long)unaff_x20 + 0x49c);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)(unaff_x20 + 0x94);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,8);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar1 = (ulong *)(unaff_x20 + 0x92);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar1,8);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar30 = *puVar1;
      uVar33 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uStack_8 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uStack_8 = uVar30;
      }
      (**(code **)(*(long *)param_5 + 0x40))(param_5,&uStack_8);
    }
    else {
      uStack_8 = 0;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,8);
      uVar33 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar33 = uStack_8;
      }
      *puVar1 = uVar33;
    }
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x4a4));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    puVar16 = (ushort *)((long)unaff_x20 + 0x4a6);
    *(bool *)((long)unaff_x20 + 0x4a4) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    puVar16 = (ushort *)(unaff_x20 + 0x95);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x489);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x489) = (char)uStack_8 != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,unaff_x20 + 0x93);
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x4aa);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x4aa) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 0) {
      bVar36 = 0;
      if ((*(int *)((long)unaff_x20 + 0x49c) != 0 && (char)unaff_x20[0x91] != '\0') &&
          *(char *)((long)unaff_x20 + 0x489) != '\0') {
        bVar36 = 4;
      }
      *(byte *)((long)unaff_x20 + 0x414) = bVar36 | *(byte *)((long)unaff_x20 + 0x414) & 0xfb;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4be));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4ab));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(byte *)((long)unaff_x20 + 0x4ac));
    (**(code **)(*(long *)param_5 + 0x20))(param_5,(undefined1 *)((long)unaff_x20 + 0x4ad),0x10);
    uStack_8._0_1_ = (char)unaff_x20[0x98];
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)(unaff_x20 + 0x98) = (char)uStack_8 != '\0';
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x4c1);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x4c1) = (char)uStack_8 != '\0';
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x4bf);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x4bf) = (char)uStack_8 != '\0';
    if (iVar13 == 0) {
      if (*(char *)((long)unaff_x20 + 0x489) == '\0') {
        *(undefined2 *)(unaff_x20 + 0xa0) = 0;
        *(undefined1 *)((long)unaff_x20 + 0x4bd) = 0;
      }
      else if (((char)unaff_x20[0x91] == '\0') || (*(char *)((long)unaff_x20 + 0x4aa) != '\0')) {
        *(undefined1 *)((long)unaff_x20 + 0x4bd) = 0;
        *(undefined2 *)(unaff_x20 + 0xa0) = 0x186;
      }
      else {
        uVar20 = 4;
        if ((char)uStack_8 == '\0') {
          uVar20 = ((uint)*(byte *)((long)unaff_x20 + 0x4ac) << 2 ^ 0xffffffff) & 4;
        }
        uVar20 = *(byte *)((long)unaff_x20 + 0x4ab) >> (ulong)uVar20 & 0xf;
        *(char *)((long)unaff_x20 + 0x4bd) = (char)uVar20;
        if (*(byte *)((long)unaff_x20 + 0x4be) == 0) {
          sVar12 = 0x186;
        }
        else {
          sVar12 = (short)(uVar20 >>
                          (ulong)(0x2104U >> (ulong)((*(byte *)((long)unaff_x20 + 0x4be) & 7) << 2)
                                 & 7)) * -0x34 + 0x186;
        }
        *(short *)(unaff_x20 + 0xa0) = sVar12;
      }
    }
    uStack_8 = CONCAT71(uStack_8._1_7_,(char)unaff_x20[0x99]);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)(unaff_x20 + 0x99) = (char)uStack_8 != '\0';
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)((long)unaff_x20 + 0x4dc);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)(unaff_x20 + 0x9c);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,8);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar1 = (ulong *)(unaff_x20 + 0x9a);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar1,8);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar30 = *puVar1;
      uVar33 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uStack_8 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uStack_8 = uVar30;
      }
      (**(code **)(*(long *)param_5 + 0x40))(param_5,&uStack_8);
    }
    else {
      uStack_8 = 0;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,8);
      uVar33 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar33 = uStack_8;
      }
      *puVar1 = uVar33;
    }
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x4e4));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    puVar16 = (ushort *)((long)unaff_x20 + 0x4e6);
    *(bool *)((long)unaff_x20 + 0x4e4) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    puVar16 = (ushort *)(unaff_x20 + 0x9d);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x4c9);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x4c9) = (char)uStack_8 != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,unaff_x20 + 0x9b);
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x4ea);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x4ea) = (char)uStack_8 != '\0';
    if (*(int *)(param_5 + 8) == 0) {
      bVar36 = 0;
      if ((*(int *)((long)unaff_x20 + 0x4dc) != 0 && (char)unaff_x20[0x99] != '\0') &&
          *(char *)((long)unaff_x20 + 0x4c9) != '\0') {
        bVar36 = 8;
      }
      *(byte *)((long)unaff_x20 + 0x414) = bVar36 | *(byte *)((long)unaff_x20 + 0x414) & 0xf7;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4eb));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4ec));
    uStack_8._0_1_ = *(char *)((long)unaff_x20 + 0x4ed);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x4ed) = (char)uStack_8 != '\0';
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x4ee));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    iVar13 = *(int *)(param_5 + 8);
    if (iVar13 == 0) {
      *(char *)((long)unaff_x20 + 0x4ee) = (char)uStack_8;
      iVar13 = *(int *)(param_5 + 8);
    }
    puVar16 = (ushort *)(unaff_x20 + 0x9e);
    if (iVar13 == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (iVar13 == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4f2));
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x4f3));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(bool *)((long)unaff_x20 + 0x4f3) = (char)uStack_8 != '\0';
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4f4));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4ef));
    if (*(int *)(param_5 + 8) == 0) {
      uVar19 = (ushort)*(byte *)((long)unaff_x20 + 0x4c9);
      if (((*(byte *)((long)unaff_x20 + 0x4c9) != 0) &&
          (uVar19 = 0x17d, (char)unaff_x20[0x99] != '\0')) &&
         (*(char *)((long)unaff_x20 + 0x4ea) == '\0')) {
        sVar12 = *(short *)(&DAT_040579c0 + (ulong)*(byte *)((long)unaff_x20 + 0x4ee) * 2);
        *(short *)((long)unaff_x20 + 0x4f6) = sVar12;
        uVar19 = 0x17d;
        if ((*(ushort *)(unaff_x20 + 0x9e) & 1) != 0) {
          uVar19 = sVar12 + 0x17d;
        }
      }
      *(ushort *)((long)unaff_x20 + 0x502) = uVar19;
    }
    (**(code **)(*(long *)param_5 + 0x28))(param_5,unaff_x20 + 0x9f);
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4f9));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x4fa));
    if (unaff_w24 == 0) {
      bVar36 = *(byte *)((long)unaff_x20 + 0x4f9);
      uVar19 = (*(byte *)(unaff_x20 + 0x9f) >> 4 & 7) + 1;
      uVar6 = (*(byte *)(unaff_x20 + 0x9f) & 7) + 1;
      *(ushort *)((long)unaff_x20 + 0x50c) = -(bVar36 & 1) & uVar6;
      uVar20 = (uint)bVar36;
      *(ushort *)((long)unaff_x20 + 0x504) = uVar19 & (ushort)((int)((uint)bVar36 << 0x1b) >> 0x1f);
      *(ushort *)((long)unaff_x20 + 0x50e) = uVar6 & (ushort)((int)(uVar20 << 0x1e) >> 0x1f);
      *(ushort *)((long)unaff_x20 + 0x506) = uVar19 & (ushort)((int)(uVar20 << 0x1a) >> 0x1f);
      *(ushort *)(unaff_x20 + 0xa1) = uVar19 & (ushort)((int)(uVar20 << 0x19) >> 0x1f);
      *(ushort *)((long)unaff_x20 + 0x50a) = uVar19 & (ushort)((uint)(int)(char)bVar36 >> 7);
      *(ushort *)(unaff_x20 + 0xa2) = uVar6 & (ushort)((int)((uint)bVar36 << 0x1d) >> 0x1f);
      *(ushort *)((long)unaff_x20 + 0x512) = uVar6 & (ushort)((int)((uint)bVar36 << 0x1c) >> 0x1f);
    }
    puVar16 = (ushort *)((long)unaff_x20 + 0x106e);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar16,2);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar6 = *puVar16;
      uVar19 = uVar6 >> 8 | uVar6 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = uVar6;
      }
      uStack_8 = CONCAT62(uStack_8._2_6_,uVar19);
      (**(code **)(*(long *)param_5 + 0x30))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._2_6_ << 0x10;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,2);
      uVar19 = (ushort)uStack_8 >> 8 | (ushort)uStack_8 << 8;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar19 = (ushort)uStack_8;
      }
      *puVar16 = uVar19;
    }
    FUN_0360ddc0();
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)(unaff_x20 + 0xa8);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
      EVar11 = param_5[0xc];
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
      EVar11 = param_5[0xc];
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
      EVar11 = param_5[0xc];
    }
    if (EVar11 != (ErrorResultVariant)0x0) {
      uStack_8._1_7_ = (undefined7)(uStack_8 >> 8);
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    puVar2 = (uint *)((long)unaff_x20 + 0x544);
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
    }
    uVar20 = *(uint *)((long)unaff_x20 + 0x514);
    uVar33 = (ulong)uVar20;
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,8);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,auStack_7ffffffe + 0x7fffffe6,8);
      *(uint *)((long)unaff_x20 + 0x514) = uVar20;
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar30 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uStack_8 = (uVar30 >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10) << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uStack_8 = uVar33;
      }
      (**(code **)(*(long *)param_5 + 0x40))(param_5,&uStack_8);
      *(uint *)((long)unaff_x20 + 0x514) = uVar20;
    }
    else {
      uStack_8 = 0;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,8);
      uVar33 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
      uVar33 = ((uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10) >> 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar33 = uStack_8;
      }
      *(int *)((long)unaff_x20 + 0x514) = (int)uVar33;
    }
    if (unaff_w24 == 0) {
      nn::os::LockMutex((MutexType *)(unaff_x20 + 0x298));
      unaff_x20[0x294] = (ulong)(*(uint *)((long)unaff_x20 + 0x514) >> 1);
      nn::os::UnlockMutex((MutexType *)(unaff_x20 + 0x298));
    }
    uVar20 = *(uint *)(unaff_x20 + 0xa6);
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,auStack_7ffffffe + 0x7fffffe2,4);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar25 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
      uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar25 = uVar20;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar25);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
    }
    if (unaff_w24 == 0) {
      uVar33 = (ulong)uVar20;
      if ((ulong)unaff_x20[0xa7] < uVar33) {
        uVar30 = uVar33;
        if (uVar33 < 5) {
          uVar30 = 4;
        }
        iVar13 = FUN_0360a5c0(unaff_x20 + 0xa3,uVar30);
        if (iVar13 != 0) {
          FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
          goto LAB_036103f8;
        }
      }
      unaff_x20[0xa6] = uVar33;
    }
LAB_036103f8:
    if (uVar20 != 0) {
      FUN_03611b50(param_5,unaff_x20[0xa5],unaff_x20[0xa5] + (ulong)uVar20 * 2);
    }
    uVar33 = FUN_04002180(param_5,4,0,(long)&uStack_28 + 4);
    if ((uVar33 & 1) == 0) goto LAB_0361083c;
    iVar13 = *(int *)(param_5 + 8);
    iVar21 = iVar13;
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,4);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
      iVar21 = *(int *)(param_5 + 8);
    }
    puVar2 = (uint *)(unaff_x20 + 0x12a);
    if (iVar21 == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar2,4);
    }
    else if (iVar21 == 1) {
      uVar25 = *puVar2;
      uVar20 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = uVar25;
      }
      uStack_8 = CONCAT44(uStack_8._4_4_,uVar20);
      (**(code **)(*(long *)param_5 + 0x38))(param_5,&uStack_8);
    }
    else {
      uStack_8 = (ulong)uStack_8._4_4_ << 0x20;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,4);
      uVar20 = ((uint)uStack_8 & 0xff00ff00) >> 8 | ((uint)uStack_8 & 0xff00ff) << 8;
      uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar20 = (uint)uStack_8;
      }
      *puVar2 = uVar20;
    }
    if (uStack_28._4_4_ < 3) {
      FUN_03611e60(param_5,&uStack_8,&uStack00000000000000f8);
      *(short *)(unaff_x20 + 0xaa) = (short)uStack_8;
      *(short *)((long)unaff_x20 + 0x554) = (short)(uStack_8 >> 0x20);
      *(undefined2 *)(unaff_x20 + 0xab) = uStack0000000000000000;
      *(undefined2 *)((long)unaff_x20 + 0x55c) = uStack0000000000000004;
      *(undefined2 *)(unaff_x20 + 0xac) = uStack0000000000000008;
      *(undefined2 *)((long)unaff_x20 + 0x564) = uStack000000000000000c;
      *(undefined2 *)(unaff_x20 + 0xad) = uStack0000000000000010;
      *(undefined2 *)((long)unaff_x20 + 0x56c) = uStack0000000000000014;
      *(undefined2 *)(unaff_x20 + 0xae) = uStack0000000000000018;
      *(undefined2 *)((long)unaff_x20 + 0x574) = uStack000000000000001c;
      *(undefined2 *)(unaff_x20 + 0xaf) = uStack0000000000000020;
      *(undefined2 *)((long)unaff_x20 + 0x57c) = uStack0000000000000024;
      *(undefined2 *)(unaff_x20 + 0xb0) = uStack0000000000000028;
      *(undefined2 *)((long)unaff_x20 + 0x584) = uStack000000000000002c;
      *(undefined2 *)(unaff_x20 + 0xb1) = uStack0000000000000030;
      *(undefined2 *)((long)unaff_x20 + 0x58c) = uStack0000000000000034;
      *(undefined2 *)(unaff_x20 + 0xb2) = uStack0000000000000038;
      *(undefined2 *)((long)unaff_x20 + 0x594) = uStack000000000000003c;
      *(undefined2 *)(unaff_x20 + 0xb3) = uStack0000000000000040;
      *(undefined2 *)((long)unaff_x20 + 0x59c) = uStack0000000000000044;
      *(undefined2 *)(unaff_x20 + 0xb4) = uStack0000000000000048;
      *(undefined2 *)((long)unaff_x20 + 0x5a4) = uStack000000000000004c;
      *(undefined2 *)(unaff_x20 + 0xb5) = uStack0000000000000050;
      *(undefined2 *)((long)unaff_x20 + 0x5ac) = uStack0000000000000054;
      *(undefined2 *)(unaff_x20 + 0xb6) = uStack0000000000000058;
      *(undefined2 *)((long)unaff_x20 + 0x5b4) = uStack000000000000005c;
      *(undefined2 *)(unaff_x20 + 0xb7) = uStack0000000000000060;
      *(undefined2 *)((long)unaff_x20 + 0x5bc) = uStack0000000000000064;
      *(undefined2 *)(unaff_x20 + 0xb8) = uStack0000000000000068;
      *(undefined2 *)((long)unaff_x20 + 0x5c4) = uStack000000000000006c;
      *(undefined2 *)(unaff_x20 + 0xb9) = uStack0000000000000070;
      *(undefined2 *)((long)unaff_x20 + 0x5cc) = uStack0000000000000074;
      *(undefined2 *)(unaff_x20 + 0xba) = uStack0000000000000078;
      *(undefined2 *)((long)unaff_x20 + 0x5d4) = uStack000000000000007c;
      *(undefined2 *)(unaff_x20 + 0xbb) = uStack0000000000000080;
      *(undefined2 *)((long)unaff_x20 + 0x5dc) = uStack0000000000000084;
      *(undefined2 *)(unaff_x20 + 0xbc) = uStack0000000000000088;
      *(undefined2 *)((long)unaff_x20 + 0x5e4) = uStack000000000000008c;
      *(undefined2 *)(unaff_x20 + 0xbd) = uStack0000000000000090;
      *(undefined2 *)((long)unaff_x20 + 0x5ec) = uStack0000000000000094;
      *(undefined2 *)(unaff_x20 + 0xbe) = uStack0000000000000098;
      *(undefined2 *)((long)unaff_x20 + 0x5f4) = uStack000000000000009c;
      *(undefined2 *)(unaff_x20 + 0xbf) = uStack00000000000000a0;
      *(undefined2 *)((long)unaff_x20 + 0x5fc) = uStack00000000000000a4;
      *(undefined2 *)(unaff_x20 + 0xc0) = uStack00000000000000a8;
      *(undefined2 *)((long)unaff_x20 + 0x604) = uStack00000000000000ac;
      *(undefined2 *)(unaff_x20 + 0xc1) = uStack00000000000000b0;
      *(undefined2 *)((long)unaff_x20 + 0x60c) = uStack00000000000000b4;
      *(undefined2 *)(unaff_x20 + 0xc2) = uStack00000000000000b8;
      *(undefined2 *)((long)unaff_x20 + 0x614) = uStack00000000000000bc;
      *(undefined2 *)(unaff_x20 + 0xc3) = uStack00000000000000c0;
      *(undefined2 *)((long)unaff_x20 + 0x61c) = uStack00000000000000c4;
      *(undefined2 *)(unaff_x20 + 0xc4) = uStack00000000000000c8;
      *(undefined2 *)((long)unaff_x20 + 0x624) = uStack00000000000000cc;
      *(undefined2 *)(unaff_x20 + 0xc5) = uStack00000000000000d0;
      *(undefined2 *)((long)unaff_x20 + 0x62c) = uStack00000000000000d4;
      *(undefined2 *)(unaff_x20 + 0xc6) = uStack00000000000000d8;
      *(undefined2 *)((long)unaff_x20 + 0x634) = uStack00000000000000dc;
      *(undefined2 *)(unaff_x20 + 199) = uStack00000000000000e0;
      *(undefined2 *)((long)unaff_x20 + 0x63c) = uStack00000000000000e4;
      *(undefined2 *)(unaff_x20 + 200) = uStack00000000000000e8;
      *(undefined2 *)((long)unaff_x20 + 0x644) = uStack00000000000000ec;
      *(undefined2 *)(unaff_x20 + 0xc9) = uStack00000000000000f0;
      *(undefined2 *)((long)unaff_x20 + 0x64c) = uStack00000000000000f4;
      if (uStack_28._4_4_ == 2) goto LAB_03610710;
      FUN_03611e60(param_5,&uStack_8,auStack_7ffffffe + 0x80003ff6);
      memcpy(unaff_x20 + 0xea,&uStack_8,0x100);
      if (iVar13 == 0) {
        lVar26 = 0;
        puVar29 = (undefined4 *)((long)unaff_x20 + 0x754);
        do {
          puVar34 = (undefined2 *)((long)unaff_x20 + lVar26 + 0x650);
          lVar26 = lVar26 + 4;
          *puVar34 = (short)puVar29[-1];
          puVar34[1] = (short)*puVar29;
          puVar29 = puVar29 + 2;
        } while (lVar26 != 0x80);
      }
LAB_036107d0:
      if (iVar13 == 0) {
        lVar26 = 0;
        plVar15 = unaff_x20 + 0x10a;
        do {
          puVar34 = (undefined2 *)((long)unaff_x20 + lVar26 + 0x6d0);
          lVar26 = lVar26 + 2;
          *(int *)plVar15 = (int)plVar15[-0x20];
          *puVar34 = puVar34[-0x40];
          plVar15 = (long *)((long)plVar15 + 4);
        } while (lVar26 != 0x80);
      }
      if (uStack_28._4_4_ == 0) {
        *(undefined1 *)((long)unaff_x20 + 0x954) = 0;
        goto LAB_0361083c;
      }
    }
    else {
      FUN_03611b50(param_5,unaff_x20 + 0xaa,unaff_x20 + 0xca);
      if (uStack_28._4_4_ == 3) {
LAB_03610710:
        FUN_03611e60(param_5,unaff_x20 + 0xea,unaff_x20 + 0x10a);
        if (iVar13 == 0) {
          lVar26 = 0;
          puVar29 = (undefined4 *)((long)unaff_x20 + 0x754);
          do {
            puVar34 = (undefined2 *)((long)unaff_x20 + lVar26 + 0x650);
            lVar26 = lVar26 + 4;
            *puVar34 = (short)puVar29[-1];
            puVar34[1] = (short)*puVar29;
            puVar29 = puVar29 + 2;
          } while (lVar26 != 0x80);
          goto LAB_036107d0;
        }
      }
      else {
        FUN_03611b50(param_5,unaff_x20 + 0xca,unaff_x20 + 0xda);
        if (iVar13 == 0) {
          lVar26 = 0;
          psVar28 = (short *)((long)unaff_x20 + 0x652);
          do {
            piVar3 = (int *)((long)unaff_x20 + lVar26 + 0x750);
            lVar26 = lVar26 + 8;
            *piVar3 = (int)psVar28[-1];
            sVar12 = *psVar28;
            psVar28 = psVar28 + 2;
            piVar3[1] = (int)sVar12;
          } while (lVar26 != 0x100);
          goto LAB_036107d0;
        }
      }
    }
    uStack_8 = CONCAT71(uStack_8._1_7_,*(undefined1 *)((long)unaff_x20 + 0x954));
    (**(code **)(*(long *)param_5 + 0x28))(param_5,&uStack_8);
    *(undefined1 *)((long)unaff_x20 + 0x954) = (char)uStack_8 != '\0';
LAB_0361083c:
    FUN_03ffcda0(unaff_x20 + 300,param_5);
    return (ErrorResultVariant *)(ulong)(uVar37 & 1);
  case (ErrorResultVariant)0xba:
  case (ErrorResultVariant)0xc2:
  case (ErrorResultVariant)0xca:
    sVar7 = *(short *)(&DAT_040579c0 + (ulong)(byte)param_5[0x26] * 2);
    *(short *)(param_5 + 0x2e) = sVar7;
    sVar12 = -0x84;
    if ((*(ushort *)(param_5 + 0x28) & 1) != 0) {
      sVar12 = sVar7 + 0x17d;
    }
    *(short *)(param_5 + 0x3a) = sVar12;
    return param_5;
  case (ErrorResultVariant)0xd0:
  case (ErrorResultVariant)0xd8:
  case (ErrorResultVariant)0xe0:
    puVar31 = (ushort *)0x20418ff7c;
    goto LAB_0362cd34;
  case (ErrorResultVariant)0xd2:
  case (ErrorResultVariant)0xda:
  case (ErrorResultVariant)0xe2:
    return (ErrorResultVariant *)0xff;
  case (ErrorResultVariant)0xe8:
  case (ErrorResultVariant)0xf0:
  case (ErrorResultVariant)0xf8:
    (*(code *)&switchD_035ecf7c::switchdataD_0418ff7c)();
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar30 = *unaff_x22;
      uVar33 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uStack_8 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uStack_8 = uVar30;
      }
      (**(code **)(*(long *)param_5 + 0x40))(param_5,&uStack_8);
    }
    else {
      uStack_8 = 0;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,8);
      uVar33 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar33 = uStack_8;
      }
      *unaff_x22 = uVar33;
    }
    puVar1 = (ulong *)(unaff_x20 + 0x826);
    if (param_5[0xc] != (ErrorResultVariant)0x0) {
      uStack_8 = CONCAT71(uStack_8._1_7_,8);
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,1);
    }
    if (*(int *)(param_5 + 8) == 2) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,puVar1,8);
    }
    else if (*(int *)(param_5 + 8) == 1) {
      uVar30 = *puVar1;
      uVar33 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uStack_8 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uStack_8 = uVar30;
      }
      (**(code **)(*(long *)param_5 + 0x40))(param_5,&uStack_8);
    }
    else {
      uStack_8 = 0;
      (**(code **)(*(long *)param_5 + 0x20))(param_5,&uStack_8,8);
      uVar33 = (uStack_8 & 0xff00ff00ff00ff00) >> 8 | (uStack_8 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
      if (*(int *)(param_5 + 0x10) != 0xff00) {
        uVar33 = uStack_8;
      }
      *puVar1 = uVar33;
    }
    uVar33 = FUN_04002180(param_5,0,0,&uStack_8);
    if ((uVar33 & 1) != 0) {
      (**(code **)(*(long *)param_5 + 0x20))(param_5,unaff_x20 + 0x218,0xc);
      FUN_03606c10(param_5,(undefined1 *)((long)unaff_x20 + 0x10cc));
      iVar13 = (int)unaff_x23;
      if (iVar13 == 0) {
        if (*(byte *)((long)unaff_x20 + 0xd2) < 3) {
          FUN_0361e944();
        }
        else {
          FUN_0361ec10();
        }
      }
      uVar33 = FUN_035b3804(unaff_x20 + 0x50,param_5);
      if (((((uVar33 & 1) != 0) &&
           (uVar33 = switchD_035e6abc::caseD_8c(unaff_x20 + 0x4c0,param_5), (uVar33 & 1) != 0)) &&
          (uVar33 = FUN_035ee3f0(unaff_x20 + 0x58,param_5), (uVar33 & 1) != 0)) &&
         (uVar33 = FUN_04002180(param_5,0,0,&uStack_8), (uVar33 & 1) != 0)) {
        (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x241));
        (**(code **)(*(long *)param_5 + 0x28))(param_5,(undefined1 *)((long)unaff_x20 + 0x242));
        uVar33 = FUN_0360df60(unaff_x20 + 0x220,param_5);
        if ((((((uVar33 & 1) != 0) &&
              (uVar33 = FUN_035b79fc(unaff_x20 + 0x40,param_5), (uVar33 & 1) != 0)) &&
             ((uVar33 = FUN_03600200(unaff_x20 + 0x1d8,param_5), (uVar33 & 1) != 0 &&
              ((uVar33 = FUN_035b286c(unaff_x20 + 0x38,param_5), (uVar33 & 1) != 0 &&
               (uVar33 = FUN_036076c4(unaff_x20 + 0x4c8,param_5), (uVar33 & 1) != 0)))))) &&
            (uVar33 = FUN_035b7b14(unaff_x20 + 0x818,param_5), (uVar33 & 1) != 0)) &&
           (uVar33 = FUN_03602844(unaff_x20 + 0x820,param_5), (uVar33 & 1) != 0)) {
          if (iVar13 == 0) {
            FUN_03613008();
            *(short *)((long)unaff_x20 + 0x462) = (short)unaff_x20[0x824];
            FUN_035c4240(unaff_x20 + 0x87,unaff_x20[0x825],unaff_x20[0x826]);
            if ((*(byte *)(unaff_x20 + 0x28) - 0xb < 2) && (*(short *)unaff_x21 != 0)) {
              lVar26 = FUN_03614c3c();
            }
            else {
              lVar26 = 0;
            }
            unaff_x20[0x827] = lVar26;
          }
          uVar20 = *(uint *)(unaff_x20 + 0x1c);
          uVar25 = *(uint *)((long)unaff_x20 + 0xe4);
          uStack_8 = ((ulong)uVar25 - (ulong)uVar20) + 4;
          if (uVar20 <= uVar25) {
            uStack_8 = (ulong)(uVar25 - uVar20);
          }
          FUN_03614b50(param_5,&uStack_8);
          if (iVar13 == 0) {
            unaff_x20[0x1c] = 0;
            if (uStack_8 != 0) {
              uVar33 = 0;
              do {
                FUN_03614b50(param_5,auStack_7ffffffe + 0x7fffffde);
                uVar25 = *(uint *)(unaff_x20 + 0x1c);
                uVar37 = *(uint *)((long)unaff_x20 + 0xe4);
                *(undefined8 *)((long)(unaff_x20 + 0x1c) + ((ulong)uVar37 + 1) * 2 * 4) = unaff_x29;
                uVar20 = uVar37 + 1 & 3;
                *(uint *)((long)unaff_x20 + 0xe4) = uVar20;
                if (uVar20 == uVar25) {
                  *(uint *)(unaff_x20 + 0x1c) = uVar37 + 2 & 3;
                }
                uVar33 = uVar33 + 1;
              } while (uVar33 < uStack_8);
            }
          }
          else if (uStack_8 != 0) {
            uVar33 = 0;
            do {
              FUN_03614b50(param_5,auStack_7ffffffe + 0x7fffffde);
              uVar33 = uVar33 + 1;
            } while (uVar33 < uStack_8);
          }
          plVar15 = (long *)unaff_x20[0xb];
          if (plVar15 == (long *)0x0) {
            return (ErrorResultVariant *)0x0;
          }
          uVar33 = (**(code **)(*plVar15 + 0x48))(plVar15,uStack_28._4_4_,unaff_w30,param_5);
          if ((uVar33 & 1) != 0) {
            cVar5 = *(char *)((long)unaff_x20 + 0x4126);
            (**(code **)(*(long *)param_5 + 0x28))(param_5,auStack_7ffffffe + 0x7fffffde);
            *(bool *)((long)unaff_x20 + 0x4126) = cVar5 != '\0';
            cVar5 = *(char *)((long)unaff_x20 + 0x4127);
            (**(code **)(*(long *)param_5 + 0x28))(param_5,auStack_7ffffffe + 0x7fffffde);
            *(bool *)((long)unaff_x20 + 0x4127) = cVar5 != '\0';
            return (ErrorResultVariant *)0x1;
          }
        }
      }
    }
    return (ErrorResultVariant *)0x0;
  }
  *(ushort **)(param_5 + 0x180) = puVar31;
  *(undefined8 *)(param_5 + 0x188) = 0;
  *(ushort **)(param_5 + 400) = puVar22;
  *(undefined8 *)(param_5 + 0x198) = 0;
  return param_5;
switchD_035ecf7c_caseD_86:
  puVar31 = (ushort *)((ulong)puVar31 | (ulong)(byte)pEVar32[(long)puVar22] << 0x20);
LAB_0362cd34:
  pEVar32 = (ErrorResultVariant *)((ulong)puVar31 & 0xff);
  puVar22 = (ushort *)&DAT_04194fba;
  in_x11 = &DAT_04194fd6;
  in_x12 = (long)pEVar32 << 1;
  goto switchD_035ecf7c_caseD_73;
switchD_035ecf7c_caseD_4e:
  sVar12 = 0;
  if ((int)puVar22 != (int)in_x11) {
    sVar12 = (short)puVar31;
  }
  *(short *)unaff_x21 = sVar12;
LAB_03601790:
  (**(code **)(*unaff_x20 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x036017c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pEVar14 = (ErrorResultVariant *)
            (*(code *)(&UNK_036017c8 +
                      (ulong)*(byte *)((long)&USHORT_0419355c + (ulong)*(uint *)(param_5 + 0xa8)) *
                      4))();
  return pEVar14;
switchD_035ecf7c_caseD_25:
  (**(code **)(puVar22 + 0x10))();
  *(short *)unaff_x21 = 0;
LAB_03601d48:
  if ((int)unaff_x20[1] == 2) {
    (**(code **)(*unaff_x20 + 0x20))();
  }
  else if ((int)unaff_x20[1] == 1) {
    (**(code **)(*unaff_x20 + 0x30))();
  }
  else {
    (**(code **)(*unaff_x20 + 0x20))();
    *(undefined2 *)(param_5 + 0x164) = 0;
  }
  if ((int)unaff_x20[1] == 2) {
    (**(code **)(*unaff_x20 + 0x20))();
  }
  else if ((int)unaff_x20[1] == 1) {
    (**(code **)(*unaff_x20 + 0x30))();
  }
  else {
    (**(code **)(*unaff_x20 + 0x20))();
    *(undefined2 *)(param_5 + 0x166) = 0;
  }
  if (((uint)unaff_x22 == 0) && (((byte)param_5[0x150] >> 6 & 1) == 0)) {
    *(long *)(param_5 + 0x138) = *(long *)(unaff_x23 + 0x110) - *(long *)(param_5 + 0x130);
  }
  return (ErrorResultVariant *)0x1;
switchD_035ecf7c_caseD_73:
  in_w13 = (uint)*(ushort *)((long)puVar22 + in_x12);
  in_x11 = (undefined *)(ulong)*(ushort *)(in_x11 + in_x12);
  param_5[0x170] = SUB81(puVar31,0);
  *(int *)(param_5 + 0x178) = (int)((ulong)puVar31 >> 0x20);
  puVar22 = (ushort *)puVar8;
switchD_035ecf7c_caseD_5b:
  *(short *)(param_5 + 0x172) = (short)in_w13;
  *(short *)(param_5 + 0x174) = (short)in_x11;
                    /* WARNING: Could not recover jumptable at 0x0362cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pEVar14 = (ErrorResultVariant *)
            (*(code *)((ulong)(byte)pEVar32[0x4194f80] * 4 + 0x362cd90))(puVar22);
  return pEVar14;
}


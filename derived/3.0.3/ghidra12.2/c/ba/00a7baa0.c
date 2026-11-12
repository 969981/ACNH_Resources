
void FUN_00a7baa0(ulong param_1)

{
  ushort *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 uVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong *puVar21;
  long *plVar22;
  ulong *puVar23;
  byte bVar24;
  byte *pbVar25;
  uint uVar26;
  ulong uVar27;
  short sVar28;
  ulong *puVar29;
  int iVar30;
  undefined1 *puVar31;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 local_79;
  short sStack_78;
  undefined1 uStack_76;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar26 = 0;
  uVar18 = param_1;
  do {
    puVar3 = (undefined8 *)(param_1 + ((long)((ulong)uVar26 << 0x20) >> 0x1c));
    pbVar25 = (byte *)(puVar3 + 1);
    if (*pbVar25 < 8) {
      local_6c[0] = *pbVar25;
      uVar18 = FUN_00a7b798(param_1,local_6c,*puVar3);
      if ((uVar18 & 1) != 0) {
        DAT_04da5750 = *pbVar25;
        DAT_04da5751 = 4;
        DAT_04da5748 = *puVar3;
        DAT_04da5754 = 0x13;
        uVar27 = local_88 >> 0x30;
        puVar31 = (undefined1 *)(param_1 + (long)(int)uVar26 * 0x10 + 9);
        if (7 < DAT_04da5750) {
          DAT_04da5750 = 0xff;
        }
        local_88._0_6_ = CONCAT15(*puVar31,0x400000000);
        local_88 = CONCAT26((short)uVar27,(undefined6)local_88) & 0xff00ffffffffffff;
        if (-1 < DAT_04da5720) {
          uVar18 = FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_04da5720,&local_88,
                                &DAT_04da5748,0x10,0);
        }
        *pbVar25 = 0xff;
        *puVar31 = 0xff;
        *puVar3 = 0xffffffffffffffff;
      }
    }
    uVar26 = uVar26 + 1;
  } while (uVar26 != 8);
  iVar30 = 0;
  do {
    puVar29 = (ulong *)(param_1 + 0x80 + (long)iVar30 * 0x18);
    sVar28 = (short)puVar29[2];
    if (sVar28 != -1) {
      sVar8 = *(short *)(param_1 + 0x2f0);
      uVar27 = *puVar29;
      puVar23 = (ulong *)(param_1 + 0x80 + (long)iVar30 * 0x18 + 8);
      uVar18 = *puVar23;
      if (((((((sVar8 == -1) || (*(ulong *)(param_1 + 0x2e8) != uVar18)) ||
             (*(ulong *)(param_1 + 0x2e0) != uVar27)) || (sVar8 != sVar28)) &&
           ((((sVar9 = *(short *)(param_1 + 0x308), sVar9 == -1 ||
              (*(ulong *)(param_1 + 0x300) != uVar18)) ||
             ((*(ulong *)(param_1 + 0x2f8) != uVar27 || (sVar9 != sVar28)))) &&
            (((sVar10 = *(short *)(param_1 + 800), sVar10 == -1 ||
              (*(ulong *)(param_1 + 0x318) != uVar18)) ||
             ((*(ulong *)(param_1 + 0x310) != uVar27 || (sVar10 != sVar28)))))))) &&
          (((((sVar11 = *(short *)(param_1 + 0x338), sVar11 == -1 ||
              (*(ulong *)(param_1 + 0x330) != uVar18)) || (*(ulong *)(param_1 + 0x328) != uVar27))
            || (sVar11 != sVar28)) &&
           (((sVar12 = *(short *)(param_1 + 0x350), sVar12 == -1 ||
             (*(ulong *)(param_1 + 0x348) != uVar18)) ||
            ((*(ulong *)(param_1 + 0x340) != uVar27 || (sVar12 != sVar28)))))))) &&
         ((((sVar13 = *(short *)(param_1 + 0x368), sVar13 == -1 ||
            (*(ulong *)(param_1 + 0x360) != uVar18)) ||
           ((*(ulong *)(param_1 + 0x358) != uVar27 || (sVar13 != sVar28)))) &&
          (((((sVar14 = *(short *)(param_1 + 0x380), sVar14 == -1 ||
              (*(ulong *)(param_1 + 0x378) != uVar18)) || (*(ulong *)(param_1 + 0x370) != uVar27))
            || (sVar14 != sVar28)) &&
           ((((sVar15 = *(short *)(param_1 + 0x398), sVar15 == -1 ||
              (*(ulong *)(param_1 + 0x390) != uVar18)) ||
             ((*(ulong *)(param_1 + 0x388) != uVar27 || (sVar15 != sVar28)))) &&
            ((((sVar16 = *(short *)(param_1 + 0x3b0), sVar16 == -1 ||
               (*(ulong *)(param_1 + 0x3a8) != uVar18)) ||
              ((*(ulong *)(param_1 + 0x3a0) != uVar27 || (sVar16 != sVar28)))) &&
             ((((sVar17 = *(short *)(param_1 + 0x3c8), sVar17 == -1 ||
                (*(ulong *)(param_1 + 0x3c0) != uVar18)) || (*(ulong *)(param_1 + 0x3b8) != uVar27))
              || (sVar17 != sVar28)))))))))))) {
        uVar19 = FUN_00a7b4fc(param_1,uVar27);
        if (((uVar19 & 1) == 0) && (uVar19 = FUN_00a7b4fc(param_1,uVar18), (uVar19 & 1) == 0)) {
          if (sVar8 == -1) {
            lVar20 = 0;
          }
          else if (sVar9 == -1) {
            lVar20 = 1;
          }
          else if (sVar10 == -1) {
            lVar20 = 2;
          }
          else if (sVar11 == -1) {
            lVar20 = 3;
          }
          else if (sVar12 == -1) {
            lVar20 = 4;
          }
          else if (sVar13 == -1) {
            lVar20 = 5;
          }
          else if (sVar14 == -1) {
            lVar20 = 6;
          }
          else if (sVar15 == -1) {
            lVar20 = 7;
          }
          else if (sVar16 == -1) {
            lVar20 = 8;
          }
          else {
            if (sVar17 != -1) goto LAB_00a7bec4;
            lVar20 = 9;
          }
          puVar21 = (ulong *)(param_1 + 0x2e0) + lVar20 * 3;
          *puVar21 = uVar27;
          puVar21[1] = uVar18;
          *(short *)(puVar21 + 2) = sVar28;
          puVar1 = (ushort *)((long)puVar21 + 0x12);
          plVar22 = *(long **)PTR_DAT_04bb27d0;
          lVar20 = *plVar22;
          bVar24 = *(byte *)(lVar20 + 0x473);
          if ((long)(char)bVar24 == 0xffffffffffffffff) {
            pbVar25 = &DAT_0537bdbc;
            if (DAT_0537bdbc == 0) goto LAB_00a7c01c;
            bVar24 = DAT_0537bdbc;
            if (DAT_0537bdbc == 1) goto LAB_00a7c0a0;
LAB_00a7c100:
            if (bVar24 == 2) goto LAB_00a7c108;
LAB_00a7c174:
            if (bVar24 == 3) {
LAB_00a7c17c:
              *puVar1 = *puVar1 | 8;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 != 0xffffffffffffffff) {
                uVar18 = (long)(char)bVar24 & 0xffffffff;
                goto LAB_00a7c1a0;
              }
              bVar24 = *pbVar25;
              if (bVar24 == 4) goto LAB_00a7c1f0;
            }
            else {
LAB_00a7c1e8:
              if (bVar24 == 4) goto LAB_00a7c1f0;
            }
            if (bVar24 == 5) {
LAB_00a7c264:
              *puVar1 = *puVar1 | 0x20;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 != 0xffffffffffffffff) {
                uVar18 = (long)(char)bVar24 & 0xffffffff;
                goto LAB_00a7c288;
              }
              bVar24 = *pbVar25;
              if (bVar24 == 6) goto LAB_00a7c2e8;
            }
            else {
LAB_00a7c2d0:
              if (bVar24 == 6) goto LAB_00a7c2e8;
            }
LAB_00a7c350:
            if (bVar24 == 7) goto LAB_00a7c360;
          }
          else {
            puVar2 = (uint *)(lVar20 + 0x48);
            uVar18 = (long)(char)bVar24 & 0xffffffff;
            puVar4 = puVar2 + uVar18 * 0x20;
            if (7 < bVar24) {
              puVar4 = puVar2;
            }
            pcVar5 = PTR_DAT_04bc1220;
            if ((*puVar4 & 8) != 0) {
              pcVar5 = (char *)(lVar20 + 0x473);
            }
            pbVar25 = PTR_DAT_04bc1220;
            if ((*pcVar5 == '\0') ||
               (((*puVar4 >> 3 & 1) != 0 && ((*(byte *)puVar2 >> 3 & 1) != 0)))) {
LAB_00a7c01c:
              *puVar1 = *puVar1 | 1;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 != 0xffffffffffffffff) {
                uVar18 = (long)(char)bVar24 & 0xffffffff;
                goto LAB_00a7c040;
              }
              bVar24 = *pbVar25;
              if (*pbVar25 != 1) goto LAB_00a7c100;
LAB_00a7c0a0:
              *puVar1 = *puVar1 | 2;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 != 0xffffffffffffffff) {
                uVar18 = (long)(char)bVar24 & 0xffffffff;
                goto LAB_00a7c0c4;
              }
              bVar24 = *pbVar25;
              if (bVar24 != 2) goto LAB_00a7c174;
LAB_00a7c108:
              *puVar1 = *puVar1 | 4;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 == 0xffffffffffffffff) {
                bVar24 = *pbVar25;
                if (bVar24 != 3) goto LAB_00a7c1e8;
                goto LAB_00a7c17c;
              }
              uVar18 = (long)(char)bVar24 & 0xffffffff;
            }
            else {
LAB_00a7c040:
              puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
              if (7 < bVar24) {
                puVar2 = (uint *)(lVar20 + 0x48);
              }
              pbVar6 = pbVar25;
              if ((*puVar2 & 8) != 0) {
                pbVar6 = (byte *)(lVar20 + 0x473);
              }
              if ((*pbVar6 == 1) ||
                 (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar20 + 200) >> 3 & 1) != 0))))
              goto LAB_00a7c0a0;
LAB_00a7c0c4:
              puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
              if (7 < bVar24) {
                puVar2 = (uint *)(lVar20 + 0x48);
              }
              pbVar6 = pbVar25;
              if ((*puVar2 & 8) != 0) {
                pbVar6 = (byte *)(lVar20 + 0x473);
              }
              if ((*pbVar6 == 2) ||
                 (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar20 + 0x148) >> 3 & 1) != 0))))
              goto LAB_00a7c108;
            }
            puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
            if (7 < bVar24) {
              puVar2 = (uint *)(lVar20 + 0x48);
            }
            pbVar6 = pbVar25;
            if ((*puVar2 & 8) != 0) {
              pbVar6 = (byte *)(lVar20 + 0x473);
            }
            if ((*pbVar6 == 3) ||
               (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar20 + 0x1c8) >> 3 & 1) != 0))))
            goto LAB_00a7c17c;
LAB_00a7c1a0:
            puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
            if (7 < bVar24) {
              puVar2 = (uint *)(lVar20 + 0x48);
            }
            pbVar6 = pbVar25;
            if ((*puVar2 & 8) != 0) {
              pbVar6 = (byte *)(lVar20 + 0x473);
            }
            if ((*pbVar6 == 4) ||
               (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar20 + 0x248) >> 3 & 1) != 0)))) {
LAB_00a7c1f0:
              *puVar1 = *puVar1 | 0x10;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 == 0xffffffffffffffff) {
                bVar24 = *pbVar25;
                if (bVar24 != 5) goto LAB_00a7c2d0;
                goto LAB_00a7c264;
              }
              uVar18 = (long)(char)bVar24 & 0xffffffff;
            }
            puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
            if (7 < bVar24) {
              puVar2 = (uint *)(lVar20 + 0x48);
            }
            pbVar6 = pbVar25;
            if ((*puVar2 & 8) != 0) {
              pbVar6 = (byte *)(lVar20 + 0x473);
            }
            if ((*pbVar6 == 5) ||
               (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar20 + 0x2c8) >> 3 & 1) != 0))))
            goto LAB_00a7c264;
LAB_00a7c288:
            puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
            if (7 < bVar24) {
              puVar2 = (uint *)(lVar20 + 0x48);
            }
            pbVar6 = pbVar25;
            if ((*puVar2 & 8) != 0) {
              pbVar6 = (byte *)(lVar20 + 0x473);
            }
            if ((*pbVar6 == 6) ||
               (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar20 + 0x348) >> 3 & 1) != 0)))) {
LAB_00a7c2e8:
              *puVar1 = *puVar1 | 0x40;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 == 0xffffffffffffffff) {
                bVar24 = *pbVar25;
                goto LAB_00a7c350;
              }
              uVar18 = (long)(char)bVar24 & 0xffffffff;
            }
            puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
            if (7 < bVar24) {
              puVar2 = (uint *)(lVar20 + 0x48);
            }
            pbVar6 = pbVar25;
            if ((*puVar2 & 8) != 0) {
              pbVar6 = (byte *)(lVar20 + 0x473);
            }
            if ((*pbVar6 == 7) ||
               (((*puVar2 >> 3 & 1) != 0 && ((*(byte *)(lVar20 + 0x3c8) >> 3 & 1) != 0)))) {
LAB_00a7c360:
              *puVar1 = *puVar1 | 0x80;
              lVar20 = *plVar22;
              bVar24 = *(byte *)(lVar20 + 0x473);
              if ((long)(char)bVar24 == 0xffffffffffffffff) goto LAB_00a7c3ac;
              uVar18 = (long)(char)bVar24 & 0xffffffff;
            }
            puVar2 = (uint *)(lVar20 + 0x48) + uVar18 * 0x20;
            if (7 < bVar24) {
              puVar2 = (uint *)(lVar20 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar25 = (byte *)(lVar20 + 0x472);
            }
          }
LAB_00a7c3ac:
          uVar18 = *puVar23;
          sVar28 = (short)puVar29[2];
          *puVar1 = *puVar1 & ((ushort)(1 << (ulong)(*pbVar25 & 0x1f)) ^ 0xffff);
          uVar27 = *puVar29;
          goto LAB_00a7be2c;
        }
LAB_00a7bec4:
        uStack_80 = (undefined7)uVar18;
        local_79 = (undefined1)(uVar18 >> 0x38);
        uStack_76 = 4;
        local_88 = uVar27;
        sStack_78 = sVar28;
        uVar18 = FUN_00a7ad70(&local_88);
        if ((int)uVar18 != 1) {
          if ((int)uVar18 == 3) goto LAB_00a7bc34;
          goto LAB_00a7be54;
        }
        local_68 = 0;
        local_62 = 0;
        DAT_04da5788 = local_88;
        DAT_04da5790._0_7_ = uStack_80;
        DAT_04da5790._7_1_ = local_79;
        DAT_04da5798 = sStack_78;
        DAT_04da579a = uStack_76;
        local_64 = 0xff02;
        if (-1 < DAT_04da5760) {
          uVar18 = FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_04da5760,&local_68,
                                &DAT_04da5788,0x18,0);
        }
      }
      else {
LAB_00a7be2c:
        uStack_80 = (undefined7)uVar18;
        local_79 = (undefined1)(uVar18 >> 0x38);
        uStack_76 = 3;
        local_88 = uVar27;
        sStack_78 = sVar28;
        uVar18 = FUN_00a7ad70(&local_88);
        if ((int)uVar18 == 1) {
          local_64 = 0xff02;
          DAT_04da5788 = local_88;
          DAT_04da5790._0_7_ = uStack_80;
          DAT_04da5790._7_1_ = local_79;
          DAT_04da5798 = sStack_78;
          DAT_04da579a = uStack_76;
        }
        else {
          if ((int)uVar18 == 3) goto LAB_00a7bc34;
LAB_00a7be54:
          if ((int)uVar18 != 2) goto LAB_00a7bc24;
          local_64 = 0xff00;
          DAT_04da5788 = local_88;
          DAT_04da5790._0_7_ = uStack_80;
          DAT_04da5790._7_1_ = local_79;
          DAT_04da5798 = sStack_78;
          DAT_04da579a = uStack_76;
        }
        local_62 = 0;
        local_68 = 0;
        local_88 = DAT_04da5788;
        uStack_80 = (undefined7)DAT_04da5790;
        local_79 = DAT_04da5790._7_1_;
        sStack_78 = DAT_04da5798;
        uStack_76 = DAT_04da579a;
        if (-1 < DAT_04da5760) {
          local_62 = 0;
          local_68 = 0;
          uVar18 = FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_04da5760,&local_68,
                                &DAT_04da5788,0x18,0);
        }
      }
LAB_00a7bc24:
      *puVar29 = 0xffffffffffffffff;
      puVar29[1] = 0xffffffffffffffff;
      *(undefined2 *)(puVar29 + 2) = 0xffff;
    }
LAB_00a7bc34:
    iVar30 = iVar30 + 1;
  } while (iVar30 != 10);
  iVar30 = 0;
  do {
    puVar29 = (ulong *)(param_1 + 0x170 + (long)iVar30 * 0x18);
    switch(*(undefined1 *)((long)puVar29 + 0x12)) {
    case 0:
      goto switchD_00a7c4d4_caseD_0;
    case 3:
      uVar18 = FUN_00a7ad70(puVar29);
      if ((int)uVar18 == 1) {
        DAT_04da5798 = (short)puVar29[2];
        DAT_04da5788 = *puVar29;
        DAT_04da579a = 5;
        local_88._6_2_ = (ushort)(local_88 >> 0x30) & 0xff00;
        DAT_04da5790._0_7_ = (undefined7)puVar29[1];
        DAT_04da5790._7_1_ = (undefined1)(puVar29[1] >> 0x38);
        local_88 = CONCAT26(local_88._6_2_,0xff0200000000);
joined_r0x00a7c5a8:
        if (-1 < DAT_04da5760) {
          uVar18 = FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_04da5760,&local_88,
                                &DAT_04da5788,0x18,0);
        }
      }
      break;
    case 4:
switchD_00a7c4d4_caseD_4:
      uVar18 = FUN_00a7ad70(puVar29);
      break;
    case 6:
      lVar20 = *DAT_0537d558;
      bVar24 = *(byte *)(lVar20 + 0x473);
      if ((long)(char)bVar24 != 0xffffffffffffffff) {
        pbVar25 = (byte *)(lVar20 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x80;
        if (7 < bVar24) {
          pbVar25 = (byte *)(lVar20 + 0x48);
        }
        if (((*pbVar25 >> 3 & 1) != 0) && (*(byte *)(lVar20 + 0x472) != bVar24))
        goto switchD_00a7c4d4_caseD_4;
      }
      FUN_00a7b0b4(uVar18,puVar29);
      uVar18 = FUN_00a7ad70(puVar29);
      if ((int)uVar18 - 1U < 2) {
        uVar7 = *(undefined4 *)((long)puVar29 + 0xf);
        DAT_04da5788 = *puVar29;
        local_88._6_2_ = (ushort)(local_88 >> 0x30) & 0xff00;
        local_88 = CONCAT26(local_88._6_2_,0xff0000000000);
        DAT_04da5790._0_7_ = (undefined7)puVar29[1];
        DAT_04da5790._7_1_ = (undefined1)uVar7;
        DAT_04da5798 = (short)((uint)uVar7 >> 8);
        DAT_04da579a = (undefined1)((uint)uVar7 >> 0x18);
        goto joined_r0x00a7c5a8;
      }
    }
    *(undefined1 *)((long)puVar29 + 0x12) = 0;
    *(undefined2 *)(puVar29 + 2) = 0xffff;
    *puVar29 = 0xffffffffffffffff;
    puVar29[1] = 0xffffffffffffffff;
switchD_00a7c4d4_caseD_0:
    iVar30 = iVar30 + 1;
    if (iVar30 == 10) {
      return;
    }
  } while( true );
}


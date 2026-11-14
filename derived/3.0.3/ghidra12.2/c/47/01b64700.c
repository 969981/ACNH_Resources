
byte FUN_01b64700(undefined8 param_1,undefined4 *param_2,undefined2 param_3,uint *param_4,
                 PosixTime *param_5,uint param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  PosixTime PVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined2 *puVar15;
  short *psVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ushort uVar20;
  undefined2 uVar21;
  uint *puVar22;
  long lVar23;
  uint *puVar24;
  char cVar25;
  uint uVar26;
  ulong uVar27;
  int *piVar28;
  undefined2 local_b8;
  char acStack_b6 [6];
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined1 local_a8;
  byte local_a7;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  PosixTime local_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined1 local_80;
  byte bStack_7f;
  undefined6 uStack_7e;
  undefined2 local_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  undefined8 local_70;
  char local_64 [4];
  
  if ((param_4 == (uint *)0x0) ||
     (uVar13 = FUN_01b68870(param_4,param_5,param_6 & 1), puVar2 = PTR_DAT_04bb4f78,
     (uVar13 & 1) == 0)) goto LAB_01b64c74;
  puVar24 = (uint *)(ulong)*param_4;
  local_a0 = 0;
  uStack_9c = 0;
  puVar22 = (uint *)((long)param_4 - (long)puVar24);
  if (puVar24 == (uint *)0x0 || param_4 == puVar24) {
    local_98 = 0;
LAB_01b64774:
    local_94 = 0;
  }
  else {
    if (((*puVar22 == 0) || (uVar12 = puVar22[1], uVar12 == 0)) || ((ulong)(ushort)puVar22[2] == 0))
    {
LAB_01b64aac:
      uVar26 = *puVar22;
      uStack_9c = 0;
      if (uVar26 != 0) {
LAB_01b64ab4:
        uVar12 = puVar22[1];
        if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar22 + lVar14 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar14 != 0) {
            uVar4 = 0;
            if ((ulong)uVar12 != 0) {
              uVar4 = (uint)((ulong)((long)param_4 - lVar14) / (ulong)uVar12);
            }
            if (uVar26 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc0620) &&
               (uStack_9c = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar4 * 2),
               uStack_9c < 0x12)) goto LAB_01b64b20;
          }
        }
        uStack_9c = 0;
      }
    }
    else {
      lVar14 = 0xc;
      if (*(char *)((long)puVar22 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar22 + lVar14 + (ulong)(ushort)puVar22[2] * 8;
      if (lVar14 == 0) goto LAB_01b64aac;
      uVar26 = 0;
      if ((ulong)uVar12 != 0) {
        uVar26 = (uint)((ulong)((long)param_4 - lVar14) / (ulong)uVar12);
      }
      if (*puVar22 <= uVar26) {
        uVar26 = 0xffffffff;
      }
      if (uVar26 < *(uint *)PTR_DAT_04bc0618) {
        uVar12 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar26 * 2);
        if (0x11 < uVar12) goto LAB_01b64aac;
      }
      else {
        uVar12 = 0;
      }
      uVar26 = *puVar22;
      local_a0 = uVar12;
      if (uVar26 != 0) goto LAB_01b64ab4;
      uStack_9c = 0;
    }
LAB_01b64b20:
    local_98 = 0;
    if (*puVar22 != 0) {
      uVar12 = puVar22[1];
      if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar22 + lVar14 + (ulong)(ushort)puVar22[2] * 8;
        if (lVar14 != 0) {
          uVar26 = 0;
          if ((ulong)uVar12 != 0) {
            uVar26 = (uint)((ulong)((long)param_4 - lVar14) / (ulong)uVar12);
          }
          if (*puVar22 <= uVar26) {
            uVar26 = 0xffffffff;
          }
          if ((uVar26 < *(uint *)PTR_DAT_04bc0628) &&
             (local_98 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar26 * 2),
             local_98 < 0x12)) goto LAB_01b64b98;
        }
      }
      local_98 = 0;
    }
LAB_01b64b98:
    local_94 = 0;
    if (*puVar22 != 0) {
      uVar12 = puVar22[1];
      if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar22 + lVar14 + (ulong)(ushort)puVar22[2] * 8;
        if (lVar14 != 0) {
          uVar26 = 0;
          if ((ulong)uVar12 != 0) {
            uVar26 = (uint)((ulong)((long)param_4 - lVar14) / (ulong)uVar12);
          }
          if (*puVar22 <= uVar26) {
            uVar26 = 0xffffffff;
          }
          if ((uVar26 < *(uint *)PTR_DAT_04bc0630) &&
             (local_94 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar26 * 2),
             local_94 < 0x12)) goto LAB_01b64778;
        }
      }
      goto LAB_01b64774;
    }
  }
LAB_01b64778:
  bVar11 = 0;
  if ((((0xd < local_a0) || ((1 << (ulong)(local_a0 & 0x1f) & 0x2101U) == 0)) ||
      (bVar11 = 0, 0xd < uStack_9c)) ||
     ((((1 << (ulong)(uStack_9c & 0x1f) & 0x2101U) == 0 || (bVar11 = 0, 0xd < local_98)) ||
      (((1 << (ulong)(local_98 & 0x1f) & 0x2101U) == 0 ||
       ((bVar11 = 0, 0xd < local_94 || ((1 << (ulong)(local_94 & 0x1f) & 0x2101U) == 0))))))))
  goto LAB_01b64c78;
  if ((local_a0 == 0xd) || (((uStack_9c == 0xd || (local_98 == 0xd)) || (local_94 == 0xd)))) {
    local_90 = (PosixTime)0x8;
    uStack_8f = 0;
    uStack_8e = 0;
    if (((local_a0 == 8) || (uStack_9c == 8)) || ((local_98 == 8 || (local_94 == 8)))) {
      if ((((puVar24 == (uint *)0x0 || param_4 == puVar24) || (*puVar22 == 0)) ||
          (uVar12 = puVar22[1], uVar12 == 0)) || ((ulong)(ushort)puVar22[2] == 0)) {
LAB_01b648f4:
        uVar20 = 0;
      }
      else {
        lVar14 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar22 + lVar14 + (ulong)(ushort)puVar22[2] * 8;
        uVar20 = 0;
        if (lVar14 != 0) {
          uVar26 = 0;
          if ((ulong)uVar12 != 0) {
            uVar26 = (uint)((ulong)((long)param_4 - lVar14) / (ulong)uVar12);
          }
          if (*puVar22 <= uVar26) {
            uVar26 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0638 <= uVar26) ||
             (uVar20 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar26 * 2),
             4 < uVar20)) goto LAB_01b648f4;
        }
      }
      bVar11 = uVar20 != 3;
      if ((uVar20 == 3) || ((param_6 & 1) != 0)) goto LAB_01b64c78;
      if (param_5 == (PosixTime *)0x0) {
        if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
           (lVar14 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                 0x30))(), lVar14 != 0)) {
          uStack_76 = 0;
          uStack_7e = 0;
          local_78 = 0;
          uStack_86 = 0;
          local_80 = 0;
          bStack_7f = 0;
          puVar15 = (undefined2 *)FUN_01b5a5e0(param_4,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650)
          ;
          if (puVar15 == (undefined2 *)0x0) {
            uVar21 = 0;
          }
          else {
            uVar21 = *puVar15;
          }
          local_90 = SUB21(uVar21,0);
          uStack_8f = (undefined1)((ushort)uVar21 >> 8);
          uStack_8e = 0;
          uStack_8c = 0;
          local_88 = 0;
          uVar7 = *param_2;
          local_b8 = 0xd;
          acStack_b6[0] = '\0';
          acStack_b6[1] = '\0';
          uVar12 = FUN_01b5c07c(&local_a0,&local_b8);
          if (uVar12 < 0xe) {
            *(short *)(local_64 + (ulong)uVar12 * 2 + -0x2a) = (short)uVar7;
          }
          puVar1 = &LAB_00284e00 + lVar14;
          local_b8 = 8;
          acStack_b6[0] = '\0';
          acStack_b6[1] = '\0';
          uVar12 = FUN_01b5c07c(&local_a0,&local_b8);
          if (uVar12 < 0xe) {
            *(undefined2 *)(local_64 + (ulong)uVar12 * 2 + -0x2a) = param_3;
          }
          uStack_b0 = SUB82(puVar1,0);
          uStack_ae = (undefined6)((ulong)puVar1 >> 0x10);
          local_a8 = 0;
          if (*(long *)(&LAB_00284e28 + lVar14) == 0) {
            local_a7 = 0;
          }
          else {
            puVar19 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar14) + 0x10);
            local_a7 = 0;
            if (puVar19 != (undefined8 *)0x0) {
              local_a7 = (**(code **)*puVar19)();
            }
          }
          local_a7 = local_a7 & 1;
          local_b8 = 0x8ae0;
          acStack_b6[0] = -0x5d;
          acStack_b6[1] = '\x04';
          acStack_b6[2] = '\0';
          acStack_b6[3] = '\0';
          acStack_b6[4] = '\0';
          acStack_b6[5] = '\0';
          FUN_02640280(puVar1,0x28370);
          lVar23 = *(long *)(&LAB_00284e08 + lVar14);
          lVar14 = *(long *)(&LAB_00284e10 + lVar14);
          local_70 = FUN_00a82400(*(undefined8 *)PTR_DAT_04bb32e8);
          uVar18 = FUN_0280f530(lVar14 + lVar23,&local_70,local_64);
          if (local_64[0] != '\0') {
            FUN_0266f010(uVar18,&local_70);
          }
          local_70 = uVar18;
          psVar16 = (short *)FUN_01b5a5e0(param_4,6,0x175969e1,0);
          if ((psVar16 == (short *)0x0) || (*psVar16 == 0)) {
            bVar11 = 0;
          }
          else {
            bVar11 = FUN_01b695b0(&local_70,&local_90,param_4,&local_a0);
          }
          FUN_02640184(&local_b8);
          goto LAB_01b64c78;
        }
      }
      else {
        local_90 = *param_5;
        if (7 < (byte)local_90) {
          local_90 = (PosixTime)0xff;
        }
        lVar14 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_90,1);
        puVar10 = PTR_DAT_04bc0648;
        puVar9 = PTR_DAT_04bc0640;
        if (lVar14 != 0) {
          lVar23 = lVar14 + 0x194b0;
          if (*(long *)(lVar14 + 0x194b8) == 0) {
            lVar23 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if (*param_4 == 0) {
LAB_01b64e14:
            local_b8 = 0;
          }
          else {
            cVar25 = *PTR_DAT_04bc0640;
            do {
              if (cVar25 == '\0') {
                cVar25 = '\x01';
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *puVar9 = 1;
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar12 = *(uint *)(puVar10 + 0x1c);
                if (-1 < (int)uVar12) {
                  if ((undefined2 *)((ulong)uVar12 + (long)param_4) == (undefined2 *)0x0)
                  goto LAB_01b64e14;
                  local_b8 = *(undefined2 *)((ulong)uVar12 + (long)param_4);
                  goto LAB_01b64e18;
                }
                if (uVar12 != 0xffffffff) goto LAB_01b64e14;
              }
              puVar22 = (uint *)(ulong)*param_4;
              local_b8 = 0;
              if ((*param_4 == 0) || (param_4 == puVar22)) goto LAB_01b64e18;
              lVar14 = 0xc;
              if (*(char *)((long)param_4 + (10 - (long)puVar22)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)param_4 + (lVar14 - (long)puVar22);
              if (lVar14 == 0) goto LAB_01b64e14;
              uVar13 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar22));
              *(undefined4 *)(puVar10 + 0x1c) = 0xfffffffe;
              local_b8 = 0;
              if (uVar13 == 0) goto LAB_01b64e18;
              piVar28 = (int *)(lVar14 + 4);
              while (piVar28[-1] != 0x54706054) {
                piVar28 = piVar28 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) {
                  local_b8 = 0;
                  goto LAB_01b64e18;
                }
              }
              iVar3 = 0;
              if (*piVar28 != -1) {
                iVar3 = *piVar28;
              }
              *(int *)(puVar10 + 0x1c) = iVar3;
            } while (*param_4 != 0);
            local_b8 = 0;
          }
LAB_01b64e18:
          lVar14 = 0;
          acStack_b6[0] = '\0';
          acStack_b6[1] = '\0';
          acStack_b6[2] = '\0';
          acStack_b6[3] = '\0';
          acStack_b6[4] = '\0';
          acStack_b6[5] = '\0';
          uStack_b0 = 0;
          uVar12 = local_a0;
          if (local_a0 == 8) {
            uVar12 = 1;
          }
          local_90 = SUB41(uVar12,0);
          uStack_8f = (undefined1)(uVar12 >> 8);
          uStack_8e = (undefined2)(uVar12 >> 0x10);
          if (uVar12 == 0xd) {
LAB_01b64ed4:
            *(short *)(local_64 + lVar14 * 2 + -0x52) = (short)*param_2;
          }
          else {
            uVar26 = uStack_9c;
            if (uStack_9c == 8) {
              uVar26 = 1;
            }
            if (uVar26 == 0xd) {
              lVar14 = 1;
              goto LAB_01b64ed4;
            }
            uVar26 = local_98;
            if (local_98 == 8) {
              uVar26 = 1;
            }
            if (uVar26 == 0xd) {
              lVar14 = 2;
              goto LAB_01b64ed4;
            }
            uVar26 = local_94;
            if (local_94 == 8) {
              uVar26 = 1;
            }
            if (uVar26 == 0xd) {
              lVar14 = 3;
              goto LAB_01b64ed4;
            }
          }
          lVar14 = 1;
          if (uVar12 == 1) {
            lVar14 = 0;
LAB_01b64f80:
            *(undefined2 *)(local_64 + lVar14 * 2 + -0x52) = param_3;
          }
          else {
            uVar12 = uStack_9c;
            if (uStack_9c == 8) {
              uVar12 = 1;
            }
            local_90 = SUB41(uVar12,0);
            uStack_8f = (undefined1)(uVar12 >> 8);
            uStack_8e = (undefined2)(uVar12 >> 0x10);
            if (uVar12 == 1) goto LAB_01b64f80;
            uVar12 = local_98;
            if (local_98 == 8) {
              uVar12 = 1;
            }
            local_90 = SUB41(uVar12,0);
            uStack_8f = (undefined1)(uVar12 >> 8);
            uStack_8e = (undefined2)(uVar12 >> 0x10);
            if (uVar12 == 1) {
              lVar14 = 2;
              goto LAB_01b64f80;
            }
            uVar12 = local_94;
            if (local_94 == 8) {
              uVar12 = 1;
            }
            local_90 = SUB41(uVar12,0);
            uStack_8f = (undefined1)(uVar12 >> 8);
            uStack_8e = (undefined2)(uVar12 >> 0x10);
            if (uVar12 == 1) {
              lVar14 = 3;
              goto LAB_01b64f80;
            }
          }
          local_70 = CONCAT44(local_70._4_4_,1);
          lVar14 = *(long *)(lVar23 + 0x2c638);
          if (lVar14 == 0) {
            uVar13 = 0;
          }
          else {
            if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
              uVar13 = 0;
            }
            else {
              uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
              lVar14 = *(long *)(lVar23 + 0x2c638);
              uVar13 = uVar13 & 0xffffffff;
              if (lVar14 == 0) goto LAB_01b64ff0;
            }
            plVar17 = *(long **)(lVar14 + 0x20);
            if (plVar17 != (long *)0x0) {
              lVar14 = *(long *)(lVar23 + 0x2c618);
              local_90 = SUB81(lVar14,0);
              uStack_8f = (undefined1)((ulong)lVar14 >> 8);
              uStack_8e = (undefined2)((ulong)lVar14 >> 0x10);
              uStack_8c = (undefined4)((ulong)lVar14 >> 0x20);
              local_88 = (undefined2)*(undefined8 *)(lVar23 + 0x2c620);
              uStack_86 = (undefined6)((ulong)*(undefined8 *)(lVar23 + 0x2c620) >> 0x10);
              local_80 = 0x80;
              bStack_7f = 0x25;
              uStack_7e = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17,&local_90);
            }
          }
LAB_01b64ff0:
          lVar5 = *(long *)(lVar23 + 0x2c618);
          lVar6 = *(long *)(lVar23 + 0x2c620);
          PVar8 = *param_5;
          lVar14 = *(long *)PTR_DAT_04bb32e8;
          lVar14 = *(long *)(lVar14 + 0x20) / 1000000000 + *(long *)(lVar14 + 8) +
                   (((*(long *)(lVar14 + 0x10) + (long)*(int *)(lVar14 + 0x38)) -
                    *(long *)(lVar14 + 8)) * 1000000000) / 1000000000;
          local_90 = SUB81(lVar14,0);
          uStack_8f = (undefined1)((ulong)lVar14 >> 8);
          uStack_8e = (undefined2)((ulong)lVar14 >> 0x10);
          uStack_8c = (undefined4)((ulong)lVar14 >> 0x20);
          uVar18 = nn::time::ToCalendarTimeInUtc(&local_90);
          local_90 = SUB81(uVar18,0);
          uStack_8f = (undefined1)((ulong)uVar18 >> 8);
          uStack_8e = (undefined2)((ulong)uVar18 >> 0x10);
          uStack_8c = (undefined4)((ulong)uVar18 >> 0x20);
          uVar18 = FUN_02811460(lVar6 + lVar5,&local_90,&local_70);
          if (((char)local_70 != '\0') && ((byte)PVar8 < 8)) {
            local_90 = PVar8;
            FUN_02583354(*(undefined8 *)puVar2,&local_90,1);
            FUN_01b675a0();
          }
          local_70 = uVar18;
          if (*param_4 != 0) {
            cVar25 = *puVar9;
            do {
              if (cVar25 == '\0') {
                cVar25 = '\x01';
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *puVar9 = 1;
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar12 = *(uint *)(puVar10 + 0x18);
                if (-1 < (int)uVar12) {
                  if (((short *)((ulong)uVar12 + (long)param_4) != (short *)0x0) &&
                     (*(short *)((ulong)uVar12 + (long)param_4) != 0)) {
                    local_78 = 0;
                    uStack_76 = 0;
                    uStack_72 = 0;
                    lVar14 = FUN_026456c0(param_5);
                    if (lVar14 != 0) {
                      puVar2 = PTR_DAT_04bc35d0 + 0x10;
                      local_90 = SUB81(puVar2,0);
                      uStack_8f = (undefined1)((ulong)puVar2 >> 8);
                      uStack_8e = (undefined2)((ulong)puVar2 >> 0x10);
                      uStack_8c = (undefined4)((ulong)puVar2 >> 0x20);
                      local_88 = (undefined2)lVar14;
                      uStack_86 = (undefined6)((ulong)lVar14 >> 0x10);
                      local_80 = 1;
                      bStack_7f = 0;
                      if (*(long **)(lVar14 + 0x28) == (long *)0x0) {
                        bVar11 = 0;
                      }
                      else {
                        puVar19 = (undefined8 *)**(long **)(lVar14 + 0x28);
                        bVar11 = 0;
                        if (puVar19 != (undefined8 *)0x0) {
                          bVar11 = (**(code **)*puVar19)();
                        }
                      }
                      bStack_7f = bVar11 & 1;
                      local_90 = (PosixTime)0xc0;
                      uStack_8f = 0x8a;
                      uStack_8e = 0x4a3;
                      uStack_8c = 0;
                      local_78 = SUB82(&local_90,0);
                      uStack_76 = (undefined4)((ulong)&local_90 >> 0x10);
                      uStack_72 = (undefined2)((ulong)&local_90 >> 0x30);
                    }
                    bVar11 = FUN_01b6e5d0(&local_70,&local_b8,param_4,&local_a0,&local_90);
                    if (CONCAT26(uStack_72,CONCAT42(uStack_76,local_78)) != 0) {
                      FUN_02640184();
                    }
                    goto LAB_01b651c4;
                  }
                  break;
                }
                if (uVar12 != 0xffffffff) break;
              }
              puVar22 = (uint *)(ulong)*param_4;
              bVar11 = 0;
              if ((*param_4 == 0) || (param_4 == puVar22)) goto LAB_01b651c4;
              lVar14 = 0xc;
              if (*(char *)((long)param_4 + (10 - (long)puVar22)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)param_4 + (lVar14 - (long)puVar22);
              if (lVar14 == 0) break;
              uVar27 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar22));
              *(undefined4 *)(puVar10 + 0x18) = 0xfffffffe;
              if (uVar27 == 0) break;
              piVar28 = (int *)(lVar14 + 4);
              while (piVar28[-1] != 0x175969e1) {
                piVar28 = piVar28 + 2;
                uVar27 = uVar27 - 1;
                if (uVar27 == 0) goto LAB_01b651c0;
              }
              iVar3 = 0;
              if (*piVar28 != -1) {
                iVar3 = *piVar28;
              }
              *(int *)(puVar10 + 0x18) = iVar3;
              if (*param_4 == 0) break;
            } while( true );
          }
LAB_01b651c0:
          bVar11 = 0;
LAB_01b651c4:
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar23 + 0x2c638) != 0)) &&
             (puVar19 = *(undefined8 **)(*(long *)(lVar23 + 0x2c638) + 0x18),
             puVar19 != (undefined8 *)0x0)) {
            (**(code **)*puVar19)();
          }
          goto LAB_01b64c78;
        }
      }
    }
  }
LAB_01b64c74:
  bVar11 = 0;
LAB_01b64c78:
  return bVar11 & 1;
}


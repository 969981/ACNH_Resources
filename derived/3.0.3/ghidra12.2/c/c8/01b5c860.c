
byte FUN_01b5c860(undefined8 param_1,uint *param_2,PosixTime *param_3,long param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  PosixTime PVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  undefined2 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ushort uVar16;
  undefined2 uVar17;
  uint *puVar18;
  long lVar19;
  uint *puVar20;
  uint uVar21;
  char cVar22;
  int *piVar23;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined1 local_88;
  byte local_87;
  PosixTime local_80;
  undefined1 uStack_7f;
  undefined6 uStack_7e;
  undefined2 local_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 local_6e;
  undefined2 uStack_68;
  undefined4 local_66;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  undefined8 local_38;
  
  if ((param_2 != (uint *)0x0) &&
     (uVar10 = FUN_01b68870(param_2,param_3,param_5 & 1), puVar6 = PTR_DAT_04bb4f78,
     (uVar10 & 1) != 0)) {
    puVar20 = (uint *)(ulong)*param_2;
    local_60 = 0;
    uStack_5c = 0;
    local_58 = 0;
    puVar18 = (uint *)((long)param_2 - (long)puVar20);
    if (puVar20 == (uint *)0x0 || param_2 == puVar20) {
LAB_01b5c8c0:
      uVar21 = 0;
    }
    else {
      if (((*puVar18 != 0) && (uVar21 = puVar18[1], uVar21 != 0)) &&
         ((ulong)(ushort)puVar18[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar11 != 0) {
          uVar2 = 0;
          if ((ulong)uVar21 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar11) / (ulong)uVar21);
          }
          if (*puVar18 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < *(uint *)PTR_DAT_04bc0618) {
            uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar2 * 2);
            uVar21 = (uint)uVar16;
            if (0x11 < uVar16) goto LAB_01b5cb48;
          }
          else {
            uVar21 = 0;
          }
          local_60 = uVar21;
        }
      }
LAB_01b5cb48:
      uStack_5c = 0;
      if (*puVar18 != 0) {
        uVar21 = puVar18[1];
        if ((uVar21 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar21 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar11) / (ulong)uVar21);
            }
            if (*puVar18 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0620) &&
               (uStack_5c = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar2 * 2),
               uStack_5c < 0x12)) goto LAB_01b5cbbc;
          }
        }
        uStack_5c = 0;
      }
LAB_01b5cbbc:
      local_58 = 0;
      if (*puVar18 != 0) {
        uVar21 = puVar18[1];
        if ((uVar21 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar21 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar11) / (ulong)uVar21);
            }
            if (*puVar18 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0628) &&
               (local_58 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar2 * 2)
               , local_58 < 0x12)) goto LAB_01b5cc34;
          }
        }
        local_58 = 0;
      }
LAB_01b5cc34:
      uVar21 = 0;
      if (*puVar18 != 0) {
        uVar21 = puVar18[1];
        if ((uVar21 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar21 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar11) / (ulong)uVar21);
            }
            if (*puVar18 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0630) &&
               (uVar21 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar2 * 2),
               uVar21 < 0x12)) goto LAB_01b5c8c4;
          }
        }
        goto LAB_01b5c8c0;
      }
    }
LAB_01b5c8c4:
    _local_58 = CONCAT44(uVar21,local_58);
    if (((local_60 == 0) && (uStack_5c == 0)) && (local_58 == 0)) {
      bVar9 = 0;
      if ((param_4 != 0) || (uVar21 != 0)) goto LAB_01b5c8e4;
      if (((puVar20 == (uint *)0x0 || param_2 == puVar20) ||
          ((*puVar18 == 0 || (uVar21 = puVar18[1], uVar21 == 0)))) ||
         ((ulong)(ushort)puVar18[2] == 0)) {
LAB_01b5c9fc:
        uVar16 = 0;
      }
      else {
        lVar11 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
        uVar16 = 0;
        if (lVar11 != 0) {
          uVar2 = 0;
          if ((ulong)uVar21 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar11) / (ulong)uVar21);
          }
          if (*puVar18 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0638 <= uVar2) ||
             (uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar2 * 2),
             4 < uVar16)) goto LAB_01b5c9fc;
        }
      }
      bVar9 = uVar16 != 3;
      if ((uVar16 == 3) || ((param_5 & 1) != 0)) goto LAB_01b5c8e4;
      if (param_3 == (PosixTime *)0x0) {
        if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
           (lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                 0x30))(), lVar11 != 0)) {
          local_66 = 0;
          local_6e = 0;
          uStack_68 = 0;
          uStack_76 = 0;
          uStack_70 = 0;
          puVar12 = (undefined2 *)FUN_01b5a5e0(param_2,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650)
          ;
          if (puVar12 == (undefined2 *)0x0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *puVar12;
          }
          local_80 = SUB21(uVar17,0);
          uStack_7f = (undefined1)((ushort)uVar17 >> 8);
          uStack_7e = 0;
          local_78 = 0;
          uStack_90 = SUB82(&LAB_00284e00 + lVar11,0);
          uStack_8e = (undefined6)((ulong)(&LAB_00284e00 + lVar11) >> 0x10);
          local_88 = 0;
          if (*(long *)(&LAB_00284e28 + lVar11) == 0) {
            local_87 = 0;
          }
          else {
            puVar15 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar11) + 0x10);
            local_87 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              local_87 = (**(code **)*puVar15)();
            }
          }
          local_87 = local_87 & 1;
          local_98 = 0x8ae0;
          uStack_96 = 0x4a3;
          FUN_01b69394(&local_98);
          local_38 = FUN_01b692d8();
          bVar9 = FUN_01b69400(&local_38,&local_80,param_2,&local_60);
          FUN_02640184(&local_98);
          goto LAB_01b5c8e4;
        }
      }
      else {
        local_80 = *param_3;
        if (7 < (byte)local_80) {
          local_80 = (PosixTime)0xff;
        }
        lVar11 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
        puVar8 = PTR_DAT_04bc0648;
        puVar7 = PTR_DAT_04bc0640;
        if (lVar11 != 0) {
          lVar19 = lVar11 + 0x194b0;
          if (*(long *)(lVar11 + 0x194b8) == 0) {
            lVar19 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if (*param_2 == 0) {
LAB_01b5cdb0:
            local_98 = 0;
          }
          else {
            cVar22 = *PTR_DAT_04bc0640;
            do {
              if (cVar22 == '\0') {
                cVar22 = '\x01';
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *puVar7 = 1;
                *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar21 = *(uint *)(puVar8 + 0x1c);
                if (-1 < (int)uVar21) {
                  if ((undefined2 *)((ulong)uVar21 + (long)param_2) == (undefined2 *)0x0)
                  goto LAB_01b5cdb0;
                  local_98 = *(undefined2 *)((ulong)uVar21 + (long)param_2);
                  goto LAB_01b5cdb4;
                }
                if (uVar21 != 0xffffffff) goto LAB_01b5cdb0;
              }
              puVar18 = (uint *)(ulong)*param_2;
              local_98 = 0;
              if ((*param_2 == 0) || (param_2 == puVar18)) goto LAB_01b5cdb4;
              lVar11 = 0xc;
              if (*(char *)((long)param_2 + (10 - (long)puVar18)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)param_2 + (lVar11 - (long)puVar18);
              if (lVar11 == 0) goto LAB_01b5cdb0;
              uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar18));
              *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
              local_98 = 0;
              if (uVar10 == 0) goto LAB_01b5cdb4;
              piVar23 = (int *)(lVar11 + 4);
              while (piVar23[-1] != 0x54706054) {
                piVar23 = piVar23 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) {
                  local_98 = 0;
                  goto LAB_01b5cdb4;
                }
              }
              iVar1 = 0;
              if (*piVar23 != -1) {
                iVar1 = *piVar23;
              }
              *(int *)(puVar8 + 0x1c) = iVar1;
            } while (*param_2 != 0);
            local_98 = 0;
          }
LAB_01b5cdb4:
          lVar11 = *(long *)(lVar19 + 0x2c638);
          uStack_96 = 0;
          uStack_90 = 0;
          if (lVar11 == 0) {
            uVar10 = 0;
          }
          else {
            if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
              lVar11 = *(long *)(lVar19 + 0x2c638);
              uVar10 = uVar10 & 0xffffffff;
              if (lVar11 == 0) goto LAB_01b5ce20;
            }
            plVar13 = *(long **)(lVar11 + 0x20);
            if (plVar13 != (long *)0x0) {
              lVar11 = *(long *)(lVar19 + 0x2c618);
              local_80 = SUB81(lVar11,0);
              uStack_7f = (undefined1)((ulong)lVar11 >> 8);
              uStack_7e = (undefined6)((ulong)lVar11 >> 0x10);
              local_78 = (undefined2)*(undefined8 *)(lVar19 + 0x2c620);
              uStack_76 = (undefined6)((ulong)*(undefined8 *)(lVar19 + 0x2c620) >> 0x10);
              uStack_70 = 0x2580;
              local_6e = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
            }
          }
LAB_01b5ce20:
          lVar3 = *(long *)(lVar19 + 0x2c618);
          lVar4 = *(long *)(lVar19 + 0x2c620);
          PVar5 = *param_3;
          lVar11 = *(long *)PTR_DAT_04bb32e8;
          lVar11 = *(long *)(lVar11 + 0x20) / 1000000000 + *(long *)(lVar11 + 8) +
                   (((*(long *)(lVar11 + 0x10) + (long)*(int *)(lVar11 + 0x38)) -
                    *(long *)(lVar11 + 8)) * 1000000000) / 1000000000;
          local_80 = SUB81(lVar11,0);
          uStack_7f = (undefined1)((ulong)lVar11 >> 8);
          uStack_7e = (undefined6)((ulong)lVar11 >> 0x10);
          uVar14 = nn::time::ToCalendarTimeInUtc(&local_80);
          local_80 = SUB81(uVar14,0);
          uStack_7f = (undefined1)((ulong)uVar14 >> 8);
          uStack_7e = (undefined6)((ulong)uVar14 >> 0x10);
          uVar14 = FUN_02811460(lVar4 + lVar3,&local_80,&local_38);
          if (((char)local_38 != '\0') && ((byte)PVar5 < 8)) {
            local_80 = PVar5;
            FUN_02583354(*(undefined8 *)puVar6,&local_80,1);
            FUN_01b675a0();
          }
          local_80 = SUB81(uVar14,0);
          uStack_7f = (undefined1)((ulong)uVar14 >> 8);
          uStack_7e = (undefined6)((ulong)uVar14 >> 0x10);
          bVar9 = FUN_01b68c50(&local_80,&local_98,param_2,&local_60,param_3);
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar19 + 0x2c638) != 0)) &&
             (puVar15 = *(undefined8 **)(*(long *)(lVar19 + 0x2c638) + 0x18),
             puVar15 != (undefined8 *)0x0)) {
            (**(code **)*puVar15)();
          }
          goto LAB_01b5c8e4;
        }
      }
    }
  }
  bVar9 = 0;
LAB_01b5c8e4:
  return bVar9 & 1;
}


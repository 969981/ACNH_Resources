
byte FUN_01b652e0(undefined8 param_1,uint *param_2,byte *param_3,uint param_4,undefined2 param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ushort uVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  char cVar16;
  undefined2 local_a8;
  byte abStack_a6 [6];
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined1 local_98;
  byte local_97;
  byte local_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined1 local_80;
  byte local_7f;
  undefined8 local_7e;
  undefined4 local_76;
  undefined8 local_70;
  byte local_64 [4];
  uint **local_60;
  undefined2 *puStack_58;
  uint *local_50;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  undefined2 local_34 [2];
  uint *local_18;
  
  bVar5 = 0;
  if (param_2 == (uint *)0x0) goto LAB_01b65900;
  local_34[0] = param_5;
  local_18 = param_2;
  uVar6 = FUN_01b68870(param_2,param_3,param_4 & 1);
  if ((uVar6 & 1) != 0) {
    uVar15 = *param_2;
    local_3c = 0;
    local_48 = 0;
    uStack_44 = 0;
    local_40 = 0;
    if ((uVar15 != 0) && (param_2 != (uint *)(ulong)uVar15)) {
      puVar13 = (uint *)((long)param_2 - (long)(ulong)uVar15);
      if ((*puVar13 != 0) &&
         ((uVar15 = puVar13[1], uVar15 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar13 + lVar7 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar7 != 0) {
          uVar2 = 0;
          if ((ulong)uVar15 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar7) / (ulong)uVar15);
          }
          if (*puVar13 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < *(uint *)PTR_DAT_04bc0618) {
            uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar2 * 2);
            uVar15 = (uint)uVar12;
            if (0x11 < uVar12) goto LAB_01b653b8;
          }
          else {
            uVar15 = 0;
          }
          local_48 = uVar15;
        }
      }
LAB_01b653b8:
      uStack_44 = 0;
      if (*puVar13 != 0) {
        uVar15 = puVar13[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar13 + lVar7 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar7 != 0) {
            uVar2 = 0;
            if ((ulong)uVar15 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar7) / (ulong)uVar15);
            }
            if (*puVar13 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0620) &&
               (uStack_44 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar2 * 2),
               uStack_44 < 0x12)) goto LAB_01b6542c;
          }
        }
        uStack_44 = 0;
      }
LAB_01b6542c:
      local_40 = 0;
      if (*puVar13 != 0) {
        uVar15 = puVar13[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar13 + lVar7 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar7 != 0) {
            uVar2 = 0;
            if ((ulong)uVar15 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar7) / (ulong)uVar15);
            }
            if (*puVar13 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0628) &&
               (local_40 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar2 * 2)
               , local_40 < 0x12)) goto LAB_01b654a4;
          }
        }
        local_40 = 0;
      }
LAB_01b654a4:
      if (((*puVar13 == 0) || (uVar15 = puVar13[1], uVar15 == 0)) ||
         ((ulong)(ushort)puVar13[2] == 0)) {
LAB_01b65518:
        local_3c = 0;
      }
      else {
        lVar7 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar13 + lVar7 + (ulong)(ushort)puVar13[2] * 8;
        local_3c = 0;
        if (lVar7 != 0) {
          uVar2 = 0;
          if ((ulong)uVar15 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar7) / (ulong)uVar15);
          }
          if (*puVar13 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0630 <= uVar2) ||
             (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar2 * 2),
             local_3c = (uint)uVar12, 0x11 < uVar12)) goto LAB_01b65518;
        }
      }
    }
    uVar6 = FUN_01b5bbd0(&local_48,1,1);
    if ((uVar6 & 1) != 0) {
      uVar15 = *param_2;
      uVar12 = 0;
      if ((uVar15 != 0) && (param_2 != (uint *)(ulong)uVar15)) {
        puVar13 = (uint *)((long)param_2 - (long)(ulong)uVar15);
        uVar12 = 0;
        if (*puVar13 != 0) {
          uVar15 = puVar13[1];
          if ((uVar15 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar13 + lVar7 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar7 != 0) {
              uVar2 = 0;
              if ((ulong)uVar15 != 0) {
                uVar2 = (uint)((ulong)((long)param_2 - lVar7) / (ulong)uVar15);
              }
              if (*puVar13 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc0638) &&
                 (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar2 * 2),
                 uVar12 < 5)) goto LAB_01b655c0;
            }
          }
          uVar12 = 0;
        }
      }
LAB_01b655c0:
      bVar5 = uVar12 != 3;
      if ((uVar12 == 3) || ((param_4 & 1) != 0)) goto LAB_01b65900;
      local_60 = &local_18;
      puStack_58 = local_34;
      local_50 = &local_48;
      if (param_3 == (byte *)0x0) {
        if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
           (lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30
                                ))(), lVar7 != 0)) {
          uStack_8e = 0;
          uStack_8c = 0;
          local_88 = 0;
          local_90 = 0xff;
          uStack_8f = 0xff;
          uStack_86 = 0;
          local_80 = 0;
          local_7f = 0;
          local_7e = 0;
          local_76 = 0;
          uVar6 = FUN_01b70810(&local_60,&local_90);
          bVar5 = 0;
          if ((uVar6 & 1) == 0) goto LAB_01b65900;
          local_98 = 0;
          uStack_a0 = SUB82(&LAB_00284e00 + lVar7,0);
          uStack_9e = (undefined6)((ulong)(&LAB_00284e00 + lVar7) >> 0x10);
          if (*(long *)(&LAB_00284e28 + lVar7) == 0) {
            local_97 = 0;
          }
          else {
            puVar9 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar7) + 0x10);
            local_97 = 0;
            if (puVar9 != (undefined8 *)0x0) {
              local_97 = (**(code **)*puVar9)();
            }
          }
          local_97 = local_97 & 1;
          local_a8 = 0x8ae0;
          abStack_a6[0] = 0xa3;
          abStack_a6[1] = 4;
          abStack_a6[2] = 0;
          abStack_a6[3] = 0;
          abStack_a6[4] = 0;
          abStack_a6[5] = 0;
          FUN_01b69394(&local_a8);
          local_70 = FUN_01b692d8();
          bVar5 = FUN_01b69400(&local_70,&local_90,local_18,&local_48);
          pbVar11 = (byte *)&local_a8;
          goto LAB_01b65978;
        }
      }
      else {
        local_90 = *param_3;
        if (7 < local_90) {
          local_90 = 0xff;
        }
        lVar7 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_90,1);
        puVar4 = PTR_DAT_04bc0648;
        puVar3 = PTR_DAT_04bc0640;
        if (lVar7 != 0) {
          lVar14 = lVar7 + 0x194b0;
          if (*(long *)(lVar7 + 0x194b8) == 0) {
            lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if (*local_18 == 0) {
LAB_01b657f8:
            local_a8 = 0;
          }
          else {
            cVar16 = *PTR_DAT_04bc0640;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *puVar3 = 1;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar15 = *(uint *)(puVar4 + 0x1c);
                if (-1 < (int)uVar15) {
                  if ((undefined2 *)((ulong)uVar15 + (long)local_18) == (undefined2 *)0x0)
                  goto LAB_01b657f8;
                  local_a8 = *(undefined2 *)((ulong)uVar15 + (long)local_18);
                  goto LAB_01b657fc;
                }
                if (uVar15 != 0xffffffff) goto LAB_01b657f8;
              }
              puVar13 = (uint *)(ulong)*local_18;
              local_a8 = 0;
              if ((*local_18 == 0) || (local_18 == puVar13)) goto LAB_01b657fc;
              lVar7 = 0xc;
              if (*(char *)((long)local_18 + (10 - (long)puVar13)) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)local_18 + (lVar7 - (long)puVar13);
              if (lVar7 == 0) goto LAB_01b657f8;
              uVar6 = (ulong)*(ushort *)((long)local_18 + (8 - (long)puVar13));
              *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
              local_a8 = 0;
              if (uVar6 == 0) goto LAB_01b657fc;
              piVar8 = (int *)(lVar7 + 4);
              while (piVar8[-1] != 0x54706054) {
                piVar8 = piVar8 + 2;
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) {
                  local_a8 = 0;
                  goto LAB_01b657fc;
                }
              }
              iVar1 = 0;
              if (*piVar8 != -1) {
                iVar1 = *piVar8;
              }
              *(int *)(puVar4 + 0x1c) = iVar1;
            } while (*local_18 != 0);
            local_a8 = 0;
          }
LAB_01b657fc:
          abStack_a6[0] = 0;
          abStack_a6[1] = 0;
          abStack_a6[2] = 0;
          abStack_a6[3] = 0;
          abStack_a6[4] = 0;
          abStack_a6[5] = 0;
          uStack_a0 = 0;
          lVar7 = 0;
          uVar15 = local_48;
          if (local_48 == 8) {
            uVar15 = 1;
          }
          local_90 = (byte)uVar15;
          uStack_8f = (undefined1)(uVar15 >> 8);
          uStack_8e = (undefined2)(uVar15 >> 0x10);
          if (uVar15 != 1) {
            uVar15 = uStack_44;
            if (uStack_44 == 8) {
              uVar15 = 1;
            }
            local_90 = (byte)uVar15;
            uStack_8f = (undefined1)(uVar15 >> 8);
            uStack_8e = (undefined2)(uVar15 >> 0x10);
            if (uVar15 == 1) {
              lVar7 = 1;
            }
            else {
              uVar15 = local_40;
              if (local_40 == 8) {
                uVar15 = 1;
              }
              local_90 = (byte)uVar15;
              uStack_8f = (undefined1)(uVar15 >> 8);
              uStack_8e = (undefined2)(uVar15 >> 0x10);
              if (uVar15 == 1) {
                lVar7 = 2;
              }
              else {
                uVar15 = local_3c;
                if (local_3c == 8) {
                  uVar15 = 1;
                }
                local_90 = (byte)uVar15;
                uStack_8f = (undefined1)(uVar15 >> 8);
                uStack_8e = (undefined2)(uVar15 >> 0x10);
                if (uVar15 != 1) goto LAB_01b658fc;
                lVar7 = 3;
              }
            }
          }
          local_70 = CONCAT44(local_70._4_4_,1);
          local_80 = 0;
          local_88 = (undefined2)(lVar14 + 0x2c610);
          uStack_86 = (undefined6)((ulong)(lVar14 + 0x2c610) >> 0x10);
          *(undefined2 *)(local_64 + lVar7 * 2 + -0x42) = local_34[0];
          if (*(long *)(lVar14 + 0x2c638) == 0) {
            local_7f = 0;
          }
          else {
            puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x2c638) + 0x10);
            local_7f = 0;
            if (puVar9 != (undefined8 *)0x0) {
              local_7f = (**(code **)*puVar9)();
            }
          }
          local_7f = local_7f & 1;
          local_90 = 0xa0;
          uStack_8f = 0x8a;
          uStack_8e = 0x4a3;
          uStack_8c = 0;
          uVar10 = FUN_01b68bf4(&local_90);
          local_64[0] = *param_3;
          if (7 < local_64[0]) {
            local_64[0] = 0xff;
          }
          local_70 = FUN_01b68b14(uVar10,local_64);
          bVar5 = FUN_01b68c50(&local_70,&local_a8,local_18,&local_48,param_3);
          pbVar11 = &local_90;
LAB_01b65978:
          FUN_02640184(pbVar11);
          goto LAB_01b65900;
        }
      }
    }
  }
LAB_01b658fc:
  bVar5 = 0;
LAB_01b65900:
  return bVar5 & 1;
}


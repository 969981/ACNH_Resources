
byte FUN_01b65980(undefined8 param_1,uint *param_2,byte *param_3,uint param_4,undefined2 param_5,
                 undefined2 param_6)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ushort uVar13;
  uint *puVar14;
  char cVar15;
  int *piVar16;
  long lVar17;
  undefined2 local_b8;
  byte abStack_b6 [6];
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined1 local_a8;
  byte local_a7;
  byte local_a0;
  undefined1 uStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined1 local_90;
  byte local_8f;
  undefined8 local_8e;
  undefined4 local_86;
  undefined8 local_80;
  byte local_74 [4];
  uint **local_70;
  undefined2 *puStack_68;
  undefined2 *local_60;
  uint *puStack_58;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  undefined2 local_3c [2];
  uint *local_38;
  undefined2 local_18 [2];
  undefined4 local_14;
  
  bVar6 = 0;
  if (param_2 == (uint *)0x0) goto LAB_01b65fd4;
  local_3c[0] = param_6;
  local_38 = param_2;
  local_18[0] = param_5;
  uVar8 = FUN_01b68870(param_2,param_3,param_4 & 1);
  if ((uVar8 & 1) != 0) {
    uVar7 = *param_2;
    local_44 = 0;
    local_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
    if ((uVar7 != 0) && (param_2 != (uint *)(ulong)uVar7)) {
      puVar14 = (uint *)((long)param_2 - (long)(ulong)uVar7);
      if ((*puVar14 != 0) && ((uVar7 = puVar14[1], uVar7 != 0 && ((ulong)(ushort)puVar14[2] != 0))))
      {
        lVar9 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar9 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar9) / (ulong)uVar7);
          }
          if (*puVar14 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < *(uint *)PTR_DAT_04bc0618) {
            uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar2 * 2);
            uVar7 = (uint)uVar13;
            if (0x11 < uVar13) goto LAB_01b65a5c;
          }
          else {
            uVar7 = 0;
          }
          local_50 = uVar7;
        }
      }
LAB_01b65a5c:
      uStack_4c = 0;
      if (*puVar14 != 0) {
        uVar7 = puVar14[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar9) / (ulong)uVar7);
            }
            if (*puVar14 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0620) &&
               (uStack_4c = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar2 * 2),
               uStack_4c < 0x12)) goto LAB_01b65ad0;
          }
        }
        uStack_4c = 0;
      }
LAB_01b65ad0:
      local_48 = 0;
      if (*puVar14 != 0) {
        uVar7 = puVar14[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar9) / (ulong)uVar7);
            }
            if (*puVar14 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0628) &&
               (local_48 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar2 * 2)
               , local_48 < 0x12)) goto LAB_01b65b48;
          }
        }
        local_48 = 0;
      }
LAB_01b65b48:
      if (((*puVar14 == 0) || (uVar7 = puVar14[1], uVar7 == 0)) || ((ulong)(ushort)puVar14[2] == 0))
      {
LAB_01b65bbc:
        local_44 = 0;
      }
      else {
        lVar9 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
        local_44 = 0;
        if (lVar9 != 0) {
          uVar2 = 0;
          if ((ulong)uVar7 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar9) / (ulong)uVar7);
          }
          if (*puVar14 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0630 <= uVar2) ||
             (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar2 * 2),
             local_44 = (uint)uVar13, 0x11 < uVar13)) goto LAB_01b65bbc;
        }
      }
    }
    uVar8 = FUN_01b5bbd0(&local_50,2,1);
    if ((uVar8 & 1) != 0) {
      uVar7 = *param_2;
      uVar13 = 0;
      if ((uVar7 != 0) && (param_2 != (uint *)(ulong)uVar7)) {
        puVar14 = (uint *)((long)param_2 - (long)(ulong)uVar7);
        uVar13 = 0;
        if (*puVar14 != 0) {
          uVar7 = puVar14[1];
          if ((uVar7 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar9 != 0) {
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)param_2 - lVar9) / (ulong)uVar7);
              }
              if (*puVar14 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc0638) &&
                 (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar2 * 2),
                 uVar13 < 5)) goto LAB_01b65c64;
            }
          }
          uVar13 = 0;
        }
      }
LAB_01b65c64:
      bVar6 = uVar13 != 3;
      if ((uVar13 == 3) || ((param_4 & 1) != 0)) goto LAB_01b65fd4;
      local_70 = &local_38;
      puStack_68 = local_18;
      local_60 = local_3c;
      puStack_58 = &local_50;
      if (param_3 == (byte *)0x0) {
        if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
           (lVar9 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30
                                ))(), lVar9 != 0)) {
          uStack_9e = 0;
          uStack_9c = 0;
          local_98 = 0;
          local_a0 = 0xff;
          uStack_9f = 0xff;
          uStack_96 = 0;
          local_90 = 0;
          local_8f = 0;
          local_8e = 0;
          local_86 = 0;
          uVar8 = FUN_01b709f0(&local_70,&local_a0);
          bVar6 = 0;
          if ((uVar8 & 1) == 0) goto LAB_01b65fd4;
          local_a8 = 0;
          uStack_b0 = SUB82(&LAB_00284e00 + lVar9,0);
          uStack_ae = (undefined6)((ulong)(&LAB_00284e00 + lVar9) >> 0x10);
          if (*(long *)(&LAB_00284e28 + lVar9) == 0) {
            local_a7 = 0;
          }
          else {
            puVar10 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar9) + 0x10);
            local_a7 = 0;
            if (puVar10 != (undefined8 *)0x0) {
              local_a7 = (**(code **)*puVar10)();
            }
          }
          local_a7 = local_a7 & 1;
          local_b8 = 0x8ae0;
          abStack_b6[0] = 0xa3;
          abStack_b6[1] = 4;
          abStack_b6[2] = 0;
          abStack_b6[3] = 0;
          abStack_b6[4] = 0;
          abStack_b6[5] = 0;
          FUN_01b69394(&local_b8);
          local_80 = FUN_01b692d8();
          bVar6 = FUN_01b69400(&local_80,&local_a0,local_38,&local_50);
          pbVar12 = (byte *)&local_b8;
LAB_01b6604c:
          FUN_02640184(pbVar12);
          goto LAB_01b65fd4;
        }
      }
      else {
        local_a0 = *param_3;
        if (7 < local_a0) {
          local_a0 = 0xff;
        }
        lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_a0,1);
        uVar5 = local_3c[0];
        puVar4 = PTR_DAT_04bc0648;
        puVar3 = PTR_DAT_04bc0640;
        if (lVar9 != 0) {
          lVar17 = lVar9 + 0x194b0;
          if (*(long *)(lVar9 + 0x194b8) == 0) {
            lVar17 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if (*local_38 == 0) {
LAB_01b65e98:
            local_b8 = 0;
          }
          else {
            cVar15 = *PTR_DAT_04bc0640;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *puVar3 = 1;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar7 = *(uint *)(puVar4 + 0x1c);
                if (-1 < (int)uVar7) {
                  if ((undefined2 *)((ulong)uVar7 + (long)local_38) == (undefined2 *)0x0)
                  goto LAB_01b65e98;
                  local_b8 = *(undefined2 *)((ulong)uVar7 + (long)local_38);
                  goto LAB_01b65e9c;
                }
                if (uVar7 != 0xffffffff) goto LAB_01b65e98;
              }
              puVar14 = (uint *)(ulong)*local_38;
              local_b8 = 0;
              if ((*local_38 == 0) || (local_38 == puVar14)) goto LAB_01b65e9c;
              lVar9 = 0xc;
              if (*(char *)((long)local_38 + (10 - (long)puVar14)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)local_38 + (lVar9 - (long)puVar14);
              if (lVar9 == 0) goto LAB_01b65e98;
              uVar8 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar14));
              *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
              local_b8 = 0;
              if (uVar8 == 0) goto LAB_01b65e9c;
              piVar16 = (int *)(lVar9 + 4);
              while (piVar16[-1] != 0x54706054) {
                piVar16 = piVar16 + 2;
                uVar8 = uVar8 - 1;
                if (uVar8 == 0) {
                  local_b8 = 0;
                  goto LAB_01b65e9c;
                }
              }
              iVar1 = 0;
              if (*piVar16 != -1) {
                iVar1 = *piVar16;
              }
              *(int *)(puVar4 + 0x1c) = iVar1;
            } while (*local_38 != 0);
            local_b8 = 0;
          }
LAB_01b65e9c:
          abStack_b6[0] = 0;
          abStack_b6[1] = 0;
          abStack_b6[2] = 0;
          abStack_b6[3] = 0;
          abStack_b6[4] = 0;
          abStack_b6[5] = 0;
          uStack_b0 = 0;
          lVar9 = 0;
          uVar7 = local_50;
          if (local_50 == 8) {
            uVar7 = 1;
          }
          local_a0 = (byte)uVar7;
          uStack_9f = (undefined1)(uVar7 >> 8);
          uStack_9e = (undefined2)(uVar7 >> 0x10);
          if (uVar7 != 1) {
            uVar7 = uStack_4c;
            if (uStack_4c == 8) {
              uVar7 = 1;
            }
            local_a0 = (byte)uVar7;
            uStack_9f = (undefined1)(uVar7 >> 8);
            uStack_9e = (undefined2)(uVar7 >> 0x10);
            if (uVar7 == 1) {
              lVar9 = 1;
            }
            else {
              uVar7 = local_48;
              if (local_48 == 8) {
                uVar7 = 1;
              }
              local_a0 = (byte)uVar7;
              uStack_9f = (undefined1)(uVar7 >> 8);
              uStack_9e = (undefined2)(uVar7 >> 0x10);
              if (uVar7 == 1) {
                lVar9 = 2;
              }
              else {
                uVar7 = local_44;
                if (local_44 == 8) {
                  uVar7 = 1;
                }
                local_a0 = (byte)uVar7;
                uStack_9f = (undefined1)(uVar7 >> 8);
                uStack_9e = (undefined2)(uVar7 >> 0x10);
                if (uVar7 != 1) goto LAB_01b65fd0;
                lVar9 = 3;
              }
            }
          }
          local_80 = CONCAT44(local_80._4_4_,1);
          local_14 = 1;
          *(undefined2 *)(local_74 + lVar9 * 2 + -0x42) = local_18[0];
          uVar7 = FUN_01b5c13c(&local_50,&local_14,1);
          if (uVar7 != 0xffffffff) {
            if (uVar7 < 4) {
              *(undefined2 *)(local_74 + (ulong)uVar7 * 2 + -0x42) = uVar5;
            }
            local_98 = (undefined2)(lVar17 + 0x2c610);
            uStack_96 = (undefined6)((ulong)(lVar17 + 0x2c610) >> 0x10);
            local_90 = 0;
            if (*(long *)(lVar17 + 0x2c638) == 0) {
              local_8f = 0;
            }
            else {
              puVar10 = *(undefined8 **)(*(long *)(lVar17 + 0x2c638) + 0x10);
              local_8f = 0;
              if (puVar10 != (undefined8 *)0x0) {
                local_8f = (**(code **)*puVar10)();
              }
            }
            local_8f = local_8f & 1;
            local_a0 = 0xa0;
            uStack_9f = 0x8a;
            uStack_9e = 0x4a3;
            uStack_9c = 0;
            uVar11 = FUN_01b68bf4(&local_a0);
            local_74[0] = *param_3;
            if (7 < local_74[0]) {
              local_74[0] = 0xff;
            }
            local_80 = FUN_01b68b14(uVar11,local_74);
            bVar6 = FUN_01b68c50(&local_80,&local_b8,local_38,&local_50,param_3);
            pbVar12 = &local_a0;
            goto LAB_01b6604c;
          }
        }
      }
    }
  }
LAB_01b65fd0:
  bVar6 = 0;
LAB_01b65fd4:
  return bVar6 & 1;
}


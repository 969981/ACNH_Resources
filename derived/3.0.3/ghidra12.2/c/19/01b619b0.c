
byte FUN_01b619b0(undefined8 param_1,short param_2,ulong param_3,undefined8 param_4,uint *param_5,
                 byte *param_6,uint param_7)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  short local_a0 [5];
  undefined6 uStack_96;
  undefined1 local_90;
  byte local_8f;
  byte local_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined6 uStack_7e;
  undefined1 local_78;
  byte local_77;
  undefined8 local_76;
  undefined4 local_6e;
  undefined8 local_68;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  byte local_34 [4];
  
  pbVar9 = (byte *)local_a0;
  if (param_5 != (uint *)0x0) {
    uVar5 = FUN_01b68870(param_5,param_6,param_7 & 1);
    puVar2 = PTR_DAT_04bb43c0;
    if ((uVar5 & 1) != 0) {
      puVar12 = (uint *)(ulong)*param_5;
      local_60 = 0;
      uStack_5c = 0;
      puVar11 = (uint *)((long)param_5 - (long)puVar12);
      if (puVar12 == (uint *)0x0 || param_5 == puVar12) {
        local_58 = 0;
LAB_01b61a24:
        uVar13 = 0;
      }
      else {
        if (((*puVar11 == 0) || (uVar13 = puVar11[1], uVar13 == 0)) ||
           ((ulong)(ushort)puVar11[2] == 0)) {
LAB_01b61c20:
          uVar4 = *puVar11;
          uStack_5c = 0;
          if (uVar4 != 0) {
LAB_01b61c28:
            uVar13 = puVar11[1];
            if ((uVar13 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar13 != 0) {
                  uVar1 = (uint)((ulong)((long)param_5 - lVar6) / (ulong)uVar13);
                }
                if (uVar4 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (uVar1 < DAT_053350d8) {
                  uStack_5c = (uint)*(ushort *)(DAT_053350e0 + (long)(int)uVar1 * 2);
                  if (uStack_5c < 0x12) goto LAB_01b61c94;
                }
              }
            }
            uStack_5c = 0;
          }
        }
        else {
          lVar6 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar6 == 0) goto LAB_01b61c20;
          uVar4 = 0;
          if ((ulong)uVar13 != 0) {
            uVar4 = (uint)((ulong)((long)param_5 - lVar6) / (ulong)uVar13);
          }
          if (*puVar11 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if (uVar4 < DAT_053350c8) {
            uVar13 = (uint)*(ushort *)(DAT_053350d0 + (long)(int)uVar4 * 2);
            if (0x11 < uVar13) goto LAB_01b61c20;
          }
          else {
            uVar13 = 0;
          }
          uVar4 = *puVar11;
          local_60 = uVar13;
          if (uVar4 != 0) goto LAB_01b61c28;
          uStack_5c = 0;
        }
LAB_01b61c94:
        local_58 = 0;
        if (*puVar11 != 0) {
          uVar13 = puVar11[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar6 != 0) {
              uVar4 = 0;
              if ((ulong)uVar13 != 0) {
                uVar4 = (uint)((ulong)((long)param_5 - lVar6) / (ulong)uVar13);
              }
              if (*puVar11 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < DAT_053350e8) &&
                 (local_58 = (uint)*(ushort *)(DAT_053350f0 + (long)(int)uVar4 * 2), local_58 < 0x12
                 )) goto LAB_01b61d0c;
            }
          }
          local_58 = 0;
        }
LAB_01b61d0c:
        uVar13 = 0;
        if (*puVar11 != 0) {
          uVar13 = puVar11[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar6 != 0) {
              uVar4 = 0;
              if ((ulong)uVar13 != 0) {
                uVar4 = (uint)((ulong)((long)param_5 - lVar6) / (ulong)uVar13);
              }
              if (*puVar11 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < DAT_053350f8) &&
                 (uVar13 = (uint)*(ushort *)(DAT_05335100 + (long)(int)uVar4 * 2), uVar13 < 0x12))
              goto LAB_01b61a28;
            }
          }
          goto LAB_01b61a24;
        }
      }
LAB_01b61a28:
      _local_58 = CONCAT44(uVar13,local_58);
      if ((param_3 & 1) == 0) {
        bVar3 = 0;
        if (((((0x10 < local_60) || ((1 << (ulong)(local_60 & 0x1f) & 0x1005dU) == 0)) ||
             (bVar3 = 0, 0x10 < uStack_5c)) ||
            (((1 << (ulong)(uStack_5c & 0x1f) & 0x1005dU) == 0 || (bVar3 = 0, 0x10 < local_58)))) ||
           (((1 << (ulong)(local_58 & 0x1f) & 0x1005dU) == 0 ||
            ((bVar3 = 0, 0x10 < uVar13 || ((1 << (ulong)(uVar13 & 0x1f) & 0x1005dU) == 0))))))
        goto LAB_01b621fc;
        if (((local_60 == 2) || (((uStack_5c == 2 || (local_58 == 2)) || (uVar13 == 2)))) &&
           (((local_60 == 6 || (uStack_5c == 6)) || ((local_58 == 6 || (uVar13 == 6)))))) {
          uVar4 = local_60;
          if (local_60 == 8) {
            uVar4 = 1;
          }
          local_88 = (byte)uVar4;
          uStack_87 = (undefined1)(uVar4 >> 8);
          local_a0[0] = 6;
          if (uVar4 == 6) goto LAB_01b61eb0;
          local_a0[0] = 6;
          uVar4 = uStack_5c;
          if (uStack_5c == 8) {
            uVar4 = 1;
          }
          local_88 = (byte)uVar4;
          uStack_87 = (undefined1)(uVar4 >> 8);
          if (uVar4 == 6) goto LAB_01b61ed8;
          uVar4 = local_58;
          if (local_58 == 8) {
            uVar4 = 1;
          }
          local_88 = (byte)uVar4;
          uStack_87 = (undefined1)(uVar4 >> 8);
          local_a0[0] = 6;
          if (uVar4 != 6) {
            local_a0[0] = 6;
            if (uVar13 == 8) {
              uVar13 = 1;
            }
            local_88 = (byte)uVar13;
            uStack_87 = (undefined1)(uVar13 >> 8);
            goto LAB_01b61f30;
          }
LAB_01b61f04:
          uVar13 = 2;
          goto LAB_01b61f44;
        }
      }
      else {
        bVar3 = 0;
        if (((0x10 < local_60) || ((1 << (ulong)(local_60 & 0x1f) & 0x1003dU) == 0)) ||
           (((bVar3 = 0, 0x10 < uStack_5c ||
             ((((1 << (ulong)(uStack_5c & 0x1f) & 0x1003dU) == 0 || (bVar3 = 0, 0x10 < local_58)) ||
              ((1 << (ulong)(local_58 & 0x1f) & 0x1003dU) == 0)))) ||
            ((bVar3 = 0, 0x10 < uVar13 || ((1 << (ulong)(uVar13 & 0x1f) & 0x1003dU) == 0))))))
        goto LAB_01b621fc;
        if (((local_60 != 2) && (((uStack_5c != 2 && (local_58 != 2)) && (uVar13 != 2)))) ||
           ((((local_60 != 5 && (uStack_5c != 5)) && (local_58 != 5)) && (uVar13 != 5))))
        goto LAB_01b621f8;
        local_a0[0] = 5;
        uVar4 = local_60;
        if (local_60 == 8) {
          uVar4 = 1;
        }
        local_88 = (byte)uVar4;
        uStack_87 = (undefined1)(uVar4 >> 8);
        if (uVar4 == 5) {
LAB_01b61eb0:
          uVar13 = 0;
        }
        else {
          local_a0[0] = 5;
          uVar4 = uStack_5c;
          if (uStack_5c == 8) {
            uVar4 = 1;
          }
          local_88 = (byte)uVar4;
          uStack_87 = (undefined1)(uVar4 >> 8);
          if (uVar4 == 5) {
LAB_01b61ed8:
            uVar13 = 1;
          }
          else {
            local_a0[0] = 5;
            uVar4 = local_58;
            if (local_58 == 8) {
              uVar4 = 1;
            }
            local_88 = (byte)uVar4;
            uStack_87 = (undefined1)(uVar4 >> 8);
            if (uVar4 == 5) goto LAB_01b61f04;
            local_a0[0] = 5;
            if (uVar13 == 8) {
              uVar13 = 1;
            }
            local_88 = (byte)uVar13;
            uStack_87 = (undefined1)(uVar13 >> 8);
LAB_01b61f30:
            uVar13 = 3;
            if (CONCAT11(uStack_87,local_88) != local_a0[0]) {
              uVar13 = 0xffffffff;
            }
          }
        }
LAB_01b61f44:
        uStack_86 = 0;
        local_a0[1] = 0;
        if (((puVar12 == (uint *)0x0 || param_5 == puVar12) || (*puVar11 == 0)) ||
           ((uVar4 = puVar11[1], uVar4 == 0 || ((ulong)(ushort)puVar11[2] == 0)))) {
LAB_01b61fb8:
          uVar10 = 0;
        }
        else {
          lVar6 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
          uVar10 = 0;
          if (lVar6 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)param_5 - lVar6) / (ulong)uVar4);
            }
            if (*puVar11 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((DAT_05335108 <= uVar1) ||
               (uVar10 = *(ushort *)(DAT_05335110 + (long)(int)uVar1 * 2), 4 < uVar10))
            goto LAB_01b61fb8;
          }
        }
        bVar3 = uVar10 != 3;
        if ((uVar10 == 3) || ((param_7 & 1) != 0)) goto LAB_01b621fc;
        lVar14 = *(long *)PTR_DAT_04bb43c0;
        uVar4 = FUN_0277d6c4(param_4);
        lVar6 = DAT_05150358;
        if (*(long *)puVar2 == 0) {
LAB_01b620dc:
          if (((DAT_05150358 != 0) &&
              (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
                (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
               (*(long *)(DAT_05150358 + 0x488) != 0)))) &&
             (((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
               (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
              (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
            uVar4 = FUN_0277d6c4(param_4);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_01b62018;
          }
        }
        else {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((*(uint *)(lVar14 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01b620dc;
LAB_01b62018:
          if (param_6 == (byte *)0x0) {
            if ((DAT_05574040 != 0) &&
               (lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(),
               lVar6 != 0)) {
              uStack_86 = 0;
              uStack_84 = 0;
              local_80 = 0;
              local_88 = 0xff;
              uStack_87 = 0xff;
              uStack_7e = 0;
              local_78 = 0;
              local_77 = 0;
              local_76 = 0;
              local_6e = 0;
              uVar5 = FUN_01b6ff10(&local_88,&local_60,param_5,param_4);
              bVar3 = 0;
              if ((uVar5 & 1) == 0) goto LAB_01b621fc;
              if (uVar13 < 0xe) {
                *(short *)(local_34 + (ulong)uVar13 * 2 + -0x52) = param_2;
              }
              local_a0[4] = (short)(&LAB_00284e00 + lVar6);
              uStack_96 = (undefined6)((ulong)(&LAB_00284e00 + lVar6) >> 0x10);
              local_90 = 0;
              if (*(long *)(&LAB_00284e28 + lVar6) == 0) {
                local_8f = 0;
              }
              else {
                puVar7 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar6) + 0x10);
                local_8f = 0;
                if (puVar7 != (undefined8 *)0x0) {
                  local_8f = (**(code **)*puVar7)();
                }
              }
              local_8f = local_8f & 1;
              local_a0[0] = -0x7520;
              local_a0[1] = 0x4a3;
              local_a0[2] = 0;
              local_a0[3] = 0;
              FUN_01b69394(local_a0);
              local_68 = FUN_01b692d8();
              bVar3 = FUN_01b69400(&local_68,&local_88,param_5,&local_60);
LAB_01b622c4:
              FUN_02640184(pbVar9);
              goto LAB_01b621fc;
            }
          }
          else {
            local_88 = *param_6;
            if (7 < local_88) {
              local_88 = 0xff;
            }
            lVar6 = FUN_02583354(DAT_055021a0,&local_88,1);
            if (lVar6 != 0) {
              lVar14 = lVar6 + 0x194b0;
              if (*(long *)(lVar6 + 0x194b8) == 0) {
                lVar14 = *(long *)(DAT_05574040 + 0x20);
              }
              local_a0[1] = 0;
              local_a0[2] = 0;
              local_a0[3] = 0;
              local_a0[4] = 0;
              local_a0[0] = -1;
              uVar5 = FUN_01b6f610(local_a0,&local_60,param_5,param_4);
              if ((uVar5 & 1) != 0) {
                if (uVar13 < 4) {
                  local_a0[(ulong)uVar13 + 1] = param_2;
                }
                local_80 = (undefined2)(lVar14 + 0x2c610);
                uStack_7e = (undefined6)((ulong)(lVar14 + 0x2c610) >> 0x10);
                local_78 = 0;
                if (*(long *)(lVar14 + 0x2c638) == 0) {
                  local_77 = 0;
                }
                else {
                  puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x2c638) + 0x10);
                  local_77 = 0;
                  if (puVar7 != (undefined8 *)0x0) {
                    local_77 = (**(code **)*puVar7)();
                  }
                }
                local_77 = local_77 & 1;
                local_88 = 0xa0;
                uStack_87 = 0x8a;
                uStack_86 = 0x4a3;
                uStack_84 = 0;
                uVar8 = FUN_01b68bf4(&local_88);
                local_34[0] = *param_6;
                if (7 < local_34[0]) {
                  local_34[0] = 0xff;
                }
                local_68 = FUN_01b68b14(uVar8,local_34);
                bVar3 = FUN_01b68c50(&local_68,local_a0,param_5,&local_60,param_6);
                pbVar9 = &local_88;
                goto LAB_01b622c4;
              }
            }
          }
        }
      }
    }
  }
LAB_01b621f8:
  bVar3 = 0;
LAB_01b621fc:
  return bVar3 & 1;
}


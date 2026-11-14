
byte FUN_01b67710(undefined8 param_1,ushort *param_2,ushort param_3,ulong param_4,ushort param_5,
                 uint *param_6,byte *param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined2 uVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  ushort local_b8 [5];
  undefined6 uStack_ae;
  undefined1 local_a8;
  byte local_a7;
  byte local_a0;
  undefined1 uStack_9f;
  ushort auStack_9e [4];
  undefined6 uStack_96;
  undefined1 local_90;
  byte local_8f;
  undefined8 local_8e;
  undefined4 local_86;
  undefined8 local_80;
  byte local_74 [4];
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint local_64;
  
  if ((param_6 != (uint *)0x0) &&
     (uVar5 = FUN_01b68870(param_6,param_7,param_8 & 1), (uVar5 & 1) != 0)) {
    puVar13 = (uint *)(ulong)*param_6;
    local_70 = 0;
    uStack_6c = 0;
    local_68 = 0;
    puVar15 = (uint *)((long)param_6 - (long)puVar13);
    if (puVar13 != (uint *)0x0 && param_6 != puVar13) {
      if (*puVar15 != 0) {
        uVar4 = puVar15[1];
        if (uVar4 != 0) {
          if ((ulong)(ushort)puVar15[2] != 0) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar15 + lVar6 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar6 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)param_6 - lVar6) / (ulong)uVar4);
              }
              if (*puVar15 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if (uVar2 < DAT_053350c8) {
                uVar11 = *(ushort *)(DAT_053350d0 + (long)(int)uVar2 * 2);
                uVar4 = (uint)uVar11;
                if (0x11 < uVar11) goto LAB_01b679c0;
              }
              else {
                uVar4 = 0;
              }
              local_70 = uVar4;
            }
          }
        }
      }
LAB_01b679c0:
      uStack_6c = 0;
      if (*puVar15 != 0) {
        uVar4 = puVar15[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar15 + lVar6 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar6 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)param_6 - lVar6) / (ulong)uVar4);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_053350d8) &&
               (uStack_6c = (uint)*(ushort *)(DAT_053350e0 + (long)(int)uVar2 * 2), uStack_6c < 0x12
               )) goto LAB_01b67a34;
          }
        }
        uStack_6c = 0;
      }
LAB_01b67a34:
      local_68 = 0;
      if (*puVar15 != 0) {
        uVar4 = puVar15[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar15 + lVar6 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar6 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)param_6 - lVar6) / (ulong)uVar4);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_053350e8) &&
               (local_68 = (uint)*(ushort *)(DAT_053350f0 + (long)(int)uVar2 * 2), local_68 < 0x12))
            goto LAB_01b67aac;
          }
        }
        local_68 = 0;
      }
LAB_01b67aac:
      local_64 = 0;
      if (*puVar15 != 0) {
        uVar4 = puVar15[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar15 + lVar6 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar6 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)param_6 - lVar6) / (ulong)uVar4);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_053350f8) &&
               (local_64 = (uint)*(ushort *)(DAT_05335100 + (long)(int)uVar2 * 2), local_64 < 0x12))
            goto LAB_01b67784;
          }
        }
        goto LAB_01b67780;
      }
    }
    else {
LAB_01b67780:
      local_64 = 0;
    }
LAB_01b67784:
    if ((param_4 & 1) == 0) {
      local_a0 = 6;
      uStack_9f = 0;
      auStack_9e[0] = 0;
      if (((((local_70 == 6) || (uStack_6c == 6)) || (local_68 == 6)) || (local_64 == 6)) &&
         (uVar5 = FUN_01b5bed8(&local_70), (uVar5 & 1) != 0)) {
        uVar4 = local_70;
        if (local_70 == 8) {
          uVar4 = 1;
        }
        local_a0 = (byte)uVar4;
        uStack_9f = (undefined1)(uVar4 >> 8);
        auStack_9e[0] = (ushort)(uVar4 >> 0x10);
        local_b8[0] = 6;
        if (uVar4 == 6) goto LAB_01b67954;
        local_b8[0] = 6;
        uVar4 = uStack_6c;
        if (uStack_6c == 8) {
          uVar4 = 1;
        }
        local_a0 = (byte)uVar4;
        uStack_9f = (undefined1)(uVar4 >> 8);
        auStack_9e[0] = (ushort)(uVar4 >> 0x10);
        if (uVar4 == 6) goto LAB_01b67980;
        uVar4 = local_68;
        if (local_68 == 8) {
          uVar4 = 1;
        }
        local_a0 = (byte)uVar4;
        uStack_9f = (undefined1)(uVar4 >> 8);
        auStack_9e[0] = (ushort)(uVar4 >> 0x10);
        local_b8[0] = 6;
        if (uVar4 != 6) {
          local_b8[0] = 6;
          uVar4 = local_64;
          if (local_64 == 8) {
            uVar4 = 1;
          }
          local_a0 = (byte)uVar4;
          uStack_9f = (undefined1)(uVar4 >> 8);
          auStack_9e[0] = (ushort)(uVar4 >> 0x10);
          goto LAB_01b67b38;
        }
LAB_01b679b0:
        uVar4 = 2;
        goto LAB_01b67b4c;
      }
    }
    else {
      local_a0 = 5;
      uStack_9f = 0;
      auStack_9e[0] = 0;
      if ((((local_70 == 5) || (uStack_6c == 5)) || ((local_68 == 5 || (local_64 == 5)))) &&
         (uVar5 = FUN_01b5bd34(&local_70), (uVar5 & 1) != 0)) {
        local_b8[0] = 5;
        uVar4 = local_70;
        if (local_70 == 8) {
          uVar4 = 1;
        }
        local_a0 = (byte)uVar4;
        uStack_9f = (undefined1)(uVar4 >> 8);
        auStack_9e[0] = (ushort)(uVar4 >> 0x10);
        if (uVar4 == 5) {
LAB_01b67954:
          uVar4 = 0;
        }
        else {
          local_b8[0] = 5;
          uVar4 = uStack_6c;
          if (uStack_6c == 8) {
            uVar4 = 1;
          }
          local_a0 = (byte)uVar4;
          uStack_9f = (undefined1)(uVar4 >> 8);
          auStack_9e[0] = (ushort)(uVar4 >> 0x10);
          if (uVar4 == 5) {
LAB_01b67980:
            uVar4 = 1;
          }
          else {
            local_b8[0] = 5;
            uVar4 = local_68;
            if (local_68 == 8) {
              uVar4 = 1;
            }
            local_a0 = (byte)uVar4;
            uStack_9f = (undefined1)(uVar4 >> 8);
            auStack_9e[0] = (ushort)(uVar4 >> 0x10);
            if (uVar4 == 5) goto LAB_01b679b0;
            local_b8[0] = 5;
            uVar4 = local_64;
            if (local_64 == 8) {
              uVar4 = 1;
            }
            local_a0 = (byte)uVar4;
            uStack_9f = (undefined1)(uVar4 >> 8);
            auStack_9e[0] = (ushort)(uVar4 >> 0x10);
LAB_01b67b38:
            uVar4 = 3;
            if (CONCAT22(auStack_9e[0],CONCAT11(uStack_9f,local_a0)) != (uint)local_b8[0]) {
              uVar4 = 0xffffffff;
            }
          }
        }
LAB_01b67b4c:
        local_b8[1] = 0;
        if (puVar13 != (uint *)0x0 && param_6 != puVar13) {
          uVar11 = 0;
          if (*puVar15 != 0) {
            uVar2 = puVar15[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar15 + lVar6 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar1 = (uint)((ulong)((long)param_6 - lVar6) / (ulong)uVar2);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05335108) &&
                   (uVar11 = *(ushort *)(DAT_05335110 + (long)(int)uVar1 * 2), uVar11 < 5))
                goto LAB_01b67b54;
              }
            }
            goto LAB_01b67b50;
          }
        }
        else {
LAB_01b67b50:
          uVar11 = 0;
        }
LAB_01b67b54:
        bVar3 = uVar11 != 3;
        if ((uVar11 == 3) || ((param_8 & 1) != 0)) goto LAB_01b67cc0;
        if (param_7 == (byte *)0x0) {
          if ((DAT_05574040 != 0) &&
             (lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(),
             lVar6 != 0)) {
            local_86 = 0;
            local_8e = 0;
            uStack_96 = 0;
            local_90 = 0;
            local_8f = 0;
            puVar8 = (undefined2 *)
                     FUN_01b5a5e0(param_6,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650);
            if (puVar8 == (undefined2 *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar12 = *puVar8;
            }
            local_a0 = (byte)uVar12;
            uStack_9f = (undefined1)((ushort)uVar12 >> 8);
            auStack_9e[0] = 0;
            auStack_9e[1] = 0;
            auStack_9e[2] = 0;
            auStack_9e[3] = 0;
            if (uVar4 != 0xffffffff) {
              *(ushort *)(local_74 + (ulong)uVar4 * 2 + -0x2a) = param_3;
            }
            uVar11 = *param_2;
            local_b8[0] = 0xe;
            local_b8[1] = 0;
            uVar4 = FUN_01b5c07c(&local_70,local_b8);
            if (uVar4 < 0xe) {
              *(ushort *)(local_74 + (ulong)uVar4 * 2 + -0x2a) = uVar11;
            }
            local_b8[0] = 8;
            local_b8[1] = 0;
            uVar4 = FUN_01b5c07c(&local_70,local_b8);
            if (uVar4 < 0xe) {
              *(ushort *)(local_74 + (ulong)uVar4 * 2 + -0x2a) = param_5;
            }
            local_b8[4] = (ushort)(&LAB_00284e00 + lVar6);
            uStack_ae = (undefined6)((ulong)(&LAB_00284e00 + lVar6) >> 0x10);
            local_a8 = 0;
            if (*(long *)(&LAB_00284e28 + lVar6) == 0) {
              local_a7 = 0;
            }
            else {
              puVar9 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar6) + 0x10);
              local_a7 = 0;
              if (puVar9 != (undefined8 *)0x0) {
                local_a7 = (**(code **)*puVar9)();
              }
            }
            local_a7 = local_a7 & 1;
            local_b8[0] = 0x8ae0;
            local_b8[1] = 0x4a3;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_01b69394(local_b8);
            local_80 = FUN_01b692d8();
            bVar3 = FUN_01b69400(&local_80,&local_a0,param_6,&local_70);
            puVar7 = local_b8;
            goto LAB_01b67ee4;
          }
        }
        else {
          local_a0 = *param_7;
          if (7 < local_a0) {
            local_a0 = 0xff;
          }
          lVar6 = FUN_02583354(DAT_055021a0,&local_a0,1);
          if (lVar6 != 0) {
            lVar14 = lVar6 + 0x194b0;
            if (*(long *)(lVar6 + 0x194b8) == 0) {
              lVar14 = *(long *)(DAT_05574040 + 0x20);
            }
            puVar7 = (ushort *)FUN_01b5a5e0(param_6,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650);
            if (puVar7 == (ushort *)0x0) {
              local_b8[0] = 0;
            }
            else {
              local_b8[0] = *puVar7;
            }
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            local_b8[4] = 0;
            if (uVar4 != 0xffffffff) {
              local_b8[(ulong)uVar4 + 1] = param_3;
            }
            uVar11 = *param_2;
            local_a0 = 0xe;
            uStack_9f = 0;
            auStack_9e[0] = 0;
            uVar4 = FUN_01b5c07c(&local_70,&local_a0);
            if (uVar4 < 4) {
              local_b8[(ulong)uVar4 + 1] = uVar11;
            }
            local_a0 = 8;
            uStack_9f = 0;
            auStack_9e[0] = 0;
            uVar4 = FUN_01b5c07c(&local_70,&local_a0);
            if (uVar4 < 4) {
              local_b8[(ulong)uVar4 + 1] = param_5;
            }
            auStack_9e[3] = (ushort)(lVar14 + 0x2c610);
            uStack_96 = (undefined6)((ulong)(lVar14 + 0x2c610) >> 0x10);
            local_90 = 0;
            if (*(long *)(lVar14 + 0x2c638) == 0) {
              local_8f = 0;
            }
            else {
              puVar9 = *(undefined8 **)(*(long *)(lVar14 + 0x2c638) + 0x10);
              local_8f = 0;
              if (puVar9 != (undefined8 *)0x0) {
                local_8f = (**(code **)*puVar9)();
              }
            }
            local_8f = local_8f & 1;
            local_a0 = 0xa0;
            uStack_9f = 0x8a;
            auStack_9e[0] = 0x4a3;
            auStack_9e[1] = 0;
            auStack_9e[2] = 0;
            uVar10 = FUN_01b68bf4(&local_a0);
            local_74[0] = *param_7;
            if (7 < local_74[0]) {
              local_74[0] = 0xff;
            }
            local_80 = FUN_01b68b14(uVar10,local_74);
            bVar3 = FUN_01b68c50(&local_80,local_b8,param_6,&local_70,param_7);
            puVar7 = (ushort *)&local_a0;
LAB_01b67ee4:
            FUN_02640184(puVar7);
            goto LAB_01b67cc0;
          }
        }
      }
    }
  }
  bVar3 = 0;
LAB_01b67cc0:
  return bVar3 & 1;
}


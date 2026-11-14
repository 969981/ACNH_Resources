
byte FUN_01b66060(undefined8 param_1,uint *param_2,undefined4 *param_3,uint param_4,
                 undefined2 param_5,undefined2 param_6)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 uVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  ushort uVar14;
  uint *puVar15;
  char cVar16;
  int *piVar17;
  long lVar18;
  undefined2 local_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined1 local_a0;
  byte local_9f;
  undefined2 local_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined2 local_90;
  undefined6 uStack_8e;
  undefined1 local_88;
  byte local_87;
  undefined8 local_86;
  undefined4 local_7e;
  undefined8 local_78;
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
  
  puVar13 = &local_b0;
  bVar7 = 0;
  if (param_2 == (uint *)0x0) goto LAB_01b6668c;
  local_3c[0] = param_6;
  local_38 = param_2;
  local_18[0] = param_5;
  uVar9 = FUN_01b6dfe0(param_2,param_3,param_4 & 1);
  if ((uVar9 & 1) != 0) {
    uVar8 = *param_2;
    local_44 = 0;
    local_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
    if ((uVar8 != 0) && (param_2 != (uint *)(ulong)uVar8)) {
      puVar15 = (uint *)((long)param_2 - (long)(ulong)uVar8);
      if ((*puVar15 != 0) && ((uVar8 = puVar15[1], uVar8 != 0 && ((ulong)(ushort)puVar15[2] != 0))))
      {
        lVar10 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar15 + lVar10 + (ulong)(ushort)puVar15[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar8 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar8);
          }
          if (*puVar15 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < *(uint *)PTR_DAT_04bc0618) {
            uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar2 * 2);
            uVar8 = (uint)uVar14;
            if (0x11 < uVar14) goto LAB_01b6613c;
          }
          else {
            uVar8 = 0;
          }
          local_50 = uVar8;
        }
      }
LAB_01b6613c:
      uStack_4c = 0;
      if (*puVar15 != 0) {
        uVar8 = puVar15[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar15 + lVar10 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar10 != 0) {
            uVar2 = 0;
            if ((ulong)uVar8 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar8);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0620) &&
               (uStack_4c = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar2 * 2),
               uStack_4c < 0x12)) goto LAB_01b661b0;
          }
        }
        uStack_4c = 0;
      }
LAB_01b661b0:
      local_48 = 0;
      if (*puVar15 != 0) {
        uVar8 = puVar15[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar15 + lVar10 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar10 != 0) {
            uVar2 = 0;
            if ((ulong)uVar8 != 0) {
              uVar2 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar8);
            }
            if (*puVar15 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0628) &&
               (local_48 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar2 * 2)
               , local_48 < 0x12)) goto LAB_01b66228;
          }
        }
        local_48 = 0;
      }
LAB_01b66228:
      if (((*puVar15 == 0) || (uVar8 = puVar15[1], uVar8 == 0)) || ((ulong)(ushort)puVar15[2] == 0))
      {
LAB_01b6629c:
        local_44 = 0;
      }
      else {
        lVar10 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar15 + lVar10 + (ulong)(ushort)puVar15[2] * 8;
        local_44 = 0;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar8 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar8);
          }
          if (*puVar15 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0630 <= uVar2) ||
             (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar2 * 2),
             local_44 = (uint)uVar14, 0x11 < uVar14)) goto LAB_01b6629c;
        }
      }
    }
    uVar9 = FUN_01b5bbd0(&local_50,2,1);
    puVar3 = PTR_DAT_04bb46b0;
    if ((uVar9 & 1) != 0) {
      uVar8 = *param_2;
      uVar14 = 0;
      if ((uVar8 != 0) && (param_2 != (uint *)(ulong)uVar8)) {
        puVar15 = (uint *)((long)param_2 - (long)(ulong)uVar8);
        uVar14 = 0;
        if (*puVar15 != 0) {
          uVar8 = puVar15[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar15 + lVar10 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar10 != 0) {
              uVar2 = 0;
              if ((ulong)uVar8 != 0) {
                uVar2 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar8);
              }
              if (*puVar15 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc0638) &&
                 (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar2 * 2),
                 uVar14 < 5)) goto LAB_01b66344;
            }
          }
          uVar14 = 0;
        }
      }
LAB_01b66344:
      bVar7 = uVar14 != 3;
      if ((uVar14 == 3) || ((param_4 & 1) != 0)) goto LAB_01b6668c;
      local_70 = &local_38;
      puStack_68 = local_18;
      local_60 = local_3c;
      puStack_58 = &local_50;
      lVar10 = *(long *)PTR_DAT_04bb46b0;
      if (param_3 == (undefined4 *)0x0) {
        if ((lVar10 != 0) &&
           (lVar10 = (**(code **)(*(long *)**(undefined8 **)(lVar10 + 0x10) + 0x30))(), lVar10 != 0)
           ) {
          uStack_96 = 0;
          uStack_94 = 0;
          local_90 = 0;
          local_98 = 0xffff;
          uStack_8e = 0;
          local_88 = 0;
          local_87 = 0;
          local_86 = 0;
          local_7e = 0;
          uVar9 = FUN_01b70c90(&local_70,&local_98);
          bVar7 = 0;
          if ((uVar9 & 1) == 0) goto LAB_01b6668c;
          local_a0 = 0;
          uStack_a8 = SUB82(&LAB_00284e00 + lVar10,0);
          uStack_a6 = (undefined6)((ulong)(&LAB_00284e00 + lVar10) >> 0x10);
          if (*(long *)(&LAB_00284e28 + lVar10) == 0) {
            local_9f = 0;
          }
          else {
            puVar11 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar10) + 0x10);
            local_9f = 0;
            if (puVar11 != (undefined8 *)0x0) {
              local_9f = (**(code **)*puVar11)();
            }
          }
          local_9f = local_9f & 1;
          local_b0 = 0x8ae0;
          uStack_ae = 0x4a3;
          FUN_01b69394(&local_b0);
          local_78 = FUN_01b692d8();
          bVar7 = FUN_01b69400(&local_78,&local_98,local_38,&local_50);
LAB_01b666f0:
          FUN_02640184(puVar13);
          goto LAB_01b6668c;
        }
      }
      else if ((lVar10 != 0) &&
              (lVar10 = FUN_026eec4c(lVar10,*param_3), uVar6 = local_3c[0],
              puVar5 = PTR_DAT_04bc0648, puVar4 = PTR_DAT_04bc0640, lVar10 != 0)) {
        lVar18 = lVar10 + 0x194b0;
        if (*(long *)(lVar10 + 0x194b8) == 0) {
          lVar18 = *(long *)(*(long *)puVar3 + 0x20);
        }
        if (*local_38 == 0) {
LAB_01b66550:
          local_b0 = 0;
        }
        else {
          cVar16 = *PTR_DAT_04bc0640;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar8 = *(uint *)(puVar5 + 0x1c);
              if (-1 < (int)uVar8) {
                if ((undefined2 *)((ulong)uVar8 + (long)local_38) == (undefined2 *)0x0)
                goto LAB_01b66550;
                local_b0 = *(undefined2 *)((ulong)uVar8 + (long)local_38);
                goto LAB_01b66554;
              }
              if (uVar8 != 0xffffffff) goto LAB_01b66550;
            }
            puVar15 = (uint *)(ulong)*local_38;
            local_b0 = 0;
            if ((*local_38 == 0) || (local_38 == puVar15)) goto LAB_01b66554;
            lVar10 = 0xc;
            if (*(char *)((long)local_38 + (10 - (long)puVar15)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)local_38 + (lVar10 - (long)puVar15);
            if (lVar10 == 0) goto LAB_01b66550;
            uVar9 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar15));
            *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
            local_b0 = 0;
            if (uVar9 == 0) goto LAB_01b66554;
            piVar17 = (int *)(lVar10 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) {
                local_b0 = 0;
                goto LAB_01b66554;
              }
            }
            iVar1 = 0;
            if (*piVar17 != -1) {
              iVar1 = *piVar17;
            }
            *(int *)(puVar5 + 0x1c) = iVar1;
          } while (*local_38 != 0);
          local_b0 = 0;
        }
LAB_01b66554:
        uStack_ae = 0;
        uStack_a8 = 0;
        lVar10 = 0;
        uVar8 = local_50;
        if (local_50 == 8) {
          uVar8 = 1;
        }
        local_98 = (undefined2)uVar8;
        uStack_96 = (undefined2)(uVar8 >> 0x10);
        if (uVar8 != 1) {
          uVar8 = uStack_4c;
          if (uStack_4c == 8) {
            uVar8 = 1;
          }
          local_98 = (undefined2)uVar8;
          uStack_96 = (undefined2)(uVar8 >> 0x10);
          if (uVar8 == 1) {
            lVar10 = 1;
          }
          else {
            uVar8 = local_48;
            if (local_48 == 8) {
              uVar8 = 1;
            }
            local_98 = (undefined2)uVar8;
            uStack_96 = (undefined2)(uVar8 >> 0x10);
            if (uVar8 == 1) {
              lVar10 = 2;
            }
            else {
              uVar8 = local_44;
              if (local_44 == 8) {
                uVar8 = 1;
              }
              local_98 = (undefined2)uVar8;
              uStack_96 = (undefined2)(uVar8 >> 0x10);
              if (uVar8 != 1) goto LAB_01b66688;
              lVar10 = 3;
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,1);
        local_14 = 1;
        local_3c[lVar10 + -0x39] = local_18[0];
        uVar8 = FUN_01b5c13c(&local_50,&local_14,1);
        if (uVar8 != 0xffffffff) {
          if (uVar8 < 4) {
            local_3c[(ulong)uVar8 - 0x39] = uVar6;
          }
          local_90 = (undefined2)(lVar18 + 0x2c610);
          uStack_8e = (undefined6)((ulong)(lVar18 + 0x2c610) >> 0x10);
          local_88 = 0;
          if (*(long *)(lVar18 + 0x2c638) == 0) {
            local_87 = 0;
          }
          else {
            puVar11 = *(undefined8 **)(*(long *)(lVar18 + 0x2c638) + 0x10);
            local_87 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              local_87 = (**(code **)*puVar11)();
            }
          }
          local_87 = local_87 & 1;
          local_98 = 0x8aa0;
          uStack_96 = 0x4a3;
          uStack_94 = 0;
          uVar12 = FUN_01b68bf4(&local_98);
          local_78 = FUN_01b69150(uVar12,*param_3);
          bVar7 = FUN_01b6e290(&local_78,&local_b0,local_38,&local_50,param_3);
          puVar13 = &local_98;
          goto LAB_01b666f0;
        }
      }
    }
  }
LAB_01b66688:
  bVar7 = 0;
LAB_01b6668c:
  return bVar7 & 1;
}


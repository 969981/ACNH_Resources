
byte FUN_01b5d5c0(undefined8 param_1,uint *param_2,int *param_3,long param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  undefined2 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ushort uVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  char cVar20;
  int *piVar21;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined1 local_88;
  byte local_87;
  undefined2 local_80;
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
     (uVar9 = FUN_01b6dfe0(param_2,param_3,param_5 & 1), puVar5 = PTR_DAT_04bb46b0, (uVar9 & 1) != 0
     )) {
    puVar18 = (uint *)(ulong)*param_2;
    local_60 = 0;
    uStack_5c = 0;
    local_58 = 0;
    puVar16 = (uint *)((long)param_2 - (long)puVar18);
    if (puVar18 == (uint *)0x0 || param_2 == puVar18) {
LAB_01b5d620:
      uVar19 = 0;
    }
    else {
      if (((*puVar16 != 0) && (uVar19 = puVar16[1], uVar19 != 0)) &&
         ((ulong)(ushort)puVar16[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar16 + lVar10 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar10 != 0) {
          uVar1 = 0;
          if ((ulong)uVar19 != 0) {
            uVar1 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar19);
          }
          if (*puVar16 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (uVar1 < *(uint *)PTR_DAT_04bc0618) {
            uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar1 * 2);
            uVar19 = (uint)uVar15;
            if (0x11 < uVar15) goto LAB_01b5d88c;
          }
          else {
            uVar19 = 0;
          }
          local_60 = uVar19;
        }
      }
LAB_01b5d88c:
      uStack_5c = 0;
      if (*puVar16 != 0) {
        uVar19 = puVar16[1];
        if ((uVar19 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar16 + lVar10 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar19 != 0) {
              uVar1 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar19);
            }
            if (*puVar16 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0620) &&
               (uStack_5c = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar1 * 2),
               uStack_5c < 0x12)) goto LAB_01b5d900;
          }
        }
        uStack_5c = 0;
      }
LAB_01b5d900:
      local_58 = 0;
      if (*puVar16 != 0) {
        uVar19 = puVar16[1];
        if ((uVar19 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar16 + lVar10 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar19 != 0) {
              uVar1 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar19);
            }
            if (*puVar16 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0628) &&
               (local_58 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar1 * 2)
               , local_58 < 0x12)) goto LAB_01b5d978;
          }
        }
        local_58 = 0;
      }
LAB_01b5d978:
      uVar19 = 0;
      if (*puVar16 != 0) {
        uVar19 = puVar16[1];
        if ((uVar19 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar16 + lVar10 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar19 != 0) {
              uVar1 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar19);
            }
            if (*puVar16 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc0630) &&
               (uVar19 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar1 * 2),
               uVar19 < 0x12)) goto LAB_01b5d624;
          }
        }
        goto LAB_01b5d620;
      }
    }
LAB_01b5d624:
    _local_58 = CONCAT44(uVar19,local_58);
    if (((local_60 == 0) && (uStack_5c == 0)) && (local_58 == 0)) {
      bVar8 = 0;
      if ((param_4 != 0) || (uVar19 != 0)) goto LAB_01b5d644;
      if (((puVar18 == (uint *)0x0 || param_2 == puVar18) ||
          ((*puVar16 == 0 || (uVar19 = puVar16[1], uVar19 == 0)))) ||
         ((ulong)(ushort)puVar16[2] == 0)) {
LAB_01b5d75c:
        uVar15 = 0;
      }
      else {
        lVar10 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar16 + lVar10 + (ulong)(ushort)puVar16[2] * 8;
        uVar15 = 0;
        if (lVar10 != 0) {
          uVar1 = 0;
          if ((ulong)uVar19 != 0) {
            uVar1 = (uint)((ulong)((long)param_2 - lVar10) / (ulong)uVar19);
          }
          if (*puVar16 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0638 <= uVar1) ||
             (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar1 * 2),
             4 < uVar15)) goto LAB_01b5d75c;
        }
      }
      bVar8 = uVar15 != 3;
      if ((uVar15 == 3) || ((param_5 & 1) != 0)) goto LAB_01b5d644;
      lVar10 = *(long *)PTR_DAT_04bb46b0;
      if (param_3 == (int *)0x0) {
        if ((lVar10 != 0) &&
           (lVar10 = (**(code **)(*(long *)**(undefined8 **)(lVar10 + 0x10) + 0x30))(), lVar10 != 0)
           ) {
          local_66 = 0;
          local_6e = 0;
          uStack_68 = 0;
          uStack_76 = 0;
          uStack_70 = 0;
          puVar11 = (undefined2 *)FUN_01b5a5e0(param_2,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650)
          ;
          if (puVar11 == (undefined2 *)0x0) {
            local_80 = 0;
          }
          else {
            local_80 = *puVar11;
          }
          uStack_7e = 0;
          local_78 = 0;
          uStack_90 = SUB82(&LAB_00284e00 + lVar10,0);
          uStack_8e = (undefined6)((ulong)(&LAB_00284e00 + lVar10) >> 0x10);
          local_88 = 0;
          if (*(long *)(&LAB_00284e28 + lVar10) == 0) {
            local_87 = 0;
          }
          else {
            puVar14 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar10) + 0x10);
            local_87 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              local_87 = (**(code **)*puVar14)();
            }
          }
          local_87 = local_87 & 1;
          local_98 = 0x8ae0;
          uStack_96 = 0x4a3;
          FUN_01b69394(&local_98);
          local_38 = FUN_01b692d8();
          bVar8 = FUN_01b6e4d0(&local_38,&local_80,param_2,&local_60);
          FUN_02640184(&local_98);
          goto LAB_01b5d644;
        }
      }
      else if ((lVar10 != 0) &&
              (lVar10 = FUN_026eec4c(lVar10,*param_3), puVar7 = PTR_DAT_04bc0648,
              puVar6 = PTR_DAT_04bc0640, lVar10 != 0)) {
        lVar17 = lVar10 + 0x194b0;
        if (*(long *)(lVar10 + 0x194b8) == 0) {
          lVar17 = *(long *)(*(long *)puVar5 + 0x20);
        }
        if (*param_2 == 0) {
LAB_01b5dae8:
          local_98 = 0;
        }
        else {
          cVar20 = *PTR_DAT_04bc0640;
          do {
            if (cVar20 == '\0') {
              cVar20 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar19 = *(uint *)(puVar7 + 0x1c);
              if (-1 < (int)uVar19) {
                if ((undefined2 *)((ulong)uVar19 + (long)param_2) == (undefined2 *)0x0)
                goto LAB_01b5dae8;
                local_98 = *(undefined2 *)((ulong)uVar19 + (long)param_2);
                goto LAB_01b5daec;
              }
              if (uVar19 != 0xffffffff) goto LAB_01b5dae8;
            }
            puVar16 = (uint *)(ulong)*param_2;
            local_98 = 0;
            if ((*param_2 == 0) || (param_2 == puVar16)) goto LAB_01b5daec;
            lVar10 = 0xc;
            if (*(char *)((long)param_2 + (10 - (long)puVar16)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)param_2 + (lVar10 - (long)puVar16);
            if (lVar10 == 0) goto LAB_01b5dae8;
            uVar9 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar16));
            *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
            local_98 = 0;
            if (uVar9 == 0) goto LAB_01b5daec;
            piVar21 = (int *)(lVar10 + 4);
            while (piVar21[-1] != 0x54706054) {
              piVar21 = piVar21 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) {
                local_98 = 0;
                goto LAB_01b5daec;
              }
            }
            iVar4 = 0;
            if (*piVar21 != -1) {
              iVar4 = *piVar21;
            }
            *(int *)(puVar7 + 0x1c) = iVar4;
          } while (*param_2 != 0);
          local_98 = 0;
        }
LAB_01b5daec:
        lVar10 = *(long *)(lVar17 + 0x2c638);
        uStack_96 = 0;
        uStack_90 = 0;
        if (lVar10 == 0) {
          uVar9 = 0;
        }
        else {
          if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
            lVar10 = *(long *)(lVar17 + 0x2c638);
            uVar9 = uVar9 & 0xffffffff;
            if (lVar10 == 0) goto LAB_01b5db58;
          }
          plVar12 = *(long **)(lVar10 + 0x20);
          if (plVar12 != (long *)0x0) {
            lVar10 = *(long *)(lVar17 + 0x2c618);
            local_80 = (undefined2)lVar10;
            uStack_7e = (undefined6)((ulong)lVar10 >> 0x10);
            local_78 = (undefined2)*(undefined8 *)(lVar17 + 0x2c620);
            uStack_76 = (undefined6)((ulong)*(undefined8 *)(lVar17 + 0x2c620) >> 0x10);
            uStack_70 = 0x2580;
            local_6e = 0;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_80);
          }
        }
LAB_01b5db58:
        lVar2 = *(long *)(lVar17 + 0x2c618);
        lVar3 = *(long *)(lVar17 + 0x2c620);
        iVar4 = *param_3;
        lVar10 = *(long *)PTR_DAT_04bb32e8;
        lVar10 = *(long *)(lVar10 + 0x20) / 1000000000 + *(long *)(lVar10 + 8) +
                 (((*(long *)(lVar10 + 0x10) + (long)*(int *)(lVar10 + 0x38)) -
                  *(long *)(lVar10 + 8)) * 1000000000) / 1000000000;
        local_80 = (undefined2)lVar10;
        uStack_7e = (undefined6)((ulong)lVar10 >> 0x10);
        uVar13 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        local_80 = (undefined2)uVar13;
        uStack_7e = (undefined6)((ulong)uVar13 >> 0x10);
        uVar13 = FUN_02811460(lVar3 + lVar2,&local_80,&local_38);
        if ((iVar4 != -1) && ((char)local_38 != '\0')) {
          lVar10 = *(long *)puVar5;
          if (lVar10 != 0) {
            FUN_026eec4c(lVar10,iVar4);
          }
          FUN_01b675a0();
        }
        local_80 = (undefined2)uVar13;
        uStack_7e = (undefined6)((ulong)uVar13 >> 0x10);
        bVar8 = FUN_01b6e290(&local_80,&local_98,param_2,&local_60,param_3);
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar17 + 0x2c638) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar17 + 0x2c638) + 0x18),
           puVar14 != (undefined8 *)0x0)) {
          (**(code **)*puVar14)();
        }
        goto LAB_01b5d644;
      }
    }
  }
  bVar8 = 0;
LAB_01b5d644:
  return bVar8 & 1;
}


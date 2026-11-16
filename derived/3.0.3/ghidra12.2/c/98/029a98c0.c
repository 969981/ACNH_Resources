
void FUN_029a98c0(long param_1,uint param_2,byte param_3)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  uint *puVar19;
  long lVar20;
  int *piVar21;
  uint local_1cc;
  undefined **local_1c8;
  undefined1 *puStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  byte bStack_19e;
  undefined1 uStack_19d;
  undefined2 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined **local_a8;
  long *local_a0;
  int local_98;
  undefined4 uStack_94;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 *puStack_70;
  
  lVar11 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  do {
    lVar18 = 0;
    do {
      local_1b8 = (undefined **)CONCAT44(0xffffffff,(undefined4)local_1b8);
      uVar9 = FUN_03783c30(&local_1b8,lVar11,lVar18);
      if ((uVar9 & 1) != 0) {
        lVar16 = *(long *)(param_1 + 0xa0);
        uVar9 = (lVar18 + lVar11 * 3) * 2 + 0x10f;
        if (*(uint *)(param_1 + 0x98) <= uVar9) {
          uVar9 = 0;
        }
        lVar20 = lVar16 + uVar9 * 400;
        uVar3 = (int)local_1b8._2_2_ & ((int)local_1b8._2_2_ >> 0x1f ^ 0xffffffffU);
        piVar21 = (int *)(lVar20 + 0x18);
        *piVar21 = local_1b8._4_4_;
        *(undefined1 *)(lVar20 + 8) = (undefined1)local_1b8;
        local_1a8 = local_1a8 & 0xffffffffffffff00;
        local_1b0 = 0x10000000000;
        puStack_1c0 = &DAT_0405db6e;
        local_1cc = uVar3;
        local_1c8 = ppuVar1;
        local_1b8 = (undefined **)&local_1a8;
        FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
        local_a8 = (undefined **)0x0;
        local_a0 = (long *)0x0;
        _local_98 = CONCAT62(stack0xffffffffffffff6a,0xff);
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        puStack_70 = local_1b8;
        local_78 = ppuVar1;
        uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
        plVar12 = (long *)0x0;
        if (((uVar10 & 1) != 0) && (plVar12 = local_a0, local_a0 != (long *)0x0)) {
          if (*(uint *)(local_a0 + 3) == 0) {
            plVar12 = (long *)0x0;
          }
          else {
            plVar12 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
            if (*plVar12 != 0x101feff464e494d) {
              plVar12 = (long *)0x0;
            }
          }
        }
        iVar5 = *piVar21;
        puVar19 = (uint *)(lVar16 + uVar9 * 400 + 0xc);
        *puVar19 = uVar3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          if (((*(char *)(param_1 + 0x2794) != '\0') && (*(int *)(param_1 + 0x2720) == iVar5)) &&
             (*(char *)(param_1 + 0x2624) != '\0')) {
            *(uint *)(param_1 + 0x2628) = uVar3;
            *(uint *)(param_1 + 0x2718) = uVar3;
          }
        }
        else if (((*(char *)(param_1 + 0x62ea0) != '\0') && (*(int *)(param_1 + 0x62e2c) == iVar5))
                && (*(char *)(param_1 + 0x62d30) != '\0')) {
          *(uint *)(param_1 + 0x62d34) = uVar3;
          *(uint *)(param_1 + 0x62e24) = uVar3;
        }
        if (plVar12 != (long *)0x0) {
          lVar20 = lVar16 + uVar9 * 400;
          *(undefined4 *)(lVar20 + 0x124) = *(undefined4 *)((long)plVar12 + 0x14);
          *(int *)(lVar20 + 0x128) = (int)plVar12[3];
          *(undefined4 *)(lVar20 + 300) = *(undefined4 *)((long)plVar12 + 0x1c);
        }
        if ((int)*puVar19 < 0) {
          local_1b8 = (undefined **)0xfffe;
          FUN_0277d4ac(&local_1b8);
          uVar7 = FUN_0277d6c4(&local_1b8);
        }
        else {
          local_a8 = (undefined **)0xfffe;
          FUN_0277d4ac(&local_a8);
          uVar6 = *puVar19;
          uVar3 = 0;
          if (uVar6 != 99999 && -1 < (int)uVar6) {
            uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar20 = *(long *)(DAT_055f6860 + 0x19f820); lVar20 != 0;
              lVar20 = *(long *)(lVar20 + 8)) {
            while (*(int *)(lVar20 + 0x20) <= (int)uVar3) {
              if ((int)uVar3 <= *(int *)(lVar20 + 0x20)) {
                local_1b8 = (undefined **)(ulong)(ushort)*(undefined4 *)(lVar20 + 0x2c);
                goto LAB_029a9c28;
              }
              lVar20 = *(long *)(lVar20 + 0x10);
              if (lVar20 == 0) goto LAB_029a9bec;
            }
          }
LAB_029a9bec:
          local_1b8 = (undefined **)0xfffe;
LAB_029a9c28:
          FUN_0277d4ac(&local_1b8);
          local_a8 = local_1b8;
          uVar7 = FUN_0277d6c4(&local_a8);
        }
        *(undefined2 *)(lVar16 + uVar9 * 400 + 0x122) = uVar7;
        if ((param_2 & 1) != 0) {
          lVar20 = lVar16 + uVar9 * 400;
          if (*(long **)(lVar20 + 0x50) != (long *)(lVar20 + 0x48)) {
            lVar14 = lVar16 + uVar9 * 400;
            piVar17 = (int *)(lVar14 + 0x58);
            plVar12 = (long *)(lVar14 + 0x60);
            plVar13 = *(long **)(lVar20 + 0x50);
            do {
              plVar4 = (long *)plVar13[1];
              plVar15 = plVar4;
              if (*plVar13 != 0) {
                *(long **)(*plVar13 + 8) = plVar4;
                plVar15 = (long *)plVar13[1];
              }
              if (plVar15 != (long *)0x0) {
                *plVar15 = *plVar13;
              }
              *plVar13 = 0;
              plVar13[1] = 0;
              *piVar17 = *piVar17 + -1;
              plVar13[-1] = *plVar12;
              *plVar12 = (long)(plVar13 + -1);
              plVar13 = plVar4;
            } while (plVar4 != (long *)(lVar20 + 0x48));
          }
          puVar2 = (undefined4 *)(lVar20 + 0x40);
          *puVar2 = 0xffffffff;
          if (*piVar21 != -1) {
            local_1b8 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_1b8);
            local_1b0 = 0xfffe;
            FUN_0277d4ac(&local_1b0);
            uVar8 = 0xffffffff;
            local_198 = 0;
            uStack_190 = 0;
            local_1a0 = 0;
            bStack_19e = 0;
            uStack_19d = 0;
            local_19c = 0;
            local_1a8 = CONCAT44(0xffffffff,*piVar21);
            piVar17 = (int *)(lVar16 + uVar9 * 400 + 4);
            if (0xffffffea < *piVar17 - 0xf9U) {
              uVar3 = *piVar17 + 0x1b;
              uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar3 + (char)((uVar3 & 0x80) >> 7)) >> 1
                                   & 0xff,0);
            }
            local_1a8 = CONCAT44(uVar8,(undefined4)local_1a8);
            local_1a0 = 1;
            uStack_19d = *piVar17 - 0x109U < 0x2a;
            bStack_19e = param_3 & 1;
            FUN_0298b040(puVar2,&local_1b8);
            local_78 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_78);
            uVar6 = *puVar19;
            uVar3 = 0;
            if (uVar6 != 99999 && -1 < (int)uVar6) {
              uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
            }
            for (lVar16 = *(long *)(DAT_055f6860 + 0x19f820); lVar16 != 0;
                lVar16 = *(long *)(lVar16 + 8)) {
              while (*(int *)(lVar16 + 0x20) <= (int)uVar3) {
                if ((int)uVar3 <= *(int *)(lVar16 + 0x20)) {
                  local_a8 = (undefined **)(ulong)(ushort)*(undefined4 *)(lVar16 + 0x2c);
                  goto LAB_029a9e24;
                }
                lVar16 = *(long *)(lVar16 + 0x10);
                if (lVar16 == 0) goto LAB_029a9e0c;
              }
            }
LAB_029a9e0c:
            local_a8 = (undefined **)0xfffe;
LAB_029a9e24:
            FUN_0277d4ac(&local_a8);
            local_78 = local_a8;
            local_a8 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_a8);
            local_a0 = (long *)0xfffe;
            FUN_0277d4ac(&local_a0);
            uVar8 = 0xffffffff;
            local_90 = local_90 & 0xffff000000000000;
            local_88 = 0;
            local_80 = 0;
            local_a8 = local_78;
            _local_98 = CONCAT44(0xffffffff,*piVar21);
            if (0xffffffea < *piVar17 - 0xf9U) {
              uVar3 = *piVar17 + 0x1b;
              uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar3 + (char)((uVar3 & 0x80) >> 7)) >> 1
                                   & 0xff,0);
            }
            _local_98 = CONCAT44(uVar8,local_98);
            local_90 = CONCAT44((int)(local_90 >> 0x20),
                                CONCAT13(*piVar17 - 0x109U < 0x2a,CONCAT12(param_3,(short)local_90))
                               ) & 0xffffffffff01ff00;
            FUN_0298b040(puVar2,&local_a8);
          }
        }
      }
      local_1b8 = (undefined **)CONCAT44(0xffffffff,(undefined4)local_1b8);
      uVar9 = FUN_037841d0(&local_1b8,lVar11,lVar18);
      if ((uVar9 & 1) != 0) {
        lVar16 = *(long *)(param_1 + 0xa0);
        uVar9 = (lVar18 + lVar11 * 3) * 2 + 0x110;
        if (*(uint *)(param_1 + 0x98) <= uVar9) {
          uVar9 = 0;
        }
        lVar20 = lVar16 + uVar9 * 400;
        uVar3 = (int)(short)local_1b8 & ((int)(short)local_1b8 >> 0x1f ^ 0xffffffffU);
        piVar21 = (int *)(lVar20 + 0x18);
        *piVar21 = local_1b8._4_4_;
        *(undefined1 *)(lVar20 + 8) = 0;
        local_1a8 = local_1a8 & 0xffffffffffffff00;
        local_1b0 = 0x10000000000;
        local_1c8 = &PTR_LAB_048f9770;
        puStack_1c0 = &DAT_0405db6e;
        local_1cc = uVar3;
        local_1b8 = (undefined **)&local_1a8;
        FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
        local_a8 = (undefined **)0x0;
        local_a0 = (long *)0x0;
        _local_98 = CONCAT62(stack0xffffffffffffff6a,0xff);
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = &PTR_LAB_048f9770;
        puStack_70 = local_1b8;
        uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
        plVar12 = (long *)0x0;
        if (((uVar10 & 1) != 0) && (plVar12 = local_a0, local_a0 != (long *)0x0)) {
          if (*(uint *)(local_a0 + 3) == 0) {
            plVar12 = (long *)0x0;
          }
          else {
            plVar12 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
            if (*plVar12 != 0x101feff464e494d) {
              plVar12 = (long *)0x0;
            }
          }
        }
        iVar5 = *piVar21;
        puVar19 = (uint *)(lVar16 + uVar9 * 400 + 0xc);
        *puVar19 = uVar3;
        if (*(int *)(param_1 + 0xe8) == 0) {
          if (((*(char *)(param_1 + 0x2794) != '\0') && (*(int *)(param_1 + 0x2720) == iVar5)) &&
             (*(char *)(param_1 + 0x2624) != '\0')) {
            *(uint *)(param_1 + 0x2628) = uVar3;
            *(uint *)(param_1 + 0x2718) = uVar3;
          }
        }
        else if (((*(char *)(param_1 + 0x62ea0) != '\0') && (*(int *)(param_1 + 0x62e2c) == iVar5))
                && (*(char *)(param_1 + 0x62d30) != '\0')) {
          *(uint *)(param_1 + 0x62d34) = uVar3;
          *(uint *)(param_1 + 0x62e24) = uVar3;
        }
        if (plVar12 != (long *)0x0) {
          lVar20 = lVar16 + uVar9 * 400;
          *(undefined4 *)(lVar20 + 0x124) = *(undefined4 *)((long)plVar12 + 0x14);
          *(int *)(lVar20 + 0x128) = (int)plVar12[3];
          *(undefined4 *)(lVar20 + 300) = *(undefined4 *)((long)plVar12 + 0x1c);
        }
        if ((int)*puVar19 < 0) {
          local_1b8 = (undefined **)0xfffe;
          FUN_0277d4ac(&local_1b8);
          uVar7 = FUN_0277d6c4(&local_1b8);
        }
        else {
          local_a8 = (undefined **)0xfffe;
          FUN_0277d4ac(&local_a8);
          uVar6 = *puVar19;
          uVar3 = 0;
          if (uVar6 != 99999 && -1 < (int)uVar6) {
            uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          }
          for (lVar20 = *(long *)(DAT_055f6860 + 0x19f820); lVar20 != 0;
              lVar20 = *(long *)(lVar20 + 8)) {
            while (*(int *)(lVar20 + 0x20) <= (int)uVar3) {
              if ((int)uVar3 <= *(int *)(lVar20 + 0x20)) {
                local_1b8 = (undefined **)(ulong)(ushort)*(undefined4 *)(lVar20 + 0x2c);
                goto LAB_029aa14c;
              }
              lVar20 = *(long *)(lVar20 + 0x10);
              if (lVar20 == 0) goto LAB_029aa110;
            }
          }
LAB_029aa110:
          local_1b8 = (undefined **)0xfffe;
LAB_029aa14c:
          FUN_0277d4ac(&local_1b8);
          local_a8 = local_1b8;
          uVar7 = FUN_0277d6c4(&local_a8);
        }
        *(undefined2 *)(lVar16 + uVar9 * 400 + 0x122) = uVar7;
        if ((param_2 & 1) != 0) {
          lVar20 = lVar16 + uVar9 * 400;
          if (*(long **)(lVar20 + 0x50) != (long *)(lVar20 + 0x48)) {
            lVar14 = lVar16 + uVar9 * 400;
            piVar17 = (int *)(lVar14 + 0x58);
            plVar12 = (long *)(lVar14 + 0x60);
            plVar13 = *(long **)(lVar20 + 0x50);
            do {
              plVar4 = (long *)plVar13[1];
              plVar15 = plVar4;
              if (*plVar13 != 0) {
                *(long **)(*plVar13 + 8) = plVar4;
                plVar15 = (long *)plVar13[1];
              }
              if (plVar15 != (long *)0x0) {
                *plVar15 = *plVar13;
              }
              *plVar13 = 0;
              plVar13[1] = 0;
              *piVar17 = *piVar17 + -1;
              plVar13[-1] = *plVar12;
              *plVar12 = (long)(plVar13 + -1);
              plVar13 = plVar4;
            } while (plVar4 != (long *)(lVar20 + 0x48));
          }
          puVar2 = (undefined4 *)(lVar20 + 0x40);
          *puVar2 = 0xffffffff;
          if (*piVar21 != -1) {
            local_1b8 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_1b8);
            local_1b0 = 0xfffe;
            FUN_0277d4ac(&local_1b0);
            uVar8 = 0xffffffff;
            local_198 = 0;
            uStack_190 = 0;
            local_1a0 = 0;
            bStack_19e = 0;
            uStack_19d = 0;
            local_19c = 0;
            local_1a8 = CONCAT44(0xffffffff,*piVar21);
            piVar17 = (int *)(lVar16 + uVar9 * 400 + 4);
            if (0xffffffea < *piVar17 - 0xf9U) {
              uVar3 = *piVar17 + 0x1b;
              uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar3 + (char)((uVar3 & 0x80) >> 7)) >> 1
                                   & 0xff,0);
            }
            local_1a8 = CONCAT44(uVar8,(undefined4)local_1a8);
            local_1a0 = 1;
            uStack_19d = *piVar17 - 0x109U < 0x2a;
            bStack_19e = param_3 & 1;
            FUN_0298b040(puVar2,&local_1b8);
            local_78 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_78);
            uVar6 = *puVar19;
            uVar3 = 0;
            if (uVar6 != 99999 && -1 < (int)uVar6) {
              uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
            }
            for (lVar16 = *(long *)(DAT_055f6860 + 0x19f820); lVar16 != 0;
                lVar16 = *(long *)(lVar16 + 8)) {
              while (*(int *)(lVar16 + 0x20) <= (int)uVar3) {
                if ((int)uVar3 <= *(int *)(lVar16 + 0x20)) {
                  local_a8 = (undefined **)(ulong)(ushort)*(undefined4 *)(lVar16 + 0x2c);
                  goto LAB_029aa344;
                }
                lVar16 = *(long *)(lVar16 + 0x10);
                if (lVar16 == 0) goto LAB_029aa32c;
              }
            }
LAB_029aa32c:
            local_a8 = (undefined **)0xfffe;
LAB_029aa344:
            FUN_0277d4ac(&local_a8);
            local_78 = local_a8;
            local_a8 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_a8);
            local_a0 = (long *)0xfffe;
            FUN_0277d4ac(&local_a0);
            uVar8 = 0xffffffff;
            local_90 = local_90 & 0xffff000000000000;
            local_88 = 0;
            local_80 = 0;
            local_a8 = local_78;
            _local_98 = CONCAT44(0xffffffff,*piVar21);
            if (0xffffffea < *piVar17 - 0xf9U) {
              uVar3 = *piVar17 + 0x1b;
              uVar8 = FUN_026641e0((uint)(int)(char)((char)uVar3 + (char)((uVar3 & 0x80) >> 7)) >> 1
                                   & 0xff,0);
            }
            _local_98 = CONCAT44(uVar8,local_98);
            local_90 = CONCAT44((int)(local_90 >> 0x20),
                                CONCAT13(*piVar17 - 0x109U < 0x2a,CONCAT12(param_3,(short)local_90))
                               ) & 0xffffffffff01ff00;
            FUN_0298b040(puVar2,&local_a8);
          }
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 3);
    lVar11 = lVar11 + 1;
    if (lVar11 == 6) {
      return;
    }
  } while( true );
}


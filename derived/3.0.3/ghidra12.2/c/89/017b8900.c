
void FUN_017b8900(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong *__dest;
  ulong *__src;
  uint uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined *local_1f0;
  ulong *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined1 local_19d;
  undefined1 local_15d;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined *local_128;
  ulong *local_120;
  int local_118;
  ulong local_114;
  undefined5 local_10c;
  char cStack_107;
  char cStack_106;
  char cStack_105;
  undefined2 local_104;
  undefined1 local_102;
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined *local_80;
  char *local_78;
  undefined1 local_70;
  byte local_6f;
  
  *(undefined4 *)(param_1 + 0xfbc) = 0;
  puVar4 = PTR_DAT_04bb2720;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  iVar8 = 0;
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar6 = FUN_006bd550(*puVar9,0);
      iVar8 = 0;
      if (iVar6 == 0x758f7eaf) {
        iVar8 = 0;
        if (*(long *)puVar4 != 0) {
          lVar12 = *(long *)(*(long *)puVar4 + 0x330);
          iVar8 = 0;
          if (lVar12 != 0) {
            iVar8 = *(int *)(lVar12 + 0x244);
          }
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xc) != iVar8) {
    lVar12 = *(long *)puVar4;
    iVar8 = 0;
    if (lVar12 != 0) {
      if (*(long *)(lVar12 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar6 = FUN_006bd550(*puVar9,0);
        iVar8 = 0;
        if (iVar6 == 0x758f7eaf) {
          iVar8 = 0;
          if (*(long *)puVar4 != 0) {
            lVar12 = *(long *)(*(long *)puVar4 + 0x330);
            iVar8 = 0;
            if (lVar12 != 0) {
              iVar8 = *(int *)(lVar12 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar3 + 0x10) == iVar8) {
      local_114._0_1_ = s_IdrAirPort00_040b0b28[0];
      local_114._1_1_ = s_IdrAirPort00_040b0b28[1];
      local_114._2_1_ = s_IdrAirPort00_040b0b28[2];
      local_114._3_1_ = s_IdrAirPort00_040b0b28[3];
      local_114._4_1_ = s_IdrAirPort00_040b0b28[4];
      local_114._5_1_ = s_IdrAirPort00_040b0b28[5];
      local_114._6_1_ = s_IdrAirPort00_040b0b28[6];
      local_114._7_1_ = s_IdrAirPort00_040b0b28[7];
      local_10c._0_1_ = 'r';
      local_10c._1_1_ = 't';
      local_10c._2_1_ = '0';
      local_10c._3_1_ = '0';
      local_10c._4_1_ = '\0';
      uVar10 = *(undefined8 *)PTR_DAT_04bb27c0;
      goto LAB_017b8b30;
    }
    lVar12 = *(long *)puVar4;
    iVar8 = 0;
    if (lVar12 != 0) {
      if (*(long *)(lVar12 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar6 = FUN_006bd550(*puVar9,0);
        iVar8 = 0;
        if (iVar6 == 0x758f7eaf) {
          iVar8 = 0;
          if (*(long *)puVar4 != 0) {
            lVar12 = *(long *)(*(long *)puVar4 + 0x330);
            iVar8 = 0;
            if (lVar12 != 0) {
              iVar8 = *(int *)(lVar12 + 0x244);
            }
          }
        }
      }
    }
    puVar5 = PTR_DAT_04bb46b0;
    if (*(int *)(puVar3 + 0x14) == iVar8) {
      lVar12 = *(long *)PTR_DAT_04bb46b0;
      if (lVar12 == 0) {
LAB_017b8c90:
        uVar13 = 1;
      }
      else {
        puVar9 = *(undefined8 **)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x453) & 1) != 0) {
          if ((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) {
            lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
            if (lVar12 != 0) goto LAB_017b8c68;
          }
          goto LAB_017b8c90;
        }
        lVar12 = (**(code **)(*(long *)*puVar9 + 0x38))();
        if (lVar12 == 0) goto LAB_017b8c90;
        lVar12 = lVar12 + 0x70;
LAB_017b8c68:
        if (*(long **)(lVar12 + 0x1a0b70) == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          puVar9 = (undefined8 *)**(long **)(lVar12 + 0x1a0b70);
          uVar11 = 0;
          if (puVar9 != (undefined8 *)0x0) {
            uVar11 = (**(code **)*puVar9)();
          }
        }
        uVar13 = *(uint *)(*(long *)(lVar12 + 0x1a0b58) + *(long *)(lVar12 + 0x1a0b50));
        if (3 < uVar13) {
          uVar13 = 0;
        }
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x1a0b70) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x1a0b70) + 8), puVar9 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar9)();
        }
      }
      local_158 = CONCAT44(local_158._4_4_,uVar13);
      if (uVar13 != 2) {
        lVar12 = *(long *)puVar5;
        if (lVar12 == 0) {
LAB_017b8e3c:
          uVar13 = 1;
        }
        else {
          puVar9 = *(undefined8 **)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
            lVar12 = (**(code **)(*(long *)*puVar9 + 0x38))();
            if (lVar12 == 0) goto LAB_017b8e3c;
            lVar12 = lVar12 + 0x70;
          }
          else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
                  (lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar12 == 0))
          goto LAB_017b8e3c;
          if (*(long **)(lVar12 + 0x1a0b70) == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            puVar9 = (undefined8 *)**(long **)(lVar12 + 0x1a0b70);
            uVar11 = 0;
            if (puVar9 != (undefined8 *)0x0) {
              uVar11 = (**(code **)*puVar9)();
            }
          }
          uVar13 = *(uint *)(*(long *)(lVar12 + 0x1a0b58) + *(long *)(lVar12 + 0x1a0b50));
          if (3 < uVar13) {
            uVar13 = 0;
          }
          if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x1a0b70) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x1a0b70) + 8),
             puVar9 != (undefined8 *)0x0)) {
            (**(code **)*puVar9)();
          }
        }
        local_158 = CONCAT44(local_158._4_4_,uVar13);
        if (uVar13 != 3) goto LAB_017b9710;
      }
      local_13c = 0;
      local_134 = 0;
      local_118 = 0x80;
      local_90 = 7;
      local_158 = 0x3e00000000;
      local_150 = 0x43200000;
      lVar12 = 0;
      local_148 = 0x43200000;
      uStack_144 = 0x3f800000;
      local_128 = PTR_DAT_04bb2d88 + 0x10;
      local_120 = &local_114;
      local_1e0 = 0x40;
      local_1f0 = PTR_DAT_04bb2bc0 + 0x10;
      local_140 = 0;
      local_95 = 0;
      local_114 = local_114 & 0xffffffffffffff00;
      local_88 = 0;
      local_8c = 0;
      local_1dc._0_1_ = 0;
      local_19d = 0;
      do {
        if (*(char *)((long)&local_1dc + lVar12) == '\0') goto LAB_017b8f1c;
        if (*(char *)((long)&local_1dc + lVar12 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_017b8f1c;
        }
        if (*(char *)((long)&local_1dc + lVar12 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_017b8f1c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_017b8f1c:
      uVar13 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
      uVar16 = 10;
      if (0x35 < uVar13) {
        uVar16 = 0x3f - uVar13;
      }
      local_1e8 = &local_1dc;
      if (0 < (int)uVar16) {
        memcpy((char *)((long)&local_1dc + (ulong)uVar13),"IdrMarket0",(ulong)uVar16);
        *(char *)((long)&local_1dc + (ulong)uVar16 + (ulong)uVar13) = '\0';
      }
      lVar12 = *(long *)puVar5;
      if (lVar12 == 0) {
LAB_017b8fcc:
        uVar13 = 1;
      }
      else {
        puVar9 = *(undefined8 **)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
          lVar12 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar12 == 0) goto LAB_017b8fcc;
          lVar12 = lVar12 + 0x70;
        }
        else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
                (lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar12 == 0))
        goto LAB_017b8fcc;
        if (*(long **)(lVar12 + 0x1a0b70) == (long *)0x0) {
          uVar11 = 0;
        }
        else {
          puVar9 = (undefined8 *)**(long **)(lVar12 + 0x1a0b70);
          uVar11 = 0;
          if (puVar9 != (undefined8 *)0x0) {
            uVar11 = (**(code **)*puVar9)();
          }
        }
        uVar13 = *(uint *)(*(long *)(lVar12 + 0x1a0b58) + *(long *)(lVar12 + 0x1a0b50));
        if (3 < uVar13) {
          uVar13 = 0;
        }
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x1a0b70) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x1a0b70) + 8), puVar9 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar9)();
        }
      }
      local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar13);
      FUN_038d13f0(&local_1f0,&DAT_040c7be9,uVar13 - 1);
      __dest = local_120;
      (**(code **)(local_1f0 + 0x18))(&local_1f0);
      __src = local_1e8;
      if (__dest != local_1e8) {
        (**(code **)(local_1f0 + 0x18))(&local_1f0);
        lVar12 = 0;
        do {
          if (*(char *)((long)local_1e8 + lVar12) == '\0') goto LAB_017b96c8;
          if (*(char *)((long)local_1e8 + lVar12 + 1) == '\0') goto LAB_017b96bc;
          if (*(char *)((long)local_1e8 + lVar12 + 2) == '\0') goto LAB_017b96c4;
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        goto LAB_017b96b4;
      }
      goto LAB_017b96f0;
    }
    lVar12 = *(long *)puVar4;
    iVar8 = 0;
    if (lVar12 != 0) {
      if (*(long *)(lVar12 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar6 = FUN_006bd550(*puVar9,0);
        iVar8 = 0;
        if (iVar6 == 0x758f7eaf) {
          iVar8 = 0;
          if (*(long *)puVar4 != 0) {
            lVar12 = *(long *)(*(long *)puVar4 + 0x330);
            iVar8 = 0;
            if (lVar12 != 0) {
              iVar8 = *(int *)(lVar12 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar3 + 0x8c) == iVar8) {
      local_140 = 0;
      local_95 = 0;
      local_114 = local_114 & 0xffffffffffffff00;
      lVar12 = 0;
      local_90 = 7;
      local_118 = 0x80;
      local_88 = 0;
      local_1f0 = PTR_DAT_04bb2d88 + 0x10;
      local_8c = 0;
      local_13c = 0;
      local_134 = 0;
      local_1e0 = 0x80;
      local_1dc._0_1_ = 0;
      local_15d = 0;
      local_128 = local_1f0;
      local_120 = &local_114;
      local_158 = 0x3e00000000;
      local_150 = 0x43200000;
      local_148 = 0x43200000;
      uStack_144 = 0x3f800000;
      do {
        if (*(char *)((long)&local_1dc + lVar12) == '\0') goto LAB_017b905c;
        if (*(char *)((long)&local_1dc + lVar12 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_017b905c;
        }
        if (*(char *)((long)&local_1dc + lVar12 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_017b905c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_017b905c:
      uVar13 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
      uVar16 = 0xd;
      if (0x72 < uVar13) {
        uVar16 = 0x7f - uVar13;
      }
      local_1e8 = &local_1dc;
      if (0 < (int)uVar16) {
        memcpy((char *)((long)&local_1dc + (ulong)uVar13),"IdrMuseumArt_",(ulong)uVar16);
        *(char *)((long)&local_1dc + (ulong)uVar16 + (ulong)uVar13) = '\0';
      }
      lVar12 = *(long *)puVar4;
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x330) == 0)) {
LAB_017b90fc:
        uVar7 = 0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar8 = FUN_006bd550(*puVar9,0);
        uVar7 = 0;
        if (iVar8 == 0x758f7eaf) {
          if ((*(long *)puVar4 == 0) || (lVar12 = *(long *)(*(long *)puVar4 + 0x330), lVar12 == 0))
          goto LAB_017b90fc;
          uVar7 = *(undefined4 *)(lVar12 + 0x248);
        }
      }
      FUN_038d13f0(&local_1f0,&DAT_040c7be9,uVar7);
      __dest = local_120;
      (**(code **)(local_1f0 + 0x18))(&local_1f0);
      __src = local_1e8;
      if (__dest == local_1e8) goto LAB_017b96f0;
      (**(code **)(local_1f0 + 0x18))(&local_1f0);
      lVar12 = 0;
      do {
        if (*(char *)((long)local_1e8 + lVar12) == '\0') goto LAB_017b96c8;
        if (*(char *)((long)local_1e8 + lVar12 + 1) == '\0') goto LAB_017b96bc;
        if (*(char *)((long)local_1e8 + lVar12 + 2) == '\0') goto LAB_017b96c4;
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
LAB_017b96b4:
      lVar12 = 0;
      goto LAB_017b96c8;
    }
    lVar12 = *(long *)puVar4;
    iVar8 = 0;
    if (lVar12 != 0) {
      if (*(long *)(lVar12 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar6 = FUN_006bd550(*puVar9,0);
        iVar8 = 0;
        if (iVar6 == 0x758f7eaf) {
          iVar8 = 0;
          if (*(long *)puVar4 != 0) {
            lVar12 = *(long *)(*(long *)puVar4 + 0x330);
            iVar8 = 0;
            if (lVar12 != 0) {
              iVar8 = *(int *)(lVar12 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar3 + 0x18) == iVar8) {
      local_13c = 0;
      local_134 = 0;
      uStack_144 = 0x3f800000;
      local_140 = 0;
      local_90 = 7;
      local_118 = 0x80;
      local_1e0 = 0x40;
      lVar12 = 0;
      local_128 = PTR_DAT_04bb2d88 + 0x10;
      local_120 = &local_114;
      local_148 = 0;
      local_1f0 = PTR_DAT_04bb2bc0 + 0x10;
      local_95 = 0;
      local_114 = local_114 & 0xffffffffffffff00;
      local_88 = 0;
      local_8c = 0;
      local_1dc._0_1_ = 0;
      local_19d = 0;
      local_158 = 0x3e00000000;
      local_150 = 0;
      do {
        if (*(char *)((long)&local_1dc + lVar12) == '\0') goto LAB_017b9324;
        if (*(char *)((long)&local_1dc + lVar12 + 1) == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_017b9324;
        }
        if (*(char *)((long)&local_1dc + lVar12 + 2) == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_017b9324;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_017b9324:
      uVar13 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
      uVar16 = 0xd;
      if (0x32 < uVar13) {
        uVar16 = 0x3f - uVar13;
      }
      local_1e8 = &local_1dc;
      if (0 < (int)uVar16) {
        memcpy((char *)((long)&local_1dc + (ulong)uVar13),"IdrMuseumEnt0",(ulong)uVar16);
        *(char *)((long)&local_1dc + (ulong)uVar16 + (ulong)uVar13) = '\0';
      }
      lVar12 = *(long *)PTR_DAT_04bb46b0;
      if (lVar12 == 0) {
LAB_017b93f0:
        uVar13 = 2;
      }
      else {
        puVar9 = *(undefined8 **)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
          lVar12 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar12 == 0) goto LAB_017b93f0;
          lVar12 = lVar12 + 0x70;
        }
        else if (((puVar9 == (undefined8 *)0x0) || ((long *)puVar9[0x26] == (long *)0x0)) ||
                (lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar12 == 0))
        goto LAB_017b93f0;
        local_78 = (char *)(lVar12 + 0x1bf190);
        local_70 = 1;
        if (*(long **)(lVar12 + 0x1bf1b8) == (long *)0x0) {
          local_6f = 0;
        }
        else {
          puVar9 = (undefined8 *)**(long **)(lVar12 + 0x1bf1b8);
          local_6f = 0;
          if (puVar9 != (undefined8 *)0x0) {
            local_6f = (**(code **)*puVar9)();
          }
        }
        local_6f = local_6f & 1;
        local_80 = PTR_DAT_04bb64a8 + 0x10;
        uVar13 = *(uint *)(*(long *)(lVar12 + 0x1bf1a0) + *(long *)(lVar12 + 0x1bf198));
        if (5 < uVar13) {
          uVar13 = 0;
        }
        FUN_02640184(&local_80);
      }
      local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar13);
      if (4 < (int)uVar13) {
        uVar13 = 5;
      }
      FUN_038d13f0(&local_1f0,&DAT_040c7be9,uVar13 - 2);
      __dest = local_120;
      local_150 = 0x43200000;
      local_148 = 0x43200000;
      (**(code **)(local_1f0 + 0x18))(&local_1f0);
      __src = local_1e8;
      if (__dest != local_1e8) {
        (**(code **)(local_1f0 + 0x18))(&local_1f0);
        lVar12 = 0;
        do {
          if (*(char *)((long)local_1e8 + lVar12) == '\0') goto LAB_017b96c8;
          if (*(char *)((long)local_1e8 + lVar12 + 1) == '\0') goto LAB_017b96bc;
          if (*(char *)((long)local_1e8 + lVar12 + 2) == '\0') goto LAB_017b96c4;
          lVar12 = lVar12 + 3;
        } while (lVar12 != 0x80001);
        goto LAB_017b96b4;
      }
      goto LAB_017b96f0;
    }
    lVar12 = *(long *)puVar4;
    iVar8 = 0;
    if (lVar12 != 0) {
      if (*(long *)(lVar12 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar6 = FUN_006bd550(*puVar9,0);
        iVar8 = 0;
        if (iVar6 == 0x758f7eaf) {
          iVar8 = 0;
          if (*(long *)puVar4 != 0) {
            lVar12 = *(long *)(*(long *)puVar4 + 0x330);
            iVar8 = 0;
            if (lVar12 != 0) {
              iVar8 = *(int *)(lVar12 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar3 + 0x1c) == iVar8) {
      FUN_007091b4(&local_158);
      local_15d = 0;
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_1e0 = 0x80;
      local_150 = 0x43200000;
      local_148 = 0x43200000;
      local_1e8 = &local_1dc;
      local_1dc._0_1_ = 0;
      local_1f0 = PTR_DAT_04bb2d88 + 0x10;
      uVar7 = FUN_02917204();
      FUN_01810570(&local_1f0,uVar7);
LAB_017b955c:
      FUN_00709380(&local_158,&local_1f0);
      goto LAB_017b96f0;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x20) == iVar8) {
      FUN_007091b4(&local_158);
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_1f0 = PTR_DAT_04bb2d88 + 0x10;
      local_78 = "IdrMuseumFossil_";
LAB_017b952c:
      local_1e8 = &local_1dc;
      local_148 = 0x43200000;
      local_150 = 0x43200000;
      local_15d = 0;
      local_1dc._0_1_ = 0;
      local_1e0 = 0x80;
      local_80 = PTR_DAT_04bb2020 + 0x10;
      FUN_00958800(&local_1f0,&local_80,0xffffffff);
      uVar7 = FUN_02917204();
      FUN_038d13f0(&local_1f0,&DAT_040c7be9,uVar7);
      goto LAB_017b955c;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x24) == iVar8) {
      FUN_007091b4(&local_158);
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_1f0 = PTR_DAT_04bb2d88 + 0x10;
      local_78 = "IdrMuseumInsect_";
      goto LAB_017b952c;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0xc0) == iVar8) {
      FUN_007091b4(&local_158);
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_150 = 0x43200000;
      local_148 = 0x43200000;
      local_1e8 = (ulong *)0x40ba9f7;
      goto LAB_017b95e0;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x28) == iVar8) {
      FUN_007091b4(&local_158);
      local_78 = "IdrOffice0";
LAB_017b9cd8:
      local_1f0 = PTR_DAT_04bb2bc0 + 0x10;
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_19d = 0;
      local_1e0 = 0x40;
      local_1e8 = &local_1dc;
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_1dc._0_1_ = 0;
      FUN_008aa0a0(&local_1f0,&local_80,0xffffffff);
      local_80 = (undefined *)CONCAT44(local_80._4_4_,2);
      FUN_038d13f0(&local_1f0,&DAT_040c7be9,1);
LAB_017b9d14:
      local_150 = 0x43200000;
      local_148 = 0x43200000;
      goto LAB_017b955c;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x2c) == iVar8) {
      FUN_007091b4(&local_158);
      local_78 = "IdrOfficeDemo0";
      goto LAB_017b9cd8;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x30) == iVar8) {
      FUN_007091b4(&local_158);
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      local_1e8 = (ulong *)0x40ca383;
      goto LAB_017b9d14;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x90) == iVar8) {
      FUN_007091b4(&local_158);
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_150 = 0x43200000;
      local_148 = 0x43200000;
      local_1e8 = (ulong *)0x40c51f7;
LAB_017b95e0:
      local_1f0 = PTR_DAT_04bb2020 + 0x10;
      goto LAB_017b955c;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x34) == iVar8) {
      FUN_007091b4(&local_158);
      local_158 = CONCAT44(0x3e,(uint)local_158);
      local_150 = 0x43200000;
      local_148 = 0x43200000;
      local_1e8 = (ulong *)0x40a6407;
      goto LAB_017b95e0;
    }
    iVar8 = FUN_02917290();
    if (*(int *)(puVar3 + 0x80) == iVar8) {
      FUN_007091b4(&local_158);
      uVar7 = 0x3f;
    }
    else {
      iVar8 = FUN_02917290();
      if ((*(int *)(puVar3 + 0x84) == iVar8) ||
         (iVar8 = FUN_02917290(), *(int *)(puVar3 + 0xbc) == iVar8)) {
        FUN_007091b4(&local_158);
        local_15d = 0;
        local_158 = CONCAT44(0x3e,(uint)local_158);
        local_150 = 0x43200000;
        local_148 = 0x43200000;
        local_1e8 = &local_1dc;
        local_1e0 = 0x80;
        local_1f0 = PTR_DAT_04bb2d88 + 0x10;
        local_1dc._0_1_ = 0;
        local_80 = (undefined *)CONCAT44(local_80._4_4_,0x19);
        uVar11 = FUN_0290cbcc(&local_80);
        puVar9 = &DAT_05292300;
        if ((uVar11 & 1) == 0) {
          puVar9 = &DAT_05292310;
        }
        FUN_008aa0a0(&local_1f0,puVar9,0xffffffff);
        goto LAB_017b955c;
      }
      iVar8 = FUN_02917290();
      if (*(int *)(puVar3 + 0x88) != iVar8) {
        iVar8 = FUN_02917290();
        if (*(int *)(puVar3 + 0x94) == iVar8) {
          FUN_007091b4(&local_158);
          local_158 = CONCAT44(0x3e,(uint)local_158);
          local_150 = 0x43200000;
          local_148 = 0x43200000;
          uVar11 = FUN_035a3380();
          local_1e8 = (ulong *)0x405ca29;
          if ((uVar11 & 1) == 0) {
            local_1e8 = (ulong *)0x40f9b1a;
          }
        }
        else {
          iVar8 = FUN_02917290();
          if (*(int *)(puVar3 + 0xa0) == iVar8) {
            FUN_007091b4(&local_158);
            local_158 = CONCAT44(0x3e,(uint)local_158);
            local_1f0 = PTR_DAT_04bb2d88 + 0x10;
            local_78 = "IdrWherearenOffice00_";
            goto LAB_017b952c;
          }
          iVar8 = FUN_02917290();
          if (*(int *)(puVar3 + 200) != iVar8) {
            local_158 = CONCAT44(local_158._4_4_,6);
            uVar11 = FUN_0290cbcc(&local_158);
            if ((uVar11 & 1) == 0) {
              local_158 = CONCAT44(local_158._4_4_,7);
              uVar11 = FUN_0290cbcc(&local_158);
              if ((uVar11 & 1) == 0) {
                local_158 = CONCAT44(local_158._4_4_,0x15);
                uVar11 = FUN_0290cbcc(&local_158);
                if ((((uVar11 & 1) == 0) && (uVar11 = FUN_0180c6f0(), (uVar11 & 1) == 0)) &&
                   ((uVar11 = FUN_0180b340(), (uVar11 & 1) == 0 &&
                    (((uVar11 = FUN_0180b3e0(), (uVar11 & 1) == 0 &&
                      (uVar11 = FUN_0180b660(), (uVar11 & 1) == 0)) &&
                     (uVar11 = FUN_0180b700(), (uVar11 & 1) == 0)))))) {
                  FUN_00961ef0(0,*(undefined8 *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),0);
                  goto LAB_017b9710;
                }
              }
            }
            FUN_017eaf50(param_1 + 0xda0);
            goto LAB_017b9710;
          }
          FUN_007091b4(&local_158);
          local_158 = CONCAT44(0x3e,(uint)local_158);
          local_150 = 0x43200000;
          local_148 = 0x43200000;
          local_1e8 = (ulong *)0x40b53ed;
        }
        goto LAB_017b95e0;
      }
      FUN_007091b4(&local_158);
      uVar7 = 0x40;
    }
    local_158 = CONCAT44(uVar7,(uint)local_158);
    local_150 = 0x43200000;
    local_148 = 0x43200000;
    uVar10 = *(undefined8 *)PTR_DAT_04bb27c0;
    goto LAB_017b96fc;
  }
  local_104 = 0x6f6d;
  local_114._0_1_ = s_IdrTourCounterDemo_040c01d1[0];
  local_114._1_1_ = s_IdrTourCounterDemo_040c01d1[1];
  local_114._2_1_ = s_IdrTourCounterDemo_040c01d1[2];
  local_114._3_1_ = s_IdrTourCounterDemo_040c01d1[3];
  local_114._4_1_ = s_IdrTourCounterDemo_040c01d1[4];
  local_114._5_1_ = s_IdrTourCounterDemo_040c01d1[5];
  local_114._6_1_ = s_IdrTourCounterDemo_040c01d1[6];
  local_114._7_1_ = s_IdrTourCounterDemo_040c01d1[7];
  local_10c._0_1_ = s_IdrTourCounterDemo_040c01d1[8];
  local_10c._1_1_ = s_IdrTourCounterDemo_040c01d1[9];
  local_10c._2_1_ = s_IdrTourCounterDemo_040c01d1[10];
  local_10c._3_1_ = s_IdrTourCounterDemo_040c01d1[0xb];
  local_10c._4_1_ = s_IdrTourCounterDemo_040c01d1[0xc];
  cStack_107 = s_IdrTourCounterDemo_040c01d1[0xd];
  cStack_106 = s_IdrTourCounterDemo_040c01d1[0xe];
  cStack_105 = s_IdrTourCounterDemo_040c01d1[0xf];
  local_102 = 0;
  uVar10 = *(undefined8 *)PTR_DAT_04bb27c0;
LAB_017b8b30:
  local_128 = PTR_DAT_04bb2d88 + 0x10;
  local_88 = 0;
  local_8c = 0;
  local_90 = 7;
  local_95 = 0;
  local_118 = 0x80;
  local_120 = &local_114;
  local_134 = 0;
  local_13c = 0;
  local_140 = 0;
  uStack_144 = 0x3f800000;
  local_148 = 0x43200000;
  local_150 = 0x43200000;
  local_158 = 0x3e00000000;
  uVar11 = 0;
  goto LAB_017b9704;
LAB_017b96bc:
  lVar12 = lVar12 + 1;
  goto LAB_017b96c8;
LAB_017b96c4:
  lVar12 = lVar12 + 2;
LAB_017b96c8:
  iVar8 = (int)lVar12;
  if (local_118 <= (int)lVar12) {
    iVar8 = local_118 + -1;
  }
  memcpy(__dest,__src,(long)iVar8);
  *(char *)((long)__dest + (long)iVar8) = '\0';
LAB_017b96f0:
  uVar10 = *(undefined8 *)PTR_DAT_04bb27c0;
LAB_017b96fc:
  uVar11 = local_158 & 0xffffffff;
LAB_017b9704:
  uVar7 = FUN_007402e0(uVar10,&local_158,uVar11,0);
  *(undefined4 *)(param_1 + 0xfbc) = uVar7;
LAB_017b9710:
  puVar3 = PTR_DAT_04bb2640;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_158._0_4_ = 0x13;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 0x13 & 1) != 0) && (lVar12 = *(long *)puVar4, lVar12 != 0)) &&
       (*(long *)(lVar12 + 0x330) != 0)) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar8 = FUN_006bd550(*puVar9,0);
      if (((iVar8 == 0x758f7eaf) && (lVar12 = *(long *)puVar4, lVar12 != 0)) &&
         (*(long *)(lVar12 + 0x330) != 0)) {
        uVar13 = 0;
        uVar16 = 1;
        while ((lVar12 != 0 && (*(long *)(lVar12 + 0x330) != 0))) {
          puVar9 = (undefined8 *)
                   (**(code **)(**(long **)puVar3 + 0x18))
                             (*(long **)puVar3,*(undefined4 *)(lVar12 + 0x338));
          FUN_006bd550(*puVar9,0);
          lVar12 = *(long *)puVar4;
          if (lVar12 == 0) {
            return;
          }
          if (*(long *)(lVar12 + 0x330) == 0) {
            return;
          }
          puVar9 = (undefined8 *)
                   (**(code **)(**(long **)puVar3 + 0x18))
                             (*(long **)puVar3,*(undefined4 *)(lVar12 + 0x338));
          iVar8 = FUN_006bd550(*puVar9,0);
          if (iVar8 != 0x758f7eaf) {
            return;
          }
          if (*(long *)puVar4 == 0) {
            return;
          }
          lVar12 = *(long *)(*(long *)puVar4 + 0x330);
          if (lVar12 == 0) {
            return;
          }
          if (*(uint *)(lVar12 + 0x260) <= uVar13) {
            return;
          }
          lVar12 = *(long *)puVar4;
          if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
            puVar9 = (undefined8 *)
                     (**(code **)(**(long **)puVar3 + 0x18))
                               (*(long **)puVar3,*(undefined4 *)(lVar12 + 0x338));
            FUN_006bd550(*puVar9,0);
            lVar12 = *(long *)puVar4;
            if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
              puVar9 = (undefined8 *)
                       (**(code **)(**(long **)puVar3 + 0x18))
                                 (*(long **)puVar3,*(undefined4 *)(lVar12 + 0x338));
              iVar8 = FUN_006bd550(*puVar9,0);
              if (iVar8 == 0x758f7eaf) {
                if (*(long *)puVar4 != 0) {
                  lVar12 = *(long *)(*(long *)puVar4 + 0x330);
                  if ((lVar12 != 0) && (uVar13 < *(uint *)(lVar12 + 0x260))) {
                    uVar18 = uVar16 & 0xfffffff8;
                    lVar12 = lVar12 + 0x250;
                    if (6 < uVar13) {
                      uVar14 = uVar18;
                      do {
                        uVar14 = uVar14 - 8;
                        lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(*(long *)(lVar12 + 8) + 8) + 8) + 8) + 8) + 8)
                                                  + 8) + 8);
                      } while (uVar14 != 0);
                    }
                    uVar14 = uVar16 & 7;
                    if ((uVar13 + 1 & 7) != 0) {
                      uVar15 = uVar14;
                      do {
                        lVar12 = *(long *)(lVar12 + 8);
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    if (lVar12 != 0) {
                      if (((int *)(lVar12 + -0x40) != (int *)0x0) &&
                         (iVar8 = *(int *)(lVar12 + -0x40),
                         iVar8 == 0x593d97a5 || iVar8 == -0x21a6781c)) {
                        lVar12 = *(long *)PTR_DAT_04bb46b0;
                        if (lVar12 == 0) {
LAB_017b9a04:
                          uVar15 = 2;
                        }
                        else {
                          puVar9 = *(undefined8 **)(lVar12 + 0x10);
                          if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
                            lVar12 = (**(code **)(*(long *)*puVar9 + 0x38))();
                            if (lVar12 == 0) goto LAB_017b9a04;
                            lVar12 = lVar12 + 0x70;
                          }
                          else if (((puVar9 == (undefined8 *)0x0) ||
                                   ((long *)puVar9[0x26] == (long *)0x0)) ||
                                  (lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(),
                                  lVar12 == 0)) goto LAB_017b9a04;
                          if (*(long **)(lVar12 + 0x1bf1b8) == (long *)0x0) {
                            uVar11 = 0;
                          }
                          else {
                            puVar9 = (undefined8 *)**(long **)(lVar12 + 0x1bf1b8);
                            uVar11 = 0;
                            if (puVar9 != (undefined8 *)0x0) {
                              uVar11 = (**(code **)*puVar9)();
                            }
                          }
                          uVar15 = *(uint *)(*(long *)(lVar12 + 0x1bf1a0) +
                                            *(long *)(lVar12 + 0x1bf198));
                          if (5 < uVar15) {
                            uVar15 = 0;
                          }
                          if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x1bf1b8) != 0)) &&
                             (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x1bf1b8) + 8),
                             puVar9 != (undefined8 *)0x0)) {
                            (**(code **)*puVar9)();
                          }
                        }
                        puVar17 = (undefined4 *)&UNK_04102e80;
                        local_158._0_4_ = uVar15;
                        if (uVar15 != 4) {
                          lVar12 = *(long *)PTR_DAT_04bb46b0;
                          if (lVar12 == 0) {
LAB_017b9aec:
                            uVar15 = 2;
                          }
                          else {
                            puVar9 = *(undefined8 **)(lVar12 + 0x10);
                            if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
                              lVar12 = (**(code **)(*(long *)*puVar9 + 0x38))();
                              if (lVar12 == 0) goto LAB_017b9aec;
                              lVar12 = lVar12 + 0x70;
LAB_017b9ac0:
                              if (*(long **)(lVar12 + 0x1bf1b8) == (long *)0x0) {
                                uVar11 = 0;
                              }
                              else {
                                puVar9 = (undefined8 *)**(long **)(lVar12 + 0x1bf1b8);
                                uVar11 = 0;
                                if (puVar9 != (undefined8 *)0x0) {
                                  uVar11 = (**(code **)*puVar9)();
                                }
                              }
                              uVar15 = *(uint *)(*(long *)(lVar12 + 0x1bf1a0) +
                                                *(long *)(lVar12 + 0x1bf198));
                              if (5 < uVar15) {
                                uVar15 = 0;
                              }
                              if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x1bf1b8) != 0)) &&
                                 (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x1bf1b8) + 8),
                                 puVar9 != (undefined8 *)0x0)) {
                                (**(code **)*puVar9)();
                              }
                            }
                            else {
                              if ((puVar9 == (undefined8 *)0x0) ||
                                 ((long *)puVar9[0x26] == (long *)0x0)) goto LAB_017b9aec;
                              lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
                              if (lVar12 != 0) goto LAB_017b9ac0;
                              uVar15 = 2;
                            }
                          }
                          puVar17 = &DAT_04102ecc;
                          local_158._0_4_ = uVar15;
                          if (uVar15 != 5) goto LAB_017b97d0;
                        }
                        lVar12 = *(long *)puVar4;
                        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
                          puVar9 = (undefined8 *)
                                   (**(code **)(**(long **)puVar3 + 0x18))
                                             (*(long **)puVar3,*(undefined4 *)(lVar12 + 0x338));
                          iVar8 = FUN_006bd550(*puVar9,0);
                          if (((iVar8 == 0x758f7eaf) &&
                              ((*(long *)puVar4 != 0 &&
                               (lVar12 = *(long *)(*(long *)puVar4 + 0x330), lVar12 != 0)))) &&
                             (uVar13 < *(uint *)(lVar12 + 0x260))) {
                            lVar12 = lVar12 + 0x250;
                            if (6 < uVar13) {
                              do {
                                uVar18 = uVar18 - 8;
                                lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  (*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8) +
                                                  8) + 8) + 8) + 8);
                              } while (uVar18 != 0);
                            }
                            uVar18 = uVar13 + 1 & 7;
                            while (uVar18 != 0) {
                              lVar12 = *(long *)(lVar12 + 8);
                              uVar14 = uVar14 - 1;
                              uVar18 = uVar14;
                            }
                            if ((lVar12 != 0) &&
                               ((undefined4 *)(lVar12 + -0x40) != (undefined4 *)0x0)) {
                              uVar7 = *puVar17;
                              *(undefined1 *)(lVar12 + -3) = 1;
                              *(undefined4 *)(lVar12 + -0x40) = uVar7;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_017b97d0:
          uVar13 = uVar13 + 1;
          uVar16 = uVar16 + 1;
          lVar12 = *(long *)puVar4;
        }
      }
    }
  }
  return;
}


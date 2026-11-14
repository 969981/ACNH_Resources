
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c23f70(long param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  ushort *puVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  char cVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  float *pfVar13;
  char *pcVar14;
  ushort uVar15;
  uint *puVar16;
  int iVar17;
  undefined8 *puVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  ulong uVar23;
  uint *puVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  uint local_1ac;
  uint local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 local_148;
  uint local_140;
  undefined4 uStack_13c;
  undefined **local_138;
  undefined2 *puStack_130;
  undefined4 local_128;
  undefined2 local_124 [15];
  undefined1 local_105;
  undefined **local_100;
  undefined2 *puStack_f8;
  undefined4 local_f0;
  undefined2 local_ec [3];
  undefined1 local_e5;
  undefined **local_e0;
  undefined2 *puStack_d8;
  undefined4 local_d0;
  undefined2 local_cc [15];
  undefined1 local_ad;
  undefined **local_a8;
  undefined2 *puStack_a0;
  undefined4 local_98;
  undefined2 local_94 [3];
  undefined1 local_8d;
  uint local_88;
  undefined2 local_84;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (0 < *param_2) {
    lVar9 = 0;
    puVar10 = *(undefined8 **)(param_2 + 4);
    do {
      puVar18 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar9 * 8);
      lVar9 = lVar9 + 1;
      *puVar18 = puVar10;
      *(undefined8 **)(param_2 + 4) = puVar18;
      puVar10 = puVar18;
    } while (lVar9 < *param_2);
  }
  *param_2 = 0;
  uVar25 = 0;
  if (param_3 < -0x83ceb3d) {
    if (param_3 < -0x15fdefdb) {
      if (param_3 == -0x477aafe0) {
        uVar25 = 5;
      }
      else if (param_3 == -0x2099c902) {
        uVar25 = 9;
      }
    }
    else if (param_3 == -0x15fdefdb) {
      uVar25 = 7;
    }
    else if (param_3 == -0xe632453) {
      uVar25 = 3;
    }
  }
  else if (param_3 < 0x17f77b87) {
    if (param_3 == -0x83ceb3d) {
      uVar25 = 4;
    }
    else if (param_3 == -0x169521c) {
      uVar25 = 1;
    }
  }
  else if (param_3 == 0x17f77b87) {
    uVar25 = 8;
  }
  else if (param_3 == 0x3b3bf38a) {
    uVar25 = 6;
  }
  else if (param_3 == 0x3fce6459) {
    uVar25 = 2;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar10 + 0x38))();
    if (lVar9 == 0) {
      return;
    }
    lVar9 = lVar9 + 0x70;
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar10[0x26] == (long *)0x0) {
      return;
    }
    lVar9 = (**(code **)(*(long *)puVar10[0x26] + 0x38))();
    if (lVar9 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar9 + 0x1bf1b8) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x1bf1b8), puVar10 == (undefined8 *)0x0)) {
    local_1ac = 0;
  }
  else {
    local_1ac = (**(code **)*puVar10)();
  }
  uVar23 = 0;
LAB_01c2421c:
  uVar28 = *(uint *)(param_1 + 0x1d0);
  if ((int)uVar28 < 1) {
    uVar20 = 0;
    if (*(long *)(param_1 + 0xc0) != 0) {
      puVar24 = *(uint **)(*(long *)(param_1 + 0xc0) + 8);
      uVar20 = 0;
      if (puVar24 != (uint *)0x0) {
        uVar20 = (ulong)*puVar24;
      }
    }
    if (uVar23 < uVar20) {
      if (0 < (int)uVar28) goto LAB_01c24258;
      if ((((*(long *)(param_1 + 0xc0) != 0) &&
           (puVar24 = *(uint **)(*(long *)(param_1 + 0xc0) + 8), puVar24 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0xd8) <= uVar23 ||
           (*(char *)(*(long *)(param_1 + 0xe0) + uVar23) != '\0')))) &&
         (((uVar23 < *puVar24 && (puVar24[1] != 0)) && ((ushort)puVar24[2] != 0)))) {
        iVar17 = 0xc;
        if (*(char *)((long)puVar24 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar24 = (uint *)((ulong)(puVar24[1] * (int)uVar23 + (uint)(ushort)puVar24[2] * 8 + iVar17)
                          + (long)puVar24);
        goto joined_r0x01c24434;
      }
      goto LAB_01c24218;
    }
  }
  else if (uVar23 < uVar28) {
LAB_01c24258:
    if (uVar28 <= uVar23) goto LAB_01c24218;
    uVar20 = uVar23 & 0xffffffff;
    if (*(uint *)(param_1 + 0x1c0) <= uVar23) {
      uVar20 = 0;
    }
    puVar24 = *(uint **)(*(long *)(param_1 + 0x1c8) + uVar20 * 8);
joined_r0x01c24434:
    if (puVar24 == (uint *)0x0) goto LAB_01c24218;
    local_150 = 0;
    local_148 = 0;
    local_128 = 0x20;
    local_105 = 0;
    local_124[0] = 0x20;
    local_f0 = 8;
    local_e5 = 0;
    local_ec[0] = 0x20;
    local_d0 = 0x20;
    local_ad = 0;
    local_cc[0] = 0x20;
    local_98 = 8;
    local_8d = 0;
    local_94[0] = 0x20;
    local_88 = 0;
    local_84 = 0;
    local_70 = 0;
    local_140 = _DAT_05586008;
    uStack_13c = DAT_0558600c;
    local_80 = 0;
    local_78 = 0;
    local_138 = &PTR_LAB_048f9700;
    local_100 = &PTR_LAB_04908da0;
    local_e0 = &PTR_LAB_048f9700;
    local_a8 = &PTR_LAB_04908da0;
    if (*puVar24 != 0) {
      cVar8 = DAT_0534be78;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          DAT_0534be78 = '\x01';
          DAT_0534be7c = -1;
          DAT_0534be84 = 0xffffffffffffffff;
          DAT_0534be8c = -1;
          DAT_0534be94 = 0xffffffff;
        }
        else {
          if (-1 < DAT_0534be7c) {
            if ((ushort *)((ulong)DAT_0534be7c._4_4_ + (long)puVar24) != (ushort *)0x0) {
              uVar15 = *(ushort *)((ulong)DAT_0534be7c._4_4_ + (long)puVar24);
              goto LAB_01c24454;
            }
            break;
          }
          if (DAT_0534be7c._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar24;
        uVar15 = 0xfffe;
        if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c24454;
        lVar4 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
        if (lVar4 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
        DAT_0534be7c = CONCAT44(0xfffffffe,(undefined4)DAT_0534be7c);
        if (uVar20 == 0) break;
        piVar19 = (int *)(lVar4 + 4);
        while (piVar19[-1] != -0x489482c9) {
          piVar19 = piVar19 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_01c24450;
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        DAT_0534be7c = CONCAT44(iVar17,(undefined4)DAT_0534be7c);
        if (*puVar24 == 0) break;
      } while( true );
    }
LAB_01c24450:
    uVar15 = 0xfffe;
LAB_01c24454:
    local_158 = (uint)uVar15;
    local_154 = 0;
    puStack_130 = local_124;
    puStack_f8 = local_ec;
    puStack_d8 = local_cc;
    puStack_a0 = local_94;
    FUN_0277d4ac(&local_158);
    local_140 = local_158;
    uStack_13c = local_154;
    if (*puVar24 != 0) {
      cVar8 = DAT_0534be78;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          DAT_0534be78 = '\x01';
          DAT_0534be7c = -1;
          DAT_0534be84 = 0xffffffffffffffff;
          DAT_0534be8c = -1;
          DAT_0534be94 = 0xffffffff;
        }
        else {
          if (-1 < (int)DAT_0534be84) {
            puVar1 = (ushort *)((DAT_0534be84 & 0xffffffff) + (long)puVar24);
            if (puVar1 != (ushort *)0x0) {
              uVar28 = (uint)*puVar1;
              goto LAB_01c24564;
            }
            break;
          }
          if ((int)DAT_0534be84 != -1) break;
        }
        lVar4 = (long)puVar24 - (ulong)*puVar24;
        if (*puVar24 == 0) break;
        uVar28 = 0x4c7b;
        if (lVar4 == 0) goto LAB_01c24564;
        lVar3 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        if (lVar3 + lVar4 == 0) break;
        uVar20 = (ulong)*(ushort *)(lVar4 + 8);
        DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,0xfffffffe);
        if (uVar20 == 0) break;
        piVar19 = (int *)(lVar3 + lVar4 + 4);
        while (piVar19[-1] != 0x4765b463) {
          piVar19 = piVar19 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_01c24560;
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,iVar17);
        if (*puVar24 == 0) break;
      } while( true );
    }
LAB_01c24560:
    uVar28 = 0x4c7b;
LAB_01c24564:
    uVar28 = uVar28 - *(ushort *)(param_1 + 0x408);
    if ((*(uint *)(param_1 + 1000) <= uVar28) ||
       (puVar12 = *(uint **)(*(long *)(param_1 + 0x3f0) + (long)(int)uVar28 * 8),
       puVar12 == (uint *)0x0)) goto LAB_01c24218;
    puVar16 = (uint *)(ulong)*puVar12;
    if (*puVar12 == 0) {
LAB_01c24628:
      if (((param_5 & 1) == 0) ||
         (uVar20 = FUN_027bf130(*(long *)(lVar9 + 0x1bf1a0) + *(long *)(lVar9 + 0x1bf198),&local_140
                               ), (uVar20 & 1) != 0)) {
        if (*puVar24 == 0) {
          uVar7 = 0x4c7b;
        }
        else {
          cVar8 = DAT_0534be78;
LAB_01c24660:
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            DAT_0534be78 = '\x01';
            DAT_0534be7c = -1;
            DAT_0534be84 = 0xffffffffffffffff;
            DAT_0534be8c = -1;
            DAT_0534be94 = 0xffffffff;
LAB_01c246a0:
            lVar4 = (long)puVar24 - (ulong)*puVar24;
            if (*puVar24 == 0) goto LAB_01c248c4;
            uVar7 = 0x4c7b;
            if (lVar4 == 0) goto LAB_01c248c8;
            lVar3 = 0xc;
            if (*(char *)(lVar4 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            if (lVar3 + lVar4 == 0) goto LAB_01c248c4;
            uVar20 = (ulong)*(ushort *)(lVar4 + 8);
            DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,0xfffffffe);
            if (uVar20 == 0) goto LAB_01c248c4;
            piVar19 = (int *)(lVar3 + lVar4 + 4);
            while (piVar19[-1] != 0x4765b463) {
              piVar19 = piVar19 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_01c248c4;
            }
            iVar17 = 0;
            if (*piVar19 != -1) {
              iVar17 = *piVar19;
            }
            DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,iVar17);
            if (*puVar24 == 0) goto LAB_01c248c4;
            goto LAB_01c24660;
          }
          if ((int)DAT_0534be84 < 0) {
            if ((int)DAT_0534be84 != -1) goto LAB_01c248c4;
            goto LAB_01c246a0;
          }
          puVar2 = (undefined2 *)((DAT_0534be84 & 0xffffffff) + (long)puVar24);
          if (puVar2 != (undefined2 *)0x0) {
            uVar7 = *puVar2;
            goto LAB_01c248c8;
          }
LAB_01c248c4:
          uVar7 = 0x4c7b;
        }
LAB_01c248c8:
        uVar20 = FUN_01c260f0(param_1,&local_150,uVar25,uVar7);
        uVar6 = DAT_052d1100;
        if ((uVar20 & 1) != 0) {
          uVar27 = FUN_0277d6c4(&local_140);
          uVar20 = FUN_019dac10(uVar6,uVar27);
          if ((uVar20 & 1) == 0) {
            if (*puVar24 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            else {
              cVar8 = DAT_0534be78;
              do {
                if (cVar8 == '\0') {
                  cVar8 = '\x01';
                  DAT_0534be78 = '\x01';
                  DAT_0534be7c = -1;
                  DAT_0534be84 = 0xffffffffffffffff;
                  DAT_0534be8c = -1;
                  DAT_0534be94 = 0xffffffff;
                }
                else {
                  if (-1 < DAT_0534be8c) {
                    puVar10 = (undefined8 *)((ulong)DAT_0534be8c._4_4_ + (long)puVar24);
                    goto LAB_01c249ec;
                  }
                  if (DAT_0534be8c._4_4_ != 0xffffffff) break;
                }
                puVar12 = (uint *)(ulong)*puVar24;
                puVar10 = (undefined8 *)0x0;
                if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c249ec;
                lVar4 = 0xc;
                if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                if (lVar4 == 0) break;
                uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                DAT_0534be8c = CONCAT44(0xfffffffe,(uint)DAT_0534be8c);
                puVar10 = (undefined8 *)0x0;
                if (uVar20 == 0) goto LAB_01c249ec;
                piVar19 = (int *)(lVar4 + 4);
                while (piVar19[-1] != 0x60e4e478) {
                  piVar19 = piVar19 + 2;
                  uVar20 = uVar20 - 1;
                  if (uVar20 == 0) {
                    puVar10 = (undefined8 *)0x0;
                    goto LAB_01c249ec;
                  }
                }
                iVar17 = 0;
                if (*piVar19 != -1) {
                  iVar17 = *piVar19;
                }
                DAT_0534be8c = CONCAT44(iVar17,(uint)DAT_0534be8c);
              } while (*puVar24 != 0);
              puVar10 = (undefined8 *)0x0;
            }
LAB_01c249ec:
            puVar18 = &DAT_0407ebb1;
            if (puVar10 != (undefined8 *)0x0) {
              puVar18 = puVar10;
            }
            FUN_038d1270(&local_138,puVar18);
            if (*puVar24 != 0) {
              cVar8 = DAT_0534be78;
              do {
                if (cVar8 == '\0') {
                  cVar8 = '\x01';
                  DAT_0534be78 = '\x01';
                  DAT_0534be7c = -1;
                  DAT_0534be84 = 0xffffffffffffffff;
                  DAT_0534be8c = -1;
                  DAT_0534be94 = 0xffffffff;
                }
                else {
                  if (-1 < (int)DAT_0534be94) {
                    puVar10 = (undefined8 *)((ulong)DAT_0534be94 + (long)puVar24);
                    goto LAB_01c24aec;
                  }
                  if (DAT_0534be94 != 0xffffffff) break;
                }
                puVar12 = (uint *)(ulong)*puVar24;
                puVar10 = (undefined8 *)0x0;
                if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c24aec;
                lVar4 = 0xc;
                if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                if (lVar4 == 0) break;
                uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                DAT_0534be94 = 0xfffffffe;
                puVar10 = (undefined8 *)0x0;
                if (uVar20 == 0) goto LAB_01c24aec;
                puVar12 = (uint *)(lVar4 + 4);
                while (puVar12[-1] != 0x97be8767) {
                  puVar12 = puVar12 + 2;
                  uVar20 = uVar20 - 1;
                  if (uVar20 == 0) {
                    puVar10 = (undefined8 *)0x0;
                    goto LAB_01c24aec;
                  }
                }
                DAT_0534be94 = 0;
                if (*puVar12 != 0xffffffff) {
                  DAT_0534be94 = *puVar12;
                }
              } while (*puVar24 != 0);
            }
            puVar10 = (undefined8 *)0x0;
LAB_01c24aec:
            puVar18 = &DAT_0407ebb1;
            if (puVar10 != (undefined8 *)0x0) {
              puVar18 = puVar10;
            }
            FUN_038d1270(&local_100,puVar18);
            if (*puVar24 != 0) {
              cVar8 = DAT_0534be78;
              do {
                if (cVar8 == '\0') {
                  cVar8 = '\x01';
                  DAT_0534be78 = '\x01';
                  DAT_0534be7c = -1;
                  DAT_0534be84 = 0xffffffffffffffff;
                  DAT_0534be8c = -1;
                  DAT_0534be94 = 0xffffffff;
                }
                else {
                  if (-1 < (long)DAT_0534be84) {
                    puVar10 = (undefined8 *)((ulong)DAT_0534be84._4_4_ + (long)puVar24);
                    goto LAB_01c24bd8;
                  }
                  if (DAT_0534be84._4_4_ != 0xffffffff) break;
                }
                puVar12 = (uint *)(ulong)*puVar24;
                puVar10 = (undefined8 *)0x0;
                if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c24bd8;
                lVar4 = 0xc;
                if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                if (lVar4 == 0) break;
                uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                DAT_0534be84 = CONCAT44(0xfffffffe,(int)DAT_0534be84);
                puVar10 = (undefined8 *)0x0;
                if (uVar20 == 0) goto LAB_01c24bd8;
                piVar19 = (int *)(lVar4 + 4);
                while (piVar19[-1] != -0x167ed1f9) {
                  piVar19 = piVar19 + 2;
                  uVar20 = uVar20 - 1;
                  if (uVar20 == 0) {
                    puVar10 = (undefined8 *)0x0;
                    goto LAB_01c24bd8;
                  }
                }
                iVar17 = 0;
                if (*piVar19 != -1) {
                  iVar17 = *piVar19;
                }
                DAT_0534be84 = CONCAT44(iVar17,(int)DAT_0534be84);
              } while (*puVar24 != 0);
            }
            puVar10 = (undefined8 *)0x0;
LAB_01c24bd8:
            puVar18 = &DAT_0407ebb1;
            if (puVar10 != (undefined8 *)0x0) {
              puVar18 = puVar10;
            }
            FUN_038d1270(&local_e0,puVar18);
            if (*puVar24 != 0) {
              cVar8 = DAT_0534be78;
              do {
                if (cVar8 == '\0') {
                  cVar8 = '\x01';
                  DAT_0534be78 = '\x01';
                  DAT_0534be7c = -1;
                  DAT_0534be84 = 0xffffffffffffffff;
                  DAT_0534be8c = -1;
                  DAT_0534be94 = 0xffffffff;
                }
                else {
                  if (-1 < (int)(uint)DAT_0534be8c) goto LAB_01c25638;
                  if ((uint)DAT_0534be8c != 0xffffffff) break;
                }
                puVar12 = (uint *)(ulong)*puVar24;
                puVar10 = (undefined8 *)0x0;
                if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c255d4;
                lVar4 = 0xc;
                if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                if (lVar4 == 0) break;
                uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                DAT_0534be8c = CONCAT44(DAT_0534be8c._4_4_,0xfffffffe);
                puVar10 = (undefined8 *)0x0;
                if (uVar20 == 0) goto LAB_01c255d4;
                piVar19 = (int *)(lVar4 + 4);
                while (piVar19[-1] != -0x4bcb7fa3) {
                  piVar19 = piVar19 + 2;
                  uVar20 = uVar20 - 1;
                  if (uVar20 == 0) {
                    puVar10 = (undefined8 *)0x0;
                    goto LAB_01c255d4;
                  }
                }
                iVar17 = 0;
                if (*piVar19 != -1) {
                  iVar17 = *piVar19;
                }
                DAT_0534be8c = CONCAT44(DAT_0534be8c._4_4_,iVar17);
              } while (*puVar24 != 0);
            }
            goto LAB_01c255d0;
          }
        }
      }
      goto LAB_01c24218;
    }
    if ((DAT_0534bd48 & 1) == 0) {
      DAT_0534bd48 = 1;
      DAT_0534bd7c = 0xffffffffffffffff;
      DAT_0534bd4c = 0xffffffffffffffff;
      DAT_0534bd54 = 0xffffffffffffffff;
      uVar20 = 0xffffffff;
      DAT_0534bd5c = 0xffffffffffffffff;
      DAT_0534bd64 = 0xffffffffffffffff;
      DAT_0534bd6c = 0xffffffffffffffff;
      DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c24620:
      if (puVar12 != puVar16) {
        do {
          if (uVar20 != 0xffffffff) goto LAB_01c24628;
          lVar4 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar12 + (lVar4 - (long)puVar16);
          if (lVar4 == 0) goto LAB_01c24628;
          uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
          DAT_0534bd7c = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd7c);
          if (uVar20 == 0) goto LAB_01c24628;
          puVar22 = (uint *)(lVar4 + 4);
          while (puVar22[-1] != 0xf58109f5) {
            puVar22 = puVar22 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_01c24628;
          }
          uVar20 = (ulong)*puVar22;
          uVar21 = 0;
          if (*puVar22 != 0xffffffff) {
            uVar21 = uVar20;
          }
          DAT_0534bd7c = CONCAT44((int)uVar21,(undefined4)DAT_0534bd7c);
        } while ((int)uVar21 < 0);
        pcVar14 = (char *)(uVar21 + (long)puVar12);
        if (pcVar14 != (char *)0x0) goto LAB_01c245b4;
      }
      goto LAB_01c24628;
    }
    uVar20 = DAT_0534bd7c >> 0x20;
    if ((long)DAT_0534bd7c < 0) goto LAB_01c24620;
    pcVar14 = (char *)(uVar20 + (long)puVar12);
    if (pcVar14 == (char *)0x0) goto LAB_01c24628;
LAB_01c245b4:
    if (*pcVar14 == '\0') goto LAB_01c24628;
    puVar16 = (uint *)(ulong)*puVar12;
    if (*puVar12 == 0) {
      uVar28 = 0;
    }
    else {
      uVar20 = DAT_0534bd4c & 0xffffffff;
      if ((int)DAT_0534bd4c < 0) {
        if (puVar12 != puVar16) {
          do {
            if (uVar20 != 0xffffffff) goto LAB_01c247dc;
            lVar4 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar12 + (lVar4 - (long)puVar16);
            if (lVar4 == 0) goto LAB_01c247dc;
            uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
            DAT_0534bd4c = CONCAT44(DAT_0534bd4c._4_4_,0xfffffffe);
            if (uVar20 == 0) goto LAB_01c247dc;
            puVar22 = (uint *)(lVar4 + 4);
            while (puVar22[-1] != 0x3e884a6d) {
              puVar22 = puVar22 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_01c247dc;
            }
            uVar20 = (ulong)*puVar22;
            uVar21 = 0;
            if (*puVar22 != 0xffffffff) {
              uVar21 = uVar20;
            }
            DAT_0534bd4c = CONCAT44(DAT_0534bd4c._4_4_,(int)uVar21);
          } while ((int)uVar21 < 0);
          goto LAB_01c245e0;
        }
      }
      else {
        uVar21 = uVar20;
LAB_01c245e0:
        uVar28 = 0;
        if (((uint *)(uVar21 + (long)puVar12) == (uint *)0x0) ||
           (uVar28 = *(uint *)(uVar21 + (long)puVar12), uVar28 < 0x11)) goto LAB_01c247e0;
      }
LAB_01c247dc:
      uVar28 = 0;
    }
LAB_01c247e0:
    local_158 = param_4;
    if ((int)*(uint *)(param_1 + 2000) < 1) {
      if ((((*(long *)(param_1 + 0x6c0) != 0) &&
           (puVar12 = *(uint **)(*(long *)(param_1 + 0x6c0) + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x6d8) <= uVar28 ||
           (*(char *)(*(long *)(param_1 + 0x6e0) + (ulong)uVar28) != '\0')))) &&
         (((uVar28 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar17 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * uVar28 + (uint)(ushort)puVar12[2] * 8 + iVar17) +
                          (long)puVar12);
        if (puVar12 != (uint *)0x0) goto LAB_01c2480c;
      }
      goto LAB_01c24218;
    }
    if (*(uint *)(param_1 + 2000) <= uVar28) goto LAB_01c24218;
    if (*(uint *)(param_1 + 0x7c0) <= uVar28) {
      uVar28 = 0;
    }
    puVar12 = *(uint **)(*(long *)(param_1 + 0x7c8) + (ulong)uVar28 * 8);
    if (puVar12 == (uint *)0x0) goto LAB_01c24218;
LAB_01c2480c:
    puVar16 = (uint *)(ulong)*puVar12;
    uVar28 = 0;
    if (*puVar12 != 0) {
      if ((DAT_0534bca0 & 1) == 0) {
        DAT_0534bca0 = 1;
        DAT_0534bcb4 = 0xffffffffffffffff;
        DAT_0534bca4 = 0xffffffffffffffff;
        DAT_0534bcac = 0xffffffffffffffff;
        uVar20 = 0xffffffff;
LAB_01c24d74:
        if (puVar12 != puVar16) {
          do {
            if (uVar20 != 0xffffffff) goto LAB_01c24d7c;
            lVar4 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar12 + (lVar4 - (long)puVar16);
            if (lVar4 == 0) goto LAB_01c24d7c;
            uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
            DAT_0534bca4 = CONCAT44(DAT_0534bca4._4_4_,0xfffffffe);
            if (uVar20 == 0) goto LAB_01c24d7c;
            puVar22 = (uint *)(lVar4 + 4);
            while (puVar22[-1] != 0x110ca7b2) {
              puVar22 = puVar22 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_01c24d7c;
            }
            uVar20 = (ulong)*puVar22;
            uVar21 = 0;
            if (*puVar22 != 0xffffffff) {
              uVar21 = uVar20;
            }
            DAT_0534bca4 = CONCAT44(DAT_0534bca4._4_4_,(int)uVar21);
          } while ((int)uVar21 < 0);
          puVar16 = (uint *)(uVar21 + (long)puVar12);
          if (puVar16 == (uint *)0x0) {
            uVar28 = 0;
            goto LAB_01c24d80;
          }
          goto LAB_01c24834;
        }
      }
      else {
        uVar20 = DAT_0534bca4 & 0xffffffff;
        if ((int)DAT_0534bca4 < 0) goto LAB_01c24d74;
        puVar16 = (uint *)(uVar20 + (long)puVar12);
        uVar28 = 0;
        if (puVar16 == (uint *)0x0) goto LAB_01c24d80;
LAB_01c24834:
        uVar28 = *puVar16;
        if (uVar28 < 0x6e) goto LAB_01c24d80;
      }
LAB_01c24d7c:
      uVar28 = 0;
    }
LAB_01c24d80:
    if (param_4 != uVar28) goto LAB_01c24218;
    uVar27 = 0;
    uVar30 = 0;
    local_84 = CONCAT11(1,(undefined1)local_84);
    puVar16 = (uint *)(ulong)*puVar12;
    if (*puVar12 != 0) {
      if ((DAT_0534bca0 & 1) == 0) {
        DAT_0534bca0 = 1;
        DAT_0534bcb4 = 0xffffffffffffffff;
        DAT_0534bca4 = 0xffffffffffffffff;
        DAT_0534bcac = 0xffffffffffffffff;
        uVar20 = 0xffffffff;
LAB_01c24e98:
        if (puVar12 == puVar16) goto LAB_01c24f2c;
        do {
          if (uVar20 != 0xffffffff) {
LAB_01c24f28:
            uVar30 = 0;
            goto LAB_01c24f2c;
          }
          lVar4 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar12 + (lVar4 - (long)puVar16);
          if (lVar4 == 0) goto LAB_01c24f28;
          uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
          DAT_0534bca4 = CONCAT44(0xfffffffe,(int)DAT_0534bca4);
          if (uVar20 == 0) goto LAB_01c24f28;
          puVar22 = (uint *)(lVar4 + 4);
          while (puVar22[-1] != 0xf230d34) {
            puVar22 = puVar22 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_01c24f28;
          }
          uVar20 = (ulong)*puVar22;
          uVar21 = 0;
          if (*puVar22 != 0xffffffff) {
            uVar21 = uVar20;
          }
          DAT_0534bca4 = CONCAT44((int)uVar21,(int)DAT_0534bca4);
        } while ((int)uVar21 < 0);
      }
      else {
        uVar21 = DAT_0534bca4 >> 0x20;
        uVar20 = uVar21;
        if ((long)DAT_0534bca4 < 0) goto LAB_01c24e98;
      }
      uVar30 = 0;
      if ((undefined4 *)(uVar21 + (long)puVar12) != (undefined4 *)0x0) {
        uVar30 = *(undefined4 *)(uVar21 + (long)puVar12);
      }
    }
LAB_01c24f2c:
    puVar16 = (uint *)(ulong)*puVar12;
    if (*puVar12 != 0) {
      if ((DAT_0534bca0 & 1) == 0) {
        DAT_0534bca0 = 1;
        DAT_0534bcb4 = 0xffffffffffffffff;
        DAT_0534bca4 = 0xffffffffffffffff;
        DAT_0534bcac = 0xffffffffffffffff;
        uVar20 = 0xffffffff;
LAB_01c24f90:
        if (puVar12 != puVar16) {
          do {
            if (uVar20 != 0xffffffff) goto LAB_01c24f98;
            lVar4 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar12 + (lVar4 - (long)puVar16);
            if (lVar4 == 0) goto LAB_01c24f98;
            uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
            DAT_0534bcac = CONCAT44(DAT_0534bcac._4_4_,0xfffffffe);
            if (uVar20 == 0) goto LAB_01c24f98;
            puVar22 = (uint *)(lVar4 + 4);
            while (puVar22[-1] != 0x32432484) {
              puVar22 = puVar22 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_01c24f98;
            }
            uVar20 = (ulong)*puVar22;
            uVar21 = 0;
            if (*puVar22 != 0xffffffff) {
              uVar21 = uVar20;
            }
            DAT_0534bcac = CONCAT44(DAT_0534bcac._4_4_,(int)uVar21);
          } while ((int)uVar21 < 0);
          puVar11 = (undefined4 *)(uVar21 + (long)puVar12);
          if (puVar11 != (undefined4 *)0x0) goto LAB_01c24f5c;
        }
      }
      else {
        uVar20 = DAT_0534bcac & 0xffffffff;
        if ((int)DAT_0534bcac < 0) goto LAB_01c24f90;
        puVar11 = (undefined4 *)(uVar20 + (long)puVar12);
        if (puVar11 == (undefined4 *)0x0) goto LAB_01c24f98;
LAB_01c24f5c:
        uVar27 = *puVar11;
      }
    }
LAB_01c24f98:
    local_80 = CONCAT44(uVar27,uVar30);
    uVar27 = 0;
    puVar16 = (uint *)(ulong)*puVar12;
    if (*puVar12 != 0) {
      if ((DAT_0534bca0 & 1) == 0) {
        DAT_0534bca0 = 1;
        DAT_0534bcb4 = 0xffffffffffffffff;
        DAT_0534bca4 = 0xffffffffffffffff;
        DAT_0534bcac = 0xffffffffffffffff;
        uVar20 = 0xffffffff;
LAB_01c24fec:
        if (puVar12 != puVar16) {
          do {
            if (uVar20 != 0xffffffff) goto LAB_01c24ff4;
            lVar4 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar16)) != '\0') {
              lVar4 = 0x1c;
            }
            lVar4 = (long)puVar12 + (lVar4 - (long)puVar16);
            if (lVar4 == 0) goto LAB_01c24ff4;
            uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar16));
            DAT_0534bcac = CONCAT44(0xfffffffe,(int)DAT_0534bcac);
            if (uVar20 == 0) goto LAB_01c24ff4;
            puVar22 = (uint *)(lVar4 + 4);
            while (puVar22[-1] != 0x75e35e54) {
              puVar22 = puVar22 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_01c24ff4;
            }
            uVar20 = (ulong)*puVar22;
            uVar21 = 0;
            if (*puVar22 != 0xffffffff) {
              uVar21 = uVar20;
            }
            DAT_0534bcac = CONCAT44((int)uVar21,(int)DAT_0534bcac);
          } while ((int)uVar21 < 0);
          puVar11 = (undefined4 *)(uVar21 + (long)puVar12);
          if (puVar11 != (undefined4 *)0x0) goto LAB_01c24fc4;
        }
      }
      else {
        uVar20 = DAT_0534bcac >> 0x20;
        if ((long)DAT_0534bcac < 0) goto LAB_01c24fec;
        puVar11 = (undefined4 *)(uVar20 + (long)puVar12);
        if (puVar11 == (undefined4 *)0x0) goto LAB_01c24ff4;
LAB_01c24fc4:
        uVar27 = *puVar11;
      }
    }
LAB_01c24ff4:
    local_78 = CONCAT44(local_78._4_4_,uVar27);
    if (*puVar24 != 0) {
      cVar8 = DAT_0534be78;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          DAT_0534be78 = '\x01';
          DAT_0534be7c = -1;
          DAT_0534be84 = 0xffffffffffffffff;
          DAT_0534be8c = -1;
          DAT_0534be94 = 0xffffffff;
        }
        else {
          if (-1 < (int)DAT_0534be84) {
            puVar2 = (undefined2 *)((DAT_0534be84 & 0xffffffff) + (long)puVar24);
            if (puVar2 != (undefined2 *)0x0) {
              uVar7 = *puVar2;
              goto LAB_01c251f8;
            }
            break;
          }
          if ((int)DAT_0534be84 != -1) break;
        }
        lVar4 = (long)puVar24 - (ulong)*puVar24;
        if (*puVar24 == 0) break;
        uVar7 = 0x4c7b;
        if (lVar4 == 0) goto LAB_01c251f8;
        lVar3 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        if (lVar3 + lVar4 == 0) break;
        uVar20 = (ulong)*(ushort *)(lVar4 + 8);
        DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,0xfffffffe);
        if (uVar20 == 0) break;
        piVar19 = (int *)(lVar3 + lVar4 + 4);
        while (piVar19[-1] != 0x4765b463) {
          piVar19 = piVar19 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_01c251f4;
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        DAT_0534be84 = CONCAT44(DAT_0534be84._4_4_,iVar17);
        if (*puVar24 == 0) break;
      } while( true );
    }
LAB_01c251f4:
    uVar7 = 0x4c7b;
LAB_01c251f8:
    uVar20 = FUN_01c260f0(param_1,&local_150,uVar25,uVar7);
    if ((uVar20 & 1) == 0) goto LAB_01c24218;
    if (*puVar24 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      cVar8 = DAT_0534be78;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          DAT_0534be78 = '\x01';
          DAT_0534be7c = -1;
          DAT_0534be84 = 0xffffffffffffffff;
          DAT_0534be8c = -1;
          DAT_0534be94 = 0xffffffff;
        }
        else {
          if (-1 < DAT_0534be8c) {
            puVar10 = (undefined8 *)((ulong)DAT_0534be8c._4_4_ + (long)puVar24);
            goto LAB_01c252f8;
          }
          if (DAT_0534be8c._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar24;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c252f8;
        lVar4 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
        if (lVar4 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
        DAT_0534be8c = CONCAT44(0xfffffffe,(uint)DAT_0534be8c);
        puVar10 = (undefined8 *)0x0;
        if (uVar20 == 0) goto LAB_01c252f8;
        piVar19 = (int *)(lVar4 + 4);
        while (piVar19[-1] != 0x60e4e478) {
          piVar19 = piVar19 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c252f8;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        DAT_0534be8c = CONCAT44(iVar17,(uint)DAT_0534be8c);
      } while (*puVar24 != 0);
      puVar10 = (undefined8 *)0x0;
    }
LAB_01c252f8:
    puVar18 = &DAT_0407ebb1;
    if (puVar10 != (undefined8 *)0x0) {
      puVar18 = puVar10;
    }
    FUN_038d1270(&local_138,puVar18);
    if (*puVar24 != 0) {
      cVar8 = DAT_0534be78;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          DAT_0534be78 = '\x01';
          DAT_0534be7c = -1;
          DAT_0534be84 = 0xffffffffffffffff;
          DAT_0534be8c = -1;
          DAT_0534be94 = 0xffffffff;
        }
        else {
          if (-1 < (int)DAT_0534be94) {
            puVar10 = (undefined8 *)((ulong)DAT_0534be94 + (long)puVar24);
            goto LAB_01c253f0;
          }
          if (DAT_0534be94 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar24;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c253f0;
        lVar4 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
        if (lVar4 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
        DAT_0534be94 = 0xfffffffe;
        puVar10 = (undefined8 *)0x0;
        if (uVar20 == 0) goto LAB_01c253f0;
        puVar12 = (uint *)(lVar4 + 4);
        while (puVar12[-1] != 0x97be8767) {
          puVar12 = puVar12 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c253f0;
          }
        }
        DAT_0534be94 = 0;
        if (*puVar12 != 0xffffffff) {
          DAT_0534be94 = *puVar12;
        }
      } while (*puVar24 != 0);
    }
    puVar10 = (undefined8 *)0x0;
LAB_01c253f0:
    puVar18 = &DAT_0407ebb1;
    if (puVar10 != (undefined8 *)0x0) {
      puVar18 = puVar10;
    }
    FUN_038d1270(&local_100,puVar18);
    if (*puVar24 != 0) {
      cVar8 = DAT_0534be78;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          DAT_0534be78 = '\x01';
          DAT_0534be7c = -1;
          DAT_0534be84 = 0xffffffffffffffff;
          DAT_0534be8c = -1;
          DAT_0534be94 = 0xffffffff;
        }
        else {
          if (-1 < (long)DAT_0534be84) {
            puVar10 = (undefined8 *)((ulong)DAT_0534be84._4_4_ + (long)puVar24);
            goto LAB_01c254dc;
          }
          if (DAT_0534be84._4_4_ != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar24;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c254dc;
        lVar4 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
        if (lVar4 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
        DAT_0534be84 = CONCAT44(0xfffffffe,(int)DAT_0534be84);
        puVar10 = (undefined8 *)0x0;
        if (uVar20 == 0) goto LAB_01c254dc;
        piVar19 = (int *)(lVar4 + 4);
        while (piVar19[-1] != -0x167ed1f9) {
          piVar19 = piVar19 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c254dc;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        DAT_0534be84 = CONCAT44(iVar17,(int)DAT_0534be84);
      } while (*puVar24 != 0);
    }
    puVar10 = (undefined8 *)0x0;
LAB_01c254dc:
    puVar18 = &DAT_0407ebb1;
    if (puVar10 != (undefined8 *)0x0) {
      puVar18 = puVar10;
    }
    FUN_038d1270(&local_e0,puVar18);
    if (*puVar24 != 0) {
      cVar8 = DAT_0534be78;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          DAT_0534be78 = '\x01';
          DAT_0534be7c = -1;
          DAT_0534be84 = 0xffffffffffffffff;
          DAT_0534be8c = -1;
          DAT_0534be94 = 0xffffffff;
        }
        else {
          if (-1 < (int)(uint)DAT_0534be8c) goto LAB_01c25638;
          if ((uint)DAT_0534be8c != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar24;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar24 == 0) || (puVar24 == puVar12)) goto LAB_01c255d4;
        lVar4 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
          lVar4 = 0x1c;
        }
        lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
        if (lVar4 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
        DAT_0534be8c = CONCAT44(DAT_0534be8c._4_4_,0xfffffffe);
        puVar10 = (undefined8 *)0x0;
        if (uVar20 == 0) goto LAB_01c255d4;
        piVar19 = (int *)(lVar4 + 4);
        while (piVar19[-1] != -0x4bcb7fa3) {
          piVar19 = piVar19 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01c255d4;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        DAT_0534be8c = CONCAT44(DAT_0534be8c._4_4_,iVar17);
      } while (*puVar24 != 0);
    }
LAB_01c255d0:
    puVar10 = (undefined8 *)0x0;
    goto LAB_01c255d4;
  }
  uVar23 = 0;
  do {
    uVar28 = *(uint *)(param_1 + 0x3d0);
    if ((int)uVar28 < 1) {
      uVar20 = 0;
      if (*(long *)(param_1 + 0x2c0) != 0) {
        puVar24 = *(uint **)(*(long *)(param_1 + 0x2c0) + 8);
        uVar20 = 0;
        if (puVar24 != (uint *)0x0) {
          uVar20 = (ulong)*puVar24;
        }
      }
      if (uVar20 <= uVar23) {
LAB_01c260a4:
        if ((((local_1ac & 1) != 0) && (*(long *)(lVar9 + 0x1bf1b8) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x1bf1b8) + 8),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
        return;
      }
      if (0 < (int)uVar28) goto LAB_01c25714;
      if ((((*(long *)(param_1 + 0x2c0) != 0) &&
           (puVar24 = *(uint **)(*(long *)(param_1 + 0x2c0) + 8), puVar24 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x2d8) <= uVar23 ||
           (*(char *)(*(long *)(param_1 + 0x2e0) + uVar23) != '\0')))) &&
         (((uVar23 < *puVar24 && (puVar24[1] != 0)) && ((ushort)puVar24[2] != 0)))) {
        iVar17 = 0xc;
        if (*(char *)((long)puVar24 + 10) != '\0') {
          iVar17 = 0x1c;
        }
        puVar24 = (uint *)((ulong)(puVar24[1] * (int)uVar23 + (uint)(ushort)puVar24[2] * 8 + iVar17)
                          + (long)puVar24);
        if (puVar24 == (uint *)0x0) goto LAB_01c256d0;
        goto LAB_01c25738;
      }
    }
    else {
      if (uVar28 <= uVar23) goto LAB_01c260a4;
LAB_01c25714:
      if (uVar23 < uVar28) {
        uVar20 = uVar23 & 0xffffffff;
        if (*(uint *)(param_1 + 0x3c0) <= uVar23) {
          uVar20 = 0;
        }
        puVar24 = *(uint **)(*(long *)(param_1 + 0x3c8) + uVar20 * 8);
        if (puVar24 != (uint *)0x0) {
LAB_01c25738:
          puVar12 = (uint *)(ulong)*puVar24;
          if (*puVar24 != 0) {
            if ((DAT_0534bd48 & 1) == 0) {
              DAT_0534bd48 = 1;
              DAT_0534bd4c = 0xffffffffffffffff;
              DAT_0534bd54 = 0xffffffffffffffff;
              uVar20 = 0xffffffff;
              DAT_0534bd7c = 0xffffffffffffffff;
              DAT_0534bd5c = 0xffffffffffffffff;
              DAT_0534bd64 = 0xffffffffffffffff;
              DAT_0534bd6c = 0xffffffffffffffff;
              DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c258ec:
              if (puVar24 != puVar12) {
                do {
                  if (uVar20 != 0xffffffff) goto LAB_01c256d0;
                  lVar4 = 0xc;
                  if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                    lVar4 = 0x1c;
                  }
                  lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                  if (lVar4 == 0) goto LAB_01c256d0;
                  uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                  DAT_0534bd74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd74);
                  if (uVar20 == 0) goto LAB_01c256d0;
                  puVar16 = (uint *)(lVar4 + 4);
                  while (puVar16[-1] != 0x91eaeedd) {
                    puVar16 = puVar16 + 2;
                    uVar20 = uVar20 - 1;
                    if (uVar20 == 0) goto LAB_01c256d0;
                  }
                  uVar20 = (ulong)*puVar16;
                  uVar21 = 0;
                  if (*puVar16 != 0xffffffff) {
                    uVar21 = uVar20;
                  }
                  DAT_0534bd74 = CONCAT44((int)uVar21,(undefined4)DAT_0534bd74);
                } while ((int)uVar21 < 0);
                pcVar14 = (char *)(uVar21 + (long)puVar24);
                if (pcVar14 != (char *)0x0) goto LAB_01c25758;
              }
            }
            else {
              uVar20 = DAT_0534bd74 >> 0x20;
              if ((long)DAT_0534bd74 < 0) goto LAB_01c258ec;
              pcVar14 = (char *)(uVar20 + (long)puVar24);
              if (pcVar14 == (char *)0x0) goto LAB_01c256d0;
LAB_01c25758:
              if (*pcVar14 != '\0') {
                uVar20 = FUN_019da7a0(*(undefined8 *)PTR_DAT_04bb4800);
                if ((uVar20 & 1) != 0) {
                  local_128 = 0x20;
                  fVar26 = 0.0;
                  uVar29 = 0;
                  local_105 = 0;
                  uVar30 = 0;
                  uVar27 = 0;
                  uVar31 = 0;
                  local_124[0] = 0x20;
                  local_f0 = 8;
                  local_e5 = 0;
                  local_ec[0] = 0x20;
                  local_d0 = 0x20;
                  local_ad = 0;
                  local_cc[0] = 0x20;
                  local_98 = 8;
                  local_8d = 0;
                  local_94[0] = 0x20;
                  local_140 = _DAT_05586008;
                  uStack_13c = DAT_0558600c;
                  local_138 = &PTR_LAB_048f9700;
                  local_100 = &PTR_LAB_04908da0;
                  local_e0 = &PTR_LAB_048f9700;
                  local_a8 = &PTR_LAB_04908da0;
                  local_80 = 0;
                  puVar12 = (uint *)(ulong)*puVar24;
                  if (*puVar24 != 0) {
                    if ((DAT_0534bd48 & 1) == 0) {
                      DAT_0534bd48 = 1;
                      DAT_0534bd4c = 0xffffffffffffffff;
                      DAT_0534bd54 = 0xffffffffffffffff;
                      uVar20 = 0xffffffff;
                      DAT_0534bd7c = 0xffffffffffffffff;
                      DAT_0534bd5c = 0xffffffffffffffff;
                      DAT_0534bd64 = 0xffffffffffffffff;
                      DAT_0534bd6c = 0xffffffffffffffff;
                      DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c25988:
                      uVar27 = uVar30;
                      if (puVar24 != puVar12) {
                        do {
                          if (uVar20 != 0xffffffff) goto LAB_01c25a08;
                          lVar4 = 0xc;
                          if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                            lVar4 = 0x1c;
                          }
                          lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                          if (lVar4 == 0) goto LAB_01c25a08;
                          uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                          DAT_0534bd64 = CONCAT44(0xfffffffe,(int)DAT_0534bd64);
                          if (uVar20 == 0) goto LAB_01c25a08;
                          puVar16 = (uint *)(lVar4 + 4);
                          while (puVar16[-1] != 0x2633f2c1) {
                            puVar16 = puVar16 + 2;
                            uVar20 = uVar20 - 1;
                            if (uVar20 == 0) goto LAB_01c25a08;
                          }
                          uVar20 = (ulong)*puVar16;
                          uVar21 = 0;
                          if (*puVar16 != 0xffffffff) {
                            uVar21 = uVar20;
                          }
                          DAT_0534bd64 = CONCAT44((int)uVar21,(int)DAT_0534bd64);
                        } while ((int)uVar21 < 0);
                        puVar11 = (undefined4 *)(uVar21 + (long)puVar24);
                        if (puVar11 != (undefined4 *)0x0) goto LAB_01c25858;
LAB_01c25a04:
                        uVar27 = 0;
                      }
                    }
                    else {
                      uVar20 = DAT_0534bd64 >> 0x20;
                      if ((long)DAT_0534bd64 < 0) goto LAB_01c25988;
                      puVar11 = (undefined4 *)(uVar20 + (long)puVar24);
                      if (puVar11 == (undefined4 *)0x0) goto LAB_01c25a04;
LAB_01c25858:
                      uVar27 = *puVar11;
                    }
LAB_01c25a08:
                    puVar12 = (uint *)(ulong)*puVar24;
                    if (*puVar24 == 0) {
                      uVar29 = 0;
                    }
                    else {
                      uVar20 = DAT_0534bd6c & 0xffffffff;
                      if ((int)DAT_0534bd6c < 0) {
                        uVar29 = 0;
                        if (puVar24 != puVar12) {
                          do {
                            if (uVar20 != 0xffffffff) goto LAB_01c25abc;
                            lVar4 = 0xc;
                            if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                              lVar4 = 0x1c;
                            }
                            lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                            if (lVar4 == 0) goto LAB_01c25abc;
                            uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                            DAT_0534bd6c = CONCAT44(DAT_0534bd6c._4_4_,0xfffffffe);
                            if (uVar20 == 0) goto LAB_01c25abc;
                            puVar16 = (uint *)(lVar4 + 4);
                            while (puVar16[-1] != 0x1b53db71) {
                              puVar16 = puVar16 + 2;
                              uVar20 = uVar20 - 1;
                              if (uVar20 == 0) goto LAB_01c25abc;
                            }
                            uVar20 = (ulong)*puVar16;
                            uVar21 = 0;
                            if (*puVar16 != 0xffffffff) {
                              uVar21 = uVar20;
                            }
                            DAT_0534bd6c = CONCAT44(DAT_0534bd6c._4_4_,(int)uVar21);
                          } while ((int)uVar21 < 0);
                          goto LAB_01c25a20;
                        }
                      }
                      else {
                        uVar21 = uVar20;
LAB_01c25a20:
                        if ((undefined4 *)(uVar21 + (long)puVar24) == (undefined4 *)0x0) {
                          uVar29 = 0;
                        }
                        else {
                          uVar29 = *(undefined4 *)(uVar21 + (long)puVar24);
                        }
                      }
LAB_01c25abc:
                      puVar12 = (uint *)(ulong)*puVar24;
                      if (*puVar24 != 0) {
                        uVar20 = DAT_0534bd6c >> 0x20;
                        if ((long)DAT_0534bd6c < 0) {
                          if (puVar24 == puVar12) goto LAB_01c25aec;
                          do {
                            if (uVar20 != 0xffffffff) goto LAB_01c25aec;
                            lVar4 = 0xc;
                            if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                              lVar4 = 0x1c;
                            }
                            lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                            if (lVar4 == 0) goto LAB_01c25aec;
                            uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                            DAT_0534bd6c = CONCAT44(0xfffffffe,(int)DAT_0534bd6c);
                            if (uVar20 == 0) goto LAB_01c25aec;
                            puVar16 = (uint *)(lVar4 + 4);
                            while (puVar16[-1] != 0x5cf3a1a1) {
                              puVar16 = puVar16 + 2;
                              uVar20 = uVar20 - 1;
                              if (uVar20 == 0) goto LAB_01c25aec;
                            }
                            uVar20 = (ulong)*puVar16;
                            uVar21 = 0;
                            if (*puVar16 != 0xffffffff) {
                              uVar21 = uVar20;
                            }
                            DAT_0534bd6c = CONCAT44((int)uVar21,(int)DAT_0534bd6c);
                          } while ((int)uVar21 < 0);
                        }
                        else {
                          uVar21 = uVar20;
                        }
                        if ((undefined4 *)(uVar21 + (long)puVar24) != (undefined4 *)0x0) {
                          uVar31 = *(undefined4 *)(uVar21 + (long)puVar24);
                          goto LAB_01c25af0;
                        }
                      }
                    }
LAB_01c25aec:
                    uVar31 = 0;
                  }
LAB_01c25af0:
                  local_150 = CONCAT44(uVar29,uVar27);
                  puVar12 = (uint *)(ulong)*puVar24;
                  if (*puVar24 != 0) {
                    if ((DAT_0534bd48 & 1) == 0) {
                      DAT_0534bd48 = 1;
                      DAT_0534bd4c = 0xffffffffffffffff;
                      DAT_0534bd54 = 0xffffffffffffffff;
                      uVar20 = 0xffffffff;
                      DAT_0534bd7c = 0xffffffffffffffff;
                      DAT_0534bd5c = 0xffffffffffffffff;
                      DAT_0534bd64 = 0xffffffffffffffff;
                      DAT_0534bd6c = 0xffffffffffffffff;
                      DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c25b48:
                      if (puVar24 != puVar12) {
                        do {
                          if (uVar20 != 0xffffffff) goto LAB_01c25b50;
                          lVar4 = 0xc;
                          if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                            lVar4 = 0x1c;
                          }
                          lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                          if (lVar4 == 0) goto LAB_01c25b50;
                          uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                          DAT_0534bd64 = CONCAT44(DAT_0534bd64._4_4_,0xfffffffe);
                          if (uVar20 == 0) goto LAB_01c25b50;
                          puVar16 = (uint *)(lVar4 + 4);
                          while (puVar16[-1] != 0xd200ffd3) {
                            puVar16 = puVar16 + 2;
                            uVar20 = uVar20 - 1;
                            if (uVar20 == 0) goto LAB_01c25b50;
                          }
                          uVar20 = (ulong)*puVar16;
                          uVar21 = 0;
                          if (*puVar16 != 0xffffffff) {
                            uVar21 = uVar20;
                          }
                          DAT_0534bd64 = CONCAT44(DAT_0534bd64._4_4_,(int)uVar21);
                        } while ((int)uVar21 < 0);
                        pfVar13 = (float *)(uVar21 + (long)puVar24);
                        if (pfVar13 != (float *)0x0) goto LAB_01c25b1c;
                      }
                    }
                    else {
                      uVar20 = DAT_0534bd64 & 0xffffffff;
                      if ((int)DAT_0534bd64 < 0) goto LAB_01c25b48;
                      pfVar13 = (float *)(uVar20 + (long)puVar24);
                      if (pfVar13 == (float *)0x0) goto LAB_01c25b50;
LAB_01c25b1c:
                      fVar26 = *pfVar13;
                    }
                  }
LAB_01c25b50:
                  local_88 = 0;
                  local_148 = CONCAT44((int)(long)(fVar26 * 11930465.0),uVar31);
                  uVar28 = *puVar24;
                  if ((uVar28 != 0) && (puVar24 != (uint *)(ulong)uVar28)) {
                    puVar12 = (uint *)((long)puVar24 - (long)(ulong)uVar28);
                    local_88 = 0;
                    if (*puVar12 != 0) {
                      uVar28 = puVar12[1];
                      if ((uVar28 == 0) || ((ulong)(ushort)puVar12[2] == 0)) {
LAB_01c25bec:
                        local_88 = 0;
                      }
                      else {
                        lVar4 = 0xc;
                        if (*(char *)((long)puVar12 + 10) != '\0') {
                          lVar4 = 0x1c;
                        }
                        lVar4 = (long)puVar12 + lVar4 + (ulong)(ushort)puVar12[2] * 8;
                        if (lVar4 == 0) {
                          local_88 = 0;
                        }
                        else {
                          uVar5 = 0;
                          if ((ulong)uVar28 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar24 - lVar4) / (ulong)uVar28);
                          }
                          if (*puVar12 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((DAT_0534bd38 <= uVar5) ||
                             (local_88 = (uint)*(ushort *)(DAT_0534bd40 + (long)(int)uVar5 * 2),
                             2 < local_88)) goto LAB_01c25bec;
                        }
                      }
                    }
                  }
                  puVar12 = (uint *)(ulong)*puVar24;
                  if (*puVar24 != 0) {
                    if ((DAT_0534bd48 & 1) == 0) {
                      DAT_0534bd48 = 1;
                      DAT_0534bd4c = 0xffffffffffffffff;
                      DAT_0534bd54 = 0xffffffffffffffff;
                      uVar20 = 0xffffffff;
                      DAT_0534bd7c = 0xffffffffffffffff;
                      DAT_0534bd5c = 0xffffffffffffffff;
                      DAT_0534bd64 = 0xffffffffffffffff;
                      DAT_0534bd6c = 0xffffffffffffffff;
                      DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c25c48:
                      if (puVar24 == puVar12) {
LAB_01c25c50:
                        puVar12 = (uint *)0x0;
                      }
                      else {
                        do {
                          if (uVar20 != 0xffffffff) goto LAB_01c25c50;
                          lVar4 = 0xc;
                          if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                            lVar4 = 0x1c;
                          }
                          lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                          if (lVar4 == 0) goto LAB_01c25c50;
                          uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                          DAT_0534bd74 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd74);
                          if (uVar20 == 0) goto LAB_01c25c50;
                          puVar16 = (uint *)(lVar4 + 4);
                          while (puVar16[-1] != 0x91eaeedd) {
                            puVar16 = puVar16 + 2;
                            uVar20 = uVar20 - 1;
                            if (uVar20 == 0) goto LAB_01c25c50;
                          }
                          uVar20 = (ulong)*puVar16;
                          uVar21 = 0;
                          if (*puVar16 != 0xffffffff) {
                            uVar21 = uVar20;
                          }
                          DAT_0534bd74 = CONCAT44((int)uVar21,(undefined4)DAT_0534bd74);
                        } while ((int)uVar21 < 0);
                        pcVar14 = (char *)(uVar21 + (long)puVar24);
                        if (pcVar14 != (char *)0x0) goto LAB_01c25c14;
                        puVar12 = (uint *)0x0;
                      }
                    }
                    else {
                      uVar20 = DAT_0534bd74 >> 0x20;
                      if ((long)DAT_0534bd74 < 0) goto LAB_01c25c48;
                      pcVar14 = (char *)(uVar20 + (long)puVar24);
                      puVar12 = (uint *)0x0;
                      if (pcVar14 == (char *)0x0) goto LAB_01c25c54;
LAB_01c25c14:
                      puVar12 = (uint *)(ulong)(*pcVar14 != '\0');
                    }
                  }
LAB_01c25c54:
                  local_84 = (ushort)(byte)puVar12;
                  uVar27 = 0;
                  puVar12 = (uint *)(ulong)*puVar24;
                  if (*puVar24 == 0) {
                    uVar30 = 0;
                    uVar28 = 0;
                  }
                  else {
                    if ((DAT_0534bd48 & 1) == 0) {
                      DAT_0534bd48 = 1;
                      DAT_0534bd4c = 0xffffffffffffffff;
                      DAT_0534bd54 = 0xffffffffffffffff;
                      uVar20 = 0xffffffff;
                      DAT_0534bd7c = 0xffffffffffffffff;
                      DAT_0534bd5c = 0xffffffffffffffff;
                      DAT_0534bd64 = 0xffffffffffffffff;
                      DAT_0534bd6c = 0xffffffffffffffff;
                      DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c25cb8:
                      uVar28 = 0;
                      if (puVar24 != puVar12) {
                        do {
                          if (uVar20 != 0xffffffff) goto LAB_01c25d44;
                          lVar4 = 0xc;
                          if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                            lVar4 = 0x1c;
                          }
                          lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                          if (lVar4 == 0) goto LAB_01c25d44;
                          uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                          DAT_0534bd54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bd54);
                          if (uVar20 == 0) goto LAB_01c25d44;
                          puVar16 = (uint *)(lVar4 + 4);
                          while (puVar16[-1] != 0x1f3893e5) {
                            puVar16 = puVar16 + 2;
                            uVar20 = uVar20 - 1;
                            if (uVar20 == 0) goto LAB_01c25d44;
                          }
                          uVar20 = (ulong)*puVar16;
                          uVar21 = 0;
                          if (*puVar16 != 0xffffffff) {
                            uVar21 = uVar20;
                          }
                          DAT_0534bd54 = CONCAT44((int)uVar21,(undefined4)DAT_0534bd54);
                        } while ((int)uVar21 < 0);
                        puVar12 = (uint *)(uVar21 + (long)puVar24);
                        if (puVar12 != (uint *)0x0) goto LAB_01c25c80;
LAB_01c25d40:
                        uVar28 = 0;
                      }
                    }
                    else {
                      uVar20 = DAT_0534bd54 >> 0x20;
                      if ((long)DAT_0534bd54 < 0) goto LAB_01c25cb8;
                      puVar12 = (uint *)(uVar20 + (long)puVar24);
                      if (puVar12 == (uint *)0x0) goto LAB_01c25d40;
LAB_01c25c80:
                      uVar28 = *puVar12;
                    }
LAB_01c25d44:
                    puVar12 = (uint *)(ulong)*puVar24;
                    if (*puVar24 == 0) {
                      uVar30 = 0;
                    }
                    else {
                      if ((DAT_0534bd48 & 1) == 0) {
                        DAT_0534bd48 = 1;
                        DAT_0534bd4c = 0xffffffffffffffff;
                        DAT_0534bd54 = 0xffffffffffffffff;
                        uVar20 = 0xffffffff;
                        DAT_0534bd7c = 0xffffffffffffffff;
                        DAT_0534bd5c = 0xffffffffffffffff;
                        DAT_0534bd64 = 0xffffffffffffffff;
                        DAT_0534bd6c = 0xffffffffffffffff;
                        DAT_0534bd74 = 0xffffffffffffffff;
LAB_01c25e88:
                        uVar30 = 0;
                        if (puVar24 != puVar12) {
                          do {
                            if (uVar20 != 0xffffffff) goto LAB_01c25f14;
                            lVar4 = 0xc;
                            if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                              lVar4 = 0x1c;
                            }
                            lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                            if (lVar4 == 0) goto LAB_01c25f14;
                            uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                            DAT_0534bd5c = CONCAT44(DAT_0534bd5c._4_4_,0xfffffffe);
                            if (uVar20 == 0) goto LAB_01c25f14;
                            puVar16 = (uint *)(lVar4 + 4);
                            while (puVar16[-1] != 0x2258ba55) {
                              puVar16 = puVar16 + 2;
                              uVar20 = uVar20 - 1;
                              if (uVar20 == 0) goto LAB_01c25f14;
                            }
                            uVar20 = (ulong)*puVar16;
                            uVar21 = 0;
                            if (*puVar16 != 0xffffffff) {
                              uVar21 = uVar20;
                            }
                            DAT_0534bd5c = CONCAT44(DAT_0534bd5c._4_4_,(int)uVar21);
                          } while ((int)uVar21 < 0);
                          puVar11 = (undefined4 *)(uVar21 + (long)puVar24);
                          if (puVar11 != (undefined4 *)0x0) goto LAB_01c25d68;
LAB_01c25f10:
                          uVar30 = 0;
                        }
                      }
                      else {
                        uVar20 = DAT_0534bd5c & 0xffffffff;
                        if ((int)DAT_0534bd5c < 0) goto LAB_01c25e88;
                        puVar11 = (undefined4 *)(uVar20 + (long)puVar24);
                        if (puVar11 == (undefined4 *)0x0) goto LAB_01c25f10;
LAB_01c25d68:
                        uVar30 = *puVar11;
                      }
LAB_01c25f14:
                      puVar12 = (uint *)(ulong)*puVar24;
                      if (*puVar24 != 0) {
                        uVar20 = DAT_0534bd5c >> 0x20;
                        if ((long)DAT_0534bd5c < 0) {
                          if (puVar24 == puVar12) goto LAB_01c25f44;
                          do {
                            if (uVar20 != 0xffffffff) goto LAB_01c25f44;
                            lVar4 = 0xc;
                            if (*(char *)((long)puVar24 + (10 - (long)puVar12)) != '\0') {
                              lVar4 = 0x1c;
                            }
                            lVar4 = (long)puVar24 + (lVar4 - (long)puVar12);
                            if (lVar4 == 0) goto LAB_01c25f44;
                            uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar12));
                            DAT_0534bd5c = CONCAT44(0xfffffffe,(int)DAT_0534bd5c);
                            if (uVar20 == 0) goto LAB_01c25f44;
                            puVar16 = (uint *)(lVar4 + 4);
                            while (puVar16[-1] != 0x65f8c085) {
                              puVar16 = puVar16 + 2;
                              uVar20 = uVar20 - 1;
                              if (uVar20 == 0) goto LAB_01c25f44;
                            }
                            uVar20 = (ulong)*puVar16;
                            uVar21 = 0;
                            if (*puVar16 != 0xffffffff) {
                              uVar21 = uVar20;
                            }
                            DAT_0534bd5c = CONCAT44((int)uVar21,(int)DAT_0534bd5c);
                          } while ((int)uVar21 < 0);
                        }
                        else {
                          uVar21 = uVar20;
                        }
                        if ((undefined4 *)(uVar21 + (long)puVar24) != (undefined4 *)0x0) {
                          uVar27 = *(undefined4 *)(uVar21 + (long)puVar24);
                        }
                      }
                    }
                  }
LAB_01c25f44:
                  local_78 = (ulong)uVar28 << 0x20;
                  local_70 = CONCAT44(uVar27,uVar30);
                  puStack_130 = local_124;
                  puStack_f8 = local_ec;
                  puStack_d8 = local_cc;
                  puStack_a0 = local_94;
                  if (*param_2 < param_2[1]) {
                    puVar10 = *(undefined8 **)(param_2 + 4);
                    if (puVar10 != (undefined8 *)0x0) {
                      *(undefined8 *)(param_2 + 4) = *puVar10;
                    }
                    FUN_01c40530(puVar10,&local_150);
                    if (*param_2 < param_2[1]) {
                      *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar10;
                      *param_2 = *param_2 + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_01c256d0:
    uVar23 = uVar23 + 1;
  } while( true );
LAB_01c25638:
  puVar10 = (undefined8 *)((ulong)(uint)DAT_0534be8c + (long)puVar24);
LAB_01c255d4:
  puVar18 = &DAT_0407ebb1;
  if (puVar10 != (undefined8 *)0x0) {
    puVar18 = puVar10;
  }
  FUN_038d1270(&local_a8,puVar18);
  if (*param_2 < param_2[1]) {
    puVar10 = *(undefined8 **)(param_2 + 4);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 4) = *puVar10;
    }
    FUN_01c40530(puVar10,&local_150);
    if (*param_2 < param_2[1]) {
      *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar10;
      *param_2 = *param_2 + 1;
    }
  }
LAB_01c24218:
  uVar23 = uVar23 + 1;
  goto LAB_01c2421c;
}


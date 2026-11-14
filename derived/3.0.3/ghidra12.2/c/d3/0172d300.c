
/* WARNING: Removing unreachable block (ram,0x0172d7e0) */
/* WARNING: Removing unreachable block (ram,0x0172da0c) */

void FUN_0172d300(long *param_1,uint *param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  char cVar15;
  uint *puVar16;
  int *piVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  undefined8 *puVar21;
  char *pcVar22;
  undefined *local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_75;
  undefined8 local_70;
  char *local_68;
  
  puVar8 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb2020;
  local_75 = 0;
  local_a0 = (char *)((long)&local_98 + 4);
  local_98 = 0x6552614d00000020;
  local_90 = 0;
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  uVar20 = *param_2;
  if (uVar20 == 0) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "DeliveryOption";
    if (*(long *)(*param_1 + 0x1138) == 0) {
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      pcVar22 = *(char **)(puVar8 + 8);
      if (pcVar22 != (char *)0x0) goto LAB_0172d53c;
LAB_0172d584:
      (**(code **)(*(long *)*param_1 + 0x230))(&local_70);
      pcVar22 = local_a0;
      (**(code **)(local_70 + 0x18))(&local_70);
      pcVar3 = local_68;
      if (pcVar22 != local_68) {
        (**(code **)(local_70 + 0x18))(&local_70);
        lVar13 = 0;
        do {
          if (local_68[lVar13] == '\0') goto LAB_0172d65c;
          if (local_68[lVar13 + 1] == '\0') {
            lVar13 = lVar13 + 1;
            goto LAB_0172d65c;
          }
          if (local_68[lVar13 + 2] == '\0') {
            lVar13 = lVar13 + 2;
            goto LAB_0172d65c;
          }
          lVar13 = lVar13 + 3;
        } while (lVar13 != 0x80001);
        lVar13 = 0;
LAB_0172d65c:
        iVar1 = (int)lVar13;
        if ((int)local_98 <= (int)lVar13) {
          iVar1 = (int)local_98 + -1;
        }
        memcpy(pcVar22,pcVar3,(long)iVar1);
        pcVar22[iVar1] = '\0';
      }
      bVar4 = true;
    }
    else {
      lVar13 = *(long *)(*(long *)(*param_1 + 0x1138) + 0x78);
      if (((lVar13 == 0) || (plVar19 = *(long **)(lVar13 + 0x48), plVar19 == (long *)0x0)) ||
         (pcVar22 = (char *)(**(code **)(*plVar19 + 0xf0))(plVar19,&local_70),
         pcVar22 == (char *)0x0)) goto LAB_0172d584;
LAB_0172d53c:
      pcVar3 = local_a0;
      if ((pcVar22 != "Keep") &&
         (((*pcVar22 != 'K' || (pcVar22[1] != 'e')) ||
          ((pcVar22[2] != 'e' || ((pcVar22[3] != 'p' || (pcVar22[4] != '\0'))))))))
      goto LAB_0172d584;
      if (local_a0 == "MaReEmotEnd") {
        bVar4 = false;
      }
      else {
        iVar1 = 0xb;
        if ((int)local_98 < 0xc) {
          iVar1 = (int)local_98 + -1;
        }
        memcpy(local_a0,"MaReEmotEnd",(long)iVar1);
        pcVar3[iVar1] = '\0';
        bVar4 = false;
      }
    }
  }
  else {
    if ((int)uVar20 < 0x6d) {
      if (0x6c < uVar20) goto LAB_0172d3e8;
      puVar8 = PTR_s_EmotEnd_04bb4608 + 0x528;
LAB_0172d400:
      puVar21 = *(undefined8 **)(puVar8 + (ulong)uVar20 * 8);
    }
    else {
      if (uVar20 < 0x79) {
        puVar8 = (undefined *)FUN_007c3ad0();
        uVar20 = uVar20 - 0x6d;
        goto LAB_0172d400;
      }
LAB_0172d3e8:
      puVar21 = &DAT_0407ebb1;
    }
    pcVar22 = local_a0;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar13 = 0;
    do {
      if (local_a0[lVar13] == '\0') goto LAB_0172d480;
      if (local_a0[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_0172d480;
      }
      if (local_a0[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_0172d480;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_0172d480:
    uVar20 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
    lVar13 = 0;
    do {
      if (*(char *)((long)puVar21 + lVar13) == '\0') goto LAB_0172d4cc;
      if (*(char *)((long)puVar21 + lVar13 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_0172d4cc;
      }
      if (*(char *)((long)puVar21 + lVar13 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_0172d4cc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_0172d4cc:
    uVar14 = (uint)lVar13;
    if ((int)((int)local_98 - uVar20) <= (int)(uint)lVar13) {
      uVar14 = (int)local_98 + ~uVar20;
    }
    if (0 < (int)uVar14) {
      memcpy(pcVar22 + uVar20,puVar21,(ulong)uVar14);
      pcVar22[(int)(uVar14 + uVar20)] = '\0';
    }
    bVar4 = false;
  }
  *(bool *)((long)param_1 + 0x17) = *param_2 == 0x46;
  if (*(char *)((long)param_1 + 0x16) == '\0') {
    if ((param_3 & 1) == 0) {
      lVar13 = *(long *)(*param_1 + 0x1138);
      if (lVar13 == 0) {
        local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
      }
      else {
        uVar14 = *(uint *)(*param_1 + 0x1698) >> 1;
        uVar20 = uVar14 & 1;
        local_70 = (undefined *)(CONCAT44(local_70._4_4_,uVar14) & 0xffffffff00000001);
        uVar14 = 0;
        if (*(long *)(lVar13 + 0x78) != 0) {
          uVar14 = *(uint *)(*(long *)(lVar13 + 0x78) + 0x18);
        }
        if (uVar14 <= uVar20) {
          uVar20 = 0;
        }
        if (*(uint *)(lVar13 + 0x80) <= uVar20) {
          uVar20 = 0;
        }
        lVar13 = *(long *)(lVar13 + 0x88) + (long)(int)uVar20 * 0xe8;
        plVar19 = (long *)(lVar13 + 0x60);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        pcVar22 = *(char **)(lVar13 + 0x68);
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (pcVar22 == local_a0) {
          return;
        }
        pcVar22 = *(char **)(lVar13 + 0x68);
        if (*pcVar22 == *local_a0) {
          if (*pcVar22 == '\0') {
            return;
          }
          uVar12 = 0;
          do {
            uVar11 = uVar12;
            if ((uVar11 == 0x80000) || (pcVar22[uVar11 + 1] != local_a0[uVar11 + 1]))
            goto LAB_0172d8cc;
            if (pcVar22[uVar11 + 1] == '\0') goto LAB_0172d8c4;
            if (pcVar22[uVar11 + 2] != local_a0[uVar11 + 2]) goto LAB_0172d8cc;
            uVar12 = uVar11 + 2;
          } while (pcVar22[uVar11 + 2] != '\0');
          uVar11 = uVar11 + 1;
LAB_0172d8c4:
          if (uVar11 < 0x80000) {
            return;
          }
        }
      }
    }
LAB_0172d8cc:
    lVar13 = *param_1;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,1);
    lVar18 = *(long *)(lVar13 + 0x1138);
    if (lVar18 == 0) {
      puVar21 = &DAT_04c931a0;
    }
    else {
      uVar20 = 0;
      if (*(long *)(lVar18 + 0x78) != 0) {
        uVar20 = *(uint *)(*(long *)(lVar18 + 0x78) + 0x18);
      }
      uVar20 = (uint)(1 < uVar20);
      if (*(uint *)(lVar18 + 0x80) <= uVar20) {
        uVar20 = 0;
      }
      puVar21 = (undefined8 *)(*(long *)(lVar18 + 0x88) + (long)(int)uVar20 * 0xe8 + 0x60);
    }
    puVar8 = local_70;
    if (*(char *)puVar21[1] == '\0') {
      iVar1 = 0;
      if (*(int *)(lVar13 + 0x5ee4) != 5) {
        iVar1 = *(int *)(lVar13 + 0x5ee4);
      }
      local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar1);
      puVar8 = local_70;
      if (iVar1 != 0) {
        if (lVar18 == 0) {
          puVar21 = &DAT_04c931a0;
        }
        else {
          puVar21 = (undefined8 *)(*(long *)(lVar18 + 0x88) + 0x60);
        }
        local_68 = (char *)puVar21[1];
        local_70 = puVar2 + 0x10;
        FUN_01707d90(lVar13,&local_70,6,0,0);
        puVar8 = local_70;
      }
    }
  }
  else {
    puVar8 = local_70;
    if ((param_3 & 1) == 0) {
      local_70 = (undefined *)CONCAT44(local_70._4_4_,6);
      puVar8 = local_70;
      local_70._0_4_ = 6;
      lVar13 = *(long *)(*param_1 + 0x1138);
      if (lVar13 != 0) {
        uVar20 = 0;
        if (*(long *)(lVar13 + 0x78) != 0) {
          uVar20 = *(uint *)(*(long *)(lVar13 + 0x78) + 0x18);
        }
        if (uVar20 < 7) {
          local_70._0_4_ = 0;
        }
        if (*(uint *)(lVar13 + 0x80) <= (uint)local_70) {
          local_70._0_4_ = 0;
        }
        lVar13 = *(long *)(lVar13 + 0x88) + (long)(int)(uint)local_70 * 0xe8;
        plVar19 = (long *)(lVar13 + 0x60);
        local_70 = puVar8;
        (**(code **)(*plVar19 + 0x18))(plVar19);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        pcVar22 = *(char **)(lVar13 + 0x68);
        (**(code **)(local_a8 + 0x18))(&local_a8);
        if (pcVar22 == local_a0) {
          return;
        }
        pcVar22 = *(char **)(lVar13 + 0x68);
        puVar8 = local_70;
        if (*pcVar22 == *local_a0) {
          if (*pcVar22 == '\0') {
            return;
          }
          uVar12 = 0;
          do {
            uVar11 = uVar12;
            if ((uVar11 == 0x80000) || (pcVar22[uVar11 + 1] != local_a0[uVar11 + 1]))
            goto LAB_0172d9b0;
            if (pcVar22[uVar11 + 1] == '\0') goto LAB_0172d794;
            if (pcVar22[uVar11 + 2] != local_a0[uVar11 + 2]) goto LAB_0172d9b0;
            uVar12 = uVar11 + 2;
          } while (pcVar22[uVar11 + 2] != '\0');
          uVar11 = uVar11 + 1;
LAB_0172d794:
          if (uVar11 < 0x80000) {
            return;
          }
        }
      }
    }
  }
LAB_0172d9b0:
  local_70 = puVar8;
  uVar20 = *param_2;
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0;
  lVar18 = *param_1;
  *(uint *)(param_1 + 1) = uVar20;
  *(undefined8 *)((long)param_1 + 0xc) = 0xfffffffe;
  lVar13 = *(long *)(lVar18 + 0x1138);
  if (lVar13 == 0) {
    local_70._0_4_ = 0;
    puVar21 = &DAT_04c931a0;
  }
  else {
    local_70._0_4_ = *(uint *)(lVar18 + 0x1698) >> 1 & 1;
    uVar20 = 0;
    if (*(long *)(lVar13 + 0x78) != 0) {
      uVar20 = *(uint *)(*(long *)(lVar13 + 0x78) + 0x18);
    }
    uVar14 = (uint)local_70;
    if (uVar20 <= (uint)local_70) {
      uVar14 = 0;
    }
    if (*(uint *)(lVar13 + 0x80) <= uVar14) {
      uVar14 = 0;
    }
    puVar21 = (undefined8 *)(*(long *)(lVar13 + 0x88) + (long)(int)uVar14 * 0xe8 + 0x60);
  }
  if (*(char *)puVar21[1] == '\0') {
    *(undefined1 *)((long)param_1 + 0x16) = 0;
LAB_0172daa8:
    FUN_017081d0(lVar18,&local_a8,6,0,0);
    if (((*(byte *)(param_1 + 3) & 1) != 0) && ((int)param_1[1] != 0)) {
      puVar9 = (uint *)FUN_0171ee68(&local_a8);
      puVar10 = PTR_DAT_04bbde90;
      puVar8 = PTR_DAT_04bbde88;
      if (puVar9 != (uint *)0x0) {
        if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
          bVar6 = false;
          if ((*(byte *)(param_1 + 3) >> 2 & 1) == 0) goto LAB_0172dd34;
LAB_0172daec:
          puVar10 = PTR_DAT_04bbde90;
          puVar8 = PTR_DAT_04bbde88;
          bVar5 = true;
          local_70._0_4_ = 1;
          uVar20 = *puVar9;
          if (uVar20 != 0) {
            cVar15 = *PTR_DAT_04bbde88;
LAB_0172db28:
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar10 = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
              *puVar8 = 1;
              *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
              uVar20 = *puVar9;
LAB_0172db5c:
              puVar16 = (uint *)(ulong)uVar20;
              if ((puVar16 == (uint *)0x0) || (puVar9 == puVar16)) goto LAB_0172dd38;
              lVar13 = 0xc;
              if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar9 + (lVar13 - (long)puVar16);
              if (lVar13 == 0) goto LAB_0172dce8;
              uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
              *(undefined4 *)(puVar10 + 0x10) = 0xfffffffe;
              if (uVar12 == 0) goto LAB_0172dce8;
              piVar17 = (int *)(lVar13 + 4);
              while (piVar17[-1] != -0x60aedc2c) {
                piVar17 = piVar17 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0172dce8;
              }
              iVar1 = 0;
              if (*piVar17 != -1) {
                iVar1 = *piVar17;
              }
              *(int *)(puVar10 + 0x10) = iVar1;
              uVar20 = *puVar9;
              if (uVar20 == 0) goto LAB_0172dce8;
              goto LAB_0172db28;
            }
            uVar14 = *(uint *)(puVar10 + 0x10);
            if ((int)uVar14 < 0) {
              if (uVar14 != 0xffffffff) goto LAB_0172dce8;
              goto LAB_0172db5c;
            }
            if ((byte *)((ulong)uVar14 + (long)puVar9) != (byte *)0x0) {
              bVar5 = (*(byte *)((ulong)uVar14 + (long)puVar9) >> 1 & 1) == 0;
              goto LAB_0172dd38;
            }
LAB_0172dce8:
            bVar5 = true;
          }
        }
        else {
          local_70._0_4_ = 0;
          uVar20 = *puVar9;
          if (uVar20 != 0) {
            cVar15 = *PTR_DAT_04bbde88;
            do {
              if (cVar15 == '\0') {
                cVar15 = '\x01';
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *puVar8 = 1;
                *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
                uVar20 = *puVar9;
              }
              else {
                uVar14 = *(uint *)(puVar10 + 0x10);
                if (-1 < (int)uVar14) {
                  if ((byte *)((ulong)uVar14 + (long)puVar9) != (byte *)0x0) {
                    bVar6 = (*(byte *)((ulong)uVar14 + (long)puVar9) & 1) == 0;
                    goto LAB_0172dd2c;
                  }
                  break;
                }
                if (uVar14 != 0xffffffff) break;
              }
              puVar16 = (uint *)(ulong)uVar20;
              bVar6 = true;
              if ((puVar16 == (uint *)0x0) || (puVar9 == puVar16)) goto LAB_0172dd2c;
              lVar13 = 0xc;
              if (*(char *)((long)puVar9 + (10 - (long)puVar16)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar9 + (lVar13 - (long)puVar16);
              if (lVar13 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar16));
              *(undefined4 *)(puVar10 + 0x10) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar17 = (int *)(lVar13 + 4);
              while (piVar17[-1] != -0x60aedc2c) {
                piVar17 = piVar17 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0172dd28;
              }
              iVar1 = 0;
              if (*piVar17 != -1) {
                iVar1 = *piVar17;
              }
              *(int *)(puVar10 + 0x10) = iVar1;
              uVar20 = *puVar9;
              if (uVar20 == 0) break;
            } while( true );
          }
LAB_0172dd28:
          bVar6 = true;
LAB_0172dd2c:
          if ((*(byte *)(param_1 + 3) >> 2 & 1) != 0) goto LAB_0172daec;
LAB_0172dd34:
          bVar5 = false;
        }
LAB_0172dd38:
        if (bVar6) {
          lVar13 = *param_1;
          FUN_01707310(lVar13,&local_a8,0,3,0);
          FUN_01707750(lVar13,&local_a8);
        }
        if (bVar5) {
          lVar13 = *param_1;
          FUN_01707310(lVar13,&local_a8,0,2,0);
          FUN_01707750(lVar13,&local_a8);
        }
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8;
    }
    if (bVar4) {
      lVar13 = *param_1;
      uVar20 = 0;
      if (*(uint *)(lVar13 + 0x5ee4) != 5) {
        uVar20 = *(uint *)(lVar13 + 0x5ee4);
      }
      if (((uVar20 < 4) && (uVar20 != 2)) && ((*(uint *)(lVar13 + 0x15f4) >> 8 & 1) != 0)) {
        local_70 = puVar2 + 0x10;
        local_68 = "CommonSmartPhoneTalk";
        FUN_017081d0(lVar13,&local_70,6,0,0);
      }
    }
  }
  else {
    FUN_0171ee68(puVar21);
    bVar7 = FUN_0170b2d0(*param_1,puVar21);
    lVar18 = *param_1;
    *(byte *)((long)param_1 + 0x16) = bVar7 & 1;
    if ((bVar7 & 1) == 0) goto LAB_0172daa8;
    FUN_01707310(lVar18,&local_a8,6,6,0);
    FUN_01707750(lVar18,&local_a8);
  }
  puVar8 = PTR_s_Default_04bb66d8;
  local_70 = puVar2 + 0x10;
  local_68 = "DeliveryOption";
  lVar13 = *(long *)(*(long *)(*param_1 + 0x1138) + 0x78);
  if ((lVar13 == 0) || (plVar19 = *(long **)(lVar13 + 0x48), plVar19 == (long *)0x0)) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = (undefined *)(**(code **)(*plVar19 + 0xf0))(plVar19,&local_70);
    if (puVar10 == puVar8 + 9) goto LAB_0172dea4;
  }
  uVar12 = 0;
  bVar4 = true;
  while( true ) {
    if (puVar10[uVar12] != puVar8[uVar12 + 9]) {
      return;
    }
    if (puVar10[uVar12] == '\0') break;
    bVar4 = uVar12 < 0x80000;
    uVar12 = uVar12 + 1;
    if (uVar12 == 0x80001) {
      return;
    }
  }
  if (!bVar4) {
    return;
  }
LAB_0172dea4:
  local_70 = puVar2 + 0x10;
  local_68 = "DeliveryMrHand";
  FUN_01711ed0(*param_1,&local_70,6);
  return;
}


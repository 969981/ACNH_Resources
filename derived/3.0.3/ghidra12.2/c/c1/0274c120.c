
/* WARNING: Removing unreachable block (ram,0x0274c87c) */
/* WARNING: Removing unreachable block (ram,0x0274ca18) */

void FUN_0274c120(ushort *param_1,long *param_2,uint param_3,byte *param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  ushort *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  ushort uVar12;
  uint uVar13;
  char *pcVar14;
  char cVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  int *piVar19;
  long lVar20;
  uint uVar21;
  byte local_ac [4];
  byte local_a8 [4];
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte local_64 [4];
  
  puVar6 = (uint *)FUN_0274eeb0(param_2);
  if (puVar6 == (uint *)0x0) {
    return;
  }
  puVar7 = (uint *)FUN_0274eeb0(param_2);
  puVar4 = PTR_DAT_04bb6348;
  puVar3 = PTR_DAT_04bb6340;
  if (puVar7 == (uint *)0x0) {
    uVar21 = 0;
    if (*puVar6 == 0) goto LAB_0274c32c;
LAB_0274c264:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar13 = *(uint *)(puVar4 + 4);
        if (-1 < (int)uVar13) {
          if ((uint *)((ulong)uVar13 + (long)puVar6) == (uint *)0x0) goto LAB_0274c32c;
          uVar13 = *(uint *)((ulong)uVar13 + (long)puVar6);
          goto LAB_0274c330;
        }
        if (uVar13 != 0xffffffff) goto LAB_0274c32c;
      }
      puVar7 = (uint *)(ulong)*puVar6;
      uVar13 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar7)) goto LAB_0274c330;
      lVar9 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar7)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar6 + (lVar9 - (long)puVar7);
      if (lVar9 == 0) goto LAB_0274c32c;
      uVar16 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar7));
      *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
      uVar13 = 0;
      if (uVar16 == 0) goto LAB_0274c330;
      piVar19 = (int *)(lVar9 + 4);
      while (piVar19[-1] != 0x344b17d7) {
        piVar19 = piVar19 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar13 = 0;
          goto LAB_0274c330;
        }
      }
      iVar5 = 0;
      if (*piVar19 != -1) {
        iVar5 = *piVar19;
      }
      *(int *)(puVar4 + 4) = iVar5;
    } while (*puVar6 != 0);
    uVar13 = 0;
  }
  else {
    puVar8 = param_1;
    if (*puVar7 != 0) {
      cVar15 = *PTR_DAT_04bb6340;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar21 = *puVar7;
        }
        else {
          uVar21 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar21) {
            if (((ushort *)((ulong)uVar21 + (long)puVar7) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar21 + (long)puVar7), uVar2 < 0x800)) {
              puVar8 = param_1 + uVar2;
            }
            break;
          }
          if (uVar21 != 0xffffffff) break;
          uVar21 = *puVar7;
        }
        if ((uVar21 == 0) || (puVar18 = (uint *)(ulong)uVar21, puVar7 == puVar18)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar18)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + (lVar9 - (long)puVar18);
        if (lVar9 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar18));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar19 = (int *)(lVar9 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0274c248;
        }
        iVar5 = 0;
        if (*piVar19 != -1) {
          iVar5 = *piVar19;
        }
        *(int *)(puVar4 + 8) = iVar5;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_0274c248:
    uVar21 = (uint)*puVar8;
    if (*puVar6 != 0) goto LAB_0274c264;
LAB_0274c32c:
    uVar13 = 0;
  }
LAB_0274c330:
  uVar1 = param_3;
  if ((int)uVar13 <= (int)param_3) {
    uVar1 = uVar13;
  }
  uVar13 = 0;
  if (-1 < (int)param_3) {
    uVar13 = uVar1;
  }
  if (uVar21 == uVar13) {
    return;
  }
  if (*puVar6 != 0) {
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        uVar1 = *puVar6;
      }
      else {
        uVar1 = *(uint *)(puVar4 + 8);
        if (-1 < (int)uVar1) {
          if ((ushort *)((ulong)uVar1 + (long)puVar6) != (ushort *)0x0) {
            uVar2 = *(ushort *)((ulong)uVar1 + (long)puVar6);
            if (0xfffe < uVar13) {
              uVar13 = 0xffff;
            }
            uVar12 = (ushort)uVar13;
            if (0x7ff < uVar2) goto LAB_0274c46c;
            puVar8 = param_1 + uVar2;
            goto LAB_0274c470;
          }
          break;
        }
        if (uVar1 != 0xffffffff) break;
        uVar1 = *puVar6;
      }
      if ((uVar1 == 0) || (puVar7 = (uint *)(ulong)uVar1, puVar6 == puVar7)) break;
      lVar9 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar7)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar6 + (lVar9 - (long)puVar7);
      if (lVar9 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar7));
      *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar19 = (int *)(lVar9 + 4);
      while (piVar19[-1] != 0x54706054) {
        piVar19 = piVar19 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0274c460;
      }
      iVar5 = 0;
      if (*piVar19 != -1) {
        iVar5 = *piVar19;
      }
      *(int *)(puVar4 + 8) = iVar5;
      if (*puVar6 == 0) break;
    } while( true );
  }
LAB_0274c460:
  if (0xfffe < uVar13) {
    uVar13 = 0xffff;
  }
  uVar12 = (ushort)uVar13;
LAB_0274c46c:
  puVar8 = param_1;
LAB_0274c470:
  *puVar8 = uVar12;
  puVar7 = (uint *)FUN_0274eeb0(param_2);
  if (puVar7 == (uint *)0x0) {
    uVar13 = 0;
    if (uVar21 != 0) goto LAB_0274c574;
  }
  else {
    if (*puVar7 != 0) {
      cVar15 = *puVar3;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar13 = *puVar7;
        }
        else {
          uVar13 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar13) {
            if (((ushort *)((ulong)uVar13 + (long)puVar7) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar13 + (long)puVar7), uVar2 < 0x800)) {
              param_1 = param_1 + uVar2;
            }
            break;
          }
          if (uVar13 != 0xffffffff) break;
          uVar13 = *puVar7;
        }
        if ((uVar13 == 0) || (puVar18 = (uint *)(ulong)uVar13, puVar7 == puVar18)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar18)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + (lVar9 - (long)puVar18);
        if (lVar9 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar18));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar19 = (int *)(lVar9 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_0274c568;
        }
        iVar5 = 0;
        if (*piVar19 != -1) {
          iVar5 = *piVar19;
        }
        *(int *)(puVar4 + 8) = iVar5;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_0274c568:
    uVar13 = (uint)*param_1;
    if (uVar21 != *param_1) {
LAB_0274c574:
      local_64[0] = *param_4;
      if (7 < local_64[0]) {
        local_64[0] = 0xff;
      }
      iVar5 = FUN_02582fe0(local_64);
      if ((iVar5 != -1) && (*puVar6 != 0)) {
        cVar15 = *puVar3;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            uVar1 = *puVar6;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x24);
            if (-1 < (int)uVar1) {
              if (((char *)((ulong)uVar1 + (long)puVar6) != (char *)0x0) &&
                 (*(char *)((ulong)uVar1 + (long)puVar6) != '\0')) {
                local_98 = CONCAT44(local_98._4_4_,4);
                if ((*(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) >> 4 & 1) == 0) {
                  FUN_025ce0f0(&local_98,param_4);
                  local_a0 = uVar21;
                  uStack_9c = uVar13;
                  puVar8 = (ushort *)
                           FUN_00aa2210(puVar6,2,0x54706054,*(undefined8 *)PTR_DAT_04bc0540);
                  if (puVar8 == (ushort *)0x0) {
                    local_a4 = 0;
                  }
                  else {
                    local_a4 = (uint)*puVar8;
                  }
                  FUN_025ce2b0(&local_98,&local_a4);
                  FUN_025ce1dc(&local_98);
                }
              }
              break;
            }
            if (uVar1 != 0xffffffff) break;
            uVar1 = *puVar6;
          }
          if ((uVar1 == 0) || (puVar7 = (uint *)(ulong)uVar1, puVar6 == puVar7)) break;
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + (10 - (long)puVar7)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + (lVar9 - (long)puVar7);
          if (lVar9 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar7));
          *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar19 = (int *)(lVar9 + 4);
          while (piVar19[-1] != -0x1d40080b) {
            piVar19 = piVar19 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_0274c6e4;
          }
          iVar5 = 0;
          if (*piVar19 != -1) {
            iVar5 = *piVar19;
          }
          *(int *)(puVar4 + 0x24) = iVar5;
          if (*puVar6 == 0) break;
        } while( true );
      }
    }
  }
LAB_0274c6e4:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar14 = (char *)param_2[1];
  if (pcVar14 == "UpgradePocket30") {
    uVar21 = 1;
LAB_0274c784:
    uVar13 = (uint)(0 < (int)param_3);
    if ((0 < (int)param_3) && (uVar21 != 0)) {
      local_a8[0] = *param_4;
      uVar13 = 1;
      if (7 < local_a8[0]) {
        local_a8[0] = 0xff;
      }
      lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_a8,1);
      if (lVar9 != 0) {
        lVar20 = lVar9 + 0x194b0;
        if (*(long *)(lVar9 + 0x194b8) == 0) {
          lVar20 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        lVar9 = *(long *)(lVar20 + 0x98);
        if (lVar9 == 0) {
          uVar16 = 0;
        }
        else {
          if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
            uVar16 = 0;
          }
          else {
            uVar16 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            lVar9 = *(long *)(lVar20 + 0x98);
            uVar16 = uVar16 & 0xffffffff;
            if (lVar9 == 0) goto LAB_0274c84c;
          }
          plVar11 = *(long **)(lVar9 + 0x20);
          if (plVar11 != (long *)0x0) {
            local_98 = *(undefined8 *)(lVar20 + 0x78);
            uStack_90 = *(undefined8 *)(lVar20 + 0x80);
            local_88 = 0x17c;
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_98);
          }
        }
LAB_0274c84c:
        uVar13 = 1;
        local_98 = CONCAT44(local_98._4_4_,1);
        lVar9 = *(long *)(lVar20 + 0x80) + *(long *)(lVar20 + 0x78);
        *(undefined1 *)(lVar9 + 0x178) = 1;
        *(undefined4 *)(lVar9 + 0xa0) = 10;
        if ((uVar16 & 1) != 0) {
          if ((*(long *)(lVar20 + 0x98) != 0) &&
             (puVar10 = *(undefined8 **)(*(long *)(lVar20 + 0x98) + 0x18),
             puVar10 != (undefined8 *)0x0)) {
            (**(code **)*puVar10)();
          }
          uVar13 = 1;
        }
      }
    }
  }
  else {
    if (*pcVar14 == 'U') {
      uVar16 = 0;
      do {
        uVar17 = uVar16;
        uVar16 = uVar17;
        if (uVar17 == 0x80000) goto LAB_0274c778;
        if (pcVar14[uVar17 + 1] != "UpgradePocket30"[uVar17 + 1]) {
          uVar16 = 0;
          goto LAB_0274c778;
        }
        uVar16 = uVar17 + 1;
      } while (pcVar14[uVar17 + 1] != '\0');
      uVar16 = 1;
LAB_0274c778:
      uVar21 = (uint)(uVar17 < 0x80000) & (uint)uVar16;
      goto LAB_0274c784;
    }
    uVar13 = (uint)(0 < (int)param_3);
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar14 = (char *)param_2[1];
  if (pcVar14 == "UpgradePocket40") {
    uVar21 = 1;
  }
  else {
    if (*pcVar14 != 'U') {
      return;
    }
    uVar16 = 0;
    do {
      uVar17 = uVar16;
      uVar16 = uVar17;
      if (uVar17 == 0x80000) goto LAB_0274c92c;
      if (pcVar14[uVar17 + 1] != "UpgradePocket40"[uVar17 + 1]) {
        uVar16 = 0;
        goto LAB_0274c92c;
      }
      uVar16 = uVar17 + 1;
    } while (pcVar14[uVar17 + 1] != '\0');
    uVar16 = 1;
LAB_0274c92c:
    uVar21 = (uint)(uVar17 < 0x80000) & (uint)uVar16;
  }
  if ((uVar13 & uVar21) != 1) {
    return;
  }
  local_ac[0] = *param_4;
  if (7 < local_ac[0]) {
    local_ac[0] = 0xff;
  }
  lVar9 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_ac,1);
  if (lVar9 == 0) {
    return;
  }
  lVar20 = lVar9 + 0x194b0;
  if (*(long *)(lVar9 + 0x194b8) == 0) {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  lVar9 = *(long *)(lVar20 + 0x98);
  if (lVar9 == 0) {
    uVar16 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      lVar9 = *(long *)(lVar20 + 0x98);
      uVar16 = uVar16 & 0xffffffff;
      if (lVar9 == 0) goto LAB_0274c9f4;
    }
    plVar11 = *(long **)(lVar9 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_98 = *(undefined8 *)(lVar20 + 0x78);
      uStack_90 = *(undefined8 *)(lVar20 + 0x80);
      local_88 = 0x17c;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_98);
    }
  }
LAB_0274c9f4:
  lVar9 = *(long *)(lVar20 + 0x80) + *(long *)(lVar20 + 0x78);
  local_98 = CONCAT44(local_98._4_4_,2);
  *(undefined1 *)(lVar9 + 0x178) = 2;
  *(undefined4 *)(lVar9 + 0xa0) = 0x14;
  if ((((uVar16 & 1) != 0) && (*(long *)(lVar20 + 0x98) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar20 + 0x98) + 0x18), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  return;
}


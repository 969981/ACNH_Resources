
void FUN_0274d230(ushort *param_1,long *param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  ushort *puVar14;
  undefined4 uVar15;
  char *pcVar16;
  char cVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint *puVar21;
  int *piVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  int local_7c;
  long local_78;
  undefined8 local_70;
  char *pcStack_68;
  
  puVar8 = (uint *)FUN_0274eeb0(param_2);
  if (puVar8 == (uint *)0x0) {
    return;
  }
  puVar9 = (uint *)FUN_0274eeb0(param_2);
  puVar5 = PTR_DAT_04bb6348;
  puVar4 = PTR_DAT_04bb6340;
  if (puVar9 == (uint *)0x0) {
    uVar25 = 0;
    if (*puVar8 == 0) goto LAB_0274d43c;
LAB_0274d374:
    cVar17 = *puVar4;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar24 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar24) {
          if ((uint *)((ulong)uVar24 + (long)puVar8) == (uint *)0x0) goto LAB_0274d43c;
          uVar24 = *(uint *)((ulong)uVar24 + (long)puVar8);
          goto LAB_0274d440;
        }
        if (uVar24 != 0xffffffff) goto LAB_0274d43c;
      }
      puVar9 = (uint *)(ulong)*puVar8;
      uVar24 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_0274d440;
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
      if (lVar10 == 0) goto LAB_0274d43c;
      uVar18 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      uVar24 = 0;
      if (uVar18 == 0) goto LAB_0274d440;
      piVar22 = (int *)(lVar10 + 4);
      while (piVar22[-1] != 0x344b17d7) {
        piVar22 = piVar22 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) {
          uVar24 = 0;
          goto LAB_0274d440;
        }
      }
      iVar7 = 0;
      if (*piVar22 != -1) {
        iVar7 = *piVar22;
      }
      *(int *)(puVar5 + 4) = iVar7;
    } while (*puVar8 != 0);
    uVar24 = 0;
  }
  else {
    puVar14 = param_1;
    if (*puVar9 != 0) {
      cVar17 = *PTR_DAT_04bb6340;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar25 = *puVar9;
        }
        else {
          uVar25 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar25) {
            if (((ushort *)((ulong)uVar25 + (long)puVar9) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar25 + (long)puVar9), uVar2 < 0x800)) {
              puVar14 = param_1 + uVar2;
            }
            break;
          }
          if (uVar25 != 0xffffffff) break;
          uVar25 = *puVar9;
        }
        if ((uVar25 == 0) || (puVar21 = (uint *)(ulong)uVar25, puVar9 == puVar21)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar21)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar21);
        if (lVar10 == 0) break;
        uVar18 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar21));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar22 = (int *)(lVar10 + 4);
        while (piVar22[-1] != 0x54706054) {
          piVar22 = piVar22 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_0274d358;
        }
        iVar7 = 0;
        if (*piVar22 != -1) {
          iVar7 = *piVar22;
        }
        *(int *)(puVar5 + 8) = iVar7;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0274d358:
    uVar25 = (uint)*puVar14;
    if (*puVar8 != 0) goto LAB_0274d374;
LAB_0274d43c:
    uVar24 = 0;
  }
LAB_0274d440:
  uVar20 = param_3;
  if ((int)uVar24 <= (int)param_3) {
    uVar20 = uVar24;
  }
  uVar24 = 0;
  if (-1 < (int)param_3) {
    uVar24 = uVar20;
  }
  if (uVar25 == uVar24) {
    return;
  }
  if (*puVar8 != 0) {
    cVar17 = *puVar4;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        uVar20 = *puVar8;
      }
      else {
        uVar20 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar20) {
          if ((ushort *)((ulong)uVar20 + (long)puVar8) != (ushort *)0x0) {
            uVar2 = *(ushort *)((ulong)uVar20 + (long)puVar8);
            if (0xfffe < uVar24) {
              uVar24 = 0xffff;
            }
            uVar13 = (ushort)uVar24;
            if (0x7ff < uVar2) goto LAB_0274d59c;
            puVar14 = param_1 + uVar2;
            goto LAB_0274d5a0;
          }
          break;
        }
        if (uVar20 != 0xffffffff) break;
        uVar20 = *puVar8;
      }
      if ((uVar20 == 0) || (puVar9 = (uint *)(ulong)uVar20, puVar8 == puVar9)) break;
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
      if (lVar10 == 0) break;
      uVar18 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      if (uVar18 == 0) break;
      piVar22 = (int *)(lVar10 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_0274d590;
      }
      iVar7 = 0;
      if (*piVar22 != -1) {
        iVar7 = *piVar22;
      }
      *(int *)(puVar5 + 8) = iVar7;
      if (*puVar8 == 0) break;
    } while( true );
  }
LAB_0274d590:
  if (0xfffe < uVar24) {
    uVar24 = 0xffff;
  }
  uVar13 = (ushort)uVar24;
LAB_0274d59c:
  puVar14 = param_1;
LAB_0274d5a0:
  *puVar14 = uVar13;
  puVar9 = (uint *)FUN_0274eeb0(param_2);
  if (puVar9 == (uint *)0x0) {
    uVar24 = 0;
    if (uVar25 != 0) goto LAB_0274d6a4;
  }
  else {
    if (*puVar9 != 0) {
      cVar17 = *puVar4;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar24 = *puVar9;
        }
        else {
          uVar24 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar24) {
            if (((ushort *)((ulong)uVar24 + (long)puVar9) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar24 + (long)puVar9), uVar2 < 0x800)) {
              param_1 = param_1 + uVar2;
            }
            break;
          }
          if (uVar24 != 0xffffffff) break;
          uVar24 = *puVar9;
        }
        if ((uVar24 == 0) || (puVar21 = (uint *)(ulong)uVar24, puVar9 == puVar21)) break;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar21)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + (lVar10 - (long)puVar21);
        if (lVar10 == 0) break;
        uVar18 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar21));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar18 == 0) break;
        piVar22 = (int *)(lVar10 + 4);
        while (piVar22[-1] != 0x54706054) {
          piVar22 = piVar22 + 2;
          uVar18 = uVar18 - 1;
          if (uVar18 == 0) goto LAB_0274d698;
        }
        iVar7 = 0;
        if (*piVar22 != -1) {
          iVar7 = *piVar22;
        }
        *(int *)(puVar5 + 8) = iVar7;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_0274d698:
    uVar24 = (uint)*param_1;
    if (uVar25 != *param_1) {
LAB_0274d6a4:
      if ((*param_4 != -1) && (*puVar8 != 0)) {
        cVar17 = *puVar4;
        do {
          puVar3 = PTR_DAT_04bb2268;
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar20 = *puVar8;
          }
          else {
            uVar20 = *(uint *)(puVar5 + 0x24);
            if (-1 < (int)uVar20) {
              if (((char *)((ulong)uVar20 + (long)puVar8) != (char *)0x0) &&
                 (*(char *)((ulong)uVar20 + (long)puVar8) != '\0')) {
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,4);
                if ((*(ulong *)(*(long *)PTR_DAT_04bb2268 + 0xb8) >> 4 & 1) == 0) {
                  local_70 = PTR_DAT_04bb2020 + 0x10;
                  pcStack_68 = "save_event_flag_player";
                  FUN_026012f4(&local_a0,&local_70,param_4);
                  local_78 = 0;
                  local_a0 = PTR_DAT_04bc33d8 + 0x10;
                  if (*(char *)(*(long *)puVar3 + 0xb1) != '\0') goto LAB_0274d870;
                  if ((local_98 == 0) || (lVar10 = *(long *)(local_98 + 8), lVar10 == 0)) {
                    local_78 = 0;
                    goto LAB_0274d870;
                  }
                  local_78 = FUN_03f2a10c(0x400,**(undefined8 **)PTR_DAT_04bc3578,1);
                  if ((local_78 == 0) ||
                     (uVar18 = (ulong)*(uint *)(lVar10 + 0x20), (int)*(uint *)(lVar10 + 0x20) < 1))
                  goto LAB_0274d854;
                  plVar11 = *(long **)(lVar10 + 0x28);
                  goto LAB_0274d840;
                }
              }
              break;
            }
            if (uVar20 != 0xffffffff) break;
            uVar20 = *puVar8;
          }
          if ((uVar20 == 0) || (puVar9 = (uint *)(ulong)uVar20, puVar8 == puVar9)) break;
          lVar10 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
          if (lVar10 == 0) break;
          uVar18 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
          *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
          if (uVar18 == 0) break;
          piVar22 = (int *)(lVar10 + 4);
          while (piVar22[-1] != -0x1d40080b) {
            piVar22 = piVar22 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_0274d9b0;
          }
          iVar7 = 0;
          if (*piVar22 != -1) {
            iVar7 = *piVar22;
          }
          *(int *)(puVar5 + 0x24) = iVar7;
          if (*puVar8 == 0) break;
        } while( true );
      }
    }
  }
  goto LAB_0274d9b0;
  while( true ) {
    plVar11 = plVar11 + 1;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) break;
LAB_0274d840:
    if (*plVar11 == 0) {
      *plVar11 = local_78;
      goto LAB_0274d870;
    }
  }
LAB_0274d854:
  local_78 = 0;
  *(undefined1 *)(*(long *)puVar3 + 0xb1) = 1;
LAB_0274d870:
  pcStack_68 = (char *)CONCAT44(pcStack_68._4_4_,uVar24);
  if (*puVar8 == 0) {
LAB_0274d944:
    uVar20 = 0;
  }
  else {
    cVar17 = *puVar4;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar20 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar20) {
          if ((ushort *)((ulong)uVar20 + (long)puVar8) == (ushort *)0x0) goto LAB_0274d944;
          uVar20 = (uint)*(ushort *)((ulong)uVar20 + (long)puVar8);
          goto LAB_0274d948;
        }
        if (uVar20 != 0xffffffff) goto LAB_0274d944;
      }
      puVar9 = (uint *)(ulong)*puVar8;
      uVar20 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar9)) goto LAB_0274d948;
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + (lVar10 - (long)puVar9);
      if (lVar10 == 0) goto LAB_0274d944;
      uVar18 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      uVar20 = 0;
      if (uVar18 == 0) goto LAB_0274d948;
      piVar22 = (int *)(lVar10 + 4);
      while (piVar22[-1] != 0x54706054) {
        piVar22 = piVar22 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) {
          uVar20 = 0;
          goto LAB_0274d948;
        }
      }
      iVar7 = 0;
      if (*piVar22 != -1) {
        iVar7 = *piVar22;
      }
      *(int *)(puVar5 + 8) = iVar7;
    } while (*puVar8 != 0);
    uVar20 = 0;
  }
LAB_0274d948:
  local_70 = (undefined *)CONCAT44(uVar25,uVar20);
  FUN_025ce2b0(&local_a0,&local_70);
  local_a0 = PTR_DAT_04bc33d8 + 0x10;
  iVar7 = FUN_025ce864(&local_a0);
  if (iVar7 == -1) {
LAB_0274d998:
    if (local_7c == 0) {
      local_7c = 1;
    }
  }
  else {
    iVar7 = (**(code **)(local_a0 + 0x20))(&local_a0);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,iVar7);
    if (0xc < iVar7) goto LAB_0274d998;
  }
  FUN_02601530(&local_a0);
LAB_0274d9b0:
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb46b0;
  if ((char *)param_2[1] == "UpgradePocket40") {
LAB_0274da24:
    if (uVar24 == 0) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar10 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_4);
    if (lVar10 == 0) {
      return;
    }
    lVar23 = lVar10 + 0x194b0;
    if (*(long *)(lVar10 + 0x194b8) == 0) {
      lVar23 = *(long *)(*(long *)puVar4 + 0x20);
    }
    lVar10 = *(long *)(lVar23 + 0x98);
    if (lVar10 == 0) {
      uVar18 = 0;
    }
    else {
      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        lVar10 = *(long *)(lVar23 + 0x98);
        uVar18 = uVar18 & 0xffffffff;
        if (lVar10 == 0) goto LAB_0274dbb8;
      }
      plVar11 = *(long **)(lVar10 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_a0 = *(undefined **)(lVar23 + 0x78);
        local_98 = *(long *)(lVar23 + 0x80);
        local_90 = 0x17c;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
      }
    }
LAB_0274dbb8:
    lVar10 = *(long *)(lVar23 + 0x80) + *(long *)(lVar23 + 0x78);
    iVar7 = 2;
    goto LAB_0274dc08;
  }
  uVar18 = 0;
  bVar6 = true;
  do {
    cVar17 = ((char *)param_2[1])[uVar18];
    if (cVar17 != "UpgradePocket40"[uVar18]) break;
    if (cVar17 == '\0') {
      if (bVar6) goto LAB_0274da24;
      break;
    }
    bVar6 = uVar18 < 0x80000;
    uVar18 = uVar18 + 1;
  } while (uVar18 != 0x80001);
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar4 = PTR_DAT_04bb46b0;
  pcVar16 = (char *)param_2[1];
  if (pcVar16 == "UpgradePocket30") {
    uVar25 = 1;
  }
  else {
    if (*pcVar16 != 'U') {
      return;
    }
    uVar18 = 0;
    do {
      uVar19 = uVar18;
      uVar18 = uVar19;
      if (uVar19 == 0x80000) goto LAB_0274db10;
      if (pcVar16[uVar19 + 1] != "UpgradePocket30"[uVar19 + 1]) {
        uVar18 = 0;
        goto LAB_0274db10;
      }
      uVar18 = uVar19 + 1;
    } while (pcVar16[uVar19 + 1] != '\0');
    uVar18 = 1;
LAB_0274db10:
    uVar25 = (uint)(uVar19 < 0x80000) & (uint)uVar18;
  }
  if (uVar24 == 0) {
    return;
  }
  if (uVar25 == 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar10 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_4);
  if (lVar10 == 0) {
    return;
  }
  lVar23 = lVar10 + 0x194b0;
  if (*(long *)(lVar10 + 0x194b8) == 0) {
    lVar23 = *(long *)(*(long *)puVar4 + 0x20);
  }
  lVar10 = *(long *)(lVar23 + 0x98);
  if (lVar10 == 0) {
    uVar18 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar18 = 0;
    }
    else {
      uVar18 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      lVar10 = *(long *)(lVar23 + 0x98);
      uVar18 = uVar18 & 0xffffffff;
      if (lVar10 == 0) goto LAB_0274dbfc;
    }
    plVar11 = *(long **)(lVar10 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_a0 = *(undefined **)(lVar23 + 0x78);
      local_98 = *(long *)(lVar23 + 0x80);
      local_90 = 0x17c;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
    }
  }
LAB_0274dbfc:
  lVar10 = *(long *)(lVar23 + 0x80) + *(long *)(lVar23 + 0x78);
  iVar7 = 1;
LAB_0274dc08:
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,iVar7);
  *(char *)(lVar10 + 0x178) = (char)iVar7;
  uVar15 = 0x14;
  if (iVar7 != 2) {
    uVar15 = 0;
  }
  uVar1 = 10;
  if (iVar7 != 1) {
    uVar1 = uVar15;
  }
  *(undefined4 *)(lVar10 + 0xa0) = uVar1;
  if ((((uVar18 & 1) != 0) && (*(long *)(lVar23 + 0x98) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar23 + 0x98) + 0x18), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_03b15e20(long *param_1,char *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined **ppuVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *local_100;
  char *local_f8;
  undefined **local_f0;
  uint local_e8;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined *local_d0;
  char *local_c8;
  uint local_c0;
  char local_bc [68];
  undefined *local_78;
  char *local_70;
  
  *(undefined1 *)*param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar11 = PTR_DAT_04bb2020;
  if (*param_2 == '\0') {
    return;
  }
  if (*param_2 == '/') {
    pcVar15 = (char *)*param_1;
    param_2 = param_2 + 1;
    if (pcVar15 == param_2) {
      return;
    }
    uVar9 = 0xffffffff;
    pcVar12 = param_2;
    do {
      cVar3 = *pcVar12;
      uVar9 = uVar9 + 1;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    if (*(int *)((long)param_1 + 0xc) <= (int)uVar9) {
      uVar9 = *(int *)((long)param_1 + 0xc) - 1;
    }
    uVar14 = (ulong)uVar9;
    if ((int)uVar9 < 1) {
      *pcVar15 = '\0';
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    memcpy(pcVar15,param_2,uVar14);
    pcVar15[uVar14] = '\0';
    lVar8 = *param_1;
    *(uint *)(param_1 + 1) = uVar9;
    if (uVar9 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        if (*(char *)(lVar8 + uVar10) == '/') {
          *(undefined1 *)(lVar8 + uVar10) = 0x2d;
        }
        if (*(char *)(lVar8 + uVar10 + 1) == '/') {
          *(undefined1 *)(lVar8 + uVar10 + 1) = 0x2d;
        }
        uVar10 = uVar10 + 2;
      } while ((uVar14 & 0xfffffffe) != uVar10);
    }
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (*(char *)(lVar8 + uVar10) == '/') {
      *(undefined1 *)(lVar8 + uVar10) = 0x2d;
      return;
    }
    return;
  }
  local_bc[0x3f] = 0;
  local_c0 = 0x40;
  local_f0 = &local_78;
  lVar8 = 0;
  local_bc[0] = '\0';
  local_e8 = 0;
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_e0 = PTR_DAT_04bb2020 + 0x10;
  local_d8 = &DAT_04079e84;
  do {
    if (param_2[lVar8] == '\0') {
LAB_03b15f8c:
      uVar9 = (int)lVar8 + 1;
      goto LAB_03b15f90;
    }
    if (param_2[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03b15f8c;
    }
    if (param_2[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_03b15f8c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  uVar9 = 1;
LAB_03b15f90:
  lVar8 = 0;
  do {
    local_c8 = local_bc;
    local_78 = local_e0;
    local_70 = param_2;
    if (param_2[lVar8] == '\0') {
LAB_03b15fd0:
      iVar7 = (int)lVar8;
joined_r0x03b15fd0:
      if (iVar7 < 0) goto LAB_03b1608c;
      break;
    }
    if (param_2[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03b15fd0;
    }
    if (param_2[lVar8 + 2] == '\0') {
      iVar7 = (int)lVar8 + 2;
      goto joined_r0x03b15fd0;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  uVar14 = 0;
  local_bc[0x3f] = 0;
  do {
    puVar17 = local_f0[1];
    if (puVar17[uVar14] == '\0') {
LAB_03b16080:
      local_e8 = (int)uVar14 + 1;
      local_bc[uVar14 & 0xffffffff] = '\0';
      break;
    }
    (**(code **)(local_e0 + 0x18))(&local_e0);
    uVar10 = 0;
    bVar6 = true;
    cVar3 = puVar17[uVar14];
    do {
      if (local_d8[uVar10] == '\0') break;
      if (local_d8[uVar10] == cVar3) {
        if (bVar6) goto LAB_03b16080;
        break;
      }
      if (local_d8[uVar10 + 1] == '\0') break;
      if (local_d8[uVar10 + 1] == cVar3) goto LAB_03b16080;
      if (local_d8[uVar10 + 2] == '\0') break;
      if (local_d8[uVar10 + 2] == cVar3) goto LAB_03b16080;
      bVar6 = uVar10 < 0x7fffe;
      uVar10 = uVar10 + 3;
    } while (uVar10 != 0x80001);
    local_bc[uVar14] = cVar3;
    uVar14 = uVar14 + 1;
  } while (uVar14 != 0x40);
LAB_03b1608c:
  do {
    do {
      do {
        local_f8 = "..";
        local_100 = puVar11 + 0x10;
        (**(code **)(local_d0 + 0x18))(&local_d0);
        (**(code **)(local_d0 + 0x18))(&local_d0);
        pcVar15 = local_c8;
        (**(code **)(local_100 + 0x18))(&local_100);
        uVar1 = local_e8;
        ppuVar5 = local_f0;
        if (pcVar15 != local_f8) {
          uVar14 = 0;
          bVar6 = true;
LAB_03b160f4:
          if (local_c8[uVar14] != local_f8[uVar14]) goto LAB_03b162c4;
          if (local_c8[uVar14] == '\0') {
            if (!bVar6) goto LAB_03b162c4;
          }
          else {
            if (local_c8[uVar14 + 1] != local_f8[uVar14 + 1]) goto LAB_03b162c4;
            if (local_c8[uVar14 + 1] != '\0') {
              if (local_c8[uVar14 + 2] != local_f8[uVar14 + 2]) goto LAB_03b162c4;
              if (local_c8[uVar14 + 2] != '\0') goto code_r0x03b16138;
            }
          }
        }
        param_3 = *(long *)(param_3 + 0x90);
        if (param_3 == 0) {
          return;
        }
        uVar14 = (ulong)local_e8;
        if ((local_f0 == &local_78) && (local_e8 == uVar9)) {
          return;
        }
        (**(code **)(*local_f0 + 0x18))(local_f0);
        puVar17 = ppuVar5[1];
        lVar8 = 0;
        do {
          if (puVar17[lVar8] == '\0') {
LAB_03b161c8:
            iVar7 = (int)lVar8;
            goto joined_r0x03b161f8;
          }
          if (puVar17[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_03b161c8;
          }
          if (puVar17[lVar8 + 2] == '\0') {
            iVar7 = (int)lVar8 + 2;
            goto joined_r0x03b161f8;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        iVar7 = 0;
joined_r0x03b161f8:
      } while (((int)uVar1 < 0) || (iVar7 < (int)uVar1));
      (**(code **)(local_d0 + 0x18))(&local_d0);
      pcVar15 = local_c8;
      uVar10 = (ulong)local_c0;
    } while ((int)local_c0 < 1);
    uVar18 = 0;
    do {
      puVar17 = local_f0[1];
      if (puVar17[uVar14] == '\0') {
LAB_03b162ac:
        local_e8 = (int)uVar14 + 1;
        pcVar15[uVar18 & 0xffffffff] = '\0';
        break;
      }
      (**(code **)(local_e0 + 0x18))(&local_e0);
      uVar13 = 0;
      bVar6 = true;
      cVar3 = puVar17[uVar14];
      do {
        if (local_d8[uVar13] == '\0') break;
        if (local_d8[uVar13] == cVar3) {
          if (bVar6) goto LAB_03b162ac;
          break;
        }
        if (local_d8[uVar13 + 1] == '\0') break;
        if (local_d8[uVar13 + 1] == cVar3) goto LAB_03b162ac;
        if (local_d8[uVar13 + 2] == '\0') break;
        if (local_d8[uVar13 + 2] == cVar3) goto LAB_03b162ac;
        bVar6 = uVar13 < 0x7fffe;
        uVar13 = uVar13 + 3;
      } while (uVar13 != 0x80001);
      pcVar15[uVar18] = cVar3;
      uVar18 = uVar18 + 1;
      uVar14 = uVar14 + 1;
    } while (uVar18 != uVar10);
  } while( true );
code_r0x03b16138:
  bVar6 = uVar14 < 0x7fffe;
  uVar14 = uVar14 + 3;
  if (uVar14 == 0x80001) {
LAB_03b162c4:
    (**(code **)(local_d0 + 0x18))(&local_d0);
    FUN_03b15c30(param_1,local_c8,param_3);
    ppuVar5 = local_f0;
    uVar1 = local_e8;
    goto joined_r0x03b162f4;
  }
  goto LAB_03b160f4;
joined_r0x03b162f4:
  if ((ppuVar5 == &local_78) && (uVar1 == uVar9)) {
    return;
  }
  local_f0 = ppuVar5;
  local_e8 = uVar1;
  (**(code **)(*ppuVar5 + 0x18))(ppuVar5);
  puVar11 = ppuVar5[1];
  lVar8 = 0;
  do {
    if (puVar11[lVar8] == '\0') {
LAB_03b16368:
      iVar7 = (int)lVar8;
      goto joined_r0x03b16368;
    }
    if (puVar11[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_03b16368;
    }
    if (puVar11[lVar8 + 2] == '\0') {
      iVar7 = (int)lVar8 + 2;
      goto joined_r0x03b16368;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  iVar7 = 0;
joined_r0x03b16368:
  if ((-1 < (int)uVar1) && ((int)uVar1 <= iVar7)) {
    (**(code **)(local_d0 + 0x18))(&local_d0);
    pcVar15 = local_c8;
    uVar14 = (ulong)local_c0;
    if (0 < (int)local_c0) {
      uVar10 = 0;
      uVar18 = (ulong)uVar1;
      do {
        puVar11 = local_f0[1];
        if (puVar11[uVar18] == '\0') {
LAB_03b16440:
          local_e8 = (int)uVar18 + 1;
          pcVar15[uVar10 & 0xffffffff] = '\0';
          break;
        }
        (**(code **)(local_e0 + 0x18))(&local_e0);
        uVar13 = 0;
        bVar6 = true;
        cVar3 = puVar11[uVar18];
        do {
          if (local_d8[uVar13] == '\0') break;
          if (local_d8[uVar13] == cVar3) {
            if (bVar6) goto LAB_03b16440;
            break;
          }
          if (local_d8[uVar13 + 1] == '\0') break;
          if (local_d8[uVar13 + 1] == cVar3) goto LAB_03b16440;
          if (local_d8[uVar13 + 2] == '\0') break;
          if (local_d8[uVar13 + 2] == cVar3) goto LAB_03b16440;
          bVar6 = uVar13 < 0x7fffe;
          uVar13 = uVar13 + 3;
        } while (uVar13 != 0x80001);
        pcVar15[uVar10] = cVar3;
        uVar10 = uVar10 + 1;
        uVar18 = uVar18 + 1;
      } while (uVar10 != uVar14);
    }
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + ~uVar2;
  if ((int)(uVar2 + 1) < *(int *)((long)param_1 + 0xc)) {
    uVar1 = 1;
  }
  if (0 < (int)uVar1) {
    lVar8 = *param_1;
    memcpy((void *)(lVar8 + (int)uVar2),&DAT_040d759c,(ulong)uVar1);
    *(undefined1 *)(lVar8 + (int)(uVar1 + uVar2)) = 0;
    *(uint *)(param_1 + 1) = uVar1 + uVar2;
  }
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar8 = 0;
  lVar16 = *param_1;
  do {
    pcVar15 = local_c8 + lVar8;
    lVar8 = lVar8 + 1;
  } while (*pcVar15 != '\0');
  uVar4 = *(uint *)(param_1 + 1);
  uVar2 = (int)lVar8 - 1;
  if (*(int *)((long)param_1 + 0xc) <= (int)(uVar2 + uVar4)) {
    uVar2 = *(int *)((long)param_1 + 0xc) + ~uVar4;
  }
  ppuVar5 = local_f0;
  uVar1 = local_e8;
  if (0 < (int)uVar2) {
    memcpy((void *)(lVar16 + (int)uVar4),local_c8,(ulong)uVar2);
    *(undefined1 *)(lVar16 + (int)(uVar2 + uVar4)) = 0;
    *(uint *)(param_1 + 1) = uVar2 + uVar4;
    ppuVar5 = local_f0;
    uVar1 = local_e8;
  }
  goto joined_r0x03b162f4;
}


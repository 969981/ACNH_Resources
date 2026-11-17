
void FUN_02b34590(undefined8 param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined **ppuVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  char cVar16;
  ulong uVar17;
  undefined1 *puVar18;
  int *piVar19;
  undefined *local_f8;
  undefined1 *local_f0;
  uint local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  uint local_c8;
  undefined1 local_c4 [4];
  undefined4 local_c0;
  undefined1 local_45;
  
  puVar9 = PTR_DAT_04bc4580;
  puVar8 = PTR_DAT_04bc4578;
  puVar7 = PTR_DAT_04bb5c18;
  puVar5 = PTR_DAT_04bb5c10;
  puVar6 = PTR_DAT_04bb5008;
  uVar10 = *param_2;
  if (uVar10 == 0) {
    return;
  }
  if ((char)param_2[2] != '\0') {
    FUN_02b5b5e0(&local_f8,uVar10);
    local_c8 = 0x80;
    local_45 = 0;
    local_d8 = PTR_DAT_04bb2e90 + 0x10;
    local_d0 = local_c4;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    puVar18 = local_f0;
    if (local_c4 != local_f0) {
      (**(code **)(local_f8 + 0x18))(&local_f8);
      lVar13 = 0;
      do {
        if (local_f0[lVar13] == '\0') goto LAB_02b348bc;
        if (local_f0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_02b348bc;
        }
        if (local_f0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_02b348bc;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_02b348bc:
      iVar12 = (int)lVar13;
      if ((int)local_c8 <= (int)lVar13) {
        iVar12 = local_c8 - 1;
      }
      memcpy(local_c4,puVar18,(long)iVar12);
      local_c4[iVar12] = 0;
    }
    local_d8 = PTR_DAT_04bb2d88 + 0x10;
    if (uVar10 == 0) {
LAB_02b34a44:
      local_e0 = 1;
LAB_02b34a48:
      local_e4 = 1;
    }
    else {
      lVar13 = *(long *)PTR_DAT_04bb5008;
      if ((int)*(uint *)(lVar13 + 0x1e0) < 1) {
        if ((((*(long *)(lVar13 + 0xd0) != 0) &&
             (puVar14 = *(uint **)(*(long *)(lVar13 + 0xd0) + 8), puVar14 != (uint *)0x0)) &&
            ((*(uint *)(lVar13 + 0xe8) <= uVar10 ||
             (*(char *)(*(long *)(lVar13 + 0xf0) + (long)(int)uVar10) != '\0')))) &&
           (((uVar10 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
          iVar12 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            iVar12 = 0x1c;
          }
          puVar14 = (uint *)((ulong)(puVar14[1] * uVar10 + (uint)(ushort)puVar14[2] * 8 + iVar12) +
                            (long)puVar14);
          if (puVar14 != (uint *)0x0) goto LAB_02b3493c;
        }
        goto LAB_02b34a44;
      }
      if (*(uint *)(lVar13 + 0x1e0) <= uVar10) goto LAB_02b34a44;
      if (*(uint *)(lVar13 + 0x1d0) <= uVar10) {
        uVar10 = 0;
      }
      puVar14 = *(uint **)(*(long *)(lVar13 + 0x1d8) + (ulong)uVar10 * 8);
      if (puVar14 == (uint *)0x0) goto LAB_02b34a44;
LAB_02b3493c:
      uVar10 = *puVar14;
      if (uVar10 == 0 || puVar14 == (uint *)(ulong)uVar10) goto LAB_02b34a44;
      puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
      if (((*puVar15 == 0) || (uVar10 = puVar15[1], uVar10 == 0)) ||
         ((ulong)(ushort)puVar15[2] == 0)) goto LAB_02b34a44;
      lVar13 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar15 + lVar13 + (ulong)(ushort)puVar15[2] * 8;
      if (lVar13 == 0) goto LAB_02b34a44;
      uVar3 = 0;
      if ((ulong)uVar10 != 0) {
        uVar3 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar10);
      }
      if (*puVar15 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if (((*(uint *)PTR_DAT_04bc46a8 <= uVar3) ||
          (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar3 * 2), 4 < uVar4))
         || (uVar4 == 0)) goto LAB_02b34a44;
      if (uVar4 == 1) {
        local_e0 = 0;
        goto LAB_02b34a48;
      }
      local_e4 = 0;
      local_e0 = 1;
    }
    local_f8 = PTR_DAT_04bb2020 + 0x10;
    local_f0 = local_d0;
    local_e8 = param_2[1];
    goto LAB_02b34ce0;
  }
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar10);
  if (uVar10 == 0) {
switchD_02b3474c_caseD_0:
    uVar10 = FUN_02b58c80(uVar10,0);
    puVar5 = PTR_DAT_04bb5be8;
    puVar6 = PTR_DAT_04bb5be0;
    lVar13 = *(long *)PTR_DAT_04bb5008;
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x9f0);
    if ((uVar10 < *(uint *)(lVar13 + 0x9d0)) &&
       (puVar14 = *(uint **)(*(long *)(lVar13 + 0x9d8) + (long)(int)uVar10 * 8),
       puVar14 != (uint *)0x0)) {
      uVar10 = *puVar14;
      if (uVar10 != 0) {
        cVar16 = *PTR_DAT_04bb5be0;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar10 = *puVar14;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0x18);
            if (-1 < (int)uVar3) {
              puVar18 = (undefined1 *)((ulong)uVar3 + (long)puVar14);
              goto LAB_02b34bf8;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)uVar10;
          puVar18 = (undefined1 *)0x0;
          if ((puVar15 == (uint *)0x0) || (puVar18 = (undefined1 *)0x0, puVar14 == puVar15))
          goto LAB_02b34bf8;
          lVar13 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar14 + (lVar13 - (long)puVar15);
          puVar18 = (undefined1 *)0x0;
          if (lVar13 == 0) goto LAB_02b34bf8;
          uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
          *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar19 = (int *)(lVar13 + 4);
          while (piVar19[-1] != 0x39b5a93d) {
            piVar19 = piVar19 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_02b34bf4;
          }
          iVar12 = 0;
          if (*piVar19 != -1) {
            iVar12 = *piVar19;
          }
          *(int *)(puVar5 + 0x18) = iVar12;
          uVar10 = *puVar14;
          if (uVar10 == 0) break;
        } while( true );
      }
LAB_02b34bf4:
      puVar18 = (undefined1 *)0x0;
LAB_02b34bf8:
      local_f0 = *(undefined1 **)PTR_PTR_04bb5bd8;
      if (puVar18 != (undefined1 *)0x0) {
        local_f0 = puVar18;
      }
    }
    else {
      local_f0 = *(undefined1 **)PTR_PTR_04bc48e0;
    }
    local_45 = 0;
    local_c8 = 0x80;
    local_d0 = local_c4;
    if (local_c4 != local_f0) {
      lVar13 = 0;
      do {
        if (local_f0[lVar13] == '\0') {
LAB_02b34c8c:
          iVar12 = (int)lVar13;
          if (0x7f < iVar12) {
            iVar12 = 0x7f;
          }
          goto LAB_02b34c98;
        }
        if (local_f0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_02b34c8c;
        }
        if (local_f0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_02b34c8c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      iVar12 = 0;
LAB_02b34c98:
      memcpy(local_c4,local_f0,(long)iVar12);
      local_c4[iVar12] = 0;
      local_f0 = local_d0;
    }
    local_e8 = param_2[1];
    local_d8 = PTR_DAT_04bb2d88 + 0x10;
    local_f8 = PTR_DAT_04bb2020 + 0x10;
    local_e0 = 1;
    local_e4 = 1;
    goto LAB_02b34ce0;
  }
  lVar13 = *(long *)PTR_DAT_04bb5008;
  if ((int)*(uint *)(lVar13 + 0x1e0) < 1) {
    if (((*(long *)(lVar13 + 0xd0) != 0) &&
        (puVar14 = *(uint **)(*(long *)(lVar13 + 0xd0) + 8), puVar14 != (uint *)0x0)) &&
       (((*(uint *)(lVar13 + 0xe8) <= uVar10 ||
         (*(char *)(*(long *)(lVar13 + 0xf0) + (long)(int)uVar10) != '\0')) &&
        (((uVar10 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))))) {
      iVar12 = 0xc;
      if (*(char *)((long)puVar14 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar14 = (uint *)((ulong)(puVar14[1] * uVar10 + (uint)(ushort)puVar14[2] * 8 + iVar12) +
                        (long)puVar14);
      if (puVar14 != (uint *)0x0) goto LAB_02b346a8;
    }
    goto switchD_02b3474c_caseD_0;
  }
  if (*(uint *)(lVar13 + 0x1e0) <= uVar10) goto switchD_02b3474c_caseD_0;
  uVar3 = uVar10;
  if (*(uint *)(lVar13 + 0x1d0) <= uVar10) {
    uVar3 = 0;
  }
  puVar14 = *(uint **)(*(long *)(lVar13 + 0x1d8) + (ulong)uVar3 * 8);
  if (puVar14 == (uint *)0x0) goto switchD_02b3474c_caseD_0;
LAB_02b346a8:
  uVar3 = *puVar14;
  if (uVar3 == 0 || puVar14 == (uint *)(ulong)uVar3) goto switchD_02b3474c_caseD_0;
  puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar3);
  if (((*puVar15 == 0) || (uVar3 = puVar15[1], uVar3 == 0)) || ((ulong)(ushort)puVar15[2] == 0))
  goto switchD_02b3474c_caseD_0;
  lVar1 = 0xc;
  if (*(char *)((long)puVar15 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar15 + lVar1 + (ulong)(ushort)puVar15[2] * 8;
  if (lVar1 == 0) goto switchD_02b3474c_caseD_0;
  uVar2 = 0;
  if ((ulong)uVar3 != 0) {
    uVar2 = (uint)((ulong)((long)puVar14 - lVar1) / (ulong)uVar3);
  }
  if (*puVar15 <= uVar2) {
    uVar2 = 0xffffffff;
  }
  if ((*(uint *)PTR_DAT_04bc46a8 <= uVar2) ||
     (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar2 * 2), 4 < uVar4))
  goto switchD_02b3474c_caseD_0;
  switch(uVar4) {
  case 0:
    goto switchD_02b3474c_caseD_0;
  case 1:
    local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
    FUN_02b677c0(&local_f8,uVar10);
    uVar10 = FUN_02b5afe0((ulong)local_f8 & 0xffffffff);
    puVar8 = PTR_DAT_04bb5bd0;
    puVar7 = PTR_DAT_04bb5bc8;
    puVar5 = PTR_DAT_04bb2020;
    lVar13 = *(long *)puVar6;
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x5f0);
    if (*(uint *)(lVar13 + 0x5d0) <= uVar10) {
      return;
    }
    puVar14 = *(uint **)(*(long *)(lVar13 + 0x5d8) + (long)(int)uVar10 * 8);
    if (puVar14 == (uint *)0x0) {
      return;
    }
    uVar10 = *puVar14;
    if (uVar10 != 0) {
      cVar16 = *PTR_DAT_04bb5bc8;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 0x48) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          uVar10 = *puVar14;
        }
        else {
          uVar3 = *(uint *)(puVar8 + 0x40);
          if (-1 < (int)uVar3) {
            puVar18 = (undefined1 *)((ulong)uVar3 + (long)puVar14);
            goto LAB_02b34880;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)uVar10;
        puVar18 = (undefined1 *)0x0;
        if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) goto LAB_02b34880;
        lVar13 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar14 + (lVar13 - (long)puVar15);
        puVar18 = (undefined1 *)0x0;
        if (lVar13 == 0) goto LAB_02b34880;
        uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
        *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar19 = (int *)(lVar13 + 4);
        while (piVar19[-1] != 0x39b5a93d) {
          piVar19 = piVar19 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_02b3487c;
        }
        iVar12 = 0;
        if (*piVar19 != -1) {
          iVar12 = *piVar19;
        }
        *(int *)(puVar8 + 0x40) = iVar12;
        uVar10 = *puVar14;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_02b3487c:
    puVar18 = (undefined1 *)0x0;
LAB_02b34880:
    local_c8 = param_2[1];
    local_c0 = 0;
    local_d0 = *(undefined1 **)PTR_PTR_04bb5bc0;
    if (puVar18 != (undefined1 *)0x0) {
      local_d0 = puVar18;
    }
    goto LAB_02b3506c;
  case 2:
    uVar10 = (uint)*(ushort *)((long)param_2 + 10) - (uint)*(ushort *)(lVar13 + 0xff0);
    if ((uVar10 < *(uint *)(lVar13 + 0xfd0)) &&
       (puVar14 = *(uint **)(*(long *)(lVar13 + 0xfd8) + (long)(int)uVar10 * 8),
       puVar14 != (uint *)0x0)) {
      uVar10 = *puVar14;
      if (uVar10 != 0) {
        cVar16 = *PTR_DAT_04bc4578;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar9 = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            uVar10 = *puVar14;
          }
          else {
            uVar3 = *(uint *)(puVar9 + 0xc);
            if (-1 < (int)uVar3) {
              puVar18 = (undefined1 *)((ulong)uVar3 + (long)puVar14);
              goto LAB_02b34e0c;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)uVar10;
          puVar18 = (undefined1 *)0x0;
          if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) goto LAB_02b34e0c;
          lVar13 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar14 + (lVar13 - (long)puVar15);
          puVar18 = (undefined1 *)0x0;
          if (lVar13 == 0) goto LAB_02b34e0c;
          uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
          *(undefined4 *)(puVar9 + 0xc) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar19 = (int *)(lVar13 + 4);
          while (piVar19[-1] != 0x39b5a93d) {
            piVar19 = piVar19 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_02b34e08;
          }
          iVar12 = 0;
          if (*piVar19 != -1) {
            iVar12 = *piVar19;
          }
          *(int *)(puVar9 + 0xc) = iVar12;
          uVar10 = *puVar14;
          if (uVar10 == 0) break;
        } while( true );
      }
LAB_02b34e08:
      puVar18 = (undefined1 *)0x0;
LAB_02b34e0c:
      local_f0 = *(undefined1 **)PTR_PTR_04bc45b0;
      if (puVar18 != (undefined1 *)0x0) {
        local_f0 = puVar18;
      }
    }
    else {
      local_f0 = *(undefined1 **)PTR_PTR_04bc45b8;
    }
    local_45 = 0;
    local_c8 = 0x80;
    local_d0 = local_c4;
    if (local_c4 != local_f0) {
      lVar13 = 0;
      do {
        if (local_f0[lVar13] == '\0') {
LAB_02b35158:
          iVar12 = (int)lVar13;
          if (0x7f < iVar12) {
            iVar12 = 0x7f;
          }
          goto LAB_02b35164;
        }
        if (local_f0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_02b35158;
        }
        if (local_f0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_02b35158;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      iVar12 = 0;
LAB_02b35164:
      memcpy(local_c4,local_f0,(long)iVar12);
      local_c4[iVar12] = 0;
      local_f0 = local_d0;
    }
    local_e8 = param_2[1];
    local_d8 = PTR_DAT_04bb2d88 + 0x10;
    local_f8 = PTR_DAT_04bb2020 + 0x10;
    local_e4 = 1;
    local_e0 = 4;
    break;
  case 3:
    uVar10 = (uint)(ushort)param_2[3] - (uint)*(ushort *)(lVar13 + 0x13f0);
    if ((uVar10 < *(uint *)(lVar13 + 0x13d0)) &&
       (puVar14 = *(uint **)(*(long *)(lVar13 + 0x13d8) + (long)(int)uVar10 * 8),
       puVar14 != (uint *)0x0)) {
      uVar10 = *puVar14;
      if (uVar10 != 0) {
        cVar16 = *PTR_DAT_04bb5c10;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            uVar10 = *puVar14;
          }
          else {
            uVar3 = *(uint *)(puVar7 + 0xc);
            if (-1 < (int)uVar3) {
              puVar18 = (undefined1 *)((ulong)uVar3 + (long)puVar14);
              goto LAB_02b34f14;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar15 = (uint *)(ulong)uVar10;
          puVar18 = (undefined1 *)0x0;
          if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) goto LAB_02b34f14;
          lVar13 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar14 + (lVar13 - (long)puVar15);
          puVar18 = (undefined1 *)0x0;
          if (lVar13 == 0) goto LAB_02b34f14;
          uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
          *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar19 = (int *)(lVar13 + 4);
          while (piVar19[-1] != 0x39b5a93d) {
            piVar19 = piVar19 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_02b34f10;
          }
          iVar12 = 0;
          if (*piVar19 != -1) {
            iVar12 = *piVar19;
          }
          *(int *)(puVar7 + 0xc) = iVar12;
          uVar10 = *puVar14;
          if (uVar10 == 0) break;
        } while( true );
      }
LAB_02b34f10:
      puVar18 = (undefined1 *)0x0;
LAB_02b34f14:
      local_f0 = *(undefined1 **)PTR_PTR_04bb5c08;
      if (puVar18 != (undefined1 *)0x0) {
        local_f0 = puVar18;
      }
    }
    else {
      local_f0 = *(undefined1 **)PTR_PTR_04bc4ad0;
    }
    local_45 = 0;
    local_c8 = 0x80;
    local_d0 = local_c4;
    if (local_c4 != local_f0) {
      lVar13 = 0;
      do {
        if (local_f0[lVar13] == '\0') {
LAB_02b351b8:
          iVar12 = (int)lVar13;
          if (0x7f < iVar12) {
            iVar12 = 0x7f;
          }
          goto LAB_02b351c4;
        }
        if (local_f0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_02b351b8;
        }
        if (local_f0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_02b351b8;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      iVar12 = 0;
LAB_02b351c4:
      memcpy(local_c4,local_f0,(long)iVar12);
      local_c4[iVar12] = 0;
      local_f0 = local_d0;
    }
    local_e8 = param_2[1];
    local_d8 = PTR_DAT_04bb2d88 + 0x10;
    local_f8 = PTR_DAT_04bb2020 + 0x10;
    local_e4 = 1;
    local_e0 = 5;
    break;
  case 4:
    uVar10 = FUN_02b8ee60(uVar10);
    puVar8 = PTR_DAT_04bb5c78;
    puVar7 = PTR_DAT_04bb5c70;
    puVar5 = PTR_DAT_04bb2020;
    lVar13 = *(long *)puVar6;
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x17f0);
    if (*(uint *)(lVar13 + 0x17d0) <= uVar10) {
      return;
    }
    puVar14 = *(uint **)(*(long *)(lVar13 + 0x17d8) + (long)(int)uVar10 * 8);
    if (puVar14 == (uint *)0x0) {
      return;
    }
    uVar10 = *puVar14;
    if (uVar10 != 0) {
      cVar16 = *PTR_DAT_04bb5c70;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          uVar10 = *puVar14;
        }
        else {
          uVar3 = *(uint *)(puVar8 + 0x14);
          if (-1 < (int)uVar3) {
            puVar18 = (undefined1 *)((ulong)uVar3 + (long)puVar14);
            goto LAB_02b3503c;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar15 = (uint *)(ulong)uVar10;
        puVar18 = (undefined1 *)0x0;
        if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) goto LAB_02b3503c;
        lVar13 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar14 + (lVar13 - (long)puVar15);
        puVar18 = (undefined1 *)0x0;
        if (lVar13 == 0) goto LAB_02b3503c;
        uVar17 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
        *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar19 = (int *)(lVar13 + 4);
        while (piVar19[-1] != 0x39b5a93d) {
          piVar19 = piVar19 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_02b35038;
        }
        iVar12 = 0;
        if (*piVar19 != -1) {
          iVar12 = *piVar19;
        }
        *(int *)(puVar8 + 0x14) = iVar12;
        uVar10 = *puVar14;
        if (uVar10 == 0) break;
      } while( true );
    }
LAB_02b35038:
    puVar18 = (undefined1 *)0x0;
LAB_02b3503c:
    local_c8 = param_2[1];
    local_d0 = *(undefined1 **)PTR_PTR_04bb5c68;
    if (puVar18 != (undefined1 *)0x0) {
      local_d0 = puVar18;
    }
    local_c0 = 9;
LAB_02b3506c:
    local_d8 = puVar5 + 0x10;
    local_c4[0] = 1;
    ppuVar11 = &local_d8;
    goto LAB_02b34ce8;
  default:
    goto switchD_02b3474c_default;
  }
LAB_02b34ce0:
  ppuVar11 = &local_f8;
LAB_02b34ce8:
  FUN_009893c0(param_1,ppuVar11);
switchD_02b3474c_default:
  return;
}



void FUN_006f8390(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint *__dest;
  uint *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *__src;
  uint uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  uint *__src_00;
  long *plVar18;
  undefined8 *puVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  undefined4 uStack_bc;
  undefined4 *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined1 *local_a0;
  int local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  piVar21 = *(int **)(param_2 + 4);
  if (piVar21 == (int *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x278) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x280) <= *(int *)(param_1 + 0x288)) {
    return;
  }
  local_b8 = (undefined4 *)0x0;
  local_b0 = 0;
  local_98 = 0x20;
  local_75 = 0;
  local_94[0] = 0;
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  local_68 = 0;
  uVar5 = *param_2;
  plVar18 = *(long **)(piVar21 + 2);
  local_a0 = local_94;
  (**(code **)(*plVar18 + 0x18))(plVar18);
  puVar17 = (undefined1 *)plVar18[1];
  if (local_94 != puVar17) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
    lVar12 = 0;
    do {
      if (*(char *)(plVar18[1] + lVar12) == '\0') goto LAB_006f848c;
      lVar10 = plVar18[1] + lVar12;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_006f848c;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_006f848c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_006f848c:
    iVar22 = (int)lVar12;
    if (local_98 <= (int)lVar12) {
      iVar22 = local_98 + -1;
    }
    memcpy(local_94,puVar17,(long)iVar22);
    local_94[iVar22] = 0;
  }
  local_70 = param_2[1];
  uStack_6c = param_2[2];
  iVar22 = *piVar21;
  if (iVar22 < 1) goto LAB_006f85b8;
  uVar9 = iVar22 << 1;
  uVar16 = (ulong)uVar9;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar11 = malloc(uVar16 << 6);
joined_r0x006f853c:
    if (puVar11 != (undefined4 *)0x0) {
      uVar15 = uVar16 & 6;
      puVar14 = puVar11;
      if ((uVar9 & 6) != 0) {
        puVar13 = puVar11;
        do {
          uVar15 = uVar15 - 1;
          puVar14 = puVar13 + 0x10;
          *puVar13 = 0;
          puVar13 = puVar14;
        } while (uVar15 != 0);
      }
      if (6 < (uVar16 - 1 & 0x3ffffffffffffff)) {
        do {
          *puVar14 = 0;
          puVar14[0x10] = 0;
          puVar14[0x20] = 0;
          puVar14[0x30] = 0;
          puVar14[0x40] = 0;
          puVar14[0x50] = 0;
          puVar14[0x60] = 0;
          puVar14[0x70] = 0;
          puVar14 = puVar14 + 0x80;
        } while (puVar14 != puVar11 + uVar16 * 0x10);
      }
      local_b0 = (ulong)uVar9 << 0x20;
      local_b8 = puVar11;
    }
  }
  else {
    plVar18 = *(long **)(*(long *)(param_1 + 0x48) + 0x240);
    if (plVar18 != (long *)0x0) {
LAB_006f8518:
      puVar11 = (undefined4 *)(**(code **)(*plVar18 + 0x30))(plVar18,uVar16 << 6,8);
      goto joined_r0x006f853c;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar18 = (long *)(lVar12 + 8);
    if (lVar10 != 0) {
      plVar18 = (long *)(lVar10 + 0xa8);
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 != (long *)0x0) goto LAB_006f8518;
  }
  iVar22 = *piVar21;
LAB_006f85b8:
  if (iVar22 != 0) {
    lVar12 = *(long *)(piVar21 + 2);
    iVar20 = 0;
    puVar1 = PTR_DAT_04bb2a08 + 0x10;
LAB_006f863c:
    plVar18 = (long *)(lVar12 + (long)iVar20 * 0x38);
    (**(code **)(*plVar18 + 0x18))(plVar18);
    uVar9 = FUN_006bd550(plVar18[1],0);
    if (uVar9 != 0) {
      uVar7 = 0;
      if (local_b0._4_4_ != 0) {
        uVar7 = uVar9 / local_b0._4_4_;
      }
      uVar7 = uVar9 - uVar7 * local_b0._4_4_;
      uVar8 = uVar7;
      do {
        uVar6 = *(uint *)((long)local_b8 +
                         (-(ulong)(uVar8 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar8 << 6));
        if (uVar6 == 0) {
          puVar2 = local_b8 + (long)(int)uVar8 * 0x10;
          puVar2[6] = 0x20;
          __dest = puVar2 + 7;
          *puVar2 = uVar9;
          *(undefined1 *)((long)puVar2 + 0x3b) = 0;
          *(uint **)(puVar2 + 4) = __dest;
          *(undefined **)(puVar2 + 2) = puVar1;
          (**(code **)(*plVar18 + 0x18))(plVar18);
          __src_00 = (uint *)plVar18[1];
          if (__dest == __src_00) goto LAB_006f8618;
          (**(code **)(*plVar18 + 0x18))(plVar18);
          lVar10 = 0;
          goto LAB_006f8700;
        }
        if (uVar6 == uVar9) break;
        uVar6 = 0;
        if ((int)(uVar8 + 1) < (int)local_b0._4_4_) {
          uVar6 = uVar8 + 1;
        }
        uVar8 = uVar6;
      } while (uVar6 != uVar7);
    }
    goto LAB_006f862c;
  }
LAB_006f8738:
  iVar22 = *(int *)(param_1 + 0x288);
  iVar20 = *(int *)(param_1 + 0x280);
  if (iVar22 < iVar20) {
    *(int *)(param_1 + 0x288) = iVar22 + 1;
    iVar22 = *(int *)(param_1 + 0x284) + iVar22;
    iVar4 = 0;
    if (iVar20 <= iVar22) {
      iVar4 = iVar20;
    }
    puVar19 = (undefined8 *)(*(long *)(param_1 + 0x278) + (long)(iVar22 - iVar4) * 0x60);
    puVar17 = (undefined1 *)((long)puVar19 + 0x2c);
    *(undefined1 *)((long)puVar19 + 0x4b) = 0;
    *puVar19 = CONCAT44(uStack_bc,uVar5);
    puVar19[1] = local_b8;
    puVar19[4] = puVar17;
    *(undefined4 *)(puVar19 + 5) = 0x20;
    puVar19[2] = local_b0;
    puVar19[3] = &PTR_LAB_048fa8f8;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    __src = local_a0;
    if (puVar17 != local_a0) {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar12 = 0;
      do {
        if (local_a0[lVar12] == '\0') goto LAB_006f881c;
        if (local_a0[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_006f881c;
        }
        if (local_a0[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_006f881c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_006f881c:
      iVar22 = (int)lVar12;
      if (*(int *)(puVar19 + 5) <= (int)lVar12) {
        iVar22 = *(int *)(puVar19 + 5) + -1;
      }
      memcpy(puVar17,__src,(long)iVar22);
      puVar17[iVar22] = 0;
    }
    puVar19[3] = &PTR_LAB_048f9700;
    *(undefined4 *)(puVar19 + 0xb) = local_68;
    puVar19[10] = CONCAT44(uStack_6c,local_70);
  }
  return;
  while( true ) {
    lVar3 = plVar18[1] + lVar10;
    if (*(char *)(lVar3 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_006f85f0;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_006f85f0;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) break;
LAB_006f8700:
    if (*(char *)(plVar18[1] + lVar10) == '\0') goto LAB_006f85f0;
  }
  lVar10 = 0;
LAB_006f85f0:
  iVar4 = (int)lVar10;
  if ((int)puVar2[6] <= (int)lVar10) {
    iVar4 = puVar2[6] - 1;
  }
  memcpy(__dest,__src_00,(long)iVar4);
  *(undefined1 *)((long)__dest + (long)iVar4) = 0;
LAB_006f8618:
  *(undefined ***)(puVar2 + 2) = &PTR_LAB_048f9700;
  local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
LAB_006f862c:
  iVar20 = iVar20 + 1;
  if (iVar22 == iVar20) goto LAB_006f8738;
  goto LAB_006f863c;
}



/* WARNING: Removing unreachable block (ram,0x0121ca44) */
/* WARNING: Removing unreachable block (ram,0x0121c964) */
/* WARNING: Removing unreachable block (ram,0x0121c7fc) */
/* WARNING: Removing unreachable block (ram,0x0121c718) */
/* WARNING: Removing unreachable block (ram,0x0121c798) */
/* WARNING: Removing unreachable block (ram,0x0121c8f0) */
/* WARNING: Removing unreachable block (ram,0x0121c9d8) */
/* WARNING: Removing unreachable block (ram,0x0121cab8) */

void FUN_0121c6b0(long param_1,long param_2,long param_3,uint param_4)

{
  bool bVar1;
  void *__s;
  long lVar2;
  void *__s_00;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  uint local_7078 [1024];
  undefined8 local_6078;
  undefined *local_6070;
  uint local_6068;
  uint local_6064;
  undefined *local_6060;
  int local_6058;
  int local_6054;
  undefined *local_2070;
  undefined8 local_2068;
  uint local_2060;
  uint uStack_205c;
  undefined *local_2058;
  int local_2050;
  int iStack_204c;
  undefined8 local_1068;
  uint local_1060;
  uint local_105c;
  
  local_6078 = (undefined **)CONCAT44(local_6078._4_4_,2);
  __s = (void *)(param_2 + 8);
  memset(__s,0,0x1000);
  lVar14 = 0;
  do {
    puVar9 = (uint *)(param_1 + 0x16040 + lVar14);
    uVar13 = ((uint *)((long)__s + lVar14))[1];
    lVar2 = lVar14 + 8;
    uVar17 = puVar9[1];
    *(uint *)((long)local_7078 + lVar14 + 0x1000) = *puVar9 | *(uint *)((long)__s + lVar14);
    *(uint *)((long)local_7078 + lVar14 + 0x1004) = uVar17 | uVar13;
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(__s,&local_6078,0x1000);
  if ((param_4 & 1) != 0) {
    local_6078 = (undefined **)CONCAT44(local_6078._4_4_,3);
    lVar14 = 0;
    do {
      puVar9 = (uint *)(param_1 + 0x17048 + lVar14);
      uVar13 = ((uint *)((long)__s + lVar14))[1];
      lVar2 = lVar14 + 8;
      uVar17 = puVar9[1];
      *(uint *)((long)local_7078 + lVar14 + 0x1000) = *puVar9 | *(uint *)((long)__s + lVar14);
      *(uint *)((long)local_7078 + lVar14 + 0x1004) = uVar17 | uVar13;
      lVar14 = lVar2;
    } while (lVar2 != 0x1000);
    memcpy(__s,&local_6078,0x1000);
  }
  local_6078 = (undefined **)CONCAT44(local_6078._4_4_,0x17);
  lVar14 = 0;
  do {
    puVar9 = (uint *)(param_1 + 0x2b0e8 + lVar14);
    uVar13 = ((uint *)((long)__s + lVar14))[1];
    lVar2 = lVar14 + 8;
    uVar17 = puVar9[1];
    *(uint *)((long)local_7078 + lVar14 + 0x1000) = *puVar9 & *(uint *)((long)__s + lVar14);
    *(uint *)((long)local_7078 + lVar14 + 0x1004) = uVar17 & uVar13;
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(__s,&local_6078,0x1000);
  memset(local_7078,0,0x1000);
  lVar14 = 0;
  do {
    lVar2 = lVar14 + 8;
    uVar13 = ((uint *)((long)__s + lVar14))[1];
    *(uint *)((long)local_7078 + lVar14 + 0x1000) =
         *(uint *)((long)__s + lVar14) | *(uint *)((long)local_7078 + lVar14);
    *(uint *)((long)local_7078 + lVar14 + 0x1004) =
         uVar13 | *(uint *)((long)local_7078 + lVar14 + 4);
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(local_7078,&local_6078,0x1000);
  local_6078 = (undefined **)CONCAT44(local_6078._4_4_,6);
  __s_00 = (void *)(param_3 + 8);
  memset(__s_00,0,0x1000);
  lVar14 = 0;
  do {
    puVar9 = (uint *)(param_1 + 0x1a060 + lVar14);
    uVar13 = ((uint *)((long)__s_00 + lVar14))[1];
    lVar2 = lVar14 + 8;
    uVar17 = puVar9[1];
    *(uint *)((long)local_7078 + lVar14 + 0x1000) = *puVar9 | *(uint *)((long)__s_00 + lVar14);
    *(uint *)((long)local_7078 + lVar14 + 0x1004) = uVar17 | uVar13;
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(__s_00,&local_6078,0x1000);
  local_6078._0_4_ = 0xd;
  lVar14 = 0;
  do {
    puVar9 = (uint *)(param_1 + 0x21098 + lVar14);
    uVar13 = ((uint *)((long)__s_00 + lVar14))[1];
    lVar2 = lVar14 + 8;
    uVar17 = puVar9[1];
    *(uint *)((long)local_7078 + lVar14 + 0x1000) = *puVar9 | *(uint *)((long)__s_00 + lVar14);
    *(uint *)((long)local_7078 + lVar14 + 0x1004) = uVar17 | uVar13;
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(__s_00,&local_6078,0x1000);
  local_6078._0_4_ = 0x15;
  lVar14 = 0;
  do {
    puVar9 = (uint *)(param_1 + 0x290d8 + lVar14);
    uVar13 = ((uint *)((long)__s_00 + lVar14))[1];
    lVar2 = lVar14 + 8;
    uVar17 = puVar9[1];
    *(uint *)((long)local_7078 + lVar14 + 0x1000) = *puVar9 | *(uint *)((long)__s_00 + lVar14);
    *(uint *)((long)local_7078 + lVar14 + 0x1004) = uVar17 | uVar13;
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(__s_00,&local_6078,0x1000);
  local_6078 = (undefined **)CONCAT44(local_6078._4_4_,0x16);
  lVar14 = 0;
  do {
    puVar9 = (uint *)(param_1 + 0x2a0e0 + lVar14);
    uVar13 = ((uint *)((long)__s_00 + lVar14))[1];
    lVar2 = lVar14 + 8;
    uVar17 = puVar9[1];
    *(uint *)((long)local_7078 + lVar14 + 0x1000) = *puVar9 | *(uint *)((long)__s_00 + lVar14);
    *(uint *)((long)local_7078 + lVar14 + 0x1004) = uVar17 | uVar13;
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(__s_00,&local_6078,0x1000);
  local_6078 = &PTR_LAB_04987210;
  memcpy(&local_6070,(void *)(param_1 + 0x4010),0x4000);
  FUN_01695f30(&local_2070,&local_6078,0);
  lVar14 = 0;
  do {
    uVar13 = ((uint *)((long)__s_00 + lVar14))[1];
    lVar2 = lVar14 + 8;
    uVar17 = *(uint *)((long)&local_2068 + lVar14 + 4);
    *(uint *)((long)&local_1068 + lVar14) =
         *(uint *)((long)&local_2068 + lVar14) | *(uint *)((long)__s_00 + lVar14);
    *(uint *)((long)&local_1068 + lVar14 + 4) = uVar17 | uVar13;
    lVar14 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(__s_00,&local_1068,0x1000);
  uVar18 = 0;
  do {
    if ((local_7078[uVar18 >> 5] >> (ulong)((uint)uVar18 & 0x1f) & 1) != 0) goto LAB_0121cb64;
    uVar13 = (uint)uVar18 + 1;
    uVar18 = (ulong)uVar13;
  } while (uVar13 != 0x8000);
  uVar18 = 0;
LAB_0121cb64:
  iVar15 = 0x8000;
  do {
    if ((local_7078[iVar15 - 1U >> 5] >> (ulong)(iVar15 - 1U & 0x1f) & 1) != 0) break;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  if (iVar15 == (int)uVar18) {
    return;
  }
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  ppuVar4 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
LAB_0121cc00:
  uVar17 = (uint)uVar18;
  local_1060 = (uVar17 & 0xff) << 1;
  local_105c = (int)uVar17 >> 7 & 0xfffffffe;
  uVar13 = ~(1 << (ulong)(uVar17 & 0x1f));
  iVar16 = -2;
  local_1068 = puVar3;
  do {
    iVar19 = -2;
    do {
      uVar8 = local_105c;
      uVar6 = local_1060;
      uVar12 = 0;
      if (iVar19 != 0 || iVar16 != 0) {
        local_6068 = local_1060;
        puVar5 = PTR_DAT_04bb2010 + 0x10;
        local_6058 = local_1060 + 1;
        local_6054 = local_105c + 1;
        local_6064 = local_105c;
        local_6078 = ppuVar4;
        local_6070 = puVar5;
        local_6060 = puVar5;
        uVar11 = FUN_0097d8e0(&local_6078);
        if ((uVar11 & 1) == 0) {
          local_2070 = PTR_DAT_04bbc1a0 + 0x10;
          local_2060 = local_1060;
          uStack_205c = local_105c;
          local_2050 = local_1060 + 1;
          iStack_204c = local_105c + 1;
          local_2068 = puVar5;
          local_2058 = puVar5;
          uVar10 = FUN_0097d3a0(&local_2070);
          uVar12 = uVar10 ^ 1;
          if (((uVar10 & 1) == 0) && (uVar17 >> 0xf == 0)) {
            lVar14 = (ulong)(uVar17 >> 5) * 4;
            *(uint *)((long)__s + lVar14) = *(uint *)((long)__s + lVar14) & uVar13;
            uVar12 = 1;
          }
        }
        else {
          uVar12 = 0;
        }
        uVar6 = iVar19 + uVar6;
        if (((((DAT_05233970 <= (int)uVar6) && ((int)uVar6 <= DAT_05233980)) &&
             (iVar7 = uVar8 + iVar16, DAT_05233974 <= iVar7)) &&
            ((iVar7 <= DAT_05233984 &&
             (uVar8 = (iVar7 * 0x80 & 0xffffff00U) + ((int)uVar6 >> 1), uVar8 >> 0xf == 0)))) &&
           ((*(uint *)((long)__s_00 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar6 >> 1 & 0x1f) & 1) !=
            0)) {
          if (0x7fff < uVar17) goto LAB_0121ce80;
          goto LAB_0121cdb0;
        }
      }
    } while ((iVar19 < 1) && (iVar19 = iVar19 + 2, (uVar12 & 1) == 0));
    bVar1 = iVar16 < 1;
    iVar16 = iVar16 + 2;
  } while (bVar1 && (uVar12 & 1) == 0);
  if ((uVar12 & 1) == 0) {
    uVar11 = FUN_01676880(&local_1068,0);
    if ((uVar11 & 1) == 0) {
      if ((((DAT_05233970 <= (int)local_1060) && ((int)local_1060 <= DAT_05233980)) &&
          (DAT_05233974 <= (int)local_105c)) &&
         ((((int)local_105c <= DAT_05233984 &&
           (uVar6 = (local_105c & 0x1fffffe) * 0x80 + ((int)local_1060 >> 1), uVar6 >> 0xf == 0)) &&
          (((*(uint *)((long)__s + (ulong)(uVar6 >> 5) * 4) >> (ulong)(local_1060 >> 1 & 0x1f) & 1)
            != 0 && ((uVar11 = FUN_01688880(param_1,&local_1068,0), uVar17 >> 0xf == 0 &&
                     ((uVar11 & 1) == 0)))))))) goto LAB_0121cdb0;
    }
    else if (uVar17 >> 0xf == 0) {
LAB_0121cdb0:
      lVar14 = (ulong)(uVar17 >> 5) * 4;
      *(uint *)((long)__s + lVar14) = *(uint *)((long)__s + lVar14) & uVar13;
    }
  }
LAB_0121ce80:
  do {
    uVar13 = (int)uVar18 + 1;
    uVar18 = (ulong)uVar13;
    if (0x7fff < uVar13) {
      uVar13 = 0x7ffe;
      goto LAB_0121cea4;
    }
  } while ((local_7078[uVar13 >> 5] >> (ulong)(uVar13 & 0x1f) & 1) == 0);
  goto LAB_0121cbf4;
  while (uVar13 = uVar13 - 2, uVar13 != 0xfffffffe) {
LAB_0121cea4:
    uVar17 = uVar13 + 1;
    if (((local_7078[uVar17 >> 5] >> (ulong)(uVar17 & 0x1f) & 1) != 0) ||
       (uVar17 = uVar13, (local_7078[uVar13 >> 5] >> (ulong)(uVar13 & 0x1f) & 1) != 0)) {
      uVar18 = (ulong)(uVar17 + 1);
      goto LAB_0121cbf4;
    }
  }
  uVar18 = 0;
LAB_0121cbf4:
  if (iVar15 == (int)uVar18) {
    return;
  }
  goto LAB_0121cc00;
}


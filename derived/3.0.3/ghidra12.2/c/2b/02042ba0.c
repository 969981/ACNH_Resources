
/* WARNING: Removing unreachable block (ram,0x02043b98) */
/* WARNING: Removing unreachable block (ram,0x02043938) */
/* WARNING: Removing unreachable block (ram,0x02043860) */
/* WARNING: Removing unreachable block (ram,0x02043790) */
/* WARNING: Removing unreachable block (ram,0x020436c0) */
/* WARNING: Removing unreachable block (ram,0x020435f0) */
/* WARNING: Removing unreachable block (ram,0x02043520) */
/* WARNING: Removing unreachable block (ram,0x02043388) */
/* WARNING: Removing unreachable block (ram,0x020431dc) */
/* WARNING: Removing unreachable block (ram,0x020430a8) */
/* WARNING: Removing unreachable block (ram,0x02043088) */
/* WARNING: Removing unreachable block (ram,0x020431d4) */
/* WARNING: Removing unreachable block (ram,0x020432b8) */
/* WARNING: Removing unreachable block (ram,0x02043458) */
/* WARNING: Removing unreachable block (ram,0x02043528) */
/* WARNING: Removing unreachable block (ram,0x020435f8) */
/* WARNING: Removing unreachable block (ram,0x020436c8) */
/* WARNING: Removing unreachable block (ram,0x02043798) */
/* WARNING: Removing unreachable block (ram,0x02043868) */
/* WARNING: Removing unreachable block (ram,0x02043940) */
/* WARNING: Removing unreachable block (ram,0x02043ba8) */
/* WARNING: Removing unreachable block (ram,0x02043380) */
/* WARNING: Removing unreachable block (ram,0x02043170) */
/* WARNING: Removing unreachable block (ram,0x02043450) */

uint FUN_02042ba0(long param_1,int *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  int iVar21;
  undefined1 *__src;
  undefined8 *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 local_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined7 uStack_128;
  undefined1 local_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined *local_118;
  undefined1 *puStack_110;
  int local_108;
  undefined1 auStack_104 [7];
  undefined1 local_fd;
  undefined6 local_f8;
  undefined2 uStack_f2;
  undefined5 uStack_f0;
  char local_eb;
  undefined8 local_e4;
  float local_dc;
  undefined8 *local_d8;
  undefined *local_d0;
  undefined1 local_c8;
  int local_c4;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined *local_a8;
  int local_a0;
  undefined **local_98;
  undefined **ppuStack_90;
  undefined **local_88;
  
  puVar8 = PTR_DAT_04bca408;
  puVar22 = *(undefined8 **)PTR_DAT_04bb47d0;
  if (puVar22 == (undefined8 *)0x0) {
    uVar13 = 0;
    goto LAB_02043ff4;
  }
  if (0 < *(int *)PTR_DAT_04bca408) {
    lVar14 = 0;
    puVar17 = *(undefined8 **)(PTR_DAT_04bca408 + 0x10);
    do {
      puVar18 = *(undefined8 **)(*(long *)(puVar8 + 8) + lVar14 * 8);
      lVar14 = lVar14 + 1;
      *puVar18 = puVar17;
      *(undefined8 **)(puVar8 + 0x10) = puVar18;
      puVar17 = puVar18;
    } while (lVar14 < *(int *)puVar8);
  }
  puVar5 = PTR_DAT_04bca410;
  *(undefined4 *)puVar8 = 0;
  puVar9 = PTR_DAT_04bca418;
  *(undefined8 *)puVar5 = 0;
  if (0 < *(int *)puVar9) {
    lVar14 = 0;
    puVar17 = *(undefined8 **)(puVar9 + 0x10);
    do {
      puVar18 = *(undefined8 **)(*(long *)(puVar9 + 8) + lVar14 * 8);
      lVar14 = lVar14 + 1;
      *puVar18 = puVar17;
      *(undefined8 **)(puVar9 + 0x10) = puVar18;
      puVar17 = puVar18;
    } while (lVar14 < *(int *)puVar9);
  }
  puVar5 = PTR_DAT_04bca420;
  *(undefined4 *)puVar9 = 0;
  lVar14 = 0;
  *(undefined1 **)puVar5 = &DAT_3f8000003f800000;
  *(undefined1 **)(puVar5 + 8) = &DAT_3f8000003f800000;
  *(undefined8 *)(puVar5 + 0x10) = 0x40c0000047c34f80;
  *(undefined8 *)(puVar5 + 0x18) = 0x4000000040400000;
  puVar5 = PTR_DAT_04bca428;
  do {
    puVar17 = (undefined8 *)(puVar5 + lVar14);
    lVar14 = lVar14 + 0x10;
    *puVar17 = 0x300000003;
    puVar17[1] = 0x300000003;
    puVar9 = PTR_DAT_04bca430;
  } while (lVar14 != 0x48000);
  *(undefined4 *)(puVar22 + 10) = 0;
  *(undefined1 *)(puVar22 + 0x16) = 0;
  *(undefined8 *)(puVar9 + 0x10) = 0;
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *puVar22 = 0;
  *(undefined4 *)(puVar22 + 1) = 0;
  local_e4 = 0;
  local_fd = 0;
  puVar22[0x12] = PTR_DAT_04bca438 + 0x10;
  local_108 = 8;
  local_dc = 0.0;
  local_118 = PTR_DAT_04bb6a30 + 0x10;
  puStack_110 = auStack_104;
  local_d8 = puVar22;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (undefined1 *)param_3[1];
  if (auStack_104 != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar14 = 0;
    do {
      if (*(char *)(param_3[1] + lVar14) == '\0') goto LAB_02042da4;
      lVar1 = param_3[1] + lVar14;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_02042da4;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_02042da4;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_02042da4:
    iVar12 = (int)lVar14;
    if (local_108 <= (int)lVar14) {
      iVar12 = local_108 + -1;
    }
    memcpy(auStack_104,__src,(long)iVar12);
    auStack_104[iVar12] = 0;
    puVar22 = local_d8;
  }
  local_118 = PTR_DAT_04bb3768 + 0x10;
  uVar19 = *(undefined8 *)((long)param_3 + 0x26);
  local_f8 = (undefined6)param_3[4];
  uStack_f2 = (undefined2)uVar19;
  uStack_f0 = (undefined5)((ulong)uVar19 >> 0x10);
  local_eb = (char)((ulong)uVar19 >> 0x38);
  cVar10 = local_eb;
  if (*param_2 == 5) {
    uVar13 = *(uint *)puVar8;
    uVar16 = (ulong)uVar13;
    if (0 < (int)uVar13) {
      puVar17 = *(undefined8 **)(puVar8 + 8);
      uVar20 = uVar16;
      do {
        if (*(undefined **)*puVar17 == PTR_LAB_04bc2598) goto LAB_02042eb0;
        uVar20 = uVar20 - 1;
        puVar17 = puVar17 + 1;
      } while (uVar20 != 0);
    }
    if ((int)uVar13 < *(int *)(puVar8 + 4)) {
      puVar17 = *(undefined8 **)(puVar8 + 0x10);
      if (puVar17 != (undefined8 *)0x0) {
        *(undefined8 *)(puVar8 + 0x10) = *puVar17;
      }
      *puVar17 = PTR_LAB_04bc2598;
      uVar13 = *(uint *)puVar8;
      puVar5 = PTR_LAB_04bc25a0;
      if (*(int *)(puVar8 + 4) <= (int)uVar13) goto joined_r0x020430a0;
      *(undefined8 **)(*(long *)(puVar8 + 8) + (long)(int)uVar13 * 8) = puVar17;
      uVar16 = (ulong)(*(int *)puVar8 + 1U);
      *(uint *)puVar8 = *(int *)puVar8 + 1U;
    }
LAB_02042eb0:
    uVar13 = (uint)uVar16;
    puVar5 = PTR_LAB_04bc25a0;
joined_r0x02042eb4:
    if (0 < (int)uVar13) {
      uVar13 = (uint)uVar16;
      puVar17 = *(undefined8 **)(puVar8 + 8);
      do {
        if (*(undefined **)*puVar17 == puVar5) goto LAB_02042f20;
        uVar16 = uVar16 - 1;
        puVar17 = puVar17 + 1;
      } while (uVar16 != 0);
    }
    if ((int)uVar13 < *(int *)(puVar8 + 4)) {
      plVar15 = *(long **)(puVar8 + 0x10);
      if (plVar15 != (long *)0x0) {
        *(long *)(puVar8 + 0x10) = *plVar15;
      }
      *plVar15 = (long)puVar5;
      if (*(int *)puVar8 < *(int *)(puVar8 + 4)) {
        *(long **)(*(long *)(puVar8 + 8) + (long)*(int *)puVar8 * 8) = plVar15;
        *(int *)puVar8 = *(int *)puVar8 + 1;
      }
    }
  }
  else if (*param_2 == 1) {
    uVar13 = *(uint *)puVar8;
    puVar5 = PTR_LAB_04bc2590;
joined_r0x020430a0:
    uVar16 = (ulong)uVar13;
    goto joined_r0x02042eb4;
  }
LAB_02042f20:
  puVar5 = PTR_DAT_04bb5c90;
  lVar14 = *(long *)PTR_DAT_04bb5c90;
  iVar12 = *param_2;
  local_dc = ((float)*(int *)(lVar14 + 0x94) * 5.0 + 5.0 + (float)*(int *)(lVar14 + 0x84) * 5.0) *
             0.5;
  local_e4 = CONCAT44(local_e4._4_4_,
                      ((float)*(int *)(lVar14 + 0x90) * 5.0 + 5.0 +
                      (float)*(int *)(lVar14 + 0x80) * 5.0) * 0.5);
  if (iVar12 == 2) {
    uVar13 = *(uint *)puVar8;
    uVar16 = (ulong)uVar13;
    if (0 < (int)uVar13) {
      puVar17 = *(undefined8 **)(puVar8 + 8);
      do {
        if (*(undefined **)*puVar17 == PTR_LAB_04bc25a8) goto LAB_0204300c;
        uVar16 = uVar16 - 1;
        puVar17 = puVar17 + 1;
      } while (uVar16 != 0);
    }
    if ((int)uVar13 < *(int *)(puVar8 + 4)) {
      puVar17 = *(undefined8 **)(puVar8 + 0x10);
      if (puVar17 != (undefined8 *)0x0) {
        *(undefined8 *)(puVar8 + 0x10) = *puVar17;
      }
      *puVar17 = PTR_LAB_04bc25a8;
      if (*(int *)puVar8 < *(int *)(puVar8 + 4)) {
        *(undefined8 **)(*(long *)(puVar8 + 8) + (long)*(int *)puVar8 * 8) = puVar17;
        *(int *)puVar8 = *(int *)puVar8 + 1;
      }
    }
LAB_0204300c:
    puVar6 = PTR_DAT_04bb46b0;
    if (local_eb != -1) {
      if (((*(long *)PTR_DAT_04bb46b0 != 0) &&
          (lVar14 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,(int)local_eb), lVar14 != 0)) &&
         (iVar12 = (int)cVar10, DAT_05454164 != iVar12)) {
        local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
        uVar16 = FUN_02b5e950(&local_98,iVar12);
        puVar7 = PTR_DAT_04bc43f8;
        iVar21 = (int)cVar10;
        if ((uVar16 & 1) == 0) {
LAB_02043178:
          lVar14 = *(long *)puVar6;
          if (iVar21 == 0) {
LAB_0204332c:
            if ((lVar14 != 0) && (lVar14 = FUN_026eec4c(lVar14,1), lVar14 != 0)) {
              local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
              uVar16 = FUN_02b5e950(&local_98,1);
              if ((uVar16 & 1) != 0) {
                local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
                puVar17 = &DAT_05636dd8;
                if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                  puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                }
                if (puVar17[1] != 0) {
                  local_150 = local_150 & 0xffffffff00000000;
                  local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                  local_158 = PTR_DAT_04bc43f8 + 0x10;
                  uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
                  if ((uVar16 & 1) != 0) {
                    local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
                  }
                  uVar16 = FUN_02a59140(puVar17,&local_158);
                  if ((uVar16 & 1) != 0) {
                    uVar19 = 1;
                    goto LAB_020438cc;
                  }
                }
              }
            }
            lVar14 = *(long *)puVar6;
            if (iVar21 == 2) {
LAB_020434cc:
              if ((lVar14 != 0) && (lVar14 = FUN_026eec4c(lVar14,3), lVar14 != 0)) {
                local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
                uVar16 = FUN_02b5e950(&local_98,3);
                if ((uVar16 & 1) != 0) {
                  local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
                  puVar17 = &DAT_05636dd8;
                  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                    puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                  }
                  if (puVar17[1] != 0) {
                    local_150 = local_150 & 0xffffffff00000000;
                    local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                    local_158 = PTR_DAT_04bc43f8 + 0x10;
                    uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
                    if ((uVar16 & 1) != 0) {
                      local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
                    }
                    uVar16 = FUN_02a59140(puVar17,&local_158);
                    if ((uVar16 & 1) != 0) {
                      uVar19 = 3;
                      goto LAB_020438cc;
                    }
                  }
                }
              }
              lVar14 = *(long *)puVar6;
              if (iVar21 != 4) goto LAB_0204359c;
LAB_0204366c:
              if ((lVar14 != 0) && (lVar14 = FUN_026eec4c(lVar14,5), lVar14 != 0)) {
                local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
                uVar16 = FUN_02b5e950(&local_98,5);
                if ((uVar16 & 1) != 0) {
                  local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
                  puVar17 = &DAT_05636dd8;
                  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                    puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                  }
                  if (puVar17[1] != 0) {
                    local_150 = local_150 & 0xffffffff00000000;
                    local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                    local_158 = PTR_DAT_04bc43f8 + 0x10;
                    uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
                    if ((uVar16 & 1) != 0) {
                      local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
                    }
                    uVar16 = FUN_02a59140(puVar17,&local_158);
                    if ((uVar16 & 1) != 0) {
                      uVar19 = 5;
                      goto LAB_020438cc;
                    }
                  }
                }
              }
              lVar14 = *(long *)puVar6;
              if (iVar21 != 6) goto LAB_0204373c;
            }
            else {
LAB_020433fc:
              if ((lVar14 != 0) && (lVar14 = FUN_026eec4c(lVar14,2), lVar14 != 0)) {
                local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
                uVar16 = FUN_02b5e950(&local_98,2);
                if ((uVar16 & 1) != 0) {
                  local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
                  puVar17 = &DAT_05636dd8;
                  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                    puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                  }
                  if (puVar17[1] != 0) {
                    local_150 = local_150 & 0xffffffff00000000;
                    local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                    local_158 = PTR_DAT_04bc43f8 + 0x10;
                    uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
                    if ((uVar16 & 1) != 0) {
                      local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
                    }
                    uVar16 = FUN_02a59140(puVar17,&local_158);
                    if ((uVar16 & 1) != 0) {
                      uVar19 = 2;
                      goto LAB_020438cc;
                    }
                  }
                }
              }
              lVar14 = *(long *)puVar6;
              if (iVar21 != 3) goto LAB_020434cc;
LAB_0204359c:
              if ((lVar14 != 0) && (lVar14 = FUN_026eec4c(lVar14,4), lVar14 != 0)) {
                local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
                uVar16 = FUN_02b5e950(&local_98,4);
                if ((uVar16 & 1) != 0) {
                  local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
                  puVar17 = &DAT_05636dd8;
                  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                    puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                  }
                  if (puVar17[1] != 0) {
                    local_150 = local_150 & 0xffffffff00000000;
                    local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                    local_158 = PTR_DAT_04bc43f8 + 0x10;
                    uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
                    if ((uVar16 & 1) != 0) {
                      local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
                    }
                    uVar16 = FUN_02a59140(puVar17,&local_158);
                    if ((uVar16 & 1) != 0) {
                      uVar19 = 4;
                      goto LAB_020438cc;
                    }
                  }
                }
              }
              lVar14 = *(long *)puVar6;
              if (iVar21 != 5) goto LAB_0204366c;
LAB_0204373c:
              if ((lVar14 != 0) && (lVar14 = FUN_026eec4c(lVar14,6), lVar14 != 0)) {
                local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
                uVar16 = FUN_02b5e950(&local_98,6);
                if ((uVar16 & 1) != 0) {
                  local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
                  puVar17 = &DAT_05636dd8;
                  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                    puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                  }
                  if (puVar17[1] != 0) {
                    local_150 = local_150 & 0xffffffff00000000;
                    local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                    local_158 = PTR_DAT_04bc43f8 + 0x10;
                    uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
                    if ((uVar16 & 1) != 0) {
                      local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
                    }
                    uVar16 = FUN_02a59140(puVar17,&local_158);
                    if ((uVar16 & 1) != 0) {
                      uVar19 = 6;
                      goto LAB_020438cc;
                    }
                  }
                }
              }
              if (iVar12 == 7) goto LAB_02043a84;
              lVar14 = *(long *)puVar6;
            }
            if ((lVar14 != 0) && (lVar14 = FUN_026eec4c(lVar14,7), lVar14 != 0)) {
              local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
              uVar16 = FUN_02b5e950(&local_98,7);
              if ((uVar16 & 1) != 0) {
                local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
                puVar17 = &DAT_05636dd8;
                if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
                  puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
                }
                if (puVar17[1] != 0) {
                  local_150 = local_150 & 0xffffffff00000000;
                  local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
                  local_158 = PTR_DAT_04bc43f8 + 0x10;
                  uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
                  if ((uVar16 & 1) != 0) {
                    local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
                  }
                  uVar16 = FUN_02a59140(puVar17,&local_158);
                  if ((uVar16 & 1) != 0) {
                    uVar19 = 7;
                    goto LAB_020438cc;
                  }
                }
              }
            }
            goto LAB_02043a84;
          }
          if ((lVar14 == 0) || (lVar14 = FUN_026eec4c(lVar14,0), lVar14 == 0)) {
LAB_02043320:
            lVar14 = *(long *)puVar6;
            if (iVar21 != 1) goto LAB_0204332c;
            goto LAB_020433fc;
          }
          local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
          uVar16 = FUN_02b5e950(&local_98,0);
          if ((uVar16 & 1) == 0) goto LAB_02043320;
          local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
          puVar17 = &DAT_05636dd8;
          if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
            puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
          }
          if (puVar17[1] == 0) goto LAB_02043320;
          local_150 = local_150 & 0xffffffff00000000;
          local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
          local_158 = PTR_DAT_04bc43f8 + 0x10;
          uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
          if ((uVar16 & 1) != 0) {
            local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
          }
          uVar16 = FUN_02a59140(puVar17,&local_158);
          if ((uVar16 & 1) == 0) goto LAB_02043320;
          uVar19 = 0;
LAB_020438cc:
          local_a0 = 0;
          local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
          local_a8 = PTR_DAT_04bc43f8 + 0x10;
          uVar16 = FUN_02b5e950(&local_d0,uVar19);
          if ((uVar16 & 1) != 0) {
            local_158 = (undefined *)((ulong)local_158 & 0xffffffff00000000);
            uVar16 = FUN_02b674f0(&local_158,(ulong)local_d0 & 0xffffffff);
            if ((uVar16 & 1) != 0) {
              local_a0 = (int)local_158;
            }
          }
          local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
          lVar14 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x150) == 0)) {
LAB_02043a1c:
            local_d0 = PTR_DAT_04bc4608 + 0x10;
            local_c8 = PTR_DAT_04bbc570[8];
            local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
            uStack_b8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
            local_c0 = PTR_DAT_04bb2010 + 0x10;
            local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
            local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
          }
          else {
            local_d0 = PTR_DAT_04bc4608 + 0x10;
            local_c8 = PTR_DAT_04bbc570[8];
            local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
            uStack_b8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
            local_c0 = PTR_DAT_04bb2010 + 0x10;
            local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
            local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
            if (local_a0 != 0) {
              ppuStack_90 = &local_a8;
              local_98 = &PTR_FUN_04a9b150;
              local_88 = &local_d0;
              plVar15 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x150) + 0x10))();
              iVar12 = (**(code **)(*plVar15 + 0x18))();
              if (0 < iVar12) {
                iVar21 = 0;
                do {
                  FUN_01360490(&local_158,*(undefined8 *)(lVar14 + 0x150),iVar21);
                  uVar16 = (*(code *)*local_98)(&local_98,&local_158);
                  if ((uVar16 & 1) != 0) break;
                  bVar11 = iVar12 + -1 != iVar21;
                  iVar21 = iVar21 + 1;
                } while (bVar11);
              }
            }
          }
        }
        else {
          local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
          puVar17 = &DAT_05636dd8;
          if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
            puVar17 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
          }
          if (puVar17[1] == 0) goto LAB_02043178;
          local_150 = local_150 & 0xffffffff00000000;
          local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
          local_158 = PTR_DAT_04bc43f8 + 0x10;
          uVar16 = FUN_02b674f0(&local_d0,(ulong)local_98 & 0xffffffff);
          if ((uVar16 & 1) != 0) {
            local_150 = CONCAT44(local_150._4_4_,(uint)local_d0);
          }
          uVar16 = FUN_02a59140(puVar17,&local_158);
          if ((uVar16 & 1) == 0) goto LAB_02043178;
          local_a8 = puVar7 + 0x10;
          local_a0 = 0;
          local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
          uVar16 = FUN_02b5e950(&local_d0,iVar21);
          if ((uVar16 & 1) != 0) {
            local_158 = (undefined *)((ulong)local_158 & 0xffffffff00000000);
            uVar16 = FUN_02b674f0(&local_158,(ulong)local_d0 & 0xffffffff);
            if ((uVar16 & 1) != 0) {
              local_a0 = (int)local_158;
            }
          }
          local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
          lVar14 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x150) == 0)) goto LAB_02043a1c;
          local_d0 = PTR_DAT_04bc4608 + 0x10;
          local_c8 = PTR_DAT_04bbc570[8];
          local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_b8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_c0 = PTR_DAT_04bb2010 + 0x10;
          local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
          if (local_a0 != 0) {
            ppuStack_90 = &local_a8;
            local_98 = &PTR_FUN_04a9b150;
            local_88 = &local_d0;
            plVar15 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x150) + 0x10))();
            iVar12 = (**(code **)(*plVar15 + 0x18))();
            if (0 < iVar12) {
              iVar21 = 0;
              do {
                FUN_01360490(&local_158,*(undefined8 *)(lVar14 + 0x150),iVar21);
                uVar16 = (*(code *)*local_98)(&local_98,&local_158);
                if ((uVar16 & 1) != 0) break;
                bVar11 = iVar12 + -1 != iVar21;
                iVar21 = iVar21 + 1;
              } while (bVar11);
            }
          }
        }
        FUN_02a8f1dc(&local_d0,&local_e4);
        local_dc = local_dc + 7.5;
      }
LAB_02043a84:
      iVar12 = *param_2;
      goto LAB_02043a88;
    }
  }
  else {
LAB_02043a88:
    if (iVar12 == 3) {
      uVar13 = *(uint *)puVar8;
      uVar16 = (ulong)uVar13;
      if (0 < (int)uVar13) {
        puVar17 = *(undefined8 **)(puVar8 + 8);
        do {
          if (*(undefined **)*puVar17 == PTR_LAB_04bc25a8) goto LAB_02043b18;
          uVar16 = uVar16 - 1;
          puVar17 = puVar17 + 1;
        } while (uVar16 != 0);
      }
      if ((int)uVar13 < *(int *)(puVar8 + 4)) {
        puVar17 = *(undefined8 **)(puVar8 + 0x10);
        if (puVar17 != (undefined8 *)0x0) {
          *(undefined8 *)(puVar8 + 0x10) = *puVar17;
        }
        *puVar17 = PTR_LAB_04bc25a8;
        if (*(int *)puVar8 < *(int *)(puVar8 + 4)) {
          *(undefined8 **)(*(long *)(puVar8 + 8) + (long)*(int *)puVar8 * 8) = puVar17;
          *(int *)puVar8 = *(int *)puVar8 + 1;
        }
      }
LAB_02043b18:
      if (local_eb != -1) {
        local_a0 = 0;
        local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
        local_a8 = PTR_DAT_04bc43f8 + 0x10;
        uVar16 = FUN_02b67a30(&local_d0);
        if ((uVar16 & 1) != 0) {
          local_158 = (undefined *)CONCAT44(local_158._4_4_,(uint)local_d0);
          if (9 < (uint)local_d0) {
            local_d0._0_4_ = 0;
          }
          local_a0 = (&DAT_05636e30)[(int)(uint)local_d0];
        }
        local_158 = (undefined *)CONCAT44(local_158._4_4_,1);
        lVar14 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
        if ((lVar14 == 0) || (*(long *)(lVar14 + 0x150) == 0)) {
          local_d0 = PTR_DAT_04bc4608 + 0x10;
          local_c8 = PTR_DAT_04bbc570[8];
          local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_b8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_c0 = PTR_DAT_04bb2010 + 0x10;
          local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        }
        else {
          local_d0 = PTR_DAT_04bc4608 + 0x10;
          local_c8 = PTR_DAT_04bbc570[8];
          local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
          uStack_b8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
          local_c0 = PTR_DAT_04bb2010 + 0x10;
          local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
          local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
          if (local_a0 != 0) {
            ppuStack_90 = &local_a8;
            local_98 = &PTR_FUN_04a9b150;
            local_88 = &local_d0;
            plVar15 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar14 + 0x150) + 0x10))();
            iVar12 = (**(code **)(*plVar15 + 0x18))();
            if (0 < iVar12) {
              iVar21 = 0;
              do {
                FUN_01360490(&local_158,*(undefined8 *)(lVar14 + 0x150),iVar21);
                uVar16 = (*(code *)*local_98)(&local_98,&local_158);
                if ((uVar16 & 1) != 0) break;
                bVar11 = iVar12 + -1 != iVar21;
                iVar21 = iVar21 + 1;
              } while (bVar11);
            }
          }
        }
        if (local_c4 != 0) {
          FUN_02a8f1dc(&local_d0,&local_e4);
          local_dc = local_dc + 7.5;
          iVar12 = *param_2;
          goto LAB_02043cfc;
        }
      }
    }
    else {
LAB_02043cfc:
      if (iVar12 == 4) {
        lVar14 = *(long *)puVar5;
        iVar25 = *(int *)(lVar14 + 0x90);
        iVar26 = *(int *)(lVar14 + 0x94);
        iVar23 = *(int *)(lVar14 + 0x80);
        iVar24 = *(int *)(lVar14 + 0x84);
        iVar3 = *(int *)(lVar14 + 0x28) + -0x14;
        iVar4 = *(int *)(lVar14 + 0x2c) + -0x14;
        iVar12 = *(int *)(lVar14 + 0x38) + 0x14;
        iVar21 = *(int *)(lVar14 + 0x3c) + 0x14;
        iVar2 = iVar3;
        if (iVar12 <= iVar3) {
          iVar2 = iVar12;
        }
        if (iVar3 <= iVar12) {
          iVar3 = iVar12;
        }
        iVar12 = iVar4;
        if (iVar21 <= iVar4) {
          iVar12 = iVar21;
        }
        if (iVar4 <= iVar21) {
          iVar4 = iVar21;
        }
        *(int *)(puVar9 + 0x10) = iVar2;
        *(int *)(puVar9 + 0x14) = iVar12;
        *(int *)(puVar9 + 0x20) = iVar3;
        *(int *)(puVar9 + 0x24) = iVar4;
        iVar12 = *param_2;
        local_dc = ((float)iVar26 * 5.0 + 5.0 + (float)iVar24 * 5.0) * 0.5;
        local_e4 = CONCAT44(local_e4._4_4_,((float)iVar25 * 5.0 + 5.0 + (float)iVar23 * 5.0) * 0.5);
      }
      if (iVar12 == 6) {
        lVar14 = *(long *)puVar5;
        iVar3 = *(int *)(lVar14 + 0x28) + -0x20;
        iVar12 = *(int *)(lVar14 + 0x38) + 0x20;
        iVar4 = *(int *)(lVar14 + 0x2c) + -0x20;
        iVar21 = *(int *)(lVar14 + 0x3c) + 0x20;
        iVar2 = iVar3;
        if (iVar12 <= iVar3) {
          iVar2 = iVar12;
        }
        if (iVar3 <= iVar12) {
          iVar3 = iVar12;
        }
        iVar12 = iVar4;
        if (iVar21 <= iVar4) {
          iVar12 = iVar21;
        }
        if (iVar4 <= iVar21) {
          iVar4 = iVar21;
        }
        *(int *)(puVar9 + 0x10) = iVar2;
        *(int *)(puVar9 + 0x14) = iVar12;
        *(int *)(puVar9 + 0x20) = iVar3;
        *(int *)(puVar9 + 0x24) = iVar4;
      }
    }
  }
  uVar13 = *(uint *)puVar8;
  uVar16 = (ulong)uVar13;
  if (0 < (int)uVar13) {
    puVar17 = *(undefined8 **)(puVar8 + 8);
    uVar20 = uVar16;
    do {
      if (*(undefined **)*puVar17 == PTR_LAB_04bc2578) goto LAB_02043e5c;
      uVar20 = uVar20 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar20 != 0);
  }
  if ((int)uVar13 < *(int *)(puVar8 + 4)) {
    puVar17 = *(undefined8 **)(puVar8 + 0x10);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(puVar8 + 0x10) = *puVar17;
    }
    *puVar17 = PTR_LAB_04bc2578;
    uVar13 = *(uint *)puVar8;
    uVar16 = (ulong)uVar13;
    if ((int)uVar13 < *(int *)(puVar8 + 4)) {
      *(undefined8 **)(*(long *)(puVar8 + 8) + (long)(int)uVar13 * 8) = puVar17;
      uVar16 = (ulong)(*(int *)puVar8 + 1U);
      *(uint *)puVar8 = *(int *)puVar8 + 1U;
    }
  }
LAB_02043e5c:
  uVar13 = (uint)uVar16;
  if (0 < (int)uVar13) {
    puVar17 = *(undefined8 **)(puVar8 + 8);
    do {
      if (*(undefined **)*puVar17 == PTR_LAB_04bc2580) goto LAB_02043ee0;
      uVar16 = uVar16 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar16 != 0);
  }
  if ((int)uVar13 < *(int *)(puVar8 + 4)) {
    puVar17 = *(undefined8 **)(puVar8 + 0x10);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(puVar8 + 0x10) = *puVar17;
    }
    *puVar17 = PTR_LAB_04bc2580;
    uVar13 = *(uint *)puVar8;
    if ((int)uVar13 < *(int *)(puVar8 + 4)) {
      *(undefined8 **)(*(long *)(puVar8 + 8) + (long)(int)uVar13 * 8) = puVar17;
      uVar13 = *(int *)puVar8 + 1;
      *(uint *)puVar8 = uVar13;
    }
  }
LAB_02043ee0:
  if (0 < (int)uVar13) {
    puVar17 = *(undefined8 **)(puVar8 + 8);
    uVar16 = (ulong)uVar13;
    do {
      if (*(undefined **)*puVar17 == PTR_LAB_04bc2588) goto LAB_02043f68;
      uVar16 = uVar16 - 1;
      puVar17 = puVar17 + 1;
    } while (uVar16 != 0);
  }
  if ((int)uVar13 < *(int *)(puVar8 + 4)) {
    puVar17 = *(undefined8 **)(puVar8 + 0x10);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(puVar8 + 0x10) = *puVar17;
    }
    *puVar17 = PTR_LAB_04bc2588;
    if (*(int *)puVar8 < *(int *)(puVar8 + 4)) {
      *(undefined8 **)(*(long *)(puVar8 + 8) + (long)*(int *)puVar8 * 8) = puVar17;
      *(int *)puVar8 = *(int *)puVar8 + 1;
    }
  }
LAB_02043f68:
  uStack_11f = 0;
  puVar22[0x13] = param_1;
  puVar22[0x14] = &local_d8;
  uStack_120 = 1;
  uStack_11e = 1;
  puVar22[0x12] = &PTR_LAB_04a6ed78;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_121 = 0;
  local_158 = (undefined *)
              CONCAT44((int)((float)(int)local_dc / 5.0) - (uint)(local_dc < 0.0),
                       (int)((float)(int)(float)local_e4 / 5.0) - (uint)((float)local_e4 < 0.0));
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,*(undefined4 *)(param_1 + 0x230));
  uVar13 = FUN_035af7e0(local_d8,&local_d0,&local_158);
LAB_02043ff4:
  return uVar13 & 1;
}


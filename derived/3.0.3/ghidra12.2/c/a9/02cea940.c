
/* WARNING: Removing unreachable block (ram,0x02ceb014) */
/* WARNING: Removing unreachable block (ram,0x02ceb1b4) */
/* WARNING: Removing unreachable block (ram,0x02ceaea0) */
/* WARNING: Removing unreachable block (ram,0x02ceaec8) */
/* WARNING: Removing unreachable block (ram,0x02ceb1e4) */
/* WARNING: Removing unreachable block (ram,0x02ceb03c) */

void FUN_02cea940(long param_1,int param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined **local_f0;
  long local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  uint local_64;
  
  *(int *)(param_1 + 0x780) = param_2;
  plVar1 = (long *)(param_1 + 0x3b128);
  local_68 = param_2;
  piVar8 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar8) {
    lVar11 = 0;
    puVar13 = *(undefined8 **)(piVar8 + 4);
    do {
      puVar14 = *(undefined8 **)(*(long *)(piVar8 + 2) + lVar11 * 8);
      lVar11 = lVar11 + 1;
      *puVar14 = puVar13;
      *(undefined8 **)(piVar8 + 4) = puVar14;
      puVar13 = puVar14;
    } while (lVar11 < *piVar8);
  }
  *piVar8 = 0;
  puVar6 = PTR_DAT_04bb43c0;
  if (param_2 == 0) {
    uVar16 = *(uint *)(param_1 + 0x788);
    if (0 < (int)uVar16) {
      uVar10 = 0;
      do {
        lVar11 = *(long *)puVar6;
        uVar7 = FUN_0277d6c4(*(undefined8 *)(*(long *)(param_1 + 0x790) + uVar10 * 8));
        if (*(long *)puVar6 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            puVar12 = *(undefined2 **)(*(long *)(param_1 + 0x790) + uVar10 * 8);
            uVar5 = *puVar12;
            uVar3 = *(undefined1 *)(puVar12 + 1);
            uVar4 = *(undefined1 *)((long)puVar12 + 3);
            uVar2 = *(undefined4 *)(puVar12 + 2);
            piVar8 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
            if (*piVar8 < piVar8[1]) {
              puVar13 = *(undefined8 **)(piVar8 + 4);
              if (puVar13 != (undefined8 *)0x0) {
                *(undefined8 *)(piVar8 + 4) = *puVar13;
              }
              *(undefined2 *)puVar13 = uVar5;
              *(undefined1 *)((long)puVar13 + 2) = uVar3;
              *(undefined1 *)((long)puVar13 + 3) = uVar4;
              *(undefined4 *)((long)puVar13 + 4) = uVar2;
              if (*piVar8 < piVar8[1]) {
                *(undefined8 **)(*(long *)(piVar8 + 2) + (long)*piVar8 * 8) = puVar13;
                *piVar8 = *piVar8 + 1;
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar16 != uVar10);
    }
  }
  else {
    switch(local_68) {
    case 3:
      local_f0 = &PTR_FUN_04b2a408;
      break;
    default:
      goto switchD_02cea9f8_caseD_4;
    case 0x1d:
      local_f0 = &PTR_FUN_04b2a250;
      break;
    case 0x1e:
      local_f0 = &PTR_FUN_04b2a278;
      break;
    case 0x1f:
      local_f0 = &PTR_FUN_04b2a2a0;
      break;
    case 0x20:
      local_f0 = &PTR_FUN_04b2a2c8;
      break;
    case 0x21:
      local_f0 = &PTR_FUN_04b2a2f0;
      break;
    case 0x22:
      local_f0 = &PTR_FUN_04b2a318;
      break;
    case 0x23:
      local_f0 = &PTR_FUN_04b2a340;
      break;
    case 0x24:
      local_f0 = &PTR_FUN_04b2a368;
    }
    FUN_02ceb290(param_1,&local_f0);
  }
switchD_02cea9f8_caseD_4:
  local_a8 = 0xfffe;
  FUN_0277d4ac(&local_a8);
  local_a0 = 0xfffe;
  FUN_0277d4ac(&local_a0);
  local_98 = 0xfffe;
  FUN_0277d4ac(&local_98);
  local_90 = 0xfffe;
  FUN_0277d4ac(&local_90);
  local_88 = 0xfffe;
  FUN_0277d4ac(&local_88);
  local_80 = 0xfffe;
  FUN_0277d4ac(&local_80);
  local_78 = 0xfffe;
  FUN_0277d4ac(&local_78);
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  puVar6 = PTR_DAT_04bb37e0;
  local_d0 = *(undefined2 *)PTR_DAT_04bb37e0;
  uStack_ce = PTR_DAT_04bb37e0[2];
  uStack_cd = PTR_DAT_04bb37e0[3];
  local_c0 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_d8 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_d4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_e0 = *(undefined8 **)PTR_DAT_04bb37e0;
  local_e8 = *(long *)PTR_DAT_04bb37e0;
  local_f0 = *(undefined ***)PTR_DAT_04bb37e0;
  local_70 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_78 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_80 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_88 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_90 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_98 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_a0 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_a8 = *(undefined8 *)PTR_DAT_04bb37e0;
  uStack_cc = local_d4;
  local_c8 = local_d0;
  local_c6 = uStack_ce;
  local_c5 = uStack_cd;
  local_c4 = local_d4;
  local_bc = local_d4;
  local_b8 = local_d0;
  local_b6 = uStack_ce;
  local_b5 = uStack_cd;
  local_b4 = local_d4;
  local_b0 = local_d0;
  local_ae = uStack_ce;
  local_ad = uStack_cd;
  local_ac = local_d4;
  FUN_016d3390(&local_f0,*(undefined4 *)(param_1 + 0x75b40));
  local_a8 = CONCAT44(local_d4,local_d8);
  local_b5 = puVar6[3];
  local_a0 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
  local_98 = CONCAT44(local_c4,CONCAT13(local_c5,CONCAT12(local_c6,local_c8)));
  local_d4 = *(undefined4 *)(puVar6 + 4);
  local_90 = CONCAT44(local_bc,local_c0);
  local_d0 = *(undefined2 *)puVar6;
  uStack_ce = puVar6[2];
  local_c0 = *(undefined4 *)puVar6;
  local_d8 = *(undefined4 *)puVar6;
  local_e0 = *(undefined8 **)puVar6;
  local_e8 = *(long *)puVar6;
  local_f0 = *(undefined ***)puVar6;
  uStack_cd = local_b5;
  uStack_cc = local_d4;
  local_c8 = local_d0;
  local_c6 = uStack_ce;
  local_c5 = local_b5;
  local_c4 = local_d4;
  local_bc = local_d4;
  local_b8 = local_d0;
  local_b6 = uStack_ce;
  local_b4 = local_d4;
  local_b0 = local_d0;
  local_ae = uStack_ce;
  local_ad = local_b5;
  local_ac = local_d4;
  FUN_016d3390(&local_f0,*(int *)(param_1 + 0x75b40) == 0);
  local_88 = CONCAT44(local_d4,local_d8);
  local_80 = CONCAT44(uStack_cc,CONCAT13(uStack_cd,CONCAT12(uStack_ce,local_d0)));
  local_78 = CONCAT44(local_c4,CONCAT13(local_c5,CONCAT12(local_c6,local_c8)));
  local_f0 = &PTR_LAB_04ab8a70;
  local_70 = CONCAT44(local_bc,local_c0);
  local_e8 = param_1;
  local_e0 = &local_a8;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  uVar9 = (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_02c5ef70(uVar9,&local_f0);
  FUN_02ce119c(param_1 + 0x75ad0,local_68);
  lVar11 = param_1 + 0x75b44;
  iVar17 = -(uint)(*(byte *)(param_1 + 0x75b0c) == 0);
  *(int *)(param_1 + 0x75b38) = iVar17;
  *(uint *)(param_1 + 0x75b3c) = (uint)*(byte *)(param_1 + 0x75b0c);
  if (local_68 == 0) {
    uVar16 = 0;
    do {
      lVar18 = lVar11 + (ulong)uVar16 * 0x10;
      if (9 < uVar16) {
        lVar18 = lVar11;
      }
      local_64 = uVar16;
      if (*(int *)(lVar18 + 8) == 4) {
        lVar18 = lVar11 + (ulong)uVar16 * 0x10;
        if (9 < uVar16) {
          lVar18 = lVar11;
        }
        if (*(int *)(param_1 + 0x3b130) != 0) {
          lVar15 = *(long *)(param_1 + 0x3b138);
          lVar20 = 0;
          lVar19 = (long)*(int *)(param_1 + 0x3b130) << 3;
          do {
            local_f0 = (undefined **)**(undefined8 **)(lVar15 + lVar20 * 8);
            uVar10 = FUN_0277d7b4(&local_f0,lVar18);
            if ((uVar10 & 1) != 0) {
              iVar17 = *(int *)(param_1 + 0x75b3c) + (int)lVar20;
              goto LAB_02ceaf34;
            }
            lVar20 = lVar20 + 1;
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
        iVar17 = -1;
LAB_02ceaf34:
        lVar18 = lVar11 + (ulong)local_64 * 0x10;
        if (9 < local_64) {
          lVar18 = lVar11;
        }
        *(int *)(lVar18 + 0xc) = iVar17;
      }
      else if (*(int *)(lVar18 + 8) == 3) {
        iVar17 = *(int *)(param_1 + 0x75b38);
        goto LAB_02ceaf34;
      }
      uVar16 = uVar16 + 1;
      if (uVar16 == 10) {
        return;
      }
    } while( true );
  }
  *(undefined4 *)(param_1 + 0x75b50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75b60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75b70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75b80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75b90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75ba0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75bb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75bc0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75bd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x75be0) = 0xffffffff;
  if (local_68 == 3) {
    local_64 = 9;
    if (*(int *)(param_1 + 0x75bdc) == 3) goto LAB_02ceb164;
    if (*(int *)(param_1 + 0x75bdc) != 4) {
      return;
    }
    if (*(int *)(param_1 + 0x3b130) != 0) {
      lVar19 = *(long *)(param_1 + 0x3b138);
      lVar18 = 0;
      lVar20 = (long)*(int *)(param_1 + 0x3b130) << 3;
      iVar17 = -1;
      do {
        local_f0 = (undefined **)**(undefined8 **)(lVar19 + lVar18 * 8);
        uVar10 = FUN_0277d7b4(&local_f0,param_1 + 0x75bd4);
        if ((uVar10 & 1) != 0) goto LAB_02ceb15c;
        lVar18 = lVar18 + 1;
        lVar20 = lVar20 + -8;
      } while (lVar20 != 0);
      goto LAB_02ceb164;
    }
  }
  else {
    if (local_68 == 0x1e) {
      local_64 = 1;
      if (*(int *)(param_1 + 0x75b5c) != 3) {
        if (*(int *)(param_1 + 0x75b5c) != 4) goto LAB_02ceb1a0;
        if (*(int *)(param_1 + 0x3b130) == 0) {
          iVar17 = -1;
        }
        else {
          lVar19 = *(long *)(param_1 + 0x3b138);
          lVar18 = 0;
          lVar20 = (long)*(int *)(param_1 + 0x3b130) << 3;
          iVar17 = -1;
          do {
            local_f0 = (undefined **)**(undefined8 **)(lVar19 + lVar18 * 8);
            uVar10 = FUN_0277d7b4(&local_f0,param_1 + 0x75b54);
            if ((uVar10 & 1) != 0) {
              iVar17 = *(int *)(param_1 + 0x75b3c) + (int)lVar18;
              break;
            }
            lVar18 = lVar18 + 1;
            lVar20 = lVar20 + -8;
          } while (lVar20 != 0);
        }
      }
      lVar18 = lVar11 + (ulong)local_64 * 0x10;
      if (9 < local_64) {
        lVar18 = lVar11;
      }
      *(int *)(lVar18 + 0xc) = iVar17;
LAB_02ceb1a0:
      local_64 = 2;
      if (*(int *)(param_1 + 0x75b6c) == 4) {
        if (*(int *)(param_1 + 0x3b130) == 0) {
          iVar17 = -1;
        }
        else {
          lVar19 = *(long *)(param_1 + 0x3b138);
          lVar18 = 0;
          lVar20 = (long)*(int *)(param_1 + 0x3b130) << 3;
          iVar17 = -1;
          do {
            local_f0 = (undefined **)**(undefined8 **)(lVar19 + lVar18 * 8);
            uVar10 = FUN_0277d7b4(&local_f0,param_1 + 0x75b64);
            if ((uVar10 & 1) != 0) {
              iVar17 = *(int *)(param_1 + 0x75b3c) + (int)lVar18;
              break;
            }
            lVar18 = lVar18 + 1;
            lVar20 = lVar20 + -8;
          } while (lVar20 != 0);
        }
      }
      else {
        if (*(int *)(param_1 + 0x75b6c) != 3) {
          return;
        }
        iVar17 = *(int *)(param_1 + 0x75b38);
      }
      lVar18 = lVar11 + (ulong)local_64 * 0x10;
      if (9 < local_64) {
        lVar18 = lVar11;
      }
      *(int *)(lVar18 + 0xc) = iVar17;
      return;
    }
    if (7 < local_68 - 0x1dU) {
      return;
    }
    local_64 = *(uint *)(&DAT_04058560 + (long)(int)(local_68 - 0x1dU) * 4);
    lVar18 = lVar11 + (ulong)local_64 * 0x10;
    if (9 < local_64) {
      lVar18 = lVar11;
    }
    if (*(int *)(lVar18 + 8) == 3) goto LAB_02ceb164;
    if (*(int *)(lVar18 + 8) != 4) {
      return;
    }
    lVar20 = lVar11 + (ulong)local_64 * 0x10;
    if (9 < local_64) {
      lVar20 = lVar11;
    }
    if (*(int *)(param_1 + 0x3b130) != 0) {
      lVar15 = *(long *)(param_1 + 0x3b138);
      lVar18 = 0;
      lVar19 = (long)*(int *)(param_1 + 0x3b130) << 3;
      iVar17 = -1;
      do {
        local_f0 = (undefined **)**(undefined8 **)(lVar15 + lVar18 * 8);
        uVar10 = FUN_0277d7b4(&local_f0,lVar20);
        if ((uVar10 & 1) != 0) goto LAB_02ceb15c;
        lVar18 = lVar18 + 1;
        lVar19 = lVar19 + -8;
      } while (lVar19 != 0);
      goto LAB_02ceb164;
    }
  }
  iVar17 = -1;
LAB_02ceb164:
  lVar18 = lVar11 + (ulong)local_64 * 0x10;
  if (9 < local_64) {
    lVar18 = lVar11;
  }
  *(int *)(lVar18 + 0xc) = iVar17;
  return;
LAB_02ceb15c:
  iVar17 = *(int *)(param_1 + 0x75b3c) + (int)lVar18;
  goto LAB_02ceb164;
}


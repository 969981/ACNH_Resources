
/* WARNING: Removing unreachable block (ram,0x013d2254) */
/* WARNING: Removing unreachable block (ram,0x013d217c) */
/* WARNING: Removing unreachable block (ram,0x013d2088) */
/* WARNING: Removing unreachable block (ram,0x013d20b0) */
/* WARNING: Removing unreachable block (ram,0x013d227c) */

undefined8 FUN_013d1f68(long param_1,long param_2,char *param_3,undefined4 *param_4,ulong param_5)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined **ppuVar10;
  long lVar11;
  long *plVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  undefined4 local_d0;
  undefined1 auStack_cc [4];
  undefined *local_c8;
  float local_c0;
  int iStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  int local_94;
  
  switch(*param_4) {
  case 0:
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
    local_a0 = CONCAT44(local_a0._4_4_,0x40f00000);
    uVar8 = FUN_013d4b30(param_2,&local_c8,&local_a0);
    if (((uVar8 & 1) == 0) || (uVar8 = FUN_013d3780(param_2,&local_c8), (uVar8 & 1) == 0)) {
      local_a0 = CONCAT44(local_a0._4_4_,0x40f00000);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xc);
      uVar8 = FUN_013d4b30(param_2,&local_c8,&local_a0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      uVar8 = FUN_013d3780(param_2,&local_c8);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
    }
    local_98 = 0.0;
    local_a0 = 0;
    local_c0 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
    local_c8 = (undefined *)(ulong)(uint)((float)*(int *)(param_2 + 8) * 10.0 + 5.0);
    if (((*(long *)PTR_DAT_04bb2200 != 0) &&
        (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar11 != 0)) &&
       (local_ac = 0.0, *(long *)(lVar11 + 0x118) != 0)) {
      local_a0 = 0;
      local_98 = 0.0;
      local_ac = 0.0;
      if (*(long *)(lVar11 + 0x118) != 0) {
        FUN_015bca00(*(long *)(lVar11 + 0x118),&local_a0,&local_c8,0,1,1);
        goto LAB_013d2198;
      }
    }
    goto LAB_013d21b0;
  case 1:
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
    local_a0 = CONCAT44(local_a0._4_4_,0x40f00000);
    uVar8 = FUN_013d4b30(param_2,&local_c8,&local_a0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar8 = FUN_013d3780(param_2,&local_c8);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar8 = FUN_013d3230(param_2,3);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    local_98 = 0.0;
    local_a0 = 0;
    local_c0 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
    local_c8 = (undefined *)(ulong)(uint)((float)*(int *)(param_2 + 8) * 10.0 + 5.0);
    if (((*(long *)PTR_DAT_04bb2200 != 0) &&
        (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar11 != 0)) &&
       (local_ac = 0.0, *(long *)(lVar11 + 0x118) != 0)) {
      FUN_015bc998(&local_a0,&local_c8,0);
LAB_013d2198:
      if (((float)local_a0 != 0.0) || (local_a0._4_4_ != 0.0)) break;
    }
LAB_013d21b0:
    if (local_98 == 0.0) {
      return 0;
    }
    break;
  case 2:
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
    local_a0 = CONCAT44(local_a0._4_4_,0x40f00000);
    uVar8 = FUN_013d4b30(param_2,&local_c8,&local_a0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar8 = FUN_013d3780(param_2,&local_c8);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    local_98 = 0.0;
    local_a0 = 0;
    local_c0 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
    local_c8 = (undefined *)(ulong)(uint)((float)*(int *)(param_2 + 8) * 10.0 + 5.0);
    if (((*(long *)PTR_DAT_04bb2200 != 0) &&
        (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar11 != 0)) &&
       (local_ac = 0.0, *(long *)(lVar11 + 0x118) != 0)) {
      local_a0 = 0;
      local_98 = 0.0;
      local_ac = 0.0;
      if (*(long *)(lVar11 + 0x118) != 0) {
        FUN_015bca00(*(long *)(lVar11 + 0x118),&local_a0,&local_c8,0,1,1);
        if ((float)local_a0 != 0.0) {
          return 0;
        }
        if (local_a0._4_4_ != 0.0) {
          return 0;
        }
      }
    }
    if (local_98 != 0.0) {
      return 0;
    }
    break;
  case 3:
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xc);
    local_a0 = CONCAT44(local_a0._4_4_,0x40f00000);
    uVar8 = FUN_013d4b30(param_2,&local_c8,&local_a0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar8 = FUN_013d3780(param_2,&local_c8);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 8) - 0x7bU < 0xffffff9b) {
      return 0;
    }
    if (0x69 < *(int *)(param_2 + 0xc)) {
      return 0;
    }
    break;
  case 4:
    goto switchD_013d1fc0_caseD_4;
  case 5:
    if (*param_3 == '\0') {
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
      local_a0 = CONCAT44(local_a0._4_4_,0x40f00000);
      uVar8 = FUN_013d4b30(param_2,&local_c8,&local_a0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      ppuVar10 = &local_c8;
      goto LAB_013d2540;
    }
    goto switchD_013d1fc0_caseD_4;
  case 6:
    local_d0 = 0x40f00000;
    auStack_cc = (undefined1  [4])0x5;
    uVar8 = FUN_013d4b30(param_2,auStack_cc,&local_d0);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar8 = FUN_0125ff70(param_2);
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    local_94 = 0;
    lVar11 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    fVar16 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
    fVar17 = (float)*(int *)(param_2 + 8) * 10.0 + 5.0;
    local_c8 = (undefined *)(ulong)(uint)(fVar17 + -20.0);
    local_c0 = fVar16;
    FUN_0093a950(lVar11,&local_c8,&local_94);
    if (local_94 == 0x2d) {
      local_c8 = (undefined *)(ulong)(uint)(fVar17 + -10.0);
      local_c0 = fVar16;
      FUN_0093a950(lVar11,&local_c8,&local_94);
      if (local_94 == 0x2d) {
        fVar17 = fVar17 + 5.0;
        goto LAB_013d2504;
      }
    }
    else {
      local_a0 = (ulong)(uint)(fVar17 + 20.0);
      local_98 = fVar16;
      FUN_0093a950(lVar11,&local_a0,&local_94);
      if (local_94 == 0x2d) {
        local_a0 = (ulong)(uint)(fVar17 + 10.0);
        local_98 = fVar16;
        FUN_0093a950(lVar11,&local_a0,&local_94);
        if (local_94 == 0x2d) {
          fVar17 = fVar17 + -5.0;
          goto LAB_013d2504;
        }
      }
      else {
        local_a4 = fVar16 + 20.0;
        local_a8 = 0;
        local_ac = fVar17;
        FUN_0093a950(lVar11,&local_ac,&local_94);
        if (local_94 == 0x2d) {
          local_a4 = fVar16 + 10.0;
          local_a8 = 0;
          local_ac = fVar17;
          FUN_0093a950(lVar11,&local_ac,&local_94);
          if (local_94 == 0x2d) {
            fVar16 = fVar16 + -5.0;
LAB_013d2504:
            *(uint *)(param_2 + 8) = (int)((float)(int)fVar17 / 10.0) - (uint)(fVar17 < 0.0);
            *(uint *)(param_2 + 0xc) = (int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0);
          }
        }
        else {
          local_b0 = fVar16 + -20.0;
          local_b4 = 0;
          local_b8 = fVar17;
          FUN_0093a950(lVar11,&local_b8,&local_94);
          if (local_94 != 0x2d) {
            return 0;
          }
          local_b4 = 0;
          local_b0 = fVar16 + -10.0;
          local_b8 = fVar17;
          FUN_0093a950(lVar11,&local_b8,&local_94);
          if (local_94 == 0x2d) {
            fVar16 = fVar16 + 5.0;
            goto LAB_013d2504;
          }
        }
      }
    }
    if ((*(uint *)(param_2 + 0xc) < 0x21) && (*(int *)(param_2 + 8) - 0x20U < 0xc1)) {
      return 0;
    }
    ppuVar10 = (undefined **)auStack_cc;
LAB_013d2540:
    uVar8 = FUN_013d3780(param_2,ppuVar10);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
  }
switchD_013d1fc0_default:
  if ((param_5 & 1) != 0) {
    local_c0 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
    local_c8 = (undefined *)(ulong)(uint)((float)*(int *)(param_2 + 8) * 10.0 + 5.0);
    uVar8 = FUN_035a2340(&local_c8,&DAT_0418f434);
    if ((uVar8 & 1) != 0) {
      return 0;
    }
  }
  fVar17 = (float)*(int *)(param_2 + 0xc) * 10.0 + 2.5;
  fVar16 = (float)*(int *)(param_2 + 8) * 10.0 + 2.5;
  local_c0 = (float)((int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0));
  iStack_bc = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  uVar8 = FUN_0168bb28(&local_c8);
  if (((uVar8 & 1) != 0) || (uVar8 = FUN_013d38b0(param_2,6), (uVar8 & 1) == 0)) {
    return 0;
  }
  local_c0 = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
  local_c8 = (undefined *)(ulong)(uint)((float)*(int *)(param_2 + 8) * 10.0 + 5.0);
  iVar6 = FUN_01317b90(&local_c8,0);
  puVar5 = PTR_DAT_04bbc7b0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  if (iVar6 == 3) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1431) == '\0') {
    return 1;
  }
  iVar6 = *(int *)(param_2 + 8);
  iVar18 = *(int *)(param_2 + 0xc);
  bVar13 = 0;
  uVar14 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    if (bVar13 < 0x14) {
      if (((int)(char)bVar13 < (int)(uint)*(byte *)(param_1 + 0x59a)) ||
         ((int)(char)bVar13 <
          (int)((uint)*(byte *)(param_1 + 0x59b) + (uint)*(byte *)(param_1 + 0x59a)))) {
        lVar11 = *(long *)puVar3;
        if (lVar11 != 0) {
          uVar15 = *(uint *)(param_1 + 0x4f8 + ((long)((ulong)uVar14 << 0x20) >> 0x1d));
          if ((((uVar15 == 0) ||
               (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                    ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
              ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar15))
          {
            plVar12 = (long *)0x0;
          }
          if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
            plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
            lVar11 = *(long *)puVar3;
            iVar7 = (**(code **)(*plVar9 + 0x60))();
            if (iVar7 < 0x11) {
              uVar15 = 1;
            }
            else {
              uVar15 = *(uint *)(lVar11 + 0x5e8);
              if (4 < uVar15) goto LAB_013d2798;
              uVar15 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
            }
          }
          else {
LAB_013d2798:
            uVar15 = 0;
          }
          if (plVar12 != (long *)0x0) {
            lVar11 = plVar12[0x2a];
            if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar7 != 0)) {
              *(undefined **)puVar5 = puVar1;
              __cxa_guard_release(PTR_DAT_04bbc7b8);
            }
            uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar5);
            uVar2 = 0;
            if ((int)lVar11 == 1) {
              uVar2 = uVar15;
            }
            if ((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
               (fVar16 = *(float *)(plVar12 + 0x4f) - ((float)iVar6 * 10.0 + 5.0),
               fVar17 = *(float *)(plVar12 + 0x50) - ((float)iVar18 * 10.0 + 5.0),
               SQRT(fVar17 * fVar17 + fVar16 * fVar16) < 12.5)) {
              return 0;
            }
          }
        }
        bVar13 = bVar13 + 1;
      }
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == 0x14) {
      return 1;
    }
  } while( true );
switchD_013d1fc0_caseD_4:
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,5);
  local_a0 = CONCAT44(local_a0._4_4_,0x40f00000);
  uVar8 = FUN_013d4b30(param_2,&local_c8,&local_a0);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = FUN_013d4d38(param_2);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if ((*(uint *)(param_2 + 0xc) < 0x21) && (*(int *)(param_2 + 8) - 0x20U < 0xc1)) {
    return 0;
  }
  uVar8 = FUN_013d3780(param_2,&local_c8);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  uVar8 = FUN_0125ff70(param_2);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  goto switchD_013d1fc0_default;
}


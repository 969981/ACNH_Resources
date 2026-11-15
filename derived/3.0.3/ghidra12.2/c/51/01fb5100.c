
void FUN_01fb5100(long *param_1)

{
  long **pplVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long **pplVar22;
  undefined2 local_268c;
  undefined1 local_268a;
  undefined8 local_2688;
  long *local_2680;
  long **local_2678;
  undefined1 local_2670 [8];
  long *local_2668 [5];
  long alStack_2640 [2];
  undefined1 local_262d;
  undefined4 local_2628;
  undefined4 uStack_2624;
  undefined4 local_2620;
  undefined4 uStack_261c;
  undefined2 local_2618;
  undefined8 local_750;
  long local_728 [200];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [16];
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined2 *)((long)param_1 + 0xae84) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)((long)param_1 + 0xae86) = puVar2[2];
  *(undefined *)((long)param_1 + 0xae87) = puVar2[3];
  *(undefined4 *)(param_1 + 0x15d1) = *(undefined4 *)(puVar2 + 4);
  if (*(int *)(param_1[1] + 0x750) != 0) {
    if (*(int *)(param_1[1] + 0x750) != 1) {
      FUN_0212eca8(param_1 + 0x154a,1,0);
      local_2688 = CONCAT44(local_2688._4_4_,5);
      *(ushort *)(param_1 + 0x15a5) = *(ushort *)(param_1 + 0x15a5) & 0xffdf;
      (**(code **)(*param_1 + 0x538))(param_1);
      FUN_01facf7c(param_1,1);
      return;
    }
    FUN_0212eca8(param_1 + 0x154a,0,0);
    local_e8 = 0;
    lVar17 = (long)&local_e0 + 4;
    local_e0 = 0xfffe00000000;
    local_d8 = 0;
    FUN_0277d4ac(lVar17);
    local_c0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_268a = 0;
    local_d0 = PTR_DAT_04bbc1a0 + 0x10;
    local_c8 = PTR_DAT_04bb2010 + 0x10;
    local_268c = 0x100;
    local_b8 = local_c8;
    uVar9 = FUN_01f9cbb0(param_1,&local_e8,&local_268c);
    if (((uVar9 & 1) != 0) &&
       (uVar9 = FUN_0277e294(lVar17), puVar5 = PTR_DAT_04bb43c0, (uVar9 & 1) != 0)) {
      local_78 = 0;
      local_88 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_80 = (long *)CONCAT44(local_d8,local_e0._4_4_);
      lVar21 = *(long *)PTR_DAT_04bb43c0;
      uVar7 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar5 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          FUN_0277d6c4(lVar17);
        }
      }
      puVar5 = PTR_PTR_04bb2238;
      local_262d = 0;
      pplVar1 = (long **)(local_2670 + 4);
      local_2670._0_4_ = 0x40;
      local_2680 = (long *)(PTR_DAT_04bb2f70 + 0x10);
      local_2688 = 0;
      local_2678 = pplVar1;
      (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
      pplVar22 = *(long ***)(puVar5 + 8);
      if (pplVar1 != pplVar22) {
        (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
        lVar21 = 0;
        do {
          if (*(char *)(*(long *)(puVar5 + 8) + lVar21) == '\0') goto LAB_01fb58fc;
          lVar15 = *(long *)(puVar5 + 8) + lVar21;
          if (*(char *)(lVar15 + 1) == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_01fb58fc;
          }
          if (*(char *)(lVar15 + 2) == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_01fb58fc;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        lVar21 = 0;
LAB_01fb58fc:
        iVar8 = (int)lVar21;
        if ((int)local_2670._0_4_ <= (int)lVar21) {
          iVar8 = local_2670._0_4_ + -1;
        }
        memcpy(pplVar1,pplVar22,(long)iVar8);
        *(undefined1 *)((long)pplVar1 + (long)iVar8) = 0;
      }
      uStack_2624 = *(undefined4 *)puVar2;
      local_2620 = *(undefined4 *)(puVar2 + 4);
      local_2628 = 0;
      uStack_261c = 0;
      local_2618 = 0;
      local_2680 = (long *)(PTR_DAT_04bb2bc0 + 0x10);
      FUN_02080ddc(param_1 + 0x15f7,&local_2688,lVar17,&local_c8,&local_a8);
      if (((char)local_2618 != '\0') &&
         (uVar9 = FUN_01f9d6fc(param_1,lVar17,&local_d0,local_e8 & 0xffffffff,0), (uVar9 & 1) != 0))
      {
        return;
      }
    }
    (**(code **)(*param_1 + 0x538))(param_1);
    FUN_01facf7c(param_1,0);
    return;
  }
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x100;
  FUN_0212eca8(param_1 + 0x154a,0,0);
  local_e8 = 0;
  lVar17 = (long)&local_e0 + 4;
  local_e0 = 0xfffe00000000;
  local_d8 = 0;
  FUN_0277d4ac(lVar17);
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_d0 = PTR_DAT_04bbc1a0 + 0x10;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_b8 = local_c8;
  uVar9 = FUN_01f9cbb0(param_1,&local_e8,param_1 + 0x15f0);
  puVar6 = PTR_DAT_04bb27c0;
  puVar5 = PTR_PTR_04bb2238;
  if (((uVar9 & 1) == 0) || (5 < local_e8._4_4_ - 1U)) goto LAB_01fb5ad0;
  plVar20 = param_1 + 0x23f9;
  switch(local_e8._4_4_) {
  case 1:
    lVar21 = 0xc6;
    local_2688 = 0;
    local_2680 = (long *)0x0;
    *(undefined4 *)plVar20 = local_e0._4_4_;
    *(undefined4 *)((long)param_1 + 0x11fcc) = local_d8;
    *(int *)(param_1 + 0x23fc) = (int)local_c0;
    *(int *)((long)param_1 + 0x11fe4) = local_c0._4_4_;
    param_1[0x23fe] = local_b0;
    *(int *)(param_1 + 0x23ff) = local_a8;
    local_2678 = local_2668;
    local_2668[0] = alStack_2640;
    plVar20 = local_2668[0];
    do {
      lVar21 = lVar21 + -2;
      *plVar20 = (long)(plVar20 + 5);
      plVar20[5] = (long)(plVar20 + 10);
      plVar20 = plVar20 + 10;
    } while (lVar21 != 0);
    local_750 = 0;
    if (local_728 != (long *)0x0) {
      local_2688 = 0xc800000000;
      local_2680 = local_728;
    }
    local_2670 = (undefined1  [8])local_2678;
    FUN_01521078(&local_2688);
    if ((int)local_2688 != 0) {
      lVar21 = (long)(int)local_2688 << 3;
      puVar2 = PTR_DAT_04bb3290 + 0x10;
      plVar20 = local_2680;
      do {
        lVar15 = *plVar20;
        if (((*(int *)(lVar15 + 0x10) == (int)local_c0 && *(int *)(lVar15 + 0x14) == local_c0._4_4_)
            && (*(int *)(lVar15 + 0x1c) == local_a8)) &&
           (lVar13 = *(long *)PTR_DAT_04bb27c0, lVar13 != 0)) {
          uVar7 = *(uint *)(lVar15 + 0x20);
          if ((((uVar7 == 0) ||
               (plVar11 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                    ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
              ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar7))
          {
            plVar11 = (long *)0x0;
          }
          if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
            plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar15 = *(long *)PTR_DAT_04bb27c0;
            iVar8 = (**(code **)(*plVar10 + 0x60))();
            if (iVar8 < 0x11) {
              uVar7 = 1;
            }
            else {
              if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_01fb5560;
              uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_01fb5560:
            uVar7 = 0;
          }
          if (plVar11 != (long *)0x0) {
            lVar15 = plVar11[0x2a];
            if (((*PTR_DAT_04bb5928 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar8 != 0)) {
              *(undefined **)PTR_DAT_04bb5920 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb5928);
            }
            uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb5920);
            uVar3 = 0;
            if ((int)lVar15 == 1) {
              uVar3 = uVar7;
            }
            if (((uVar9 & 1) != 0) && (uVar3 != 0)) {
              lVar15 = plVar11[0xd];
              *(undefined4 *)((long)param_1 + 0x11ffc) = *(undefined4 *)(lVar15 + 0x278);
              *(undefined4 *)(param_1 + 0x2400) = *(undefined4 *)(lVar15 + 0x27c);
              *(undefined4 *)((long)param_1 + 0x12004) = *(undefined4 *)(lVar15 + 0x280);
            }
          }
        }
        plVar20 = plVar20 + 1;
        lVar21 = lVar21 + -8;
      } while (lVar21 != 0);
    }
    uVar9 = FUN_01f9d6fc(param_1,lVar17,&local_d0,local_e8 & 0xffffffff,0);
    if ((uVar9 & 1) != 0) {
      uVar9 = (**(code **)(*param_1 + 0x608))(param_1);
      if ((uVar9 & 1) != 0) {
        return;
      }
      local_88 = &PTR_FUN_04a69ca0;
      iVar8 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar8 == 0) {
        return;
      }
      lVar17 = (long)iVar8 << 3;
      puVar19 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      local_80 = param_1;
      do {
        (*(code *)*local_88)(&local_88,*puVar19);
        lVar17 = lVar17 + -8;
        puVar19 = puVar19 + 1;
      } while (lVar17 != 0);
      return;
    }
    break;
  case 2:
    lVar17 = *(long *)PTR_DAT_04bb27c0;
    if (lVar17 == 0) break;
    if (((((uint)local_e0 == 0) ||
         (plVar20 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                              ((ulong)((uint)local_e0 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0))
        || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar20 + 0x46) != (uint)local_e0)) {
      plVar20 = (long *)0x0;
    }
    if ((*(int *)(lVar17 + 0x288) == 1) || (*(int *)(lVar17 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar17 = *(long *)puVar6;
      iVar8 = (**(code **)(*plVar11 + 0x60))();
      if (iVar8 < 0x11) {
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_01fb59a4;
        uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01fb59a4:
      uVar7 = 0;
    }
    if (plVar20 != (long *)0x0) {
      lVar17 = plVar20[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar9 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
      uVar3 = 0;
      if ((int)lVar17 == 1) {
        uVar3 = uVar7;
      }
      if (((((uVar9 & 1) != 0) && (uVar3 != 0)) &&
          (uVar9 = (**(code **)(*param_1 + 0x608))(param_1), (uVar9 & 1) == 0)) &&
         ((uVar9 = FUN_01f9fe50(param_1,&local_e0), (uVar9 & 1) != 0 ||
          (uVar9 = FUN_01fa01e8(param_1,&local_e0), (uVar9 & 1) != 0)))) {
        *(undefined4 *)((long)param_1 + 0xaf8c) = 6;
        return;
      }
    }
    break;
  case 3:
    local_262d = 0;
    pplVar1 = (long **)(local_2670 + 4);
    local_2670._0_4_ = 0x40;
    local_2680 = (long *)(PTR_DAT_04bb2f70 + 0x10);
    local_2688 = 0;
    local_2678 = pplVar1;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    pplVar22 = *(long ***)(puVar5 + 8);
    if (pplVar1 != pplVar22) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
      lVar21 = 0;
      do {
        if (*(char *)(*(long *)(puVar5 + 8) + lVar21) == '\0') goto LAB_01fb5a40;
        lVar15 = *(long *)(puVar5 + 8) + lVar21;
        if (*(char *)(lVar15 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_01fb5a40;
        }
        if (*(char *)(lVar15 + 2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_01fb5a40;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_01fb5a40:
      iVar8 = (int)lVar21;
      if ((int)local_2670._0_4_ <= (int)lVar21) {
        iVar8 = local_2670._0_4_ + -1;
      }
      memcpy(pplVar1,pplVar22,(long)iVar8);
      *(undefined1 *)((long)pplVar1 + (long)iVar8) = 0;
    }
    uStack_2624 = *(undefined4 *)puVar2;
    local_2620 = *(undefined4 *)(puVar2 + 4);
    local_2628 = 0;
    uStack_261c = 0;
    local_2618 = 0;
    local_2680 = (long *)(PTR_DAT_04bb2bc0 + 0x10);
    uVar9 = FUN_02080ddc(param_1 + 0x15f7,&local_2688,lVar17,&local_c8,&local_a8);
    if ((uVar9 & 1) != 0) {
      if ((int)local_e8 - 2U < 4) {
        piVar14 = (int *)(&PTR_DAT_04a69d58)[(int)((int)local_e8 - 2U)];
      }
      else {
        piVar14 = (int *)PTR_DAT_04bb2ce8;
      }
      *(int *)(param_1 + 0x240d) = *(int *)(*(long *)(param_1[1] + 0x68) + 0x2b4) + *piVar14;
      FUN_01fb5cac(param_1,lVar17,0,0);
      *(undefined4 *)plVar20 = local_e0._4_4_;
      *(undefined4 *)((long)param_1 + 0x11fcc) = local_d8;
      *(int *)(param_1 + 0x23ff) = local_a8;
      lVar17 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar17 == 0) {
        iVar8 = 0;
        iVar12 = 0;
        iVar16 = 0x10;
        iVar18 = 0x10;
      }
      else {
        iVar8 = *(int *)(lVar17 + 0xd88);
        iVar12 = *(int *)(lVar17 + 0xd8c);
        iVar18 = *(int *)(lVar17 + 0xd98);
        iVar16 = *(int *)(lVar17 + 0xd9c);
      }
      iVar4 = iVar8;
      if (iVar18 <= iVar8) {
        iVar4 = iVar18;
      }
      if (iVar8 <= iVar18) {
        iVar8 = iVar18;
      }
      iVar18 = iVar12;
      if (iVar16 <= iVar12) {
        iVar18 = iVar16;
      }
      if (iVar12 <= iVar16) {
        iVar12 = iVar16;
      }
      *(int *)(param_1 + 0x23fc) = iVar4;
      *(int *)((long)param_1 + 0x11fe4) = iVar18;
      *(int *)(param_1 + 0x23fe) = iVar8;
      *(int *)((long)param_1 + 0x11ff4) = iVar12;
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5) {
          return;
        }
      }
      FUN_01fb5c30(param_1);
      return;
    }
    break;
  case 4:
    *(int *)(param_1 + 0x23fc) = (int)local_c0;
    *(int *)((long)param_1 + 0x11fe4) = local_c0._4_4_;
    *(int *)(param_1 + 0x23fe) = (int)local_b0;
    *(int *)((long)param_1 + 0x11ff4) = local_b0._4_4_;
    *(int *)(param_1 + 0x23ff) = local_a8;
    *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 2;
    *(undefined4 *)plVar20 = local_e0._4_4_;
    *(undefined4 *)((long)param_1 + 0x11fcc) = local_d8;
    *(float *)((long)param_1 + 0x1205c) =
         ((float)(int)local_c0 * 5.0 + (float)(int)local_b0 * 5.0 + 5.0) * 0.5;
    *(float *)((long)param_1 + 0x12064) =
         ((float)local_c0._4_4_ * 5.0 + (float)local_b0._4_4_ * 5.0 + 5.0) * 0.5;
    FUN_01fb63c4(param_1,lVar17,&local_d0,local_e8 & 0xffffffff);
    return;
  case 5:
    FUN_01fb6d80(param_1,auStack_98,auStack_a4);
    return;
  case 6:
    FUN_01fb6f6c(param_1,&local_e0);
    return;
  }
LAB_01fb5ad0:
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xfffffeff;
  (**(code **)(*param_1 + 0x538))(param_1);
  return;
}


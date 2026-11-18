
/* WARNING: Type propagation algorithm not settling */

bool FUN_033bfcd0(long param_1,uint param_2)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined1 *__src;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  int local_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined *local_128;
  undefined1 *puStack_120;
  int local_118;
  undefined1 auStack_114 [31];
  undefined1 local_f5;
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  
  if (*(int *)(param_1 + 0x70) != 3 || *(int *)(param_1 + 0x6c) == 0) {
    return false;
  }
  uVar7 = FUN_033bf4b4();
  puVar3 = PTR_DAT_04bb2bc0;
  uVar10 = 0;
  if ((((uVar7 & 1) == 0) && (*(int *)(param_1 + 0x70) == 3)) && (*(int *)(param_1 + 0x6c) != 0)) {
    local_148 = PTR_DAT_04bb2bc0 + 0x10;
    local_f5 = 0;
    local_140 = (long)&local_138 + 4;
    local_138 = CONCAT35(local_138._5_3_,0x40);
    uVar7 = FUN_033bf650(param_1,&local_148,param_2);
    if (((uVar7 & 1) != 0) && (lVar11 = *(long *)PTR_DAT_04bb4130, lVar11 != 0)) {
      (**(code **)(local_148 + 0x18))(&local_148);
      local_154 = FUN_006bd550(local_140,0);
      lVar11 = FUN_0079e4d0(lVar11,&local_154);
      if (lVar11 != 0) {
        uVar10 = 1;
        goto LAB_033bfdbc;
      }
    }
    uVar10 = 0;
  }
LAB_033bfdbc:
  local_138 = 0;
  local_148 = (undefined *)0x0;
  local_140 = 0x3f800000;
  local_130 = 0x40a00000;
  local_118 = 0x40;
  local_d5 = 0;
  local_128 = PTR_DAT_04bb2f70 + 0x10;
  puStack_120 = auStack_114;
  (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
  __src = DAT_05743420;
  if (auStack_114 != DAT_05743420) {
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    lVar11 = 0;
    do {
      if (DAT_05743420[lVar11] == '\0') goto LAB_033bfe7c;
      if (DAT_05743420[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_033bfe7c;
      }
      if (DAT_05743420[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_033bfe7c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_033bfe7c:
    iVar6 = (int)lVar11;
    if (local_118 <= (int)lVar11) {
      iVar6 = local_118 + -1;
    }
    memcpy(auStack_114,__src,(long)iVar6);
    auStack_114[iVar6] = 0;
  }
  local_128 = puVar3 + 0x10;
  puStack_c8 = local_bc;
  local_c0 = 0x40;
  local_7d = 0;
  local_bc[0] = 0;
  local_154 = 0;
  local_d0 = local_128;
  uVar7 = FUN_033bb2d0(param_1,&local_154,1,uVar10);
  iVar6 = local_154;
  if ((uVar7 & 1) == 0) {
    return false;
  }
  plVar12 = (long *)(param_1 + 0xf0);
  iVar5 = (**(code **)(*plVar12 + 0x168))(plVar12);
  if (iVar5 <= iVar6) {
    return false;
  }
  lVar11 = (**(code **)(*plVar12 + 0x158))(plVar12,iVar6);
  if (lVar11 == 0) {
    return false;
  }
  FUN_033b74f0(&local_148,lVar11);
  puVar3 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  uVar9 = 0;
  if (lVar11 != 0) {
    uVar9 = *(uint *)(param_1 + 0x6c);
    if (((uVar9 == 0) ||
        (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
       (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar9)))) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar8 + 0x60))();
      if (iVar6 < 0x11) {
        uVar13 = 1;
        uVar9 = 1;
      }
      else {
        uVar9 = *(uint *)(lVar11 + 0x5e8);
        if (4 < uVar9) goto LAB_033bffe0;
        uVar13 = 0x1aU >> (ulong)(uVar9 & 0x1f) & 1;
        uVar9 = (uint)(0x101000100 >> (((ulong)uVar9 & 7) << 3)) & 1;
      }
    }
    else {
LAB_033bffe0:
      uVar13 = 0;
      uVar9 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0x2a];
      bVar4 = (int)lVar11 == 1;
      if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc99b8);
      }
      uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bc99b0);
      if ((uVar7 & 1) != 0) {
        uVar13 = uVar13 ^ 1;
        if ((int)lVar11 != 1) {
          uVar13 = 1;
        }
        if (uVar13 != 0) {
          return false;
        }
        uVar9 = 1 << (ulong)(param_2 & 0x1f) & 0xff;
        FUN_0368e050(plVar12,uVar9,1);
        FUN_0368e050(plVar12,uVar9 ^ 0xff,0);
        local_14c = 0;
        local_154 = (int)local_148;
        uStack_150 = local_148._4_4_;
        FUN_0368d994(plVar12,param_2,&local_154);
        if ((*(int *)(param_1 + 0x70) == 3) && (*(int *)(param_1 + 0x6c) != 0)) {
          FUN_033b9984((undefined4)local_140,param_1);
        }
        FUN_033b9e08(param_1,(long)&local_140 + 4);
        puVar3 = PTR_DAT_04bb2200;
        lVar11 = *(long *)PTR_DAT_04bb2200;
        if (lVar11 != 0) {
          if (*(long *)(lVar11 + 0x58) != 0) {
            FUN_01613a48(local_130,0x44200000,*(long *)(lVar11 + 0x58),2);
            lVar11 = *(long *)puVar3;
            if (lVar11 == 0) {
              return true;
            }
          }
          ppuVar2 = &local_128;
          if (*(char *)(param_1 + 0x68) != '\0') {
            ppuVar2 = &local_d0;
          }
          FUN_01640a40(*(undefined8 *)(lVar11 + 0x70),ppuVar2);
        }
        return true;
      }
      uVar9 = 0;
      goto LAB_033c0144;
    }
  }
  bVar4 = false;
LAB_033c0144:
  bVar1 = false;
  if (uVar9 != 0) {
    bVar1 = bVar4;
  }
  return bVar1;
}


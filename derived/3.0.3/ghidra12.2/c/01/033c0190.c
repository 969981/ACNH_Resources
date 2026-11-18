
/* WARNING: Type propagation algorithm not settling */

bool FUN_033c0190(long param_1,uint *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 *__src;
  float fVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  float *pfVar16;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined *local_138;
  undefined1 *puStack_130;
  int local_128;
  undefined1 auStack_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_cc [63];
  undefined1 local_8d;
  float local_74;
  float fStack_70;
  undefined4 local_6c;
  
  if (*(int *)(param_1 + 0x70) != 3 || *(int *)(param_1 + 0x6c) == 0) {
    return false;
  }
  local_148 = 0;
  local_158 = 0;
  local_150 = 0x3f800000;
  local_140 = 0x40a00000;
  local_128 = 0x40;
  local_e5 = 0;
  local_138 = PTR_DAT_04bb2f70 + 0x10;
  puStack_130 = auStack_124;
  (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
  __src = DAT_05743420;
  if (auStack_124 != DAT_05743420) {
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    lVar13 = 0;
    do {
      if (DAT_05743420[lVar13] == '\0') goto LAB_033c028c;
      if (DAT_05743420[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_033c028c;
      }
      if (DAT_05743420[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_033c028c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_033c028c:
    iVar8 = (int)lVar13;
    if (local_128 <= (int)lVar13) {
      iVar8 = local_128 + -1;
    }
    memcpy(auStack_124,__src,(long)iVar8);
    auStack_124[iVar8] = 0;
  }
  local_d8 = local_cc;
  local_d0 = 0x40;
  local_8d = 0;
  local_cc[0] = 0;
  local_138 = PTR_DAT_04bb2bc0 + 0x10;
  local_74 = 0.0;
  local_e0 = local_138;
  uVar9 = FUN_033bb2d0(param_1,&local_74,0xc,0);
  fVar6 = local_74;
  if ((uVar9 & 1) == 0) {
    return false;
  }
  plVar14 = (long *)(param_1 + 0xf0);
  iVar8 = (**(code **)(*plVar14 + 0x168))(plVar14);
  if (iVar8 <= (int)fVar6) {
    return false;
  }
  lVar13 = (**(code **)(*plVar14 + 0x158))(plVar14,fVar6);
  if (lVar13 == 0) {
    return false;
  }
  FUN_033b74f0(&local_158,lVar13);
  puVar5 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  uVar12 = 0;
  if (lVar13 != 0) {
    uVar12 = *(uint *)(param_1 + 0x6c);
    if ((((uVar12 == 0) ||
         (plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                              ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
        ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar12)) {
      plVar14 = (long *)0x0;
    }
    if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)puVar5;
      iVar8 = (**(code **)(*plVar10 + 0x60))();
      if (iVar8 < 0x11) {
        uVar15 = 1;
        uVar12 = 1;
      }
      else {
        uVar12 = *(uint *)(lVar13 + 0x5e8);
        if (4 < uVar12) goto LAB_033c03fc;
        uVar15 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
        uVar12 = (uint)(0x101000100 >> (((ulong)uVar12 & 7) << 3)) & 1;
      }
    }
    else {
LAB_033c03fc:
      uVar15 = 0;
      uVar12 = 0;
    }
    if (plVar14 != (long *)0x0) {
      lVar13 = plVar14[0x2a];
      bVar7 = (int)lVar13 == 1;
      if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc99b8);
      }
      uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bc99b0);
      if ((uVar9 & 1) != 0) {
        uVar15 = uVar15 ^ 1;
        if ((int)lVar13 != 1) {
          uVar15 = 1;
        }
        if (uVar15 != 0) {
          return false;
        }
        FUN_0368e050(plVar14,0xff,1);
        uVar12 = *param_2;
        if (0 < (int)uVar12) {
          uVar9 = 0;
          puVar1 = PTR_DAT_04bb2e50 + 0x10;
          do {
            pfVar16 = *(float **)(*(long *)(param_2 + 2) + uVar9 * 8);
            uVar15 = *(uint *)(param_1 + 0x6c);
            if ((*(int *)(param_1 + 0x70) == 3 && uVar15 != 0) &&
               (lVar13 = *(long *)puVar5, lVar13 != 0)) {
              plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                                  ((ulong)(uVar15 >> 0x11) & 0x7ff8));
              if ((plVar14 == (long *)0x0) ||
                 (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 ||
                  (*(uint *)(plVar14 + 0x46) != uVar15)))) {
                plVar14 = (long *)0x0;
              }
              if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
                plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar13 = *(long *)puVar5;
                iVar8 = (**(code **)(*plVar10 + 0x60))();
                if (iVar8 < 0x11) {
                  uVar15 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_033c05a8;
                  uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_033c05a8:
                uVar15 = 0;
              }
              if (plVar14 != (long *)0x0) {
                lVar13 = plVar14[0x2a];
                if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar8 != 0)) {
                  *(undefined **)PTR_DAT_04bc99b0 = puVar1;
                  __cxa_guard_release(PTR_DAT_04bc99b8);
                }
                uVar11 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bc99b0);
                uVar3 = 0;
                if ((int)lVar13 == 1) {
                  uVar3 = uVar15;
                }
                if (((uVar11 & 1) != 0) && (uVar3 != 0)) {
                  local_74 = *pfVar16;
                  fStack_70 = pfVar16[1];
                  if (*(long *)PTR_DAT_04bb2200 != 0) {
                    local_74 = (local_74 / 960.0) * 640.0;
                    fStack_70 = (fStack_70 / 540.0) * 360.0;
                  }
                  local_6c = 0;
                  FUN_0368d994(plVar14,uVar9 & 0xffffffff,&local_74);
                }
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar12 != uVar9);
        }
        if ((*(int *)(param_1 + 0x70) == 3) && (*(int *)(param_1 + 0x6c) != 0)) {
          FUN_033b9984((undefined4)local_150,param_1);
        }
        FUN_033b9e08(param_1,(long)&local_150 + 4);
        lVar13 = *(long *)PTR_DAT_04bb2200;
        if (lVar13 != 0) {
          if (*(long *)(lVar13 + 0x58) != 0) {
            FUN_01613a48(local_140,0x44200000,*(long *)(lVar13 + 0x58),2);
            lVar13 = *(long *)PTR_DAT_04bb2200;
            if (lVar13 == 0) {
              return true;
            }
          }
          ppuVar4 = &local_138;
          if (*(char *)(param_1 + 0x68) != '\0') {
            ppuVar4 = &local_e0;
          }
          FUN_01640a40(*(undefined8 *)(lVar13 + 0x70),ppuVar4);
        }
        return true;
      }
      uVar12 = 0;
      goto LAB_033c04cc;
    }
  }
  bVar7 = false;
LAB_033c04cc:
  bVar2 = false;
  if (uVar12 != 0) {
    bVar2 = bVar7;
  }
  return bVar2;
}


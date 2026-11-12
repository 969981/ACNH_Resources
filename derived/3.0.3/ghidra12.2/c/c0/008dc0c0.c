
undefined8 FUN_008dc0c0(long param_1,undefined4 *param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  undefined **ppuVar15;
  undefined4 uVar16;
  undefined **local_90;
  char *pcStack_88;
  undefined **local_80;
  char *pcStack_78;
  
  plVar1 = (long *)(param_1 + 0x30708);
  if (*(int *)(param_1 + 0x410) == 0x21) {
    uVar14 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar14 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                              ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar14)) {
      plVar12 = (long *)0x0;
    }
    iVar7 = *(int *)(*(long *)PTR_DAT_04bb27c0 + 0x288);
    if (iVar7 == 1 || iVar7 == -1) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar9 + 0x60))();
    }
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
    puVar5 = PTR_DAT_04bb3238;
    plVar9 = (long *)plVar12[0x51];
    local_80 = &PTR_FUN_04926af0;
    if (plVar9 == plVar12 + 0x50) {
      uVar14 = *(uint *)PTR_DAT_04bb3238;
    }
    else {
      puVar13 = (uint *)(plVar9 + -1);
      do {
        uVar10 = (*(code *)*local_80)(&local_80,puVar13);
        if ((uVar10 & 1) != 0) goto LAB_008dc210;
        plVar9 = (long *)plVar9[1];
        puVar13 = (uint *)(plVar9 + -1);
      } while (puVar13 != (uint *)(plVar12 + 0x4f));
      puVar13 = (uint *)puVar5;
LAB_008dc210:
      uVar14 = *puVar13;
    }
    if ((uVar14 != 0) && (lVar11 = *(long *)PTR_DAT_04bb27c0, lVar11 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar14 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)PTR_DAT_04bb27c0;
        iVar7 = (**(code **)(*plVar9 + 0x60))();
        if (iVar7 < 0x11) {
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_008dc2d0;
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_008dc2d0:
        uVar14 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar11 = plVar12[0x2a];
        uVar3 = *(uint *)(plVar12 + 0x49);
        if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32b0);
        }
        uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb32a8);
        if ((((int)lVar11 == 1) && ((uVar8 & uVar14) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
          FUN_00906bd4(plVar12);
        }
      }
    }
  }
  uVar14 = *(uint *)(param_1 + 0x307e8);
  piVar2 = (int *)(param_1 + 0x31080);
  *(undefined1 *)(param_1 + 0x37fb9) = 0;
  *(undefined8 *)(param_1 + 0x307d8) = 0x200000000;
  *(undefined1 *)(param_1 + 0x307e0) = 1;
  pcStack_78 = s_cNormal_04922710;
  if (uVar14 != 1) {
    if (uVar14 == 0x62) {
      ppuVar15 = (undefined **)(param_1 + 0x30710);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    else {
      if (0x62 < uVar14) {
        pcStack_78 = "";
        goto LAB_008dc3a8;
      }
      ppuVar15 = &PTR_s_cNormal_04922de8 + uVar14;
    }
    pcStack_78 = *ppuVar15;
  }
LAB_008dc3a8:
  local_90 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  pcStack_88 = "";
  if ((param_3 & 1) == 0) {
    pcStack_88 = "cDefault";
  }
  local_80 = local_90;
  FUN_008c4100(param_1,&local_80,&local_90,param_2,0,0,0);
  *(undefined1 **)(param_1 + 0x37f48) = &LAB_008cfa20;
  *(undefined8 *)(param_1 + 0x37f50) = 0;
  *(undefined ***)(param_1 + 0x37f38) = &PTR_LAB_04925cc0;
  *(long *)(param_1 + 0x37f40) = param_1 + 0x31708;
  *(undefined4 *)(param_1 + 0x31650) = *param_2;
  *(undefined4 *)(param_1 + 0x31654) = param_2[1];
  uVar16 = param_2[2];
  *(undefined4 *)(param_1 + 0x316d4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x31660) = 0;
  *(undefined8 *)(param_1 + 0x316f0) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x316a4) = 0;
  *(undefined4 *)(param_1 + 0x316ac) = 0;
  *(undefined4 *)(param_1 + 0x316f8) = 0x7fc00000;
  *(undefined4 *)(param_1 + 0x31658) = uVar16;
  if (*(int *)(param_1 + 0x307e8) != 0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar11 = *(long *)(param_1 + 0x30710);
    (**(code **)(DAT_04ced2b8 + 0x18))(&DAT_04ced2b8);
    if (lVar11 != DAT_04ced2c0) {
      uVar10 = 0;
      bVar6 = true;
      do {
        cVar4 = *(char *)(*(long *)(param_1 + 0x30710) + uVar10);
        if (cVar4 != *(char *)(DAT_04ced2c0 + uVar10)) break;
        if (cVar4 == '\0') {
          if (bVar6) goto LAB_008dc4e0;
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      if (*(int *)(param_1 + 0x307e8) != 2) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
        lVar11 = *(long *)(param_1 + 0x30710);
        (**(code **)(DAT_04ced2c8 + 0x18))(&DAT_04ced2c8);
        if (lVar11 != DAT_04ced2d0) {
          uVar10 = 0;
          bVar6 = true;
          do {
            cVar4 = *(char *)(*(long *)(param_1 + 0x30710) + uVar10);
            if (cVar4 != *(char *)(DAT_04ced2d0 + uVar10)) break;
            if (cVar4 == '\0') {
              if (bVar6) goto LAB_008dc580;
              break;
            }
            bVar6 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
          if (*(int *)(param_1 + 0x307e8) != 5) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
            (**(code **)(*plVar1 + 0x18))(plVar1);
            lVar11 = *(long *)(param_1 + 0x30710);
            (**(code **)(DAT_04ced2d8 + 0x18))(&DAT_04ced2d8);
            if (lVar11 != DAT_04ced2e0) {
              uVar10 = 0;
              bVar6 = true;
              do {
                cVar4 = *(char *)(*(long *)(param_1 + 0x30710) + uVar10);
                if (cVar4 != *(char *)(DAT_04ced2e0 + uVar10)) break;
                if (cVar4 == '\0') {
                  if (bVar6) goto LAB_008dc620;
                  break;
                }
                bVar6 = uVar10 < 0x80000;
                uVar10 = uVar10 + 1;
              } while (uVar10 != 0x80001);
              if ((*(int *)(param_1 + 0x307e8) != 0x22) && (*(int *)(param_1 + 0x307e8) != 0x1f)) {
                return 1;
              }
              iVar7 = *piVar2;
              if (iVar7 == 0) {
                return 1;
              }
              uVar16 = 0xe;
              goto LAB_008dc62c;
            }
          }
LAB_008dc620:
          iVar7 = *piVar2;
          if (iVar7 == 0) {
            return 1;
          }
          uVar16 = 0xd;
          goto LAB_008dc62c;
        }
      }
LAB_008dc580:
      iVar7 = *piVar2;
      if (iVar7 == 0) {
        return 1;
      }
      uVar16 = 0xc;
      goto LAB_008dc62c;
    }
  }
LAB_008dc4e0:
  iVar7 = *piVar2;
  if (iVar7 == 0) {
    return 1;
  }
  uVar16 = 0xb;
LAB_008dc62c:
  *(undefined4 *)(param_1 + 0x30800) = uVar16;
  *(code **)(param_1 + 0x37f68) = FUN_008c5c98;
  *(undefined8 *)(param_1 + 0x37f70) = 0;
  *(undefined ***)(param_1 + 0x37f58) = &PTR_LAB_04925a90;
  *(long *)(param_1 + 0x37f60) = param_1;
  lVar11 = *(long *)(*(long *)(param_1 + 0x31088) + (long)(iVar7 + -1) * 8);
  if (lVar11 != 0) {
    *(undefined1 *)(lVar11 + 4) = 1;
  }
  return 1;
}



void FUN_01ef0110(undefined4 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  undefined4 local_64;
  undefined **local_60;
  undefined4 *puStack_58;
  undefined4 *local_50;
  
  piVar1 = param_1 + 0x2bc9;
  if ((int)param_1[0x2bcb] < 0) {
    uVar6 = FUN_03770550(*(long *)(param_1 + 2) + 0x3e0);
    uVar8 = 0x14;
    if ((uVar6 & 1) == 0) {
      uVar8 = 10;
    }
    param_1[0x2bcb] = uVar8;
    iVar4 = *piVar1;
    if (iVar4 < 0) goto LAB_01ef01f8;
LAB_01ef0144:
    *piVar1 = iVar4 + -1;
    if (iVar4 != 0 && iVar4 + -1 != 0) {
      return;
    }
    puVar10 = param_1 + 0x2bca;
    if (*puVar10 != 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 2);
    uVar14 = *(uint *)(lVar9 + 0x288);
    *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
    uVar14 = uVar14 ^ uVar14 << 0xb;
    *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
    uVar5 = *(uint *)(lVar9 + 0x294);
    *(uint *)(lVar9 + 0x290) = uVar5;
    uVar14 = uVar14 >> 8 ^ uVar5 >> 0x13 ^ uVar14 ^ uVar5;
    *(uint *)(lVar9 + 0x294) = uVar14;
    iVar4 = param_1[0x2bcb];
    uVar6 = FUN_03770550(*(long *)(param_1 + 2) + 0x3e0);
    if ((int)((ulong)uVar14 * 100 >> 0x20) <= iVar4) {
      if ((uVar6 & 1) == 0) {
        local_64 = 0x7f7fffff;
        lVar9 = *(long *)PTR_DAT_04bb3968;
        if (lVar9 != 0) {
          puStack_58 = &local_64;
          local_60 = &PTR_FUN_04a62238;
          local_50 = param_1;
          if (*(int *)(lVar9 + 0xb88) != 0) {
            lVar13 = (long)*(int *)(lVar9 + 0xb88) << 3;
            puVar11 = *(undefined8 **)(lVar9 + 0xb90);
            do {
              (*(code *)*local_60)(&local_60,*puVar11);
              lVar13 = lVar13 + -8;
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
          }
        }
      }
      else {
        lVar9 = *(long *)PTR_DAT_04bb3968;
        if (lVar9 != 0) {
          local_60 = &PTR_FUN_04a62210;
          puStack_58 = param_1;
          if (*(int *)(lVar9 + 0xb88) != 0) {
            lVar13 = (long)*(int *)(lVar9 + 0xb88) << 3;
            puVar11 = *(undefined8 **)(lVar9 + 0xb90);
            do {
              (*(code *)*local_60)(&local_60,*puVar11);
              lVar13 = lVar13 + -8;
              puVar11 = puVar11 + 1;
            } while (lVar13 != 0);
          }
        }
      }
      puVar2 = PTR_DAT_04bb27c0;
      uVar14 = *puVar10;
      if (uVar14 == 0) {
        return;
      }
      lVar9 = *(long *)PTR_DAT_04bb27c0;
      if (lVar9 == 0) goto LAB_01ef0694;
      plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                          ((ulong)(uVar14 >> 0x11) & 0x7ff8));
      if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar12 + 0x46) != uVar14)) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar2;
        iVar4 = (**(code **)(*plVar7 + 0x60))();
        if (iVar4 < 0x11) {
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_01ef060c;
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01ef060c:
        uVar14 = 0;
      }
      if (plVar12 != (long *)0x0) {
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
        if ((uVar14 & uVar5) != 0) {
          local_60 = (undefined **)
                     CONCAT44(local_60._4_4_,*(undefined4 *)(*(long *)(param_1 + 2) + 0x230));
          uVar6 = FUN_02087ce0(plVar12[0x78],&local_60,0);
          if ((((uVar6 & 1) != 0) &&
              (uVar6 = FUN_02087ce0(*(undefined8 *)(param_1 + 6),puVar10,0), (uVar6 & 1) != 0)) &&
             (*(int *)(plVar12[0x77] + 0xaf28) == 0)) {
            *piVar1 = 0x1c2;
            puVar2 = PTR_DAT_04bb6928;
            FUN_02085e20(*(undefined8 *)(param_1 + 6),0,param_1[0x2bca],PTR_DAT_04bb6928,0);
            lVar9 = plVar12[0x77];
            uVar8 = *(undefined4 *)(*(long *)(param_1 + 2) + 0x230);
            *(undefined4 *)(lVar9 + 0xaf24) = 0x7fffffff;
            *(undefined4 *)(lVar9 + 0xaf28) = uVar8;
            FUN_02085e20(*(undefined8 *)(lVar9 + 0x18),0,uVar8,puVar2,0);
            return;
          }
        }
      }
LAB_01ef0694:
      *puVar10 = 0;
      return;
    }
    if (((uVar6 & 1) != 0) && ((int)param_1[0x2bcb] < 100)) {
      iVar4 = param_1[0x2bcb] + 0x14;
      goto LAB_01ef0480;
    }
  }
  else {
    iVar4 = *piVar1;
    if (-1 < iVar4) goto LAB_01ef0144;
LAB_01ef01f8:
    puVar2 = PTR_DAT_04bb27c0;
    uVar14 = param_1[0x2bca];
    if (uVar14 == 0) {
      uVar6 = FUN_03770550(*(long *)(param_1 + 2) + 0x3e0);
      lVar9 = *(long *)(param_1 + 2);
      bVar3 = (uVar6 & 1) == 0;
      uVar14 = *(uint *)(lVar9 + 0x288);
      *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
      uVar14 = uVar14 ^ uVar14 << 0xb;
      *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
      uVar5 = *(uint *)(lVar9 + 0x294);
      *(uint *)(lVar9 + 0x290) = uVar5;
      uVar14 = uVar14 >> 8 ^ uVar5 >> 0x13 ^ uVar14 ^ uVar5;
      *(uint *)(lVar9 + 0x294) = uVar14;
      lVar9 = 600;
      if (bVar3) {
        lVar9 = 0x4b0;
      }
      iVar4 = 0x5db;
      if (bVar3) {
        iVar4 = 0x12bf;
      }
      iVar4 = iVar4 + (int)(lVar9 * (ulong)uVar14 >> 0x20);
      goto LAB_01ef04f0;
    }
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 != 0) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                          ((ulong)(uVar14 >> 0x11) & 0x7ff8));
      if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar12 + 0x46) != uVar14)) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar9 = *(long *)puVar2;
        iVar4 = (**(code **)(*plVar7 + 0x60))();
        if (iVar4 < 0x11) {
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_01ef0314;
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_01ef0314:
        uVar14 = 0;
      }
      if (plVar12 != (long *)0x0) {
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
        if ((uVar14 & uVar5) == 1) {
          lVar9 = plVar12[0x77];
          FUN_02085a50(*(undefined8 *)(lVar9 + 0x18),0,0);
          *(undefined4 *)(lVar9 + 0xaf28) = 0;
          uVar6 = FUN_03770550(*(long *)(lVar9 + 8) + 0x3e0);
          uVar8 = 0x14;
          if ((uVar6 & 1) == 0) {
            uVar8 = 10;
          }
          *(undefined4 *)(lVar9 + 0xaf2c) = uVar8;
          uVar6 = FUN_03770550(*(long *)(lVar9 + 8) + 0x3e0);
          lVar13 = *(long *)(lVar9 + 8);
          bVar3 = (uVar6 & 1) == 0;
          uVar14 = *(uint *)(lVar13 + 0x288);
          *(undefined4 *)(lVar13 + 0x288) = *(undefined4 *)(lVar13 + 0x28c);
          uVar14 = uVar14 ^ uVar14 << 0xb;
          *(undefined4 *)(lVar13 + 0x28c) = *(undefined4 *)(lVar13 + 0x290);
          uVar5 = *(uint *)(lVar13 + 0x294);
          *(uint *)(lVar13 + 0x290) = uVar5;
          uVar14 = uVar14 >> 8 ^ uVar5 >> 0x13 ^ uVar14 ^ uVar5;
          *(uint *)(lVar13 + 0x294) = uVar14;
          lVar13 = 600;
          if (bVar3) {
            lVar13 = 0x4b0;
          }
          iVar4 = 0x5dc;
          if (bVar3) {
            iVar4 = 0x12c0;
          }
          *(int *)(lVar9 + 0xaf24) = iVar4 + (int)(lVar13 * (ulong)uVar14 >> 0x20);
        }
      }
    }
    FUN_02085a50(*(undefined8 *)(param_1 + 6),0,0);
    param_1[0x2bca] = 0;
    uVar6 = FUN_03770550(*(long *)(param_1 + 2) + 0x3e0);
    iVar4 = 0x14;
    if ((uVar6 & 1) == 0) {
      iVar4 = 10;
    }
LAB_01ef0480:
    param_1[0x2bcb] = iVar4;
  }
  uVar6 = FUN_03770550(*(long *)(param_1 + 2) + 0x3e0);
  lVar9 = *(long *)(param_1 + 2);
  bVar3 = (uVar6 & 1) == 0;
  uVar14 = *(uint *)(lVar9 + 0x288);
  *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
  uVar14 = uVar14 ^ uVar14 << 0xb;
  *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
  uVar5 = *(uint *)(lVar9 + 0x294);
  *(uint *)(lVar9 + 0x290) = uVar5;
  uVar14 = uVar14 >> 8 ^ uVar5 >> 0x13 ^ uVar14 ^ uVar5;
  *(uint *)(lVar9 + 0x294) = uVar14;
  lVar9 = 600;
  if (bVar3) {
    lVar9 = 0x4b0;
  }
  iVar4 = 0x5dc;
  if (bVar3) {
    iVar4 = 0x12c0;
  }
  iVar4 = iVar4 + (int)(lVar9 * (ulong)uVar14 >> 0x20);
LAB_01ef04f0:
  *piVar1 = iVar4;
  return;
}


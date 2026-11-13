
/* WARNING: Type propagation algorithm not settling */

void FUN_010f9740(long param_1)

{
  uint uVar1;
  long *****ppppplVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *******ppppppplVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  uint uVar13;
  long lVar14;
  byte bVar15;
  long *plVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  long *******local_80;
  long *******local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined2 local_58;
  undefined *local_50;
  undefined1 local_48;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 != 0) {
    uVar13 = *(uint *)(param_1 + 8);
    if ((((uVar13 == 0) ||
         (lVar18 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), lVar18 == 0)) ||
        ((*(uint *)(lVar18 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar18 + 0x230) != uVar13)) {
      lVar18 = 0;
    }
    if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      plVar7 = (long *)PTR_DAT_04bb3350;
      if (iVar6 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_010f9800;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_010f9800:
      uVar13 = 0;
      plVar7 = (long *)PTR_DAT_04bb3350;
    }
    PTR_DAT_04bb3350 = (undefined *)plVar7;
    if (lVar18 != 0) {
      uVar13 = uVar13 ^ 1;
      if (*(int *)(lVar18 + 0x150) != 1) {
        uVar13 = 1;
      }
      if ((uVar13 == 0) && (*(int *)(lVar18 + 0x15c) == 0x47)) {
        uVar13 = *(uint *)PTR_DAT_04bbb7f0;
        if (((uVar13 == 0) ||
            ((plVar10 = *(long **)(*(long *)(*(long *)(*(long *)puVar3 + 0x1c0) + 8) +
                                  ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0 ||
             ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)))) || (*(uint *)(plVar10 + 0x46) != uVar13)
           ) {
          plVar10 = (long *)0x0;
        }
        iVar6 = *(int *)(*(long *)puVar3 + 0x288);
        if ((iVar6 == 1) || (iVar6 == -1)) {
          plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*plVar7 + 0x68));
          (**(code **)(*plVar8 + 0x60))();
        }
        if (((*PTR_DAT_04bbb7e8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbb7e8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bbb7e0 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbb7e8);
        }
        (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bbb7e0);
        plVar8 = (long *)plVar10[0x50];
        if (plVar8 != plVar10 + 0x4f) {
          plVar16 = plVar8 + -1;
          do {
            if (*(int *)((long)plVar16 + 4) == *(int *)(param_1 + 8)) {
              *(undefined1 *)plVar16 = 0;
              break;
            }
            plVar8 = (long *)plVar8[1];
            plVar16 = plVar8 + -1;
          } while (plVar16 != plVar10 + 0x4e);
        }
        lVar14 = *(long *)puVar3;
        if (lVar14 != 0) {
          uVar13 = *(uint *)(param_1 + 8);
          if ((((uVar13 == 0) ||
               (plVar10 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                    ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
              ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar13))
          {
            plVar10 = (long *)0x0;
          }
          if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
            plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*plVar7 + 0x68));
            lVar14 = *(long *)puVar3;
            iVar6 = (**(code **)(*plVar7 + 0x60))();
            if (iVar6 < 0x11) {
              uVar13 = 1;
            }
            else {
              if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_010f99b4;
              uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_010f99b4:
            uVar13 = 0;
          }
          if (plVar10 != (long *)0x0) {
            lVar14 = plVar10[0x2a];
            if (((*PTR_DAT_04bb83c8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb83c8), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bb83c0 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb83c8);
            }
            uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb83c0);
            uVar1 = 0;
            if ((int)lVar14 == 1) {
              uVar1 = uVar13;
            }
            if (((uVar9 & 1) != 0) && (uVar1 != 0)) {
              FUN_01189ea4(plVar10);
            }
          }
        }
      }
    }
  }
  puVar4 = PTR_DAT_04bbb7d8;
  lVar14 = *(long *)(param_1 + 0xf0);
  if (lVar14 != param_1 + 0xe8) {
    ppuVar17 = (undefined **)(lVar14 + -0x58);
    puStack_90 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_88 = ppuVar17[2];
      local_68 = (undefined *)0xffffffffffffffff;
      local_58 = 0x100;
      local_78 = (long *******)&local_80;
      local_70 = (undefined *)0x0;
      local_80 = (long *******)&local_80;
      if (&local_98 != ppuVar17) {
        local_70 = ppuVar17[5];
        local_60 = ppuVar17[7];
        local_68 = ppuVar17[6];
        local_58 = *(undefined2 *)(ppuVar17 + 8);
        local_78 = (long *******)(ppuVar17 + 3);
        local_80 = (long *******)*local_78;
        *local_78 = (long ******)&local_80;
        local_80[1] = (long ******)&local_80;
        ppppplVar2 = (long *****)ppuVar17[4];
        pppppplVar12 = (long ******)*ppppplVar2;
        (*local_78)[1] = ppppplVar2;
        *ppppplVar2 = (long ****)*local_78;
        pppppplVar12[1] = (long *****)local_78;
        *local_78 = pppppplVar12;
        ppuVar17[5] = (undefined *)0x0;
        ppuVar17[6] = (undefined *)0xffffffffffffffff;
        ppuVar17[7] = (undefined *)0x0;
        *(undefined2 *)(ppuVar17 + 8) = 0x100;
      }
      ppppppplVar5 = local_78;
      local_48 = *(undefined1 *)(ppuVar17 + 10);
      local_50 = ppuVar17[9];
      pppppplVar12 = *local_78;
      local_80[1] = (long ******)local_78;
      *ppppppplVar5 = (long ******)local_80;
      pppppplVar12[1] = (long *****)&local_80;
      local_98 = puVar4 + 0x10;
      pppppplVar11 = *local_78;
      pppppplVar12[1] = (long *****)local_78;
      *local_78 = pppppplVar12;
      pppppplVar11[1] = (long *****)&local_80;
      local_60 = (undefined *)0x0;
      local_70 = (undefined *)0x0;
      local_68 = (undefined *)0xffffffffffffffff;
      local_58 = 0x100;
      pppppplVar12 = *local_78;
      pppppplVar11[1] = (long *****)local_78;
      local_80 = (long *******)pppppplVar11;
      *local_78 = pppppplVar11;
      pppppplVar12[1] = (long *****)&local_80;
      lVar14 = *(long *)(lVar14 + 8);
      ppuVar17 = (undefined **)(lVar14 + -0x58);
    } while (ppuVar17 != (undefined **)(param_1 + 0x90));
  }
  if ((((*(byte *)(param_1 + 0x150) >> 1 & 1) == 0) ||
      (uVar9 = FUN_021d82d0(*(long *)(param_1 + 0x18) + 0xbc,1), (uVar9 & 1) != 0)) ||
     (lVar14 = *(long *)puVar3, lVar14 == 0)) goto LAB_010f9cf0;
  uVar13 = *(uint *)(param_1 + 8);
  if (((uVar13 == 0) ||
      (plVar7 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                          ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
     (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar13)))) {
    plVar7 = (long *)0x0;
  }
  if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar10 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_010f9c3c;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_010f9c3c:
    uVar13 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar14 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar14 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar9 & 1) != 0) && (uVar1 != 0)) {
      FUN_01ea7028(plVar7[0x77]);
      lVar14 = *(long *)PTR_DAT_04bb3968;
      *(undefined8 *)(lVar14 + 0xa20) = 0;
      *(undefined8 *)(lVar14 + 0xa28) = 0;
      *(undefined8 *)(lVar14 + 0xa30) = 0;
      *(undefined8 *)(lVar14 + 0xa38) = 0;
      *(undefined8 *)(lVar14 + 0xa40) = 0;
      *(undefined8 *)(lVar14 + 0xa48) = 0;
      *(undefined8 *)(lVar14 + 0xa50) = 0;
      *(undefined8 *)(lVar14 + 0xa58) = 0;
      *(undefined8 *)(lVar14 + 0xa60) = 0;
      *(undefined4 *)(lVar14 + 0xd20) = 0xffffffff;
      *(undefined4 *)(lVar14 + 0xce8) = 0;
      *(undefined4 *)(lVar14 + 0xb80) = 0;
      (**(code **)(**(long **)(lVar14 + 0xb78) + 0x58))();
      *(undefined4 *)(lVar14 + 0xd64) = 0;
      *(undefined4 *)(lVar14 + 0xd80) = 0;
    }
  }
LAB_010f9cf0:
  lVar14 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar14 + 0x2b0) != 0) {
    *(long *)(lVar14 + 0x288) = *(long *)(lVar14 + 0x2b0);
    *(undefined8 *)(lVar14 + 0x2a0) = *(undefined8 *)(lVar14 + 0x2b8);
    bVar15 = *(byte *)(lVar14 + 0x2c0);
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    *(byte *)(lVar14 + 0x2a8) = bVar15;
    if (*(long *)(lVar14 + 0x290) != 0) {
      *(byte *)(*(long *)(lVar14 + 0x290) + 0xc) = bVar15;
    }
  }
  return;
}


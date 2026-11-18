
/* WARNING: Removing unreachable block (ram,0x032fb68c) */
/* WARNING: Removing unreachable block (ram,0x032fb798) */
/* WARNING: Removing unreachable block (ram,0x032fb818) */
/* WARNING: Removing unreachable block (ram,0x032fb70c) */

bool FUN_032fb310(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ushort uVar18;
  long lVar19;
  undefined4 uVar20;
  void *pvVar21;
  undefined8 local_90;
  undefined **local_88;
  undefined *local_80;
  long lStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  cVar6 = *(char *)(param_1 + 0x498);
  *(undefined1 *)(param_1 + 0xf80) = 0;
  if (cVar6 != '\0') goto LAB_032fbb68;
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_2 + 0x3b0);
  iVar12 = *(int *)(param_2 + 0x3ac);
  *(int *)(param_1 + 0x490) = iVar12;
  if ((param_3 < 0x1f) && ((1 << (ulong)(param_3 & 0x1f) & 0x40000600U) != 0)) {
    iVar12 = iVar12 + -1;
    *(int *)(param_1 + 0x490) = iVar12;
  }
  if (iVar12 < 1) {
    *(undefined4 *)(param_1 + 0x490) = 500;
  }
  *(uint *)(param_1 + 0x3c) = param_3;
  *(undefined1 *)(param_1 + 0xbe8) = *(undefined1 *)(param_2 + 0x3d0);
  uVar3 = *(uint *)(param_1 + 0xbdc);
  if ((int)uVar3 < 1) {
    if ((0 < *(int *)(param_1 + 0x470)) &&
       (**(undefined2 **)(param_1 + 0x468) = 0, 0 < *(int *)(param_1 + 0x474))) {
      *(undefined4 *)(param_1 + 0x474) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x474) = 0;
    **(undefined2 **)(param_1 + 0x468) = 0;
    uVar4 = *(uint *)(param_1 + 0x490);
    if ((int)uVar3 <= (int)uVar4 || (int)uVar4 < 1) {
      uVar4 = uVar3;
    }
    if ((int)uVar4 < 1) {
      uVar13 = 0;
    }
    else {
      lVar15 = *(long *)(param_1 + 0xa68);
      uVar13 = 0;
      do {
        uVar18 = *(ushort *)(lVar15 + uVar13 * 2);
        uVar3 = uVar18 - 9;
        if ((uVar3 < 7) && ((0x79U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
          uVar18 = *(ushort *)(&DAT_0418d0c4 + (long)(short)uVar3 * 2);
        }
        lVar19 = *(long *)(param_1 + 0x468);
        if (*(int *)(param_1 + 0x474) < *(int *)(param_1 + 0x470) + -1) {
          *(ushort *)(lVar19 + (long)*(int *)(param_1 + 0x474) * 2) = uVar18;
          lVar19 = (long)*(int *)(param_1 + 0x474) + 1;
          *(int *)(param_1 + 0x474) = (int)lVar19;
          *(undefined2 *)(*(long *)(param_1 + 0x468) + lVar19 * 2) = 0;
          lVar19 = *(long *)(param_1 + 0x468);
        }
        if (*(short *)(lVar19 + uVar13 * 2) == 0) goto LAB_032fb480;
        uVar13 = uVar13 + 1;
      } while (uVar4 != uVar13);
      uVar13 = (ulong)uVar4;
    }
LAB_032fb480:
    *(int *)(param_1 + 0xbdc) = (int)uVar13;
  }
  puVar8 = PTR_DAT_04bc8ed0;
  FUN_032a6140(*(undefined8 *)PTR_DAT_04bc8ed0);
  lVar15 = *(long *)puVar8;
  if (1 < *(int *)(lVar15 + 0xa8) - 1U) {
    local_70 = PTR_FUN_04bc9258;
    uStack_68 = 0;
    local_90 = PTR_DAT_04bc8e60 + 0x10;
    local_80 = PTR_DAT_04bc9290 + 0x10;
    local_88 = &local_80;
    lStack_78 = lVar15;
    FUN_032c7c30(*(undefined8 *)(lVar15 + 0x40),0,0,&local_90,0,0);
    if (local_88 != (undefined **)0x0) {
      (**(code **)(*local_88 + 8))();
    }
    *(undefined4 *)(lVar15 + 0xa8) = 2;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_032fb560:
    lVar15 = *(long *)(param_1 + 0xbf8);
  }
  else {
    FUN_03356734();
    pvVar21 = *(void **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (pvVar21 == (void *)0x0) goto LAB_032fb560;
    FUN_03354a94(pvVar21);
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar21);
      }
      goto LAB_032fb560;
    }
    free(pvVar21);
    lVar15 = *(long *)(param_1 + 0xbf8);
  }
  if (lVar15 != 0) {
    FUN_03346b44();
    pvVar21 = *(void **)(param_1 + 0xbf8);
    *(undefined8 *)(param_1 + 0xbf8) = 0;
    if (pvVar21 != (void *)0x0) {
      FUN_03345600(pvVar21);
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar21);
      }
      else {
        plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))(plVar9,pvVar21);
        }
      }
    }
  }
  plVar9 = (long *)(param_1 + 0x468);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00367a40(PTR_LAB_04bc94a8,PTR_LAB_04bc94b0,0);
    FUN_0334fea8(*(undefined8 *)(param_1 + 0x30));
    pvVar21 = *(void **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pvVar21 != (void *)0x0) {
      FUN_0334c910(pvVar21);
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar21);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar21);
        }
      }
    }
  }
  iVar12 = *(int *)(param_1 + 0x38);
  if (iVar12 == 1) {
    local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
    plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                                (*(long **)(param_1 + 0x10),0x10,8);
    puVar8 = PTR_DAT_04bc97d8;
    *(undefined1 *)(plVar10 + 1) = 0;
    *plVar10 = (long)(puVar8 + 0x10);
    pvVar21 = *(void **)(param_1 + 0xc00);
    *(long **)(param_1 + 0xc00) = plVar10;
    if (pvVar21 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar21);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar21);
        }
      }
    }
    goto LAB_032fba64;
  }
  if (iVar12 == 0) {
    if (param_3 - 9 < 2) {
LAB_032fb670:
      local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
      puVar1 = (undefined8 *)(param_1 + 0x10);
      uVar11 = (**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x25a0,8);
      FUN_033452ec(uVar11,puVar1);
      pvVar21 = *(void **)(param_1 + 0xbf8);
      *(undefined8 *)(param_1 + 0xbf8) = uVar11;
      if (pvVar21 != (void *)0x0) {
        FUN_03345600(pvVar21);
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar21);
        }
        else {
          plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,pvVar21);
          }
        }
        uVar11 = *(undefined8 *)(param_1 + 0xbf8);
      }
      FUN_03345a60(uVar11,puVar1,param_2);
      if ((param_3 == 0x1e) || (param_3 == 10)) {
        *(undefined1 *)(*(long *)(param_1 + 0xbf8) + 0x2584) = 1;
      }
      lVar15 = *(long *)(param_1 + 0xbf8);
      if (((*(uint *)(lVar15 + 0x20d8) | 2) == 2) &&
         (uVar13 = (ulong)*(uint *)(param_1 + 0xbdc), 0 < (int)*(uint *)(param_1 + 0xbdc))) {
        uVar14 = 0;
        do {
          if (*(short *)(*plVar9 + uVar14 * 2) == 10) {
            iVar12 = (int)uVar14;
            if (((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x470))) &&
               (*(undefined2 *)(*plVar9 + uVar14 * 2) = 0, iVar12 < *(int *)(param_1 + 0x474))) {
              *(int *)(param_1 + 0x474) = iVar12;
            }
            uVar13 = (ulong)*(int *)(param_1 + 0xbdc);
            if ((long)uVar14 < (long)uVar13) {
              uVar13 = uVar14 & 0xffffffff;
              *(int *)(param_1 + 0xbdc) = iVar12;
            }
          }
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)uVar13);
        lVar15 = *(long *)(param_1 + 0xbf8);
      }
      *(long **)(lVar15 + 0x4e0) = plVar9;
      lVar15 = *(long *)(param_1 + 0xbf8);
      *(undefined8 *)(lVar15 + 0x2538) = *(undefined8 *)(param_1 + 0xf38);
      uVar11 = *(undefined8 *)(param_1 + 0xf40);
      uVar16 = *(undefined8 *)(param_1 + 0xf48);
      uVar17 = *(undefined8 *)(param_1 + 0xf50);
      *(undefined8 *)(lVar15 + 0x2558) = *(undefined8 *)(param_1 + 0xf58);
      *(undefined8 *)(lVar15 + 0x2550) = uVar17;
      *(undefined8 *)(lVar15 + 0x2548) = uVar16;
      *(undefined8 *)(lVar15 + 0x2540) = uVar11;
      uVar11 = *(undefined8 *)(param_1 + 0xf60);
      uVar16 = *(undefined8 *)(param_1 + 0xf70);
      uVar7 = *(undefined1 *)(param_1 + 0xf78);
      *(undefined8 *)(lVar15 + 0x2568) = *(undefined8 *)(param_1 + 0xf68);
      *(undefined8 *)(lVar15 + 0x2570) = uVar16;
      *(undefined8 *)(lVar15 + 0x2560) = uVar11;
      *(undefined1 *)(lVar15 + 0x2578) = uVar7;
    }
    else if (param_3 == 0x1d) {
      local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
      puVar1 = (undefined8 *)(param_1 + 0x10);
      uVar11 = (**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x17b8,8);
      FUN_0335477c(uVar11,puVar1);
      pvVar21 = *(void **)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = uVar11;
      if (pvVar21 != (void *)0x0) {
        FUN_03354a94(pvVar21);
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar21);
        }
        else {
          plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,pvVar21);
          }
        }
      }
      FUN_03354e30(*(undefined8 *)(param_1 + 0x28),puVar1,param_2);
      lVar15 = *(long *)(param_1 + 0x28);
      if ((*(uint *)(lVar15 + 0x17a0) & 0xfffffffd) == 0) {
        FUN_032fb2a0(param_1);
        lVar15 = *(long *)(param_1 + 0x28);
      }
      *(long **)(lVar15 + 0x4a0) = plVar9;
    }
    else {
      if (param_3 == 0x1e) goto LAB_032fb670;
      local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
      puVar1 = (undefined8 *)(param_1 + 0x10);
      uVar11 = (**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x2778,8);
      FUN_0334bf60(uVar11,puVar1);
      pvVar21 = *(void **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar11;
      if (pvVar21 != (void *)0x0) {
        FUN_0334c910(pvVar21);
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar21);
        }
        else {
          plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar21);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,pvVar21);
          }
        }
      }
      FUN_0334d2a0(*(undefined8 *)(param_1 + 0x30),puVar1,param_2,param_3);
      uVar13 = (ulong)*(uint *)(param_1 + 0xbdc);
      if (0 < (int)*(uint *)(param_1 + 0xbdc)) {
        uVar14 = 0;
        do {
          if (*(short *)(*plVar9 + uVar14 * 2) == 10) {
            iVar12 = (int)uVar14;
            if (((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x470))) &&
               (*(undefined2 *)(*plVar9 + uVar14 * 2) = 0, iVar12 < *(int *)(param_1 + 0x474))) {
              *(int *)(param_1 + 0x474) = iVar12;
            }
            uVar13 = (ulong)*(int *)(param_1 + 0xbdc);
            if ((long)uVar14 < (long)uVar13) {
              uVar13 = uVar14 & 0xffffffff;
              *(int *)(param_1 + 0xbdc) = iVar12;
            }
          }
          uVar14 = uVar14 + 1;
        } while ((long)uVar14 < (long)(int)uVar13);
      }
      *(long **)(*(long *)(param_1 + 0x30) + 0x430) = plVar9;
    }
LAB_032fba64:
    iVar12 = *(int *)(param_1 + 0x38);
  }
  if (iVar12 == 1) {
    lVar15 = *(long *)(param_1 + 0xc00);
  }
  else if (iVar12 == 0) {
    lVar15 = *(long *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0xbf8) != 0) {
      lVar15 = *(long *)(param_1 + 0xbf8);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar15 = *(long *)(param_1 + 0x30);
    }
  }
  else {
    lVar15 = 0;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x490);
  if (*(int *)(param_2 + 0x20) == 1) {
    uVar2 = 0;
    if (*(long *)(param_1 + 0xbf8) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xf14);
    }
    uVar20 = *(undefined4 *)(param_1 + 0xbdc);
    if (*(long *)(param_1 + 0x30) == 0 && *(long *)(param_1 + 0x28) == 0) {
      uVar20 = uVar2;
    }
  }
  else {
    uVar20 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x20);
  *(long *)(lVar19 + 0xf38) = lVar15;
  *(long *)(lVar19 + 0x6f8) = lVar15;
  *(long **)(lVar19 + 0x708) = plVar9;
  FUN_03363ed0(lVar19 + 0xb38,*(undefined8 *)(param_1 + 0x468));
  *(undefined4 *)(lVar19 + 0x710) = uVar5;
  *(undefined4 *)(lVar19 + 0x6e8) = uVar20;
  *(undefined4 *)(lVar19 + 0x6ec) = uVar20;
  *(undefined4 *)(lVar19 + 0x6f0) = 0xffffffff;
  FUN_032fe750(*(undefined8 *)(param_1 + 0x20),param_2);
  if (*(int *)(param_1 + 0x38) == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_03356990(*(long *)(param_1 + 0x28),param_2);
    }
    if (*(long *)(param_1 + 0xbf8) != 0) {
      FUN_03346ce0(*(long *)(param_1 + 0xbf8),param_2);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_033502b0(*(long *)(param_1 + 0x30),param_2);
    }
  }
  FUN_032ffa10(*(undefined8 *)(param_1 + 0x20),param_4);
  FUN_032fbc30(param_1);
  *(undefined1 *)(param_1 + 0x498) = 1;
LAB_032fbb68:
  return cVar6 == '\0';
}


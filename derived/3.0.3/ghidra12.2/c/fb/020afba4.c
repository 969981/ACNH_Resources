
undefined8 FUN_020afba4(long param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined *local_70;
  undefined *puStack_68;
  byte local_44 [4];
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*param_2 == 0) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb28f8;
  plVar12 = *(long **)(lVar13 + 0xc0);
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    bVar3 = false;
    plVar10 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    uVar11 = *(uint *)(plVar12 + 1);
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar5 + 0x60))();
      if (iVar4 < 0x11) {
        uVar14 = 1;
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_020afca8;
        uVar14 = 0x101000100 >> (((ulong)*(uint *)(lVar7 + 0x5e8) & 7) << 3);
        uVar11 = (uint)uVar14;
      }
    }
    else {
LAB_020afca8:
      uVar14 = 0;
      uVar11 = 0;
    }
    if (plVar10 == (long *)0x0) {
      bVar3 = false;
    }
    else {
      bVar3 = (int)plVar10[0x2a] == 1;
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar14 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
      if ((uVar14 & 1) == 0) {
        uVar11 = 0;
      }
      uVar14 = (ulong)uVar11;
    }
  }
  iVar4 = *param_2;
  if (*(int *)(param_1 + 0xa20) == iVar4) {
    uVar11 = 0;
  }
  else if (*(int *)(param_1 + 0xa24) == iVar4) {
    uVar11 = 1;
  }
  else if (*(int *)(param_1 + 0xa28) == iVar4) {
    uVar11 = 2;
  }
  else if (*(int *)(param_1 + 0xa2c) == iVar4) {
    uVar11 = 3;
  }
  else if (*(int *)(param_1 + 0xa30) == iVar4) {
    uVar11 = 4;
  }
  else if (*(int *)(param_1 + 0xa34) == iVar4) {
    uVar11 = 5;
  }
  else if (*(int *)(param_1 + 0xa38) == iVar4) {
    uVar11 = 6;
  }
  else if (*(int *)(param_1 + 0xa3c) == iVar4) {
    uVar11 = 7;
  }
  else if (*(int *)(param_1 + 0xa40) == iVar4) {
    uVar11 = 8;
  }
  else if (*(int *)(param_1 + 0xa44) == iVar4) {
    uVar11 = 9;
  }
  else if (*(int *)(param_1 + 0xa48) == iVar4) {
    uVar11 = 10;
  }
  else if (*(int *)(param_1 + 0xa4c) == iVar4) {
    uVar11 = 0xb;
  }
  else if (*(int *)(param_1 + 0xa50) == iVar4) {
    uVar11 = 0xc;
  }
  else if (*(int *)(param_1 + 0xa54) == iVar4) {
    uVar11 = 0xd;
  }
  else if (*(int *)(param_1 + 0xa58) == iVar4) {
    uVar11 = 0xe;
  }
  else if (*(int *)(param_1 + 0xa5c) == iVar4) {
    uVar11 = 0xf;
  }
  else if (*(int *)(param_1 + 0xa60) == iVar4) {
    uVar11 = 0x10;
  }
  else {
    if (*(int *)(param_1 + 0xa64) != iVar4) {
      return 0;
    }
    uVar11 = 0x11;
  }
  (**(code **)(*plVar12 + 0x10))(local_44,plVar12);
  lVar7 = *(long *)puVar2;
  *(uint *)(param_1 + 0xd20) = uVar11;
  if (lVar7 == 0) goto LAB_020affb0;
  uVar11 = *(uint *)(param_1 + 0xa20 + (ulong)uVar11 * 4);
  if (((uVar11 == 0) ||
      (plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
     (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar11)))) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_020aff24;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_020aff24:
    uVar11 = 0;
  }
  if (plVar12 == (long *)0x0) goto LAB_020affb0;
  lVar7 = plVar12[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar11;
  }
  if (((((uVar6 & 1) == 0) || (uVar1 == 0)) || (lVar7 = plVar12[0x77], lVar7 == 0)) ||
     (((*(long *)(lVar13 + 200) = lVar7 + 0x7f60, plVar10 == (long *)0x0 || (!bVar3)) ||
      (((uVar14 & 0xff) == 0 || ((plVar10[0x77] == 0 || (*(int *)(plVar10[0x77] + 0x7cf8) != 0))))))
     )) goto LAB_020affb0;
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    plVar12 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    uVar11 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar11 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar11)) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar4 = (**(code **)(*plVar10 + 0x60))();
      if (iVar4 < 0x11) {
        uVar14 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_020b0094;
        uVar14 = 0x101000100 >> (((ulong)*(uint *)(lVar8 + 0x5e8) & 7) << 3);
      }
    }
    else {
LAB_020b0094:
      uVar14 = 0;
    }
    if (plVar12 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
      uVar11 = (uint)uVar14;
      if ((uVar6 & 1) == 0) {
        uVar11 = 0;
      }
      uVar14 = (ulong)uVar11;
    }
  }
  if (((ulong)local_44[0] < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
    piVar9 = (int *)(*(long *)PTR_DAT_04bb4718 + (ulong)local_44[0] * 4 + 0xde8);
  }
  else {
    piVar9 = (int *)PTR_DAT_04bb3238;
  }
  if (((*piVar9 != 0) && (plVar12 != (long *)0x0)) && ((uVar14 & 0xff) != 0)) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    puStack_68 = PTR_s_cDefault_04bb5888 + 0x1e;
    FUN_008fb654(plVar12,*piVar9,*param_2,1,*(ulong *)(lVar7 + 0xad58) >> 0x3b & 1,&local_70);
  }
LAB_020affb0:
  FUN_01badff0(*(undefined8 *)(lVar13 + 0x10));
  return 1;
}


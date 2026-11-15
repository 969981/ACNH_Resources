
void FUN_01fb4a70(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_70;
  char *pcStack_68;
  undefined *local_60;
  undefined2 local_58;
  
  if (*(int *)((long)param_1 + 0xaf8c) == 0xc) {
    lVar13 = param_1[3];
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    uVar5 = *(undefined4 *)(lVar13 + 0x294);
    *(undefined4 *)(lVar13 + 0x294) = 0;
    lVar9 = param_1[3];
    local_70._0_4_ = uVar5;
    uVar8 = FUN_02085a50(lVar9,1,0);
    uVar5 = (undefined4)local_70;
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)(lVar9 + 0x801) = 1;
      lVar4 = lVar9 + 0x10 + (ulong)*(uint *)(lVar9 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar9 + 0x294)) {
        lVar4 = lVar9 + 0x10;
      }
      *(undefined8 *)(lVar4 + 0xc) = 0;
      *(undefined4 *)(lVar4 + 0x14) = 0;
    }
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    *(undefined4 *)(lVar13 + 0x294) = uVar5;
    param_1[0x1613] = 0;
    *(undefined4 *)((long)param_1 + 0x1203c) = 0x708;
    *(undefined4 *)(param_1 + 0x2477) = 2;
    FUN_01e5a930(0x40000000,param_1[2],0,PTR_DAT_04bb2150,&local_60,&local_70,PTR_DAT_04bc1600,6);
  }
  else if (*(int *)((long)param_1 + 0xaf8c) == 2) {
    FUN_01f9c378(param_1,0,0);
  }
  *(undefined4 *)((long)param_1 + 0xaf8c) = 0;
  puVar2 = PTR_DAT_04bbc1a0;
  if ((int)param_1[0x15f1] == 1) {
    plVar10 = param_1 + 0x1619;
    plVar7 = param_1 + 0x197d;
    if (0 < (int)*plVar10) {
      lVar9 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        plVar11 = *(long **)(param_1[0x161a] + lVar9 * 8);
        lVar9 = lVar9 + 1;
        plVar11[0xf] = (long)puVar1;
        *plVar11 = param_1[0x161b];
        param_1[0x161b] = (long)plVar11;
      } while (lVar9 < (int)*plVar10);
    }
    *(int *)plVar10 = 0;
    if (0 < (int)*plVar7) {
      lVar9 = 0;
      do {
        plVar10 = *(long **)(param_1[0x197e] + lVar9 * 8);
        lVar9 = lVar9 + 1;
        plVar10[0xf] = (long)(puVar2 + 0x10);
        *plVar10 = param_1[0x197f];
        param_1[0x197f] = (long)plVar10;
      } while (lVar9 < (int)*plVar7);
    }
    *(int *)plVar7 = 0;
    *(undefined1 *)((long)param_1 + 0xe724) = 0;
    param_1[0x1ce1] = 0;
    param_1[0x1ce2] = 0;
    param_1[0x1ce3] = 0;
    (**(code **)(*param_1 + 0x5f0))(param_1,1,0);
    *(undefined1 *)(param_1 + 0x15f3) = 0;
    *(undefined1 *)((long)param_1 + 0xaf9c) = 0;
    *(undefined1 *)(param_1 + 0x15f2) = 0;
    *(undefined4 *)((long)param_1 + 0xafa4) = 0;
    puVar2 = PTR_DAT_04bb37e0;
    *(undefined2 *)(param_1 + 0x15f5) = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)((long)param_1 + 0xafaa) = puVar2[2];
    *(undefined *)((long)param_1 + 0xafab) = puVar2[3];
    *(undefined4 *)((long)param_1 + 0xafac) = *(undefined4 *)(puVar2 + 4);
    if ((*(uint *)(param_1 + 0x15f6) >> 0xd & 1) != 0) {
      *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffffdfff;
    }
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) goto LAB_01fb4df4;
  uVar12 = *(uint *)(param_1 + 0xfae);
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_01fb4d40;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fb4d40:
    uVar12 = 0;
  }
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar3 = 0;
    if ((int)lVar9 == 1) {
      uVar3 = uVar12;
    }
    if (((uVar8 & 1) != 0) && (uVar3 != 0)) {
      plVar10 = (long *)plVar10[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if (((plVar10 != (long *)0x0) &&
          (uVar8 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb6708), (uVar8 & 1) != 0)) &&
         ((int)plVar10[0xef6] == 0x40)) {
        *(undefined1 *)(plVar10 + 0xf0f) = 1;
        (**(code **)(*plVar10 + 0x538))(plVar10);
      }
    }
  }
LAB_01fb4df4:
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) & 0xffbf7f20;
  FUN_02085a50(param_1[3],0,0);
  *(undefined4 *)(param_1[2] + 0x56c) = 0;
  local_60 = PTR_DAT_04bb7648 + 0x10;
  local_58 = FUN_0376baa0(param_1[1] + 0x3e0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "StandingUpFlag";
  local_70 = puVar2;
  FUN_0376c130(&local_60,&local_70,0);
  pcStack_68 = "KeepStandingUpFlag";
  local_70 = puVar2;
  FUN_0376c130(&local_60,&local_70,0);
  return;
}


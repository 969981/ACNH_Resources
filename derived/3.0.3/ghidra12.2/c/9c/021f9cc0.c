
undefined8 FUN_021f9cc0(undefined4 *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined2 *)param_1 = uVar5;
  *(undefined1 *)((long)param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 3) = uVar4;
  param_1[1] = uVar2;
  *(undefined2 *)(param_1 + 2) = uVar5;
  *(undefined1 *)((long)param_1 + 10) = uVar3;
  *(undefined1 *)((long)param_1 + 0xb) = uVar4;
  param_1[3] = uVar2;
  *(undefined2 *)(param_1 + 4) = uVar5;
  *(undefined1 *)((long)param_1 + 0x12) = uVar3;
  *(undefined1 *)((long)param_1 + 0x13) = uVar4;
  param_1[5] = uVar2;
  *(undefined2 *)(param_1 + 6) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar3;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar4;
  param_1[7] = uVar2;
  *(undefined2 *)(param_1 + 8) = uVar5;
  *(undefined1 *)((long)param_1 + 0x22) = uVar3;
  *(undefined1 *)((long)param_1 + 0x23) = uVar4;
  param_1[9] = uVar2;
  *(undefined2 *)(param_1 + 10) = uVar5;
  *(undefined1 *)((long)param_1 + 0x2a) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar4;
  param_1[0xb] = uVar2;
  *(undefined2 *)(param_1 + 0xc) = uVar5;
  *(undefined1 *)((long)param_1 + 0x32) = uVar3;
  *(undefined1 *)((long)param_1 + 0x33) = uVar4;
  param_1[0xd] = uVar2;
  *(undefined2 *)(param_1 + 0xe) = uVar5;
  *(undefined1 *)((long)param_1 + 0x3a) = uVar3;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar4;
  param_1[0xf] = uVar2;
  *(undefined2 *)(param_1 + 0x10) = uVar5;
  *(undefined1 *)((long)param_1 + 0x42) = uVar3;
  *(undefined1 *)((long)param_1 + 0x43) = uVar4;
  param_1[0x11] = uVar2;
  puVar6 = PTR_DAT_04bb27c0;
  uVar13 = *param_2;
  if (uVar13 == 0) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return 0;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8)
                      );
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar6;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar13 = 1;
      goto joined_r0x021f9e44;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x021f9e44;
    }
  }
  uVar13 = 0;
joined_r0x021f9e44:
  if (plVar12 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if ((uVar13 & uVar8) == 1) {
      if (*(uint *)(plVar12 + 0xa0) < 2) {
        lVar11 = plVar12[0xc];
        if (lVar11 != 0) {
          lVar1 = *(long *)(lVar11 + 0x60a8) +
                  ((ulong)*(uint *)(*(long *)(lVar11 + 0x60a8) + 0x10) & 1) * 0x20;
          uVar2 = *(undefined4 *)(lVar1 + 0x18);
          *param_1 = *(undefined4 *)(lVar1 + 0x14);
          param_1[1] = uVar2;
          lVar1 = *(long *)(lVar11 + 0x60b0) +
                  ((ulong)*(uint *)(*(long *)(lVar11 + 0x60b0) + 0x10) & 1) * 0x20;
          uVar2 = *(undefined4 *)(lVar1 + 0x18);
          param_1[2] = *(undefined4 *)(lVar1 + 0x14);
          param_1[3] = uVar2;
          FUN_0201a52c(&local_38,lVar11);
          param_1[6] = local_38;
          param_1[7] = uStack_34;
          if ((int)plVar12[0xa0] == 1) {
            FUN_0201a994(&local_38,lVar11);
            param_1[8] = local_38;
            param_1[9] = uStack_34;
            lVar11 = *(long *)(lVar11 + 0x60b8) +
                     ((ulong)*(uint *)(*(long *)(lVar11 + 0x60b8) + 0x10) & 1) * 0x20;
            uVar2 = *(undefined4 *)(lVar11 + 0x18);
            param_1[0xc] = *(undefined4 *)(lVar11 + 0x14);
            param_1[0xd] = uVar2;
          }
          return 1;
        }
      }
      else if ((*(uint *)(plVar12 + 0xa0) == 2) &&
              (plVar12 = (long *)plVar12[0xc], plVar12 != (long *)0x0)) {
        if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37a0);
        }
        uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,PTR_DAT_04bb3798);
        if ((uVar10 & 1) != 0) {
          FUN_0233e334(plVar12,param_1,~param_3 & 1);
          return 1;
        }
      }
    }
  }
  return 0;
}


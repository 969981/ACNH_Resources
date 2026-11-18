
undefined4 FUN_03460490(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined4 local_b0;
  byte local_ac;
  undefined8 local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined *local_80 [4];
  undefined *local_60 [4];
  
  puVar3 = PTR_DAT_04bb27c0;
  puVar2 = PTR_DAT_04bb2230;
  switch(*param_1) {
  case 1:
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 == 0) break;
    uVar11 = param_1[1];
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar11 = 1;
      }
      else {
        uVar11 = *(uint *)(lVar9 + 0x5e8);
        if (4 < uVar11) goto LAB_034607d0;
        uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
      }
    }
    else {
LAB_034607d0:
      uVar11 = 0;
    }
    if (plVar10 == (long *)0x0) break;
    lVar9 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    if ((((int)lVar9 != 1) || ((uVar11 & uVar4) == 0)) || ((uVar1 >> 4 & 1) == 0)) break;
    goto LAB_03460834;
  case 2:
    lVar9 = *(long *)PTR_DAT_04bb27c0;
    if (lVar9 == 0) break;
    uVar11 = param_1[1];
    if ((((uVar11 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
      plVar10 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar6 + 0x60))();
      if (iVar5 < 0x11) {
        uVar11 = 1;
      }
      else {
        uVar11 = *(uint *)(lVar9 + 0x5e8);
        if (4 < uVar11) goto LAB_034607dc;
        uVar11 = 0x1aU >> (ulong)(uVar11 & 0x1f) & 1;
      }
    }
    else {
LAB_034607dc:
      uVar11 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[0x2a];
      uVar1 = *(uint *)(plVar10 + 0x49);
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar4 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
      if ((((int)lVar9 == 1) && ((uVar11 & uVar4) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        local_ac = *(byte *)(param_1 + 7);
        local_a8 = (undefined *)((ulong)local_a8._7_1_ << 0x38);
        local_80[0] = PTR_DAT_04bc9990 + 0x10;
        local_60[0] = PTR_DAT_04bc9998 + 0x10;
        if (7 < local_ac) {
          local_ac = 0xff;
        }
        local_98 = param_1[1];
        local_a8 = (undefined *)CONCAT26(local_a8._6_2_,0x101ffffffff);
        local_b0 = 0x3e;
        local_a0 = &PTR_LAB_04b2b1b8;
        lVar9 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x10);
        if (*(int *)(lVar9 + 0x90) == 0) {
          *(undefined4 *)(lVar9 + 0xd0) = 0x3e;
          *(byte *)(lVar9 + 0xd4) = local_ac;
          *(undefined4 *)(lVar9 + 0xd8) = 0xffffffff;
          *(undefined2 *)(lVar9 + 0xdc) = 0x101;
          *(undefined1 *)(lVar9 + 0xde) = 0;
          *(undefined ***)(lVar9 + 0xe0) = &PTR_LAB_04b2b1b8;
          *(undefined4 *)(lVar9 + 0xe8) = local_98;
          FUN_033b6028(local_80,lVar9 + 0x100);
          (**(code **)(local_60[0] + 0x10))(local_60,lVar9 + 0x120);
          FUN_03ebb160(lVar9 + 0x88,1);
          *param_1 = 3;
        }
      }
    }
    break;
  case 3:
    puVar7 = (undefined8 *)
             FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x3e,PTR_DAT_04bb32e0);
    if (puVar7 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bc5e20 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc5e20), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc5e18 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5e20);
      }
      uVar8 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5e18);
      if (((uVar8 & 1) != 0) &&
         ((*(int *)(puVar7 + 0x3e) != -1 || *(int *)((long)puVar7 + 500) != -1) ||
          1 < *(uint *)(puVar7 + 0x36))) {
        *param_1 = 4;
      }
    }
    break;
  case 4:
    puVar7 = (undefined8 *)
             FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x3e,PTR_DAT_04bb32e0);
    if (puVar7 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bc5e20 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc5e20), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc5e18 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5e20);
      }
      uVar8 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5e18);
      if (((uVar8 & 1) != 0) &&
         ((*(int *)(puVar7 + 0x3e) == -1 && *(int *)((long)puVar7 + 500) == -1) &&
          *(uint *)(puVar7 + 0x36) < 2)) {
        if ((*(char *)(param_1 + 6) != '\0') &&
           ((*(long *)PTR_DAT_04bb3968 != 0 &&
            (lVar9 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar9 != 0)))) {
          if (*(char *)(puVar7 + 0x45) == '\0') {
            FUN_0211f1c0(lVar9,param_1 + 1);
          }
          else {
            FUN_0211efb8(lVar9,param_1 + 1,param_1 + 2,param_1 + 5);
          }
        }
        local_ac = *(byte *)(param_1 + 7);
        local_a8 = PTR_DAT_04bbba70 + 0x10;
        if (7 < local_ac) {
          local_ac = 0xff;
        }
        local_b0 = 0x3e;
        FUN_0339bb10(*(undefined8 *)(*(long *)puVar2 + 0x10),&local_b0);
        *param_1 = 5;
      }
    }
    break;
  case 5:
    puVar7 = (undefined8 *)
             FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),0x3e,PTR_DAT_04bb32e0);
    if (puVar7 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bc5e20 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc5e20), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc5e18 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5e20);
      }
      uVar8 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc5e18);
      if ((uVar8 & 1) != 0) break;
    }
    goto LAB_03460834;
  case 6:
    lVar9 = *(long *)PTR_DAT_04bc67e0;
    if ((*(int *)(lVar9 + 0x1f0) != -1 || *(int *)(lVar9 + 500) != -1) ||
        1 < *(uint *)(lVar9 + 0x1b0)) break;
LAB_03460834:
    *param_1 = 0;
  }
  return *param_1;
}


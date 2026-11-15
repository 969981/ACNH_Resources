
void FUN_0234ad28(long param_1,undefined1 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if (**(char **)(param_1 + 0x5fa8) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xc1a9) = param_2;
  FUN_0090d180(auStack_78,*(undefined8 *)PTR_DAT_04bb4868);
  puVar2 = PTR_DAT_04bb27c0;
  uVar8 = *(uint *)(*(long *)(param_1 + 0xbe10) +
                    (ulong)(*(uint *)(*(long *)(param_1 + 0xbe10) + 0x10) & 1) * 0x14 + 0x1c);
  if ((uVar8 != 0) && (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 != 0)) {
    plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
    ;
    if ((plVar7 == (long *)0x0) ||
       (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_0234ae28;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0234ae28:
      uVar8 = 0;
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0x2a];
      if (((*PTR_DAT_04bc3060 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc3060), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bc3058 = PTR_DAT_04bbe058 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3060);
      }
      uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bc3058);
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar8;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        FUN_025723c0(plVar7,auStack_60,auStack_50);
      }
    }
  }
  uVar8 = *(uint *)(*(long *)(param_1 + 0xbdd0) +
                    ((ulong)*(uint *)(*(long *)(param_1 + 0xbdd0) + 0x10) & 1) * 0x20 + 0x28);
  if ((uVar8 != 0) && (lVar6 = *(long *)puVar2, lVar6 != 0)) {
    plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
    ;
    if ((plVar7 == (long *)0x0) ||
       (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar4 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_0234af40;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0234af40:
      uVar8 = 0;
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0x2a];
      if (((*PTR_DAT_04bc3070 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc3070), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bc3068 = PTR_DAT_04bbe058 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3070);
      }
      uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bc3068);
      uVar1 = 0;
      if ((int)lVar6 == 1) {
        uVar1 = uVar8;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        FUN_02570810(plVar7,auStack_60,auStack_50);
      }
    }
  }
  uVar8 = *(uint *)(*(long *)(param_1 + 0xbde0) +
                    ((ulong)*(uint *)(*(long *)(param_1 + 0xbde0) + 0x10) & 1) * 0x20 + 0x28);
  if (uVar8 == 0) {
    return;
  }
  lVar6 = *(long *)puVar2;
  if (lVar6 == 0) {
    return;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x0234b068;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0234b068;
    }
  }
  uVar8 = 0;
joined_r0x0234b068:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bc3090 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc3090), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc3088 = PTR_DAT_04bbe058 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3090);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bc3088);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((((uVar5 & 1) != 0) && (uVar1 != 0)) && (lVar6 = plVar7[0xc], lVar6 != 0)) &&
       (*(long *)(lVar6 + 0x1150) != 0)) {
      uVar5 = 0xffffffffffff;
      if ((*(ulong **)(lVar6 + 0x1180) != (ulong *)0x0) && (*(long *)(lVar6 + 0x1160) != 0)) {
        uVar5 = **(ulong **)(lVar6 + 0x1180);
      }
      if ((((((uint)(uVar5 >> 0x20) ^ 0xffffffff) & 0xffff) != 0) &&
          ((((uint)uVar5 ^ 0xffffffff) & 0xffff) != 0)) &&
         ((((uint)(uVar5 >> 0x10) ^ 0xffffffff) & 0xffff) != 0)) {
        plVar7 = (long *)**(undefined8 **)
                           (*(long *)(*(long *)(lVar6 + 0x1150) + 0x38) +
                           (-(uVar5 >> 0xf & 1) & 0xfffffffffff80000 | (uVar5 & 0xffff) << 3));
        (**(code **)(*plVar7 + 0x158))
                  (plVar7,(int)(short)(uVar5 >> 0x10),(int)(short)(uVar5 >> 0x20),auStack_60);
      }
    }
  }
  return;
}



void FUN_02119824(long param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_04bb2720;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x15 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar6,0);
      if ((iVar5 == 0x758f7eaf) &&
         ((*(long *)puVar4 != 0 && (lVar9 = *(long *)(*(long *)puVar4 + 0x330), lVar9 != 0)))) {
        uVar11 = *(uint *)(lVar9 + 0x248);
        lVar9 = param_1 + 0x10;
        if (uVar11 < 8) {
          lVar9 = lVar9 + (ulong)uVar11 * 0x1c;
        }
        goto LAB_02119928;
      }
    }
    lVar9 = param_1 + 0x10;
  }
  else {
    lVar9 = param_1 + 0xd4;
  }
LAB_02119928:
  *(undefined4 *)(lVar9 + 0x18) = *param_2;
  puVar4 = PTR_DAT_04bb27c0;
  uVar11 = *(uint *)(param_1 + 0xf0);
  if (uVar11 == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x021199e8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x021199e8;
    }
  }
  uVar11 = 0;
joined_r0x021199e8:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      puVar6 = (undefined8 *)plVar10[0x77];
      if (((*PTR_DAT_04bc2280 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2280);
      }
      if ((puVar6 != (undefined8 *)0x0) &&
         (uVar8 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc2278), (uVar8 & 1) != 0)) {
        *(undefined4 *)(puVar6 + 0x15f0) = *param_2;
      }
    }
  }
  return;
}


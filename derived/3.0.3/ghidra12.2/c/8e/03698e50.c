
void FUN_03698e50(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  undefined **local_60 [4];
  
  uVar5 = FUN_0375f6e0();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bb59d8 != 0) {
    FUN_0370d960(*(long *)PTR_DAT_04bb59d8 + 0x10,1);
  }
  lVar7 = *(long *)PTR_DAT_04bb3968;
  if (lVar7 != 0) {
    local_60[0] = &PTR_FUN_04b43670;
    if (*(int *)(lVar7 + 0xb88) != 0) {
      lVar10 = (long)*(int *)(lVar7 + 0xb88) << 3;
      puVar9 = *(undefined8 **)(lVar7 + 0xb90);
      do {
        (*(code *)*local_60[0])(local_60,*puVar9);
        lVar10 = lVar10 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar10 != 0);
    }
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    uVar11 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar11 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar11)) {
      plVar8 = (long *)0x0;
    }
    if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar6 + 0x60))();
      if (iVar3 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_03698f8c;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_03698f8c:
      uVar11 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      uVar1 = *(uint *)(plVar8 + 0x49);
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
      if ((((int)lVar7 == 1) && ((uVar4 & uVar11) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        FUN_00901658(plVar8);
      }
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar3 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  iVar3 = *(int *)(puVar9 + 7);
  if (((((DAT_05ac0a90 != iVar3) && (DAT_05ac0aa0 != iVar3)) &&
       ((DAT_05ac0ab0 != iVar3 && ((DAT_05ac0ac0 != iVar3 && (DAT_05ac0ad0 != iVar3)))))) &&
      (DAT_05ac0ae0 != iVar3)) &&
     ((((DAT_05ac0af0 != iVar3 && (DAT_05ac0b00 != iVar3)) && (DAT_05ac0b10 != iVar3)) &&
      (DAT_05ac0b20 != iVar3)))) {
    return;
  }
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return;
  }
  uVar11 = *(uint *)PTR_DAT_04bb3958;
  if (((uVar11 == 0) ||
      (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                          ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
     (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar11)))) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar11 = 1;
      goto joined_r0x03699194;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x03699194;
    }
  }
  uVar11 = 0;
joined_r0x03699194:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3928);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      FUN_02049104(plVar8);
      FUN_020494b4(plVar8);
    }
  }
  return;
}


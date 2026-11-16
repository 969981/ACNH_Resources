
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0252b11c(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  short *psVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar11 = *puVar1;
  }
  else {
    uVar11 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar11 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar11)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0252b2a8;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0252b2a8;
    }
  }
  uVar11 = 0;
joined_r0x0252b2a8:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar9[0x2a];
  uVar2 = *(uint *)(plVar9 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
  if ((int)lVar7 != 1) {
    return 0;
  }
  if ((uVar5 & uVar11) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  if ((DAT_054f5738 == 0) || (uVar8 = (ulong)*param_1, 7 < uVar8)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar10 = &DAT_054f0c08;
      if (iVar4 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar10 = &DAT_054f0c08;
    }
  }
  else {
    psVar10 = (short *)(DAT_054f5738 + uVar8 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + uVar8 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((((char)psVar10[0x32] == '\0') || (*psVar10 != *(short *)PTR_DAT_04bb6298)) ||
      (0x148 < *(uint *)(psVar10 + 2))) || (*(uint *)(psVar10 + 2) != 0xbc)) {
    FUN_02373ee0(plVar9,6,1,1);
    return 1;
  }
  return 1;
}


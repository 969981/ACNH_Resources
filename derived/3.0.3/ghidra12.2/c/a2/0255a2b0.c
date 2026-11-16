
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0255a2b0(byte *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  long *plVar13;
  uint uVar14;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar14 = *puVar1;
  }
  else {
    uVar14 = *(uint *)PTR_DAT_04bb3238;
  }
  if ((uVar14 != 0) && (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
    plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                        ((ulong)(uVar14 >> 0x11) & 0x7ff8));
    if ((plVar13 == (long *)0x0) ||
       (((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar13 + 0x46) != uVar14)))) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar7 + 0x60))();
      if (iVar6 < 0x11) {
        uVar14 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0255a3b0;
        uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0255a3b0:
      uVar14 = 0;
    }
    if (plVar13 != (long *)0x0) {
      lVar10 = plVar13[0x2a];
      uVar2 = *(uint *)(plVar13 + 0x49);
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar4 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3770);
      if ((((int)lVar10 == 1) && ((uVar4 & uVar14) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
        uVar5 = FUN_0231fe90(plVar13);
        *param_2 = uVar5;
        uVar8 = 1;
        param_2[4] = (int)plVar13[0x3e9];
        param_2[1] = *(undefined4 *)((long)plVar13 + 0x1f3c);
        param_2[2] = (int)plVar13[1000];
        param_2[3] = *(undefined4 *)((long)plVar13 + 0x1f44);
        uVar9 = *(undefined1 *)((long)plVar13 + 0x1f4c);
        goto LAB_0255a560;
      }
    }
  }
  *param_2 = 0;
  uVar11 = (ulong)*param_1;
  if (uVar11 < 8) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar12 = &DAT_054f0c08;
        if (iVar6 != 0) {
          DAT_054f0c6c = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
          psVar12 = &DAT_054f0c08;
        }
      }
      else {
        psVar12 = &DAT_054f0c08;
      }
    }
    else {
      psVar12 = (short *)(DAT_054f5738 + uVar11 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + uVar11 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((char)psVar12[0x32] != '\0') && (*psVar12 == *(short *)PTR_DAT_04bb6298)) {
      param_2[1] = *(undefined4 *)(psVar12 + 6);
      param_2[2] = *(undefined4 *)(psVar12 + 8);
      param_2[3] = *(undefined4 *)(psVar12 + 10);
    }
    uVar11 = (ulong)*param_1;
    if (uVar11 < 8) {
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0c70 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_054f0c70);
          psVar12 = &DAT_054f0c08;
          if (iVar6 != 0) {
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
          psVar12 = &DAT_054f0c08;
        }
      }
      else {
        psVar12 = (short *)(DAT_054f5738 + uVar11 * 0xd0 +
                            (ulong)(*(uint *)(DAT_054f5738 + uVar11 * 4 + 0xd68) & 1) * 0x68 + 0x6e8
                           );
      }
      if (((char)psVar12[0x32] != '\0') && (*psVar12 == *(short *)PTR_DAT_04bb6298)) {
        uVar9 = 0;
        uVar8 = 0;
        param_2[4] = *(undefined4 *)(psVar12 + 0x22);
        goto LAB_0255a560;
      }
    }
  }
  uVar9 = 0;
  uVar8 = 0;
LAB_0255a560:
  *(undefined1 *)(param_2 + 5) = uVar9;
  return uVar8;
}


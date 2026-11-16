
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02530720(byte *param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  short *psVar8;
  uint *puVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  
  if ((DAT_054f5738 == 0) || (uVar10 = (ulong)*param_1, 7 < uVar10)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar4 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
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
      psVar8 = &DAT_054f0c08;
      cVar2 = DAT_054f0c6c;
      goto joined_r0x02530844;
    }
    psVar8 = &DAT_054f0c08;
    if (DAT_054f0c6c != '\0') goto LAB_02530798;
LAB_02530848:
    puVar3 = PTR_DAT_04bb27c0;
    puVar9 = (uint *)PTR_DAT_04bb3238;
    if ((ulong)*param_1 < 8) {
      if (DAT_054f5738 != 0) {
        puVar9 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
      }
    }
    lVar7 = *(long *)PTR_DAT_04bb27c0;
    if (lVar7 != 0) {
      uVar12 = *puVar9;
      if (((uVar12 == 0) ||
          (plVar11 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                               ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar12)))) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
        plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar7 = *(long *)puVar3;
        iVar4 = (**(code **)(*plVar5 + 0x60))();
        if (iVar4 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_02530924;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02530924:
        uVar12 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar7 = plVar11[0x2a];
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar10 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
        uVar1 = 0;
        if ((int)lVar7 == 1) {
          uVar1 = uVar12;
        }
        if ((((uVar10 & 1) != 0) && (uVar1 != 0)) &&
           (uVar10 = FUN_0231bcdc(plVar11), (uVar10 & 1) == 0)) goto LAB_025307c4;
      }
    }
    uVar6 = 0;
  }
  else {
    lVar7 = DAT_054f5738 + uVar10 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar10 * 4 + 0xd68) & 1) * 0x68;
    psVar8 = (short *)(lVar7 + 0x6e8);
    cVar2 = *(char *)(lVar7 + 0x74c);
joined_r0x02530844:
    if (cVar2 == '\0') goto LAB_02530848;
LAB_02530798:
    if (((*psVar8 != *(short *)PTR_DAT_04bb6298) || (0x148 < *(uint *)(psVar8 + 2))) ||
       (*(uint *)(psVar8 + 2) != 0x1a)) goto LAB_02530848;
LAB_025307c4:
    uVar6 = 1;
  }
  return uVar6;
}


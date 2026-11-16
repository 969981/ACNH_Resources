
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_025465c4(byte *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  short *psVar11;
  uint uVar12;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar12 = *puVar1;
  }
  else {
    uVar12 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar12 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar12 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x025466c8;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x025466c8;
    }
  }
  uVar12 = 0;
joined_r0x025466c8:
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0x2a];
    uVar2 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
    if ((int)lVar7 != 1) {
      return 0;
    }
    if ((uVar5 & uVar12) == 0) {
      return 0;
    }
    if ((uVar2 >> 4 & 1) == 0) {
      return 0;
    }
    if ((DAT_054f5738 == 0) || (uVar9 = (ulong)*param_1, 7 < uVar9)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar11 = &DAT_054f0c08;
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
        psVar11 = &DAT_054f0c08;
      }
    }
    else {
      psVar11 = (short *)(DAT_054f5738 + uVar9 * 0xd0 +
                          (ulong)(*(uint *)(DAT_054f5738 + uVar9 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if ((char)psVar11[0x32] != '\0') {
      if (*psVar11 != *(short *)PTR_DAT_04bb6298) {
        return 0;
      }
      if (0x148 < *(uint *)(psVar11 + 2)) {
        return 0;
      }
      if (*(uint *)(psVar11 + 2) != 0xf3) {
        return 0;
      }
      lVar8 = plVar10[0xe];
      uVar12 = 0;
      lVar7 = 0;
      if (lVar8 != 0) {
        uVar12 = 0;
        if (*(uint *)(lVar8 + 0x280) < 0x149) {
          uVar12 = *(uint *)(lVar8 + 0x280);
        }
        lVar7 = lVar8 + 0x278;
      }
      if (uVar12 != 0xf2) {
        plVar10[0x318] = plVar10[0x328];
        plVar10[0x318] = 0;
        plVar10[0x319] = plVar10[0x329];
        plVar10[0x319] = 0;
        plVar10[0x31a] = plVar10[0x32a];
        plVar10[0x31a] = 0;
        *(short *)(plVar10 + 0x31b) = (short)plVar10[0x32b];
        plVar10[0x314] = plVar10[0x324];
        plVar10[0x314] = 0;
        plVar10[0x315] = plVar10[0x325];
        plVar10[0x315] = 0;
        plVar10[0x316] = plVar10[0x326];
        plVar10[0x316] = 0;
        plVar10[0x317] = plVar10[0x327];
        plVar10[0x317] = 0;
        plVar10[0x310] = plVar10[800];
        plVar10[0x310] = 0;
        plVar10[0x311] = plVar10[0x321];
        plVar10[0x311] = 0;
        plVar10[0x312] = plVar10[0x322];
        plVar10[0x312] = 0;
        plVar10[0x313] = plVar10[0x323];
        plVar10[0x313] = 0;
        plVar10[0x30c] = plVar10[0x31c];
        plVar10[0x30d] = plVar10[0x31d];
        plVar10[0x30e] = plVar10[0x31e];
        plVar10[0x30f] = plVar10[799];
        FUN_03ebb160(lVar7,0xf2);
        return 1;
      }
    }
  }
  return 0;
}


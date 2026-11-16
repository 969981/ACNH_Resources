
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02546310(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar6 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  uVar10 = *puVar6;
  if (uVar10 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8));
  if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02546408;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02546408;
    }
  }
  uVar10 = 0;
joined_r0x02546408:
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
    if ((int)lVar7 != 1) {
      return 0;
    }
    if ((uVar4 & uVar10) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    lVar8 = plVar9[0xe];
    uVar10 = 0;
    lVar7 = 0;
    if (lVar8 != 0) {
      uVar10 = 0;
      if (*(uint *)(lVar8 + 0x280) < 0x149) {
        uVar10 = *(uint *)(lVar8 + 0x280);
      }
      lVar7 = lVar8 + 0x278;
    }
    if (uVar10 != 0xf3) {
      plVar9[0x318] = plVar9[0x328];
      plVar9[0x318] = 0;
      plVar9[0x319] = plVar9[0x329];
      plVar9[0x319] = 0;
      plVar9[0x31a] = plVar9[0x32a];
      plVar9[0x31a] = 0;
      *(short *)(plVar9 + 0x31b) = (short)plVar9[0x32b];
      plVar9[0x314] = plVar9[0x324];
      plVar9[0x314] = 0;
      plVar9[0x315] = plVar9[0x325];
      plVar9[0x315] = 0;
      plVar9[0x316] = plVar9[0x326];
      plVar9[0x316] = 0;
      plVar9[0x317] = plVar9[0x327];
      plVar9[0x317] = 0;
      plVar9[0x310] = plVar9[800];
      plVar9[0x310] = 0;
      plVar9[0x311] = plVar9[0x321];
      plVar9[0x311] = 0;
      plVar9[0x312] = plVar9[0x322];
      plVar9[0x312] = 0;
      plVar9[0x313] = plVar9[0x323];
      plVar9[0x313] = 0;
      plVar9[0x30c] = plVar9[0x31c];
      plVar9[0x30d] = plVar9[0x31d];
      plVar9[0x30e] = plVar9[0x31e];
      plVar9[0x30f] = plVar9[799];
      FUN_03ebb160(lVar7,0xf3);
      return 1;
    }
  }
  return 0;
}


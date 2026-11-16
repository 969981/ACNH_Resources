
undefined8 FUN_0252a66c(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar6 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  uVar9 = *puVar6;
  if (uVar9 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0252a894;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0252a894;
    }
  }
  uVar9 = 0;
joined_r0x0252a894:
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar8[0x2a];
  uVar1 = *(uint *)(plVar8 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
  if ((int)lVar7 != 1) {
    return 0;
  }
  if ((uVar4 & uVar9) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  plVar8[0x318] = plVar8[0x328];
  plVar8[0x318] = 0;
  plVar8[0x319] = plVar8[0x329];
  plVar8[0x319] = 0;
  plVar8[0x31a] = plVar8[0x32a];
  plVar8[0x31a] = 0;
  *(short *)(plVar8 + 0x31b) = (short)plVar8[0x32b];
  plVar8[0x314] = plVar8[0x324];
  plVar8[0x314] = 0;
  plVar8[0x315] = plVar8[0x325];
  plVar8[0x315] = 0;
  plVar8[0x316] = plVar8[0x326];
  plVar8[0x316] = 0;
  plVar8[0x317] = plVar8[0x327];
  plVar8[0x317] = 0;
  plVar8[0x310] = plVar8[800];
  plVar8[0x310] = 0;
  plVar8[0x311] = plVar8[0x321];
  plVar8[0x311] = 0;
  plVar8[0x312] = plVar8[0x322];
  plVar8[0x312] = 0;
  plVar8[0x313] = plVar8[0x323];
  plVar8[0x313] = 0;
  plVar8[0x30c] = plVar8[0x31c];
  plVar8[0x30d] = plVar8[0x31d];
  plVar8[0x30e] = plVar8[0x31e];
  plVar8[0x30f] = plVar8[799];
  lVar7 = 0;
  if (plVar8[0xe] != 0) {
    lVar7 = plVar8[0xe] + 0x278;
  }
  FUN_03ebb160(lVar7,0xe2);
  return 1;
}


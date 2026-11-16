
undefined8 FUN_02529bf4(byte *param_1,undefined1 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar1 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar1 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar9 = *puVar1;
  }
  else {
    uVar9 = *(uint *)PTR_DAT_04bb3238;
  }
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
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x02529e40;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02529e40;
    }
  }
  uVar9 = 0;
joined_r0x02529e40:
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar8[0x2a];
  uVar2 = *(uint *)(plVar8 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
  if ((int)lVar7 != 1) {
    return 0;
  }
  if ((uVar5 & uVar9) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  plVar8[0x331] = 0;
  plVar8[0x332] = 0;
  plVar8[0x333] = 0;
  plVar8[0x334] = 0;
  plVar8[0x335] = 0;
  plVar8[0x336] = 0;
  plVar8[0x337] = 0;
  plVar8[0x338] = 0;
  plVar8[0x339] = 0;
  plVar8[0x33a] = 0;
  plVar8[0x32c] = plVar8[0x31c];
  *(undefined2 *)(plVar8 + 0x33b) = 0;
  plVar8[0x32d] = plVar8[0x31d];
  plVar8[0x32e] = plVar8[0x31e];
  plVar8[0x32f] = plVar8[799];
  plVar8[0x330] = 0;
  *(undefined1 *)(plVar8 + 0x330) = param_2;
  plVar8[0x318] = plVar8[0x338];
  plVar8[0x319] = plVar8[0x339];
  plVar8[0x31a] = plVar8[0x33a];
  *(short *)(plVar8 + 0x31b) = (short)plVar8[0x33b];
  plVar8[0x314] = plVar8[0x334];
  plVar8[0x315] = plVar8[0x335];
  plVar8[0x316] = plVar8[0x336];
  plVar8[0x317] = plVar8[0x337];
  plVar8[0x310] = plVar8[0x330];
  plVar8[0x311] = plVar8[0x331];
  plVar8[0x312] = plVar8[0x332];
  plVar8[0x313] = plVar8[0x333];
  plVar8[0x30c] = plVar8[0x32c];
  plVar8[0x30d] = plVar8[0x32d];
  plVar8[0x30f] = plVar8[0x32f];
  plVar8[0x30e] = plVar8[0x32e];
  lVar7 = 0;
  if (plVar8[0xe] != 0) {
    lVar7 = plVar8[0xe] + 0x278;
  }
  FUN_03ebb160(lVar7,0xd5);
  return 1;
}


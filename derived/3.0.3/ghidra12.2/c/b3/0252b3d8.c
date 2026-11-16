
undefined8 FUN_0252b3d8(byte *param_1,float *param_2,byte param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  float *pfVar8;
  long lVar9;
  long *plVar10;
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
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0252b64c;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0252b64c;
    }
  }
  uVar11 = 0;
joined_r0x0252b64c:
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar10[0x2a];
  uVar2 = *(uint *)(plVar10 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar5 & uVar11) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  pfVar8 = (float *)(**(code **)(*(long *)plVar10[0xd] + 0xf8))();
  uVar6 = FUN_006f0400(*param_2 - *pfVar8,param_2[2] - pfVar8[2]);
  *(undefined4 *)(plVar10 + 0x185) = uVar6;
  *(byte *)((long)plVar10 + 0xc2c) = param_3 & 1;
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
  lVar9 = 0;
  if (plVar10[0xe] != 0) {
    lVar9 = plVar10[0xe] + 0x278;
  }
  FUN_03ebb160(lVar9,0xa3);
  return 1;
}


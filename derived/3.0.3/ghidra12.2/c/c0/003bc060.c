
ulong FUN_003bc060(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar7 = param_3 / 0x4b0;
  if (0 < (int)uVar7) {
    plVar1 = (long *)(param_1 + 0x28);
    uVar9 = uVar7 & 0xffffffff;
    puVar2 = PTR_DAT_04bd03e0 + 0x10;
    puVar3 = PTR_DAT_04bd03e8 + 0x10;
    plVar8 = param_2;
    do {
      FUN_003d2dd4(plVar8);
      *plVar8 = (long)puVar2;
      plVar8[0xb] = 0;
      *(undefined4 *)(plVar8 + 0xc) = 0xffffffff;
      plVar8[0xd] = 0;
      *(undefined4 *)(plVar8 + 0xe) = 0xffffffff;
      plVar8[0xf] = 0;
      *(undefined4 *)(plVar8 + 0x10) = 0xffffffff;
      plVar8[0x11] = 0;
      *(undefined4 *)(plVar8 + 0x12) = 0xffffffff;
      plVar8[0x13] = 0;
      *(undefined4 *)(plVar8 + 0x14) = 0xffffffff;
      *(undefined4 *)(plVar8 + 0x1f) = 0;
      plVar8[9] = 0;
      plVar8[10] = 0;
      plVar8[0x15] = 0;
      plVar8[0x16] = 0;
      plVar8[0x17] = 0;
      plVar8[0x18] = 0;
      plVar8[0x19] = 0;
      plVar8[0x1a] = 0;
      plVar8[0x1b] = 0;
      plVar8[0x1c] = 0;
      plVar8[0x1d] = 0;
      plVar8[0x1e] = 0;
      FUN_003d2dd4(plVar8 + 0x23);
      plVar8[0x23] = (long)puVar3;
      plVar8[0x2e] = 0;
      *(undefined4 *)(plVar8 + 0x2f) = 0xffffffff;
      plVar8[0x30] = 0;
      *(undefined4 *)(plVar8 + 0x31) = 0xffffffff;
      plVar8[0x32] = 0;
      *(undefined4 *)(plVar8 + 0x33) = 0xffffffff;
      plVar8[0x34] = 0;
      *(undefined4 *)(plVar8 + 0x35) = 0xffffffff;
      plVar8[0x36] = 0;
      *(undefined4 *)(plVar8 + 0x37) = 0xffffffff;
      plVar8[0x38] = 0;
      plVar8[0x2c] = 0;
      plVar8[0x2d] = 0;
      FUN_003d02d4(plVar8 + 0x3b);
      plVar4 = plVar8 + 0x94;
      uVar5 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar5;
      plVar8[0x94] = (long)plVar4;
      plVar8[0x95] = (long)plVar4;
      lVar6 = *plVar1;
      plVar8[0x95] = (long)plVar1;
      plVar8[0x94] = lVar6;
      plVar8 = plVar8 + 0x96;
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar1 = (long)plVar4;
    } while (uVar5 != 0);
  }
  *(long **)(param_1 + 0x18) = param_2;
  *(ulong *)(param_1 + 0x20) = param_3;
  return uVar7 & 0xffffffff;
}


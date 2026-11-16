
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02557570(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  uint uVar9;
  uint local_3c [2];
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar7 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *puVar7;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x02557664;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02557664;
    }
  }
  uVar9 = 0;
joined_r0x02557664:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
    if ((int)lVar6 != 1) {
      return 0;
    }
    if ((uVar4 & uVar9) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    local_3c[0] = 0;
    if (plVar8[0xe] != 0) {
      uVar9 = *(uint *)(plVar8[0xe] + 0x280);
      local_3c[0] = 0;
      if (uVar9 < 0x149) {
        local_3c[0] = uVar9;
      }
    }
    if (local_3c[0] == 0x148) {
      FUN_0244d1b8(0,plVar8);
      FUN_0244b5a8(local_3c,plVar8 + 0x3dd);
      local_34 = 0;
      if (plVar8[0x53] != 0) {
        FUN_0234e4e0(plVar8[0x53],local_3c,&local_34);
      }
      plVar8[0x330] = 0;
      plVar8[0x331] = 0;
      plVar8[0x33a] = 0;
      *(undefined2 *)(plVar8 + 0x33b) = 0;
      *(undefined1 *)((long)plVar8 + 0x1983) = 0;
      plVar8[0x32c] = plVar8[0x31c];
      plVar8[0x32d] = plVar8[0x31d];
      plVar8[0x332] = 0;
      plVar8[0x333] = 0;
      plVar8[0x32e] = plVar8[0x31e];
      plVar8[0x32f] = plVar8[799];
      plVar8[0x334] = 0;
      plVar8[0x335] = 0;
      plVar8[0x336] = 0;
      plVar8[0x337] = 0;
      *(undefined2 *)(plVar8 + 0x330) = 0x601;
      plVar8[0x338] = 0;
      plVar8[0x339] = 0;
      local_3c[0] = 0x19;
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
      lVar6 = 0;
      if (plVar8[0xe] != 0) {
        lVar6 = plVar8[0xe] + 0x278;
      }
      FUN_03ebb160(lVar6,0x19);
      return 1;
    }
  }
  return 0;
}


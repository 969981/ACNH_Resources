
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0252412c(byte *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  
  puVar4 = PTR_DAT_04bb27c0;
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
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0252422c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0252422c;
    }
  }
  uVar11 = 0;
joined_r0x0252422c:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    uVar2 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
    if ((int)lVar8 != 1) {
      return 0;
    }
    if ((uVar6 & uVar11) == 0) {
      return 0;
    }
    if ((uVar2 >> 4 & 1) == 0) {
      return 0;
    }
    lVar8 = plVar10[0xd];
    if (lVar8 != 0) {
      plVar10[0x330] = 0;
      plVar10[0x331] = 0;
      plVar10[0x332] = 0;
      plVar10[0x333] = 0;
      plVar10[0x334] = 0;
      plVar10[0x335] = 0;
      plVar10[0x336] = 0;
      plVar10[0x337] = 0;
      plVar10[0x338] = 0;
      plVar10[0x32c] = plVar10[0x31c];
      plVar10[0x339] = 0;
      plVar10[0x33a] = 0;
      *(undefined2 *)(plVar10 + 0x33b) = 0;
      plVar10[0x32d] = plVar10[0x31d];
      plVar10[0x32e] = plVar10[0x31e];
      plVar10[0x32f] = plVar10[799];
      fVar12 = *(float *)(lVar8 + 0x280);
      iVar3 = *(int *)(lVar8 + 0x2b4);
      iVar5 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
      *(int *)((long)plVar10 + 0x1982) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
      if (0x7ffe < iVar5) {
        iVar5 = 0x7fff;
      }
      if (iVar5 < -0x7fff) {
        iVar5 = -0x8000;
      }
      *(short *)((long)plVar10 + 0x1986) = (short)iVar5;
      *(int *)(plVar10 + 0x331) = (int)(fVar12 * 999.99994);
      iVar5 = -0x40000000;
      if (param_2 == 1) {
        iVar5 = 0x40000000;
      }
      uVar9 = 3;
      if (param_2 == 1) {
        uVar9 = 1;
      }
      *(short *)(plVar10 + 0x330) = (short)((uint)(iVar3 + iVar5) >> 0x10);
      *(undefined1 *)((long)plVar10 + 0x198c) = uVar9;
      plVar10[0x318] = plVar10[0x338];
      plVar10[0x319] = plVar10[0x339];
      plVar10[0x31a] = plVar10[0x33a];
      *(short *)(plVar10 + 0x31b) = (short)plVar10[0x33b];
      plVar10[0x314] = plVar10[0x334];
      plVar10[0x315] = plVar10[0x335];
      plVar10[0x316] = plVar10[0x336];
      plVar10[0x317] = plVar10[0x337];
      plVar10[0x310] = plVar10[0x330];
      plVar10[0x311] = plVar10[0x331];
      plVar10[0x312] = plVar10[0x332];
      plVar10[0x313] = plVar10[0x333];
      plVar10[0x30c] = plVar10[0x32c];
      plVar10[0x30d] = plVar10[0x32d];
      plVar10[0x30f] = plVar10[0x32f];
      plVar10[0x30e] = plVar10[0x32e];
      lVar8 = 0;
      if (plVar10[0xe] != 0) {
        lVar8 = plVar10[0xe] + 0x278;
      }
      FUN_03ebb160(lVar8,0x67);
      return 1;
    }
  }
  return 0;
}


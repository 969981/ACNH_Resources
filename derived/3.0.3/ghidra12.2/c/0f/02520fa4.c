
undefined8 FUN_02520fa4(byte *param_1,long *param_2,float *param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  long *plVar11;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_4c;
  int local_48;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((ulong)*param_1 < 8) {
    puVar8 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar8 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar5 = *puVar8;
  }
  else {
    uVar5 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar5 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar5 >> 0x11) & 0x7ff8));
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar5)) {
    plVar11 = (long *)0x0;
  }
  local_4c = param_4;
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_025210ac;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_025210ac:
    uVar5 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar11[0x2a];
  uVar1 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar4 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
  puVar2 = PTR_DAT_04bb43c0;
  if ((int)lVar7 != 1) {
    return 0;
  }
  if ((uVar4 & uVar5) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  local_58 = 0;
  local_60 = (undefined4)*param_2;
  uStack_5c = *(undefined4 *)((long)param_2 + 4);
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar2 == 0) {
LAB_025212f0:
    uVar9 = 0xbc;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_025212f0;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(param_2);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
       (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), puVar8 == (uint *)0x0)
       ) goto LAB_025212f0;
    uVar9 = 0;
    uVar5 = *puVar8;
    if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar9 < 0xbd)) goto LAB_02521244;
          }
        }
        uVar9 = 0;
      }
    }
LAB_02521244:
    if (uVar9 == 0x6a) goto LAB_0252132c;
    uVar9 = 0;
    uVar5 = *puVar8;
    if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar9 < 0xbd)) goto LAB_02521318;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_02521318:
  if (uVar9 != 0x6b) {
    return 0;
  }
LAB_0252132c:
  if (local_4c == 0) {
    local_48 = 1;
  }
  else {
    local_48 = (uint)(local_4c == 2) << 1;
  }
  plVar11[0x330] = 0;
  plVar11[0x331] = 0;
  plVar11[0x332] = 0;
  plVar11[0x333] = 0;
  plVar11[0x334] = 0;
  plVar11[0x335] = 0;
  plVar11[0x336] = 0;
  plVar11[0x337] = 0;
  plVar11[0x338] = 0;
  plVar11[0x339] = 0;
  plVar11[0x32c] = plVar11[0x31c];
  plVar11[0x33a] = 0;
  *(undefined2 *)(plVar11 + 0x33b) = 0;
  plVar11[0x32d] = plVar11[0x31d];
  plVar11[0x32e] = plVar11[0x31e];
  plVar11[0x32f] = plVar11[799];
  plVar11[0x330] = *param_2;
  *(int *)(plVar11 + 0x331) = (int)(*param_3 * 999.99994);
  iVar3 = (int)(param_3[1] * 4.0);
  if (0x7ffe < iVar3) {
    iVar3 = 0x7fff;
  }
  if (iVar3 < -0x7fff) {
    iVar3 = -0x8000;
  }
  *(short *)((long)plVar11 + 0x198c) = (short)iVar3;
  *(int *)((long)plVar11 + 0x198e) = (int)(param_3[2] * 999.99994);
  *(short *)((long)plVar11 + 0x1992) = (short)local_48;
  local_44 = 0xf8;
  if (1 < (int)plVar11[0x302] - 5U) {
    local_44 = 0x9e;
  }
  if (local_44 < 0x149) {
    plVar11[0x318] = plVar11[0x338];
    plVar11[0x319] = plVar11[0x339];
    plVar11[0x31a] = plVar11[0x33a];
    *(short *)(plVar11 + 0x31b) = (short)plVar11[0x33b];
    plVar11[0x314] = plVar11[0x334];
    plVar11[0x315] = plVar11[0x335];
    plVar11[0x316] = plVar11[0x336];
    plVar11[0x317] = plVar11[0x337];
    plVar11[0x310] = plVar11[0x330];
    plVar11[0x311] = plVar11[0x331];
    plVar11[0x312] = plVar11[0x332];
    plVar11[0x313] = plVar11[0x333];
    plVar11[0x30c] = plVar11[0x32c];
    plVar11[0x30d] = plVar11[0x32d];
    plVar11[0x30f] = plVar11[0x32f];
    plVar11[0x30e] = plVar11[0x32e];
    lVar7 = 0;
    if (plVar11[0xe] != 0) {
      lVar7 = plVar11[0xe] + 0x278;
    }
    FUN_03ebb160(lVar7,local_44);
  }
  return 1;
}


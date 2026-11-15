
uint FUN_021baad0(long param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    pbVar1 = (byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
                     *(long *)(*(long *)(param_1 + 0x10) + 8));
    uVar6 = (ulong)*pbVar1;
    if (((uVar6 < 0x23) && (pbVar1[1] <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(pbVar1[1] & 0x1f) & 1) != 0)) {
      uVar9 = (*(int *)(pbVar1 + 0x10764) != 0 ^ param_3) & 1;
      goto joined_r0x021bab50;
    }
  }
  uVar9 = 0;
joined_r0x021bab50:
  if ((uVar4 >> 1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x13230);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x13231) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x13231) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0x23994) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 2;
      }
    }
  }
  if ((uVar4 >> 2 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x26460);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x26461) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x26461) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0x36bc4) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 4;
      }
    }
  }
  if ((uVar4 >> 3 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x39690);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x39691) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x39691) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0x49df4) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 8;
      }
    }
  }
  if ((uVar4 >> 4 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x4c8c0);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x4c8c1) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x4c8c1) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0x5d024) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 0x10;
      }
    }
  }
  if ((uVar4 >> 5 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x5faf0);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x5faf1) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x5faf1) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0x70254) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 0x20;
      }
    }
  }
  if ((uVar4 >> 6 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x72d20);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x72d21) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x72d21) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0x83484) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 0x40;
      }
    }
  }
  if ((uVar4 >> 7 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x85f50);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x85f51) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x85f51) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0x966b4) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 0x80;
      }
    }
  }
  if ((uVar4 >> 8 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0x99180);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0x99181) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0x99181) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0xa98e4) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 0x100;
      }
    }
  }
  if ((uVar4 >> 9 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10) + *(long *)(*(long *)(param_1 + 0x10) + 8);
    uVar6 = (ulong)*(byte *)(lVar2 + 0xac3b0);
    if (((uVar6 < 0x23) && (*(byte *)(lVar2 + 0xac3b1) <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(*(byte *)(lVar2 + 0xac3b1) & 0x1f) & 1) != 0)) {
      if (((*(int *)(lVar2 + 0xbcb14) == 0 ^ param_3) & 1) == 0) {
        uVar9 = uVar9 | 0x200;
      }
    }
  }
  puVar5 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  if ((puVar5 != (uint *)0x0) &&
     (uVar4 = uVar9 - (uVar9 >> 1 & 0x55555555),
     uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333),
     uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f, uVar4 = uVar4 + (uVar4 >> 8),
     uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f, uVar4 != 0)) {
    uVar7 = *puVar5 ^ *puVar5 << 0xb;
    uVar3 = puVar5[3];
    *puVar5 = puVar5[1];
    puVar5[1] = puVar5[2];
    uVar7 = uVar7 >> 8 ^ uVar3 >> 0x13 ^ uVar7 ^ uVar3;
    puVar5[2] = uVar3;
    puVar5[3] = uVar7;
    uVar7 = (uint)((ulong)uVar7 * (ulong)uVar4 >> 0x20);
    if ((uVar7 < uVar4) && (uVar9 != 0)) {
      iVar8 = uVar7 + 2;
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 2) {
          uVar4 = uVar9 - 1 & (uVar9 ^ 0xffffffff);
          uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
          uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
          uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
          uVar4 = uVar4 + (uVar4 >> 8);
          return uVar4 + (uVar4 >> 0x10) & 0x3f;
        }
        uVar9 = uVar9 - 1 & uVar9;
      } while (uVar9 != 0);
    }
  }
  return 0xffffffff;
}


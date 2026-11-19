
undefined8 FUN_039c7d60(long param_1,undefined8 param_2,long param_3,uint param_4,float *param_5)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_328 [108];
  undefined1 auStack_2bc [108];
  undefined1 auStack_250 [108];
  undefined1 auStack_1e4 [108];
  undefined1 auStack_178 [108];
  undefined1 auStack_10c [108];
  
  uVar5 = FUN_039c35b4(param_3 + 0xd8,param_5);
  if ((int)uVar5 < 0) {
    return 0xfffffffd;
  }
  uVar6 = FUN_039c3864(param_3,uVar5);
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  lVar11 = *(long *)(param_1 + 0x250);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x28) == 4)) {
    lVar14 = 0;
    lVar1 = lVar11 + 0x2a8 + (ulong)param_4 * 0x400;
    if (0xf < param_4) {
      lVar1 = lVar11 + 0x2a8;
    }
    do {
      if (*(uint *)(lVar1 + lVar14 * 4) == uVar5) goto LAB_039c7e5c;
      if (*(uint *)(lVar1 + lVar14 * 4 + 4) == uVar5) {
        lVar14 = lVar14 + 1;
        goto LAB_039c7e5c;
      }
      lVar14 = lVar14 + 2;
    } while (lVar14 != 0x100);
    lVar14 = 0;
    do {
      if (*(int *)(lVar1 + lVar14 * 4) < 0) {
LAB_039c7e58:
        *(uint *)(lVar1 + lVar14 * 4) = uVar5;
LAB_039c7e5c:
        lVar1 = lVar11 + 0x42a8 + (ulong)param_4 * 0x400;
        if (0xf < param_4) {
          lVar1 = lVar11 + 0x42a8;
        }
        *(undefined4 *)(lVar1 + lVar14 * 4) = *(undefined4 *)(lVar11 + 0x82a8);
        break;
      }
      if (*(int *)(lVar1 + lVar14 * 4 + 4) < 0) {
        lVar14 = lVar14 + 1;
        goto LAB_039c7e58;
      }
      lVar14 = lVar14 + 2;
    } while (lVar14 != 0x100);
  }
  fVar17 = *(float *)(param_3 + 0x180);
  fVar16 = fVar17 * *(float *)(param_3 + 0x188);
  fVar20 = *(float *)(param_3 + 0x170);
  iVar2 = *(int *)(param_3 + 0x1f0);
  fVar23 = (float)uVar5 / fVar16;
  uVar7 = 0;
  if (fVar23 != (float)(int)fVar23) {
    uVar7 = (uint)(fVar23 < 0.0);
  }
  uVar8 = (uint)fVar16;
  fVar16 = *(float *)(param_3 + 0x120);
  uVar13 = 0;
  if (uVar8 != 0) {
    uVar13 = uVar5 / uVar8;
  }
  uVar8 = uVar5 - uVar13 * uVar8;
  iVar9 = (int)fVar17;
  uVar13 = uVar5 << 3;
  iVar4 = 0;
  if (iVar9 != 0) {
    iVar4 = (int)uVar8 / iVar9;
  }
  if (iVar2 == 1) {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar12 = 0xfff5;
    uVar10 = (uint)*(ushort *)(lVar11 + (ulong)((uVar5 & 0x1fffffff) << 2) * 4);
  }
  else {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar12 = 0xfffffff5;
    uVar10 = *(uint *)(lVar11 + (long)(int)uVar13 * 4);
  }
  fVar18 = *(float *)(param_3 + 0x124);
  fVar21 = *(float *)(param_3 + 0x174);
  fVar26 = *(float *)(param_3 + 0x178);
  fVar19 = *(float *)(param_3 + 0x128);
  fVar22 = *param_5;
  fVar25 = param_5[1];
  fVar24 = param_5[2];
  if (uVar10 < uVar12) {
    memcpy(auStack_10c,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar10 * 0x1b) * 4),
           (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
  }
  if (iVar2 == 1) {
    uVar10 = 0xfff5;
    uVar5 = (uint)*(ushort *)(lVar11 + (ulong)((uVar5 & 0x1fffffff) << 2) * 4 + 2);
  }
  else {
    uVar10 = 0xfffffff5;
    uVar5 = *(uint *)(lVar11 + (-(ulong)((uVar5 & 0x1fffffff) >> 0x1c) & 0xfffffffc00000000 |
                                (ulong)uVar13 << 2 | 4));
  }
  fVar20 = (fVar22 - (fVar16 + (float)(int)(uVar8 - iVar4 * iVar9) * fVar20)) / fVar20;
  if (uVar5 < uVar10) {
    memcpy(auStack_178,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar5 * 0x1b) * 4),
           (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
  }
  FUN_039c2e24(fVar20,auStack_250,auStack_10c,auStack_178);
  uVar15 = (ulong)(int)uVar13;
  iVar2 = *(int *)(param_3 + 0x1f0);
  if (iVar2 == 1) {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar13 = 0xfff5;
    uVar5 = (uint)*(ushort *)(lVar11 + ((uVar15 & 0xfffffffe | 4) >> 1) * 4);
  }
  else {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar13 = 0xfffffff5;
    uVar5 = *(uint *)(lVar11 + (uVar15 | 4) * 4);
  }
  if (uVar5 < uVar13) {
    memcpy(auStack_10c,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar5 * 0x1b) * 4),
           (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
  }
  if (iVar2 == 1) {
    uVar13 = 0xfff5;
    uVar5 = (uint)*(ushort *)(lVar11 + ((uVar15 | 5) >> 1 & 0x7fffffff) * 4 + 2);
  }
  else {
    uVar5 = *(uint *)(lVar11 + (uVar15 | 5) * 4);
    uVar13 = 0xfffffff5;
  }
  fVar21 = (fVar25 - (fVar18 + (float)(int)((int)fVar23 - uVar7) * fVar21)) / fVar21;
  if (uVar5 < uVar13) {
    memcpy(auStack_178,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar5 * 0x1b) * 4),
           (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
  }
  FUN_039c2e24(fVar20,auStack_2bc,auStack_10c,auStack_178);
  FUN_039c2e24(fVar21,auStack_1e4,auStack_250,auStack_2bc);
  iVar2 = *(int *)(param_3 + 0x1f0);
  if (iVar2 == 1) {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar3 = *(ushort *)(lVar11 + ((uVar15 & 0xfffffffe | 2) >> 1) * 4);
    uVar5 = (uint)uVar3;
    if (0xfff4 < uVar3) goto LAB_039c8120;
  }
  else {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar5 = *(uint *)(lVar11 + (uVar15 | 2) * 4);
    if (0xfffffff4 < uVar5) goto LAB_039c8120;
  }
  memcpy(auStack_10c,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar5 * 0x1b) * 4),
         (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
LAB_039c8120:
  if (iVar2 == 1) {
    uVar7 = 0xfff5;
    uVar5 = (uint)*(ushort *)(lVar11 + ((uVar15 | 3) >> 1 & 0x7fffffff) * 4 + 2);
  }
  else {
    uVar5 = *(uint *)(lVar11 + (uVar15 | 3) * 4);
    uVar7 = 0xfffffff5;
  }
  uVar13 = 0;
  if ((int)fVar17 != 0) {
    uVar13 = uVar8 / (uint)(int)fVar17;
  }
  if (uVar5 < uVar7) {
    memcpy(auStack_178,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar5 * 0x1b) * 4),
           (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
  }
  FUN_039c2e24(fVar20,auStack_2bc,auStack_10c,auStack_178);
  iVar2 = *(int *)(param_3 + 0x1f0);
  if (iVar2 == 1) {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar7 = 0xfff5;
    uVar5 = (uint)*(ushort *)(lVar11 + ((uVar15 & 0xfffffffe | 6) >> 1) * 4);
  }
  else {
    lVar11 = *(long *)(param_3 + 0x250);
    uVar7 = 0xfffffff5;
    uVar5 = *(uint *)(lVar11 + (uVar15 | 6) * 4);
  }
  if (uVar5 < uVar7) {
    memcpy(auStack_10c,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar5 * 0x1b) * 4),
           (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
  }
  if (iVar2 == 1) {
    uVar7 = 0xfff5;
    uVar5 = (uint)*(ushort *)(lVar11 + ((uVar15 | 7) >> 1 & 0x7fffffff) * 4 + 2);
  }
  else {
    uVar5 = *(uint *)(lVar11 + (uVar15 | 7) * 4);
    uVar7 = 0xfffffff5;
  }
  if (uVar5 < uVar7) {
    memcpy(auStack_178,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar5 * 0x1b) * 4),
           (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
  }
  FUN_039c2e24(fVar20,auStack_328,auStack_10c,auStack_178);
  FUN_039c2e24(fVar21,auStack_250,auStack_2bc,auStack_328);
  FUN_039c2e24((fVar24 - (fVar19 + (float)(int)uVar13 * fVar26)) / fVar26,param_2,auStack_1e4,
               auStack_250);
  return 0;
}


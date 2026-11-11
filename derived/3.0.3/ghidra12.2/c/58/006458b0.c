
void FUN_006458b0(undefined2 *param_1,ulong param_2)

{
  uint __c;
  byte bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  double dVar11;
  
  __c = (uint)param_2 & 1;
  uVar8 = (ulong)__c;
  fVar10 = (float)uVar8;
  dVar11 = (double)uVar8;
  bVar1 = (byte)param_2 & 1 | 2;
  *(undefined8 *)(param_1 + 0x28) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x174) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x17c) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x184) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x18c) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x194) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x19c) = 0x8000000000000000;
  uVar9 = param_2 & 1;
  *(undefined8 *)(param_1 + 0x1a4) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1ac) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1b4) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x1bc) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *param_1 = 0x101;
  *(char *)(param_1 + 1) = (char)__c;
  *(char *)((long)param_1 + 3) = (char)__c;
  uVar2 = (undefined2)__c;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  *(uint *)(param_1 + 4) = __c;
  *(uint *)(param_1 + 6) = __c;
  *(float *)(param_1 + 0x14) = fVar10;
  *(double *)(param_1 + 0x10) = dVar11;
  *(float *)(param_1 + 0x16) = fVar10;
  *(uint *)(param_1 + 0x18) = __c;
  *(uint *)(param_1 + 0x1a) = __c;
  *(byte *)(param_1 + 0x1c) = bVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(ulong *)(param_1 + 8) = uVar9;
  *(ulong *)(param_1 + 0xc) = uVar9;
  if ((param_2 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar4;
  }
  if (lVar5 != 0) {
    FUN_004435c0();
  }
  if ((*(uint *)(param_1 + 0x2a) & 0x3fffffff) == 0) {
    uVar6 = FUN_00426720(PTR_DAT_048607b8,1,1,*(undefined8 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x24) = uVar6;
    iVar7 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x28);
  }
  if (iVar7 < 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    memset((void *)(*(long *)(param_1 + 0x24) + (long)iVar7),__c,(ulong)(uint)-iVar7 + 1);
  }
  else if (iVar7 != 1) {
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  *(undefined1 **)(param_1 + 0x2c) = &DAT_101010101010101;
  *(undefined1 **)(param_1 + 0x30) = &DAT_101010101010101;
  *(undefined4 *)(param_1 + 0x34) = 0x1010101;
  lVar5 = uVar8 * 0x101010101010101;
  param_1[0x40] = uVar2;
  *(float *)(param_1 + 0xf4) = fVar10;
  *(float *)(param_1 + 0xf6) = fVar10;
  *(float *)(param_1 + 0xf8) = fVar10;
  *(float *)(param_1 + 0xfa) = fVar10;
  *(float *)(param_1 + 0xfc) = fVar10;
  *(float *)(param_1 + 0xfe) = fVar10;
  *(float *)(param_1 + 0x100) = fVar10;
  *(float *)(param_1 + 0x102) = fVar10;
  *(float *)(param_1 + 0x104) = fVar10;
  *(float *)(param_1 + 0x106) = fVar10;
  *(double *)(param_1 + 0xcc) = dVar11;
  *(double *)(param_1 + 0xd0) = dVar11;
  *(long *)(param_1 + 0x3a) = lVar5;
  *(long *)(param_1 + 0x36) = lVar5;
  *(int *)(param_1 + 0x3e) = (int)lVar5;
  param_1[0x41] = uVar2;
  param_1[0x42] = uVar2;
  param_1[0x43] = uVar2;
  param_1[0x44] = uVar2;
  param_1[0x45] = uVar2;
  param_1[0x46] = uVar2;
  param_1[0x47] = uVar2;
  param_1[0x48] = uVar2;
  param_1[0x49] = uVar2;
  param_1[0x4a] = uVar2;
  param_1[0x4b] = uVar2;
  param_1[0x4c] = uVar2;
  param_1[0x4d] = uVar2;
  param_1[0x4e] = uVar2;
  param_1[0x4f] = uVar2;
  param_1[0x50] = uVar2;
  param_1[0x51] = uVar2;
  param_1[0x52] = uVar2;
  param_1[0x53] = uVar2;
  *(uint *)(param_1 + 0x54) = __c;
  *(uint *)(param_1 + 0x56) = __c;
  *(uint *)(param_1 + 0x58) = __c;
  *(uint *)(param_1 + 0x5a) = __c;
  *(uint *)(param_1 + 0x5c) = __c;
  *(uint *)(param_1 + 0x5e) = __c;
  *(uint *)(param_1 + 0x60) = __c;
  *(uint *)(param_1 + 0x62) = __c;
  *(uint *)(param_1 + 100) = __c;
  *(uint *)(param_1 + 0x66) = __c;
  *(uint *)(param_1 + 0x68) = __c;
  *(uint *)(param_1 + 0x6a) = __c;
  *(uint *)(param_1 + 0x6c) = __c;
  *(uint *)(param_1 + 0x6e) = __c;
  *(uint *)(param_1 + 0x70) = __c;
  *(uint *)(param_1 + 0x72) = __c;
  *(uint *)(param_1 + 0x74) = __c;
  *(uint *)(param_1 + 0x76) = __c;
  *(uint *)(param_1 + 0x78) = __c;
  *(uint *)(param_1 + 0x7a) = __c;
  *(double *)(param_1 + 0xd4) = dVar11;
  *(double *)(param_1 + 0xd8) = dVar11;
  *(double *)(param_1 + 0xdc) = dVar11;
  *(double *)(param_1 + 0xe0) = dVar11;
  *(double *)(param_1 + 0xe4) = dVar11;
  *(double *)(param_1 + 0xe8) = dVar11;
  *(double *)(param_1 + 0xec) = dVar11;
  *(double *)(param_1 + 0xf0) = dVar11;
  *(float *)(param_1 + 0x108) = fVar10;
  *(float *)(param_1 + 0x10a) = fVar10;
  *(float *)(param_1 + 0x10c) = fVar10;
  *(float *)(param_1 + 0x10e) = fVar10;
  *(float *)(param_1 + 0x110) = fVar10;
  *(float *)(param_1 + 0x112) = fVar10;
  *(float *)(param_1 + 0x114) = fVar10;
  *(float *)(param_1 + 0x116) = fVar10;
  *(float *)(param_1 + 0x118) = fVar10;
  *(float *)(param_1 + 0x11a) = fVar10;
  *(uint *)(param_1 + 0x11c) = __c;
  *(uint *)(param_1 + 0x11e) = __c;
  *(uint *)(param_1 + 0x120) = __c;
  *(uint *)(param_1 + 0x122) = __c;
  *(uint *)(param_1 + 0x124) = __c;
  *(uint *)(param_1 + 0x126) = __c;
  *(uint *)(param_1 + 0x128) = __c;
  *(uint *)(param_1 + 0x12a) = __c;
  *(uint *)(param_1 + 300) = __c;
  *(uint *)(param_1 + 0x12e) = __c;
  *(uint *)(param_1 + 0x130) = __c;
  *(uint *)(param_1 + 0x132) = __c;
  *(uint *)(param_1 + 0x134) = __c;
  *(uint *)(param_1 + 0x136) = __c;
  *(uint *)(param_1 + 0x138) = __c;
  *(uint *)(param_1 + 0x13a) = __c;
  *(uint *)(param_1 + 0x13c) = __c;
  *(uint *)(param_1 + 0x13e) = __c;
  *(uint *)(param_1 + 0x140) = __c;
  *(uint *)(param_1 + 0x142) = __c;
  *(byte *)(param_1 + 0x144) = bVar1;
  *(ulong *)(param_1 + 0x7c) = uVar9;
  *(ulong *)(param_1 + 0x80) = uVar9;
  *(ulong *)(param_1 + 0x84) = uVar9;
  *(ulong *)(param_1 + 0x88) = uVar9;
  *(ulong *)(param_1 + 0x8c) = uVar9;
  *(ulong *)(param_1 + 0x90) = uVar9;
  *(ulong *)(param_1 + 0x94) = uVar9;
  *(ulong *)(param_1 + 0x98) = uVar9;
  *(ulong *)(param_1 + 0x9c) = uVar9;
  *(ulong *)(param_1 + 0xa0) = uVar9;
  *(ulong *)(param_1 + 0xa4) = uVar9;
  *(ulong *)(param_1 + 0xa8) = uVar9;
  *(ulong *)(param_1 + 0xac) = uVar9;
  *(ulong *)(param_1 + 0xb0) = uVar9;
  *(ulong *)(param_1 + 0xb4) = uVar9;
  *(ulong *)(param_1 + 0xb8) = uVar9;
  *(ulong *)(param_1 + 0xbc) = uVar9;
  *(ulong *)(param_1 + 0xc0) = uVar9;
  *(ulong *)(param_1 + 0xc4) = uVar9;
  *(ulong *)(param_1 + 200) = uVar9;
  if ((param_2 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x148);
    *(undefined8 *)(param_1 + 0x148) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x14c);
    *(undefined8 *)(param_1 + 0x14c) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x154);
    *(undefined8 *)(param_1 + 0x154) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x15c);
    *(undefined8 *)(param_1 + 0x15c) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x160) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x164);
    *(undefined8 *)(param_1 + 0x164) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    lVar5 = *(long *)(param_1 + 0x16c);
    *(undefined8 *)(param_1 + 0x16c) = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x148);
    *(undefined8 **)(param_1 + 0x148) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x14c);
    *(undefined8 **)(param_1 + 0x14c) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x150);
    *(undefined8 **)(param_1 + 0x150) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x154);
    *(undefined8 **)(param_1 + 0x154) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x158);
    *(undefined8 **)(param_1 + 0x158) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x15c);
    *(undefined8 **)(param_1 + 0x15c) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x160);
    *(undefined8 **)(param_1 + 0x160) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x164);
    *(undefined8 **)(param_1 + 0x164) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x168);
    *(undefined8 **)(param_1 + 0x168) = puVar4;
    if (lVar5 != 0) {
      FUN_004435c0();
    }
    puVar4 = (undefined8 *)FUN_00438810(0x18);
    *puVar4 = &PTR_LAB_048e10f0;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    lVar5 = *(long *)(param_1 + 0x16c);
    *(undefined8 **)(param_1 + 0x16c) = puVar4;
  }
  if (lVar5 != 0) {
    FUN_004435c0();
  }
  puVar3 = PTR_DAT_048607b8;
  lVar5 = 0;
  do {
    while ((*(uint *)((long)param_1 + lVar5 + 0x2ec) & 0x3fffffff) != 0) {
      iVar7 = *(int *)((long)param_1 + lVar5 + 0x2e8);
      if (0 < iVar7) goto LAB_00645e9c;
LAB_00645ee4:
      *(undefined4 *)((long)param_1 + lVar5 + 0x2e8) = 1;
      memset((void *)(*(long *)((long)param_1 + lVar5 + 0x2e0) + (long)iVar7),__c,
             (ulong)(uint)-iVar7 + 1);
      lVar5 = lVar5 + 0x10;
      if (lVar5 == 0xa0) {
        return;
      }
    }
    uVar6 = FUN_00426720(puVar3,1,1,*(undefined8 *)((long)param_1 + lVar5 + 0x2e0),
                         *(undefined4 *)((long)param_1 + lVar5 + 0x2e8),
                         (long)param_1 + lVar5 + 0x2ec);
    *(undefined8 *)((long)param_1 + lVar5 + 0x2e0) = uVar6;
    iVar7 = *(int *)((long)param_1 + lVar5 + 0x2e8);
    if (iVar7 < 1) goto LAB_00645ee4;
LAB_00645e9c:
    if (iVar7 != 1) {
      *(undefined4 *)((long)param_1 + lVar5 + 0x2e8) = 1;
    }
    lVar5 = lVar5 + 0x10;
    if (lVar5 == 0xa0) {
      return;
    }
  } while( true );
}


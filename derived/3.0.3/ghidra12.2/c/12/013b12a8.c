
void FUN_013b12a8(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  long lVar12;
  byte bVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x464);
  if ((((uVar15 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar15 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_013b1364;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013b1364:
    uVar15 = 0;
  }
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar9 = plVar14[0x2a];
  if (((*PTR_DAT_04bbc7b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc7b8);
  }
  uVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbc7b0);
  puVar4 = PTR_DAT_04bb4798;
  uVar3 = 0;
  if ((int)lVar9 == 1) {
    uVar3 = uVar15;
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  if ((1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) && (7 < *(byte *)(param_1 + 0x468))) {
    uVar3 = *(uint *)(plVar14 + 0x54);
    lVar9 = *(long *)PTR_DAT_04bb4798;
    uVar15 = uVar3;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) {
      uVar15 = 0;
    }
    lVar12 = *(long *)(lVar9 + 0x20) + (long)(int)uVar15 * 0x28;
    if (*(uint *)(lVar9 + 8) <= uVar3) {
      uVar3 = 0;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar3 * 0x10);
    uVar11 = *(undefined8 *)(lVar12 + 8);
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar12 + 0x10);
    *puVar1 = uVar11;
    bVar13 = *(byte *)(lVar12 + 0x14);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    *(byte *)((long)puVar1 + 0xc) = bVar13;
    bVar13 = *(byte *)(lVar12 + 0x15);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    *(byte *)((long)puVar1 + 0xd) = bVar13;
    *(undefined2 *)((long)puVar1 + 0xe) = *(undefined2 *)(lVar12 + 0x16);
    lVar9 = (long)(int)*(uint *)(plVar14 + 0x54);
    lVar12 = *(long *)(*(long *)puVar4 + 0x10);
    if (*(uint *)(*(long *)puVar4 + 8) <= *(uint *)(plVar14 + 0x54) || lVar12 == 0) {
      lVar9 = 0;
    }
    bVar13 = *(byte *)(lVar12 + lVar9 * 0x10 + 0xc);
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    *(byte *)(param_1 + 0x468) = bVar13;
  }
  lVar9 = *(long *)PTR_DAT_04bb48a0;
  if (lVar9 == 0) {
    fVar16 = *(float *)(param_1 + 0x3f4);
    goto LAB_013b15e8;
  }
  bVar13 = *(byte *)(param_1 + 0x468);
  bVar10 = *(byte *)(lVar9 + 0x44);
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (bVar13 == bVar10) {
    lVar12 = 0;
LAB_013b1598:
    lVar9 = lVar9 + 0x40 + lVar12 * 0x20;
  }
  else {
    bVar10 = *(byte *)(lVar9 + 100);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar13 == bVar10) {
      lVar12 = 1;
      goto LAB_013b1598;
    }
    bVar10 = *(byte *)(lVar9 + 0x84);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar13 == bVar10) {
      lVar12 = 2;
      goto LAB_013b1598;
    }
    bVar10 = *(byte *)(lVar9 + 0xa4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar13 == bVar10) {
      lVar12 = 3;
      goto LAB_013b1598;
    }
    bVar10 = *(byte *)(lVar9 + 0xc4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar13 == bVar10) {
      lVar12 = 4;
      goto LAB_013b1598;
    }
    bVar10 = *(byte *)(lVar9 + 0xe4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar13 == bVar10) {
      lVar12 = 5;
      goto LAB_013b1598;
    }
    bVar10 = *(byte *)(lVar9 + 0x104);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar13 == bVar10) {
      lVar12 = 6;
      goto LAB_013b1598;
    }
    bVar10 = *(byte *)(lVar9 + 0x124);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar13 == bVar10) {
      lVar12 = 7;
      goto LAB_013b1598;
    }
    lVar9 = lVar9 + 0x140;
  }
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(lVar9 + 0x10);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(lVar9 + 0x14);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(lVar9 + 0x18);
  lVar9 = FUN_013b65c4(param_1);
  pfVar8 = (float *)(**(code **)(**(long **)(*(long *)(lVar9 + 0x6e0) +
                                            (long)*(int *)(param_1 + 0x304) * 8) + 0xf0))();
  fVar16 = *(float *)(param_1 + 0x3f4) - *pfVar8;
  *(float *)(param_1 + 0x3f4) = fVar16;
LAB_013b15e8:
  *(float *)(param_1 + 0x400) = fVar16;
  *(float *)(param_1 + 0x334) = fVar16;
  pbVar2 = (byte *)(param_1 + 0x300);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
  *pbVar2 = *pbVar2 | 4;
  *pbVar2 = *pbVar2 & 0xf7;
  return;
}


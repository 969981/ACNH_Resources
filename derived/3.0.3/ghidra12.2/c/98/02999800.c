
undefined2 * FUN_02999800(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  char cVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  
  iVar2 = *(int *)(param_2 + 4);
  uVar5 = *(uint *)(param_2 + 8);
  cVar13 = param_2[0xc];
  uVar22 = *(undefined4 *)(param_2 + 0x24);
  uVar23 = *(undefined4 *)(param_2 + 0x28);
  uVar24 = *(undefined4 *)(param_2 + 0x2c);
  fVar21 = *(float *)(param_2 + 0x30);
  cVar8 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  iVar15 = *(int *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  local_9c = uVar3;
  uStack_98 = uVar6;
  local_94 = uVar4;
  lVar9 = FUN_0299a520(param_1,&local_9c,*(undefined4 *)(param_2 + 0x1c));
  if (lVar9 != 0) {
    puVar17 = (undefined2 *)(lVar9 + 0x88);
    goto LAB_02999c70;
  }
  lVar9 = *(long *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x90) < 1) {
    lVar9 = 0;
  }
  if ((lVar9 == 0) || (puVar11 = (undefined8 *)(lVar9 + -8), puVar11 == (undefined8 *)0x0)) {
    plVar14 = (long *)(param_1 + 0x100);
    do {
      lVar9 = *plVar14;
      plVar14 = (long *)(lVar9 + 8);
    } while (*(int *)(param_1 + 0x70) <= *(int *)(*(long *)(lVar9 + -8) + 4));
    FUN_02999d00(param_1);
    lVar9 = *(long *)(param_1 + 0x88);
    if (*(int *)(param_1 + 0x90) < 1) {
      lVar9 = 0;
    }
    puVar11 = (undefined8 *)0x0;
    if (lVar9 != 0) {
      puVar11 = (undefined8 *)(lVar9 + -8);
    }
  }
  puVar18 = (undefined2 *)*puVar11;
  plVar14 = puVar11 + 1;
  if (*plVar14 != 0) {
    *(undefined8 *)(*plVar14 + 8) = puVar11[2];
  }
  if ((long *)puVar11[2] != (long *)0x0) {
    *(long *)puVar11[2] = *plVar14;
  }
  *plVar14 = 0;
  puVar11[2] = 0;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + -1;
  *puVar11 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 **)(param_1 + 0x98) = puVar11;
  *(float *)(puVar18 + 0x2a) = fVar21;
  *puVar18 = 0x101;
  puVar17 = puVar18 + 0x44;
  *puVar17 = 0;
  *(undefined1 *)(puVar18 + 0x45) = 0;
  *(undefined8 *)((long)puVar18 + 0x8b) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar18 + 0x93) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar18 + 0x9b) = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar18 + 0xa3) = 0xff;
  *(undefined8 *)(puVar18 + 0x52) = 0;
  *(undefined8 *)(puVar18 + 0x56) = 0;
  *(undefined8 *)(puVar18 + 0x5a) = 0xffffffffffffffff;
  *(undefined4 *)(puVar18 + 0x5e) = 0xffffffff;
  puVar18[0x60] = 0;
  *(undefined1 *)(puVar18 + 0x61) = 0;
  *(undefined8 *)((long)puVar18 + 0xc3) = 0xffffffffffffffff;
  *(undefined4 *)(puVar18 + 0xe) = uVar7;
  *(undefined4 *)(puVar18 + 0x10) = 0x42f00000;
  fVar19 = 0.0;
  if (fVar21 <= 500.0) {
    fVar19 = fVar21;
  }
  *(undefined8 *)((long)puVar18 + 0xcb) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar18 + 0xd3) = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar18 + 0xdb) = 0xff;
  *(undefined8 *)(puVar18 + 0x6e) = 0;
  *(undefined8 *)(puVar18 + 0x72) = 0;
  *(undefined8 *)(puVar18 + 0x76) = 0xffffffffffffffff;
  *(undefined4 *)(puVar18 + 0x7a) = 0xffffffff;
  *(undefined1 *)((long)puVar18 + 9) = 0;
  *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
  *(int *)(puVar18 + 6) = iVar2;
  *(undefined4 *)(puVar18 + 8) = 0xffffffff;
  *(char *)(puVar18 + 5) = (char)uVar5;
  *(char *)(puVar18 + 4) = cVar13;
  *(undefined4 *)(puVar18 + 0x12) = uVar3;
  *(undefined4 *)(puVar18 + 0x14) = uVar6;
  *(undefined4 *)(puVar18 + 0x16) = uVar4;
  *(undefined4 *)(puVar18 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar18 + 0x1e) = uVar3;
  *(undefined4 *)(puVar18 + 0x20) = uVar6;
  *(undefined4 *)(puVar18 + 0x22) = uVar4;
  *(uint *)(puVar18 + 10) = uVar5;
  *(int *)(puVar18 + 0xc) = iVar15;
  *(undefined4 *)(puVar18 + 0x24) = uVar22;
  *(undefined4 *)(puVar18 + 0x26) = uVar23;
  *(undefined4 *)(puVar18 + 0x28) = uVar24;
  fVar21 = sinf(fVar19);
  fVar19 = cosf(fVar19);
  fVar20 = fVar21 * 0.0;
  *(float *)(puVar18 + 0x2c) = fVar19;
  *(float *)(puVar18 + 0x40) = fVar19;
  *(undefined4 *)(puVar18 + 0x32) = uVar22;
  *(undefined4 *)(puVar18 + 0x3a) = uVar23;
  *(undefined4 *)(puVar18 + 0x42) = uVar24;
  *(float *)(puVar18 + 0x3c) = -fVar21;
  *(float *)(puVar18 + 0x34) = fVar19 * 0.0;
  *(float *)(puVar18 + 0x3e) = fVar19 * 0.0;
  *(float *)(puVar18 + 0x2e) = fVar20;
  *(float *)(puVar18 + 0x38) = fVar20;
  *(float *)(puVar18 + 0x30) = fVar21 + 0.0;
  *(float *)(puVar18 + 0x36) = fVar20 * 0.0 + 1.0;
  if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x120)) {
    puVar11 = *(undefined8 **)(param_1 + 0x110);
    plVar14 = (long *)(param_1 + 0xf8);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x110) = *puVar11;
    }
    *puVar11 = puVar18;
    puVar11[2] = 0;
    plVar16 = puVar11 + 1;
    *plVar16 = 0;
    lVar9 = *plVar14;
    *plVar14 = (long)plVar16;
    puVar11[2] = plVar14;
    *plVar16 = lVar9;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar16;
    }
    *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = 1;
  if (cVar13 == '\0') {
    cVar13 = '\x01';
    if (iVar15 == 4) {
      cVar13 = '\x02';
    }
    lVar9 = *(long *)(param_1 + 0x160);
    if (lVar9 != param_1 + 0x158) {
      do {
        puVar10 = *(undefined2 **)(lVar9 + -8);
        if ((*(char *)(puVar10 + 4) == cVar13) && (*(int *)(puVar10 + 6) == iVar2))
        goto LAB_02999bc4;
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 + -8 != param_1 + 0x150);
    }
    local_a0 = iVar2;
    puVar10 = (undefined2 *)FUN_029973b0(param_1,&local_a0,uVar5,cVar8 != '\0',iVar15);
    if (puVar10 == (undefined2 *)0x0) {
      if (*(int *)(param_1 + 0x198) != 0) {
        iVar15 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x1a0) + (long)iVar15 * 0x50 + 0xc) == iVar2) {
            puVar10 = (undefined2 *)0x0;
            if (cVar8 == '\0') goto LAB_02999bc8;
            goto LAB_02999c08;
          }
          iVar15 = iVar15 + 1;
        } while (*(int *)(param_1 + 0x198) != iVar15);
      }
      puVar10 = (undefined2 *)0x0;
    }
    else {
LAB_02999bc4:
      if (cVar8 == '\0') {
LAB_02999bc8:
        lVar9 = *(long *)(puVar10 + 0xc);
        *(undefined1 *)(lVar9 + 0x131) = 1;
        *(undefined2 *)(lVar9 + 0x132) = 1;
        *(undefined4 *)(lVar9 + 0x138) = 0;
        *(undefined8 *)(lVar9 + 0x140) = 0xffffffffffffffff;
        *(uint *)(lVar9 + 0x134) = uVar5;
        *(byte *)(lVar9 + 0x130) = *(byte *)(lVar9 + 0x130) | 3;
        *puVar10 = 0x200;
        *(int *)(puVar10 + 2) = iVar2;
        *(int *)(puVar10 + 6) = iVar2;
        puVar12 = puVar10;
        goto LAB_02999c04;
      }
    }
  }
  else {
    lVar9 = *(long *)(param_1 + 0x1a0);
    uVar1 = uVar5;
    if (*(uint *)(param_1 + 0x198) <= uVar5) {
      uVar1 = 0;
    }
    puVar10 = (undefined2 *)(lVar9 + (long)(int)uVar1 * 0x50);
    *(undefined1 *)(puVar10 + 4) = 1;
    if (cVar8 == '\0') {
      puVar12 = (undefined2 *)(lVar9 + (long)(int)uVar1 * 0x50);
      lVar9 = *(long *)(puVar12 + 0xc);
      *(undefined1 *)(lVar9 + 0x131) = 1;
      *(undefined2 *)(lVar9 + 0x132) = 1;
      *(uint *)(lVar9 + 0x134) = uVar5;
      *(undefined4 *)(lVar9 + 0x138) = 0;
      *(undefined8 *)(lVar9 + 0x140) = 0xffffffffffffffff;
      *(byte *)(lVar9 + 0x130) = *(byte *)(lVar9 + 0x130) | 3;
      *(undefined4 *)(puVar12 + 6) = 0;
      *puVar10 = 0x201;
      *(undefined4 *)(puVar10 + 2) = 0xffffffff;
LAB_02999c04:
      *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
    }
  }
LAB_02999c08:
  *(undefined4 *)(puVar18 + 8) = *(undefined4 *)(*(long *)(puVar10 + 0xc) + 4);
  if (*(int *)(puVar10 + 0x18) < *(int *)(puVar10 + 0x24)) {
    puVar11 = *(undefined8 **)(puVar10 + 0x1c);
    plVar14 = (long *)(puVar10 + 0x10);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(puVar10 + 0x1c) = *puVar11;
    }
    *puVar11 = puVar18;
    puVar11[2] = 0;
    plVar16 = puVar11 + 1;
    *plVar16 = 0;
    lVar9 = *plVar14;
    *plVar14 = (long)plVar16;
    puVar11[2] = plVar14;
    *plVar16 = lVar9;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 8) = plVar16;
    }
    *(int *)(puVar10 + 0x18) = *(int *)(puVar10 + 0x18) + 1;
  }
LAB_02999c70:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return puVar17;
}


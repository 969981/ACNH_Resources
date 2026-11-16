
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_02999f48(long param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 uVar15;
  undefined2 *puVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  
  uVar21 = *(undefined4 *)(param_3 + 0x24);
  uVar22 = *(undefined4 *)(param_3 + 0x28);
  uVar23 = *(undefined4 *)(param_3 + 0x2c);
  fVar20 = *(float *)(param_3 + 0x30);
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  uVar3 = *(undefined4 *)(param_3 + 0x14);
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  iVar4 = *(int *)(param_3 + 0x1c);
  uVar6 = *(undefined4 *)(param_3 + 0x20);
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  local_9c = uVar1;
  uStack_98 = uVar3;
  local_94 = uVar2;
  lVar9 = FUN_0299a520(param_1,&local_9c,iVar4);
  if (lVar9 == 0) {
    puVar16 = (undefined2 *)0x0;
    plVar11 = *(long **)(param_1 + 200);
    if (*(int *)(param_1 + 0xd0) < 1) {
      plVar11 = (long *)0x0;
    }
    if ((plVar11 != (long *)0x0) && (plVar11 + -1 != (long *)0x0)) {
      puVar5 = (undefined2 *)plVar11[-1];
      if (*plVar11 != 0) {
        *(long *)(*plVar11 + 8) = plVar11[1];
      }
      if ((long *)plVar11[1] != (long *)0x0) {
        *(long *)plVar11[1] = *plVar11;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
      plVar11[-1] = *(long *)(param_1 + 0xd8);
      *(long **)(param_1 + 0xd8) = plVar11 + -1;
      lVar9 = *(long *)(param_1 + 0x1b0);
      if (*(uint *)(param_1 + 0x1a8) <= param_2) {
        param_2 = 0;
      }
      lVar17 = lVar9 + (long)(int)param_2 * 0x50;
      uVar15 = 1;
      if (iVar4 == 4) {
        uVar15 = 2;
      }
      *(undefined1 *)(lVar17 + 8) = uVar15;
      *(undefined4 *)(puVar5 + 0x5e) = 0xffffffff;
      *(undefined4 *)(puVar5 + 0x7a) = 0xffffffff;
      puVar16 = puVar5 + 0x44;
      *puVar16 = 0;
      *(undefined1 *)(puVar5 + 0x45) = 0;
      *(undefined8 *)(puVar5 + 0x52) = 0;
      *(undefined8 *)(puVar5 + 0x56) = 0;
      puVar5[0x60] = 0;
      *(undefined1 *)(puVar5 + 0x61) = 0;
      *(undefined8 *)(puVar5 + 0x6e) = 0;
      *(undefined8 *)(puVar5 + 0x72) = 0;
      *(undefined1 *)(puVar5 + 4) = 0;
      *(undefined2 *)((long)puVar5 + 9) = 0xff00;
      *puVar5 = 0x101;
      *(undefined8 *)((long)puVar5 + 0x8b) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar5 + 0x93) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar5 + 0x9b) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0xa3) = 0xff;
      *(undefined8 *)(puVar5 + 0x5a) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar5 + 0xc3) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar5 + 0xcb) = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar5 + 0xd3) = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0xdb) = 0xff;
      *(undefined8 *)(puVar5 + 0x76) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 6) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x12) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x16) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0xe) = 0x42f00000ffffffff;
      uVar8 = _UNK_04102208;
      uVar7 = _DAT_04102200;
      *(undefined8 *)(puVar5 + 0x1a) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x1e) = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x22) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x24) = 0;
      *(undefined8 *)(puVar5 + 0x28) = 0;
      *(undefined8 *)(puVar5 + 0x30) = uVar8;
      *(undefined8 *)(puVar5 + 0x2c) = uVar7;
      uVar7 = _DAT_04102880;
      *(undefined8 *)(puVar5 + 0x38) = _UNK_04102888;
      *(undefined8 *)(puVar5 + 0x34) = uVar7;
      uVar7 = _DAT_041023d0;
      *(undefined8 *)(puVar5 + 0x40) = _UNK_041023d8;
      *(undefined8 *)(puVar5 + 0x3c) = uVar7;
      lVar10 = *(long *)(lVar17 + 0x18);
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(lVar10 + 0xc);
      *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(lVar10 + 0x18);
      uVar15 = *(undefined1 *)(lVar10 + 8);
      *(float *)(puVar5 + 0x2a) = fVar20;
      *(undefined4 *)(puVar5 + 0x14) = uVar3;
      *(undefined4 *)(puVar5 + 0x16) = uVar2;
      *(undefined4 *)(puVar5 + 0x1e) = uVar1;
      *(undefined4 *)(puVar5 + 0x20) = uVar3;
      *(undefined4 *)(puVar5 + 0x22) = uVar2;
      *(int *)(puVar5 + 0xc) = iVar4;
      *(undefined4 *)(puVar5 + 0xe) = uVar6;
      *(undefined4 *)(puVar5 + 0x24) = uVar21;
      *(undefined4 *)(puVar5 + 0x26) = uVar22;
      *(undefined4 *)(puVar5 + 0x28) = uVar23;
      *(undefined1 *)(puVar5 + 4) = uVar15;
      *(undefined4 *)(puVar5 + 0x10) = 0x42f00000;
      *(undefined4 *)(puVar5 + 0x12) = uVar1;
      fVar18 = 0.0;
      if (fVar20 <= 500.0) {
        fVar18 = fVar20;
      }
      fVar20 = sinf(fVar18);
      fVar18 = cosf(fVar18);
      fVar19 = fVar20 * 0.0;
      *(float *)(puVar5 + 0x2c) = fVar18;
      *(float *)(puVar5 + 0x40) = fVar18;
      *(undefined4 *)(puVar5 + 0x32) = uVar21;
      *(undefined4 *)(puVar5 + 0x3a) = uVar22;
      *(undefined4 *)(puVar5 + 0x42) = uVar23;
      *(float *)(puVar5 + 0x3c) = -fVar20;
      *(float *)(puVar5 + 0x34) = fVar18 * 0.0;
      *(float *)(puVar5 + 0x3e) = fVar18 * 0.0;
      *(float *)(puVar5 + 0x2e) = fVar19;
      *(float *)(puVar5 + 0x38) = fVar19;
      *(float *)(puVar5 + 0x30) = fVar20 + 0.0;
      *(float *)(puVar5 + 0x36) = fVar19 * 0.0 + 1.0;
      *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(*(long *)(lVar17 + 0x18) + 4);
      if (*(int *)(lVar17 + 0x30) < *(int *)(lVar17 + 0x48)) {
        plVar11 = (long *)(lVar17 + 0x20);
        puVar13 = (undefined8 *)(lVar9 + (long)(int)param_2 * 0x50 + 0x38);
        puVar12 = (undefined8 *)*puVar13;
        if (puVar12 != (undefined8 *)0x0) {
          *puVar13 = *puVar12;
        }
        *puVar12 = puVar5;
        puVar12[2] = 0;
        plVar14 = puVar12 + 1;
        *plVar14 = 0;
        lVar9 = *plVar11;
        *plVar11 = (long)plVar14;
        puVar12[2] = plVar11;
        *plVar14 = lVar9;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar14;
        }
        *(int *)(lVar17 + 0x30) = *(int *)(lVar17 + 0x30) + 1;
      }
      if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x120)) {
        puVar12 = *(undefined8 **)(param_1 + 0x110);
        plVar11 = (long *)(param_1 + 0xf8);
        if (puVar12 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x110) = *puVar12;
        }
        *puVar12 = puVar5;
        puVar12[2] = 0;
        plVar14 = puVar12 + 1;
        *plVar14 = 0;
        lVar9 = *plVar11;
        *plVar11 = (long)plVar14;
        puVar12[2] = plVar11;
        *plVar14 = lVar9;
        if (lVar9 != 0) {
          *(long **)(lVar9 + 8) = plVar14;
        }
        *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
      }
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
  }
  else {
    puVar16 = (undefined2 *)(lVar9 + 0x88);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return puVar16;
}


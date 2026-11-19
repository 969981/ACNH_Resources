
long * FUN_039efde0(long param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined4 local_64;
  
  if (param_2 == 0xffffffff) {
    return *(long **)(param_1 + 0x390);
  }
  lVar22 = *(long *)(param_1 + 0x390);
  uVar11 = param_2;
  if (*(uint *)(param_1 + 0x388) <= param_2) {
    uVar11 = 0;
  }
  plVar19 = (long *)(lVar22 + (long)(int)uVar11 * 0xb8);
  bVar3 = *(byte *)(plVar19 + 0x16);
  if ((bVar3 & 1) == 0) {
    return plVar19;
  }
  *(byte *)(plVar19 + 0x16) = bVar3 & 0xfe;
  if (param_2 < *(uint *)(*(long *)(param_1 + 0x310) + 0x1e8)) {
    lVar25 = *(long *)(*(long *)(*(long *)(param_1 + 0x310) + 0x1f0) + (long)(int)param_2 * 8);
  }
  else {
    lVar25 = 0;
  }
  iVar12 = (int)**(short **)PTR_DAT_04bbdc40;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
    iVar12 = 0;
  }
  if (*(short *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                        (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8);
  }
  if (((*PTR_DAT_04bbdc30 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbdc30), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbdc28 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdc30);
  }
  if (((plVar21 == (long *)0x0) ||
      (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bbdc28), (uVar13 & 1) == 0)) ||
     ((char)plVar21[0xb] == '\0')) {
    local_98 = 0;
    local_90 = 0x3f80000000000000;
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x50) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x4c)),&local_98,(ulong)bVar3 << 2);
    }
    local_98 = 0;
    local_90 = 0x3f80000000000000;
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    uVar13 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x5c) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (uVar13 != 0) {
      uVar5 = *(ushort *)(lVar26 + 0x58);
      pfVar14 = (float *)&local_98;
      goto LAB_039f008c;
    }
  }
  else {
    fStack_74 = *(float *)(plVar21 + 0x34);
    bVar3 = *(byte *)(param_1 + 8);
    local_98 = CONCAT44(fStack_74 * *(float *)((long)plVar21 + 300),
                        fStack_74 * *(float *)(plVar21 + 0x25));
    local_90 = CONCAT44(fStack_74 * *(float *)((long)plVar21 + 0x134),
                        fStack_74 * *(float *)(plVar21 + 0x26));
    uVar2 = *(uint *)(plVar21 + 0x3e);
    local_80 = fStack_74 * *(float *)(plVar21 + 0x2a);
    lVar15 = plVar19[2];
    fStack_7c = fStack_74 * *(float *)((long)plVar21 + 0x154);
    local_78 = fStack_74 * *(float *)(plVar21 + 0x2b);
    fStack_74 = fStack_74 * *(float *)((long)plVar21 + 0x15c);
    lVar27 = plVar21[0x3f];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x38) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (bVar4 != 0) {
      uVar13 = (ulong)*(ushort *)(lVar26 + 0x34);
      uVar24 = (uint)bVar3;
      if (uVar2 <= bVar3) {
        uVar24 = 0;
      }
      puVar16 = (undefined4 *)(lVar27 + (ulong)uVar24 * 0xc);
      uVar17 = (ulong)bVar4 & 3;
      if (bVar4 < 4) {
        lVar26 = 0;
      }
      else {
        lVar26 = 0;
        puVar18 = (undefined4 *)(uVar13 + lVar15 + 8);
        do {
          lVar26 = lVar26 + -4;
          puVar18[-2] = *puVar16;
          puVar18[-1] = puVar16[1];
          *puVar18 = puVar16[2];
          puVar1 = puVar16 + 3;
          puVar16 = puVar16 + 4;
          puVar18[1] = *puVar1;
          puVar18 = puVar18 + 4;
        } while (-lVar26 != ((ulong)bVar4 & 0xfc));
        lVar26 = -lVar26;
      }
      if ((bVar4 & 3) != 0) {
        puVar18 = (undefined4 *)(lVar15 + uVar13 + lVar26 * 4);
        do {
          uVar17 = uVar17 - 1;
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
    }
    lVar15 = plVar19[2];
    bVar3 = *(byte *)(param_1 + 8);
    uVar2 = *(uint *)(plVar21 + 0x40);
    lVar27 = plVar21[0x41];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x188) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (bVar4 != 0) {
      uVar13 = (ulong)*(ushort *)(lVar26 + 0x184);
      uVar24 = (uint)bVar3;
      if (uVar2 <= bVar3) {
        uVar24 = 0;
      }
      puVar16 = (undefined4 *)(lVar27 + (ulong)uVar24 * 0xc);
      uVar17 = (ulong)bVar4 & 3;
      if (bVar4 < 4) {
        lVar26 = 0;
      }
      else {
        lVar26 = 0;
        puVar18 = (undefined4 *)(uVar13 + lVar15 + 8);
        do {
          lVar26 = lVar26 + -4;
          puVar18[-2] = *puVar16;
          puVar18[-1] = puVar16[1];
          *puVar18 = puVar16[2];
          puVar1 = puVar16 + 3;
          puVar16 = puVar16 + 4;
          puVar18[1] = *puVar1;
          puVar18 = puVar18 + 4;
        } while (-lVar26 != ((ulong)bVar4 & 0xfc));
        lVar26 = -lVar26;
      }
      if ((bVar4 & 3) != 0) {
        puVar18 = (undefined4 *)(lVar15 + uVar13 + lVar26 * 4);
        do {
          uVar17 = uVar17 - 1;
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
    }
    lVar15 = plVar21[0x34];
    lVar26 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar27 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar27 + 0x44) * 4];
    local_64 = (int)lVar15;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar26 + (ulong)*(ushort *)(lVar27 + 0x40)),&local_64,(ulong)bVar3 << 2);
    }
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x50) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x4c)),&local_98,(ulong)bVar3 << 2);
    }
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    uVar13 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x5c) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (uVar13 != 0) {
      uVar5 = *(ushort *)(lVar26 + 0x58);
      pfVar14 = &local_80;
LAB_039f008c:
      memcpy((void *)(lVar15 + (ulong)uVar5),pfVar14,uVar13 << 2);
    }
  }
  iVar12 = (int)**(short **)PTR_DAT_04bbdc40;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
    iVar12 = 0;
  }
  if (*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) < 2) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                         (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8 + 8);
  }
  if (((*PTR_DAT_04bbdc30 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbdc30), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbdc28 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdc30);
  }
  if (((plVar21 == (long *)0x0) ||
      (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bbdc28), (uVar13 & 1) == 0)) ||
     ((char)plVar21[0xb] == '\0')) {
    local_98 = 0;
    local_90 = 0x3f80000000000000;
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x74) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x70)),&local_98,(ulong)bVar3 << 2);
    }
    local_98 = 0;
    local_90 = 0x3f80000000000000;
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    uVar13 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x80) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (uVar13 != 0) {
      uVar5 = *(ushort *)(lVar26 + 0x7c);
      pfVar14 = (float *)&local_98;
      goto LAB_039f02b4;
    }
  }
  else {
    fStack_74 = *(float *)(plVar21 + 0x34);
    bVar3 = *(byte *)(param_1 + 8);
    local_98 = CONCAT44(fStack_74 * *(float *)((long)plVar21 + 300),
                        fStack_74 * *(float *)(plVar21 + 0x25));
    local_90 = CONCAT44(fStack_74 * *(float *)((long)plVar21 + 0x134),
                        fStack_74 * *(float *)(plVar21 + 0x26));
    uVar2 = *(uint *)(plVar21 + 0x3e);
    local_80 = fStack_74 * *(float *)(plVar21 + 0x2a);
    lVar15 = plVar19[2];
    fStack_7c = fStack_74 * *(float *)((long)plVar21 + 0x154);
    local_78 = fStack_74 * *(float *)(plVar21 + 0x2b);
    fStack_74 = fStack_74 * *(float *)((long)plVar21 + 0x15c);
    lVar27 = plVar21[0x3f];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x68) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (bVar4 != 0) {
      uVar13 = (ulong)*(ushort *)(lVar26 + 100);
      uVar24 = (uint)bVar3;
      if (uVar2 <= bVar3) {
        uVar24 = 0;
      }
      puVar16 = (undefined4 *)(lVar27 + (ulong)uVar24 * 0xc);
      uVar17 = (ulong)bVar4 & 3;
      if (bVar4 < 4) {
        lVar26 = 0;
      }
      else {
        lVar26 = 0;
        puVar18 = (undefined4 *)(uVar13 + lVar15 + 8);
        do {
          lVar26 = lVar26 + -4;
          puVar18[-2] = *puVar16;
          puVar18[-1] = puVar16[1];
          *puVar18 = puVar16[2];
          puVar1 = puVar16 + 3;
          puVar16 = puVar16 + 4;
          puVar18[1] = *puVar1;
          puVar18 = puVar18 + 4;
        } while (-lVar26 != ((ulong)bVar4 & 0xfc));
        lVar26 = -lVar26;
      }
      if ((bVar4 & 3) != 0) {
        puVar18 = (undefined4 *)(lVar15 + uVar13 + lVar26 * 4);
        do {
          uVar17 = uVar17 - 1;
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
    }
    bVar3 = *(byte *)(param_1 + 8);
    uVar2 = *(uint *)(plVar21 + 0x40);
    lVar27 = plVar21[0x41];
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x194) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (bVar4 != 0) {
      uVar13 = (ulong)*(ushort *)(lVar26 + 400);
      uVar24 = (uint)bVar3;
      if (uVar2 <= bVar3) {
        uVar24 = 0;
      }
      puVar16 = (undefined4 *)(lVar27 + (ulong)uVar24 * 0xc);
      uVar17 = (ulong)bVar4 & 3;
      if (bVar4 < 4) {
        lVar26 = 0;
      }
      else {
        lVar26 = 0;
        puVar18 = (undefined4 *)(uVar13 + lVar15 + 8);
        do {
          lVar26 = lVar26 + -4;
          puVar18[-2] = *puVar16;
          puVar18[-1] = puVar16[1];
          *puVar18 = puVar16[2];
          puVar1 = puVar16 + 3;
          puVar16 = puVar16 + 4;
          puVar18[1] = *puVar1;
          puVar18 = puVar18 + 4;
        } while (-lVar26 != ((ulong)bVar4 & 0xfc));
        lVar26 = -lVar26;
      }
      if ((bVar4 & 3) != 0) {
        puVar18 = (undefined4 *)(lVar15 + uVar13 + lVar26 * 4);
        do {
          uVar17 = uVar17 - 1;
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
    }
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x74) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x70)),&local_98,(ulong)bVar3 << 2);
    }
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    uVar13 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x80) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (uVar13 != 0) {
      uVar5 = *(ushort *)(lVar26 + 0x7c);
      pfVar14 = &local_80;
LAB_039f02b4:
      memcpy((void *)(lVar15 + (ulong)uVar5),pfVar14,uVar13 << 2);
    }
  }
  iVar12 = (int)**(short **)PTR_DAT_04bd1230;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bd1230) {
    iVar12 = 0;
  }
  if (*(short *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                        (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8);
  }
  if (((*PTR_DAT_04bd1248 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bd1248), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bd1240 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd1248);
  }
  if (((plVar21 == (long *)0x0) ||
      (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bd1240), (uVar13 & 1) == 0)) ||
     ((char)plVar21[0xb] == '\0')) {
    local_98 = 0;
    local_90 = 0x3f80000000000000;
  }
  else {
    fVar28 = *(float *)(plVar21 + 0x2a);
    local_98 = CONCAT44(fVar28 * *(float *)((long)plVar21 + 300),fVar28 * *(float *)(plVar21 + 0x25)
                       );
    local_90 = CONCAT44(fVar28 * *(float *)((long)plVar21 + 0x134),
                        fVar28 * *(float *)(plVar21 + 0x26));
  }
  lVar15 = plVar19[2];
  (**(code **)(*plVar19 + 0x20))(plVar19);
  (**(code **)(*plVar19 + 0x20))(plVar19);
  lVar26 = *(long *)plVar19[1];
  bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 8) * 4];
  (**(code **)(*plVar19 + 0x18))(plVar19);
  if ((ulong)bVar3 != 0) {
    memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 4)),&local_98,(ulong)bVar3 << 2);
  }
  iVar12 = (int)**(short **)PTR_DAT_04bbd930;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bbd930) {
    iVar12 = 0;
  }
  if (*(short *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                        (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8);
  }
  if (((*PTR_DAT_04bbd8c0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8c0), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8b8 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8c0);
  }
  if (((plVar21 == (long *)0x0) ||
      (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bbd8b8), (uVar13 & 1) == 0)) ||
     ((char)plVar21[0xb] == '\0')) {
    local_98 = 0;
    local_90 = 0x3f80000000000000;
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x14) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x10)),&local_98,(ulong)bVar3 << 2);
    }
    local_98 = 0;
    local_90 = 0x3f80000000000000;
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x20) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x1c)),&local_98,(ulong)bVar3 << 2);
    }
  }
  else {
    fStack_74 = *(float *)(plVar21 + 0x2f);
    local_98 = CONCAT44(fStack_74 * *(float *)((long)plVar21 + 300),
                        fStack_74 * *(float *)(plVar21 + 0x25));
    local_90 = CONCAT44(fStack_74 * *(float *)((long)plVar21 + 0x134),
                        fStack_74 * *(float *)(plVar21 + 0x26));
    lVar15 = plVar19[2];
    local_80 = fStack_74 * *(float *)(plVar21 + 0x2a);
    fStack_7c = fStack_74 * *(float *)((long)plVar21 + 0x154);
    local_78 = fStack_74 * *(float *)(plVar21 + 0x2b);
    fStack_74 = fStack_74 * *(float *)((long)plVar21 + 0x15c);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x14) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x10)),&local_98,(ulong)bVar3 << 2);
    }
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x20) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if ((ulong)bVar3 != 0) {
      memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar26 + 0x1c)),&local_80,(ulong)bVar3 << 2);
    }
    lVar15 = plVar19[2];
    bVar3 = *(byte *)(param_1 + 8);
    uVar2 = *(uint *)(plVar21 + 0x35);
    lVar27 = plVar21[0x36];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x2c) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (bVar4 != 0) {
      uVar13 = (ulong)*(ushort *)(lVar26 + 0x28);
      uVar24 = (uint)bVar3;
      if (uVar2 <= bVar3) {
        uVar24 = 0;
      }
      puVar16 = (undefined4 *)(lVar27 + (ulong)uVar24 * 0xc);
      uVar17 = (ulong)bVar4 & 3;
      if (bVar4 < 4) {
        lVar26 = 0;
      }
      else {
        lVar26 = 0;
        puVar18 = (undefined4 *)(uVar13 + lVar15 + 8);
        do {
          lVar26 = lVar26 + -4;
          puVar18[-2] = *puVar16;
          puVar18[-1] = puVar16[1];
          *puVar18 = puVar16[2];
          puVar1 = puVar16 + 3;
          puVar16 = puVar16 + 4;
          puVar18[1] = *puVar1;
          puVar18 = puVar18 + 4;
        } while (-lVar26 != ((ulong)bVar4 & 0xfc));
        lVar26 = -lVar26;
      }
      if ((bVar4 & 3) != 0) {
        puVar18 = (undefined4 *)(lVar15 + uVar13 + lVar26 * 4);
        do {
          uVar17 = uVar17 - 1;
          *puVar18 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
    }
    lVar15 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar26 = *(long *)plVar19[1];
    bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 0x17c) * 4];
    (**(code **)(*plVar19 + 0x18))(plVar19);
    if (bVar3 != 0) {
      uVar17 = (ulong)*(ushort *)(lVar26 + 0x178);
      plVar21 = plVar21 + 0x33;
      uVar13 = (ulong)bVar3 & 3;
      if (bVar3 < 4) {
        lVar26 = 0;
      }
      else {
        lVar26 = 0;
        puVar16 = (undefined4 *)(uVar17 + lVar15 + 8);
        do {
          lVar26 = lVar26 + -4;
          puVar16[-2] = (int)*plVar21;
          puVar16[-1] = *(undefined4 *)((long)plVar21 + 4);
          *puVar16 = (int)plVar21[1];
          puVar18 = (undefined4 *)((long)plVar21 + 0xc);
          plVar21 = plVar21 + 2;
          puVar16[1] = *puVar18;
          puVar16 = puVar16 + 4;
        } while (-lVar26 != ((ulong)bVar3 & 0xfc));
        lVar26 = -lVar26;
      }
      if ((bVar3 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar15 + uVar17 + lVar26 * 4);
        do {
          uVar13 = uVar13 - 1;
          *puVar16 = (int)*plVar21;
          plVar21 = (long *)((long)plVar21 + 4);
          puVar16 = puVar16 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  puVar9 = PTR_DAT_04bbd938;
  puVar8 = PTR_DAT_04bbd8e8;
  uVar29 = 0;
  sVar6 = *(short *)(lVar22 + (long)(int)uVar11 * 0xb8 + 0x78);
  lVar15 = lVar25;
  if ((int)sVar6 == 0xffffffff) goto LAB_039f0734;
  sVar7 = *(short *)(lVar22 + (long)(int)uVar11 * 0xb8 + 0x7a);
  if ((int)sVar7 == 0xffffffff) goto LAB_039f0734;
  lVar15 = *(long *)(param_1 + 0x310);
  uVar2 = *(uint *)(lVar15 + 0x1e8);
  uVar24 = (uint)sVar7;
  if (uVar2 < (uint)(int)sVar6 || uVar2 == (int)sVar6) {
    lVar25 = 0;
    if (!(uVar2 < (uint)(int)sVar7 || uVar2 == uVar24)) goto LAB_039f0720;
LAB_039f0704:
    lVar15 = 0;
  }
  else {
    lVar25 = *(long *)(*(long *)(lVar15 + 0x1f0) + (long)(int)sVar6 * 8);
    if (uVar2 <= uVar24) goto LAB_039f0704;
LAB_039f0720:
    lVar15 = *(long *)(*(long *)(lVar15 + 0x1f0) + (long)(int)uVar24 * 8);
  }
  uVar29 = *(undefined4 *)(lVar22 + (long)(int)uVar11 * 0xb8 + 0x7c);
LAB_039f0734:
  iVar12 = (int)**(short **)PTR_DAT_04bbd938;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)PTR_DAT_04bbd938) {
    iVar12 = 0;
  }
  if (*(short *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                        (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8);
  }
  if (((*PTR_DAT_04bbd8e8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if ((plVar21 != (long *)0x0) &&
     (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bbd8e0), (uVar13 & 1) == 0)) {
    plVar21 = (long *)0x0;
  }
  iVar12 = (int)**(short **)puVar9;
  if (*(uint *)(lVar15 + 0x18) <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(short *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4 + 2) == 0) {
    plVar23 = (long *)0x0;
    bVar3 = *puVar8;
  }
  else {
    plVar23 = *(long **)(*(long *)(lVar15 + 0x30) +
                        (ulong)*(ushort *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4) * 8);
    bVar3 = *puVar8;
  }
  if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if (plVar23 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    uVar13 = (**(code **)(*plVar23 + 0x48))(plVar23,PTR_DAT_04bbd8e0);
    if ((uVar13 & 1) == 0) {
      plVar23 = (long *)0x0;
    }
  }
  FUN_039edd60(uVar29,0,plVar21,plVar23,plVar19,0xb);
  iVar12 = (int)**(short **)puVar9;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) < 2) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                         (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8 + 8);
  }
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if ((plVar21 != (long *)0x0) &&
     (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bbd8e0), (uVar13 & 1) == 0)) {
    plVar21 = (long *)0x0;
  }
  iVar12 = (int)**(short **)puVar9;
  if (*(uint *)(lVar15 + 0x18) <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(ushort *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4 + 2) < 2) {
    plVar23 = (long *)0x0;
  }
  else {
    plVar23 = *(long **)(*(long *)(lVar15 + 0x30) +
                         (ulong)*(ushort *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4) * 8 + 8);
  }
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if (plVar23 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    uVar13 = (**(code **)(*plVar23 + 0x48))(plVar23,PTR_DAT_04bbd8e0);
    if ((uVar13 & 1) == 0) {
      plVar23 = (long *)0x0;
    }
  }
  FUN_039edd60(uVar29,0,plVar21,plVar23,plVar19,0x10);
  iVar12 = (int)**(short **)puVar9;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) < 3) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                         (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8 + 0x10)
    ;
  }
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if ((plVar21 != (long *)0x0) &&
     (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bbd8e0), (uVar13 & 1) == 0)) {
    plVar21 = (long *)0x0;
  }
  iVar12 = (int)**(short **)puVar9;
  if (*(uint *)(lVar15 + 0x18) <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(ushort *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4 + 2) < 3) {
    plVar23 = (long *)0x0;
  }
  else {
    plVar23 = *(long **)(*(long *)(lVar15 + 0x30) +
                         (ulong)*(ushort *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4) * 8 + 0x10)
    ;
  }
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if (plVar23 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    uVar13 = (**(code **)(*plVar23 + 0x48))(plVar23,PTR_DAT_04bbd8e0);
    if ((uVar13 & 1) == 0) {
      plVar23 = (long *)0x0;
    }
  }
  FUN_039edd60(uVar29,0x3f800000,plVar21,plVar23,plVar19,0x15);
  iVar12 = (int)**(short **)puVar9;
  if (*(uint *)(lVar25 + 0x18) <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4 + 2) < 4) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(*(long *)(lVar25 + 0x30) +
                         (ulong)*(ushort *)(*(long *)(lVar25 + 0x20) + (long)iVar12 * 4) * 8 + 0x18)
    ;
  }
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if ((plVar21 != (long *)0x0) &&
     (uVar13 = (**(code **)(*plVar21 + 0x48))(plVar21,PTR_DAT_04bbd8e0), (uVar13 & 1) == 0)) {
    plVar21 = (long *)0x0;
  }
  iVar12 = (int)**(short **)puVar9;
  if (*(uint *)(lVar15 + 0x18) <= (uint)(int)**(short **)puVar9) {
    iVar12 = 0;
  }
  if (*(ushort *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4 + 2) < 4) {
    plVar23 = (long *)0x0;
  }
  else {
    plVar23 = *(long **)(*(long *)(lVar15 + 0x30) +
                         (ulong)*(ushort *)(*(long *)(lVar15 + 0x20) + (long)iVar12 * 4) * 8 + 0x18)
    ;
  }
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04bbd8e8), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bbd8e0 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd8e8);
  }
  if (plVar23 == (long *)0x0) {
    plVar23 = (long *)0x0;
  }
  else {
    uVar13 = (**(code **)(*plVar23 + 0x48))(plVar23,PTR_DAT_04bbd8e0);
    if ((uVar13 & 1) == 0) {
      plVar23 = (long *)0x0;
    }
  }
  FUN_039edd60(uVar29,0,plVar21,plVar23,plVar19,0x1a);
  plVar21 = (long *)(lVar22 + (long)(int)uVar11 * 0xb8 + 0x80);
  if (*plVar21 != 0) {
    local_98 = CONCAT44(param_2,(uint)*(byte *)(param_1 + 8));
    local_88 = *(undefined8 *)(param_1 + 0x310);
    local_90 = *plVar21;
    lVar22 = lVar22 + (long)(int)uVar11 * 0xb8;
    puVar20 = (undefined8 *)(lVar22 + 0x90);
    (**(code **)*puVar20)(puVar20,&local_98);
    puVar16 = (undefined4 *)*plVar21;
    uVar11 = *(uint *)(lVar22 + 0x88);
    lVar22 = plVar19[2];
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
    (**(code **)(*plVar19 + 0x38))(plVar19,uVar11);
    if (3 < uVar11) {
      uVar5 = *(ushort *)(*(long *)plVar19[1] + 0x19c);
      uVar13 = (ulong)(uVar11 >> 2) & 3;
      if ((ulong)(uVar11 >> 2) - 1 < 3) {
        lVar25 = 0;
      }
      else {
        lVar25 = 0;
        puVar18 = (undefined4 *)((ulong)uVar5 + lVar22 + 8);
        do {
          lVar25 = lVar25 + -4;
          puVar18[-2] = *puVar16;
          puVar18[-1] = puVar16[1];
          *puVar18 = puVar16[2];
          puVar1 = puVar16 + 3;
          puVar16 = puVar16 + 4;
          puVar18[1] = *puVar1;
          puVar18 = puVar18 + 4;
        } while (-lVar25 != ((ulong)(uVar11 >> 2) & 0x3ffffffc));
        lVar25 = -lVar25;
      }
      if ((uVar11 >> 2 & 3) != 0) {
        puVar18 = (undefined4 *)(lVar22 + (ulong)uVar5 + lVar25 * 4);
        do {
          uVar13 = uVar13 - 1;
          *puVar18 = *puVar16;
          puVar18 = puVar18 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  bVar3 = *(byte *)((long)plVar19 + 0x39);
  uVar5 = *(ushort *)((long)plVar19 + 0x3a);
  lVar22 = plVar19[6];
  iVar12 = (**(code **)(*plVar19 + 0x20))(plVar19);
  iVar10 = (**(code **)(*plVar19 + 0x20))(plVar19);
  lVar25 = plVar19[4];
  if (lVar25 != 0) {
    lVar15 = plVar19[6];
    lVar26 = plVar19[3];
    uVar11 = (**(code **)PTR_DAT_04bcf030)(lVar25);
    if ((uVar11 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)
                (lVar25,(int)lVar26 +
                        (uint)uVar5 * (uint)bVar3 * (((int)lVar22 + iVar12) - 1U & -iVar10),
                 (int)lVar15);
    }
  }
  return plVar19;
}


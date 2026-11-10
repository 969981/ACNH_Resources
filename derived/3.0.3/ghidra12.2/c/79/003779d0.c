
void FUN_003779d0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,
                 uint param_13,uint param_14)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = *(uint *)(param_1 + 0x14) & 0xfffffff0 |
          *(uint *)(param_1 + 0x14) & 3 | (param_3 & 3) << 2;
  uVar5 = param_3 & 3;
  uVar4 = (param_5 & 7) << 6 | (param_4 & 3) << 4 | (param_6 & 1) << 9 | (param_7 & 3) << 10 |
          (param_8 & 1) << 0xc | (param_9 & 3) << 0xd | (param_10 & 1) << 0xf |
          (param_11 & 1) << 0x10 | (param_12 & 1) << 0x11 | (param_13 & 3) << 0x12 |
          (param_14 & 3) << 0x14 | *(uint *)(param_1 + 0x10) & 0xffc00000 | param_2 & 3 |
          (param_3 & 3) << 2;
  *(uint *)(param_1 + 0x10) = uVar4;
  *(uint *)(param_1 + 0x14) = uVar7;
  if (uVar5 != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)((param_2 & 3) << 4));
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined4 *)(puVar1 + 2) = 0x3f800000;
    if (uVar5 != 1) {
      *(undefined8 *)((long)puVar1 + 0x14) = 0;
      *(undefined8 *)((long)puVar1 + 0x1c) = 0x3f80000000000000;
      *(undefined4 *)((long)puVar1 + 0x24) = 0x3f800000;
      if (uVar5 != 2) {
        puVar1[5] = 0;
        puVar1[6] = 0x3f80000000000000;
        *(undefined4 *)(puVar1 + 7) = 0x3f800000;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x14);
  }
  uVar5 = uVar7 & 0xfffffc00 | uVar7 & 0x1ff | (uVar4 >> 9 & 1) << 9;
  *(uint *)(param_1 + 0x14) = uVar5;
  if ((uVar4 >> 9 & 1) != 0) {
    *(undefined8 *)
     (*(long *)(param_1 + 0x18) +
     (ulong)((uVar4 & 3) * 0x10 + (uVar4 & 0x30)) +
     (ulong)((uVar4 >> 2 & 3) << 2 | (uVar4 >> 2 & 3) << 4)) = 7;
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  uVar6 = (ulong)uVar4;
  uVar5 = uVar5 & 0xfffff3ff | uVar4 & 0xc00;
  *(uint *)(param_1 + 0x14) = uVar5;
  if ((uVar4 & 0xc00) != 0) {
    *(undefined4 *)
     (*(long *)(param_1 + 0x18) +
     (ulong)((uVar4 & 3) * 0x10 + (uVar4 & 0x30) | uVar4 >> 6 & 8) +
     (ulong)((uVar4 >> 2 & 3) << 2 | (uVar4 >> 2 & 3) << 4)) = 0x50400;
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar6 = (ulong)uVar7;
    uVar5 = *(uint *)(param_1 + 0x14);
    if ((uVar5 & 0xc00) == 0x800) {
      *(undefined4 *)
       (((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | (ulong)(uVar7 >> 6) & 8) +
        ((ulong)(uVar7 >> 2) & 3) * 0x14 + *(long *)(param_1 + 0x18) + 4) = 0x50400;
      uVar6 = (ulong)*(uint *)(param_1 + 0x10);
      uVar5 = *(uint *)(param_1 + 0x14);
    }
  }
  uVar7 = uVar5 & 0xfff | ((uint)(uVar6 >> 0xc) & 1) << 0xc;
  *(uint *)(param_1 + 0x14) = uVar5 & 0xffffe000 | uVar7;
  uVar4 = (uint)uVar6;
  if ((uVar4 >> 0xc & 1) == 0) {
    uVar5 = uVar5 & 0xffff0000 | uVar5 & 0x6000 | uVar7 | (uVar4 >> 0xf & 1) << 0xf;
    *(uint *)(param_1 + 0x14) = uVar5;
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (ulong)(((uVar4 & 3) * 0x10 + (uVar4 & 0x30) | uVar4 >> 6 & 8) + (uVar4 >> 8 & 0xc)) +
             (ulong)((uVar4 >> 2 & 3) << 2 | (uVar4 >> 2 & 3) << 4));
    *puVar1 = 0x3f80000000000000;
    *(undefined4 *)(puVar1 + 1) = 0x3f800000;
    uVar4 = *(uint *)(param_1 + 0x10);
    uVar6 = (ulong)uVar4;
    uVar5 = *(uint *)(param_1 + 0x14) & 0xffff0000 |
            *(uint *)(param_1 + 0x14) & 0x7fff | (uVar4 >> 0xf & 1) << 0xf;
    *(uint *)(param_1 + 0x14) = uVar5;
  }
  if ((uVar4 >> 0xf & 1) == 0) {
    *(uint *)(param_1 + 0x14) =
         uVar5 & 0xfffe0000 | uVar5 & 0xffff | ((uint)(uVar6 >> 0x10) & 1) << 0x10;
    uVar5 = (uint)uVar6;
  }
  else {
    puVar2 = (undefined2 *)
             (*(long *)(param_1 + 0x18) +
             (ulong)(((uVar4 & 3) * 0x10 + (uVar4 & 0x30) | uVar4 >> 6 & 8) +
                     (uVar4 >> 8 & 0xc) + (uVar4 >> 4 & 0x1c) + (-(uVar4 >> 0xc & 1) & 0xc) +
                    ((uVar4 >> 0xd & 3) + (uVar4 >> 2 & 3)) * 0x14));
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0;
    *(undefined1 *)((long)puVar2 + 7) = 0;
    *(undefined4 *)((long)puVar2 + 3) = 0xffffffff;
    uVar5 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x14) =
         *(uint *)(param_1 + 0x14) & 0xfffe0000 |
         *(uint *)(param_1 + 0x14) & 0xffff | (uVar5 >> 0x10 & 1) << 0x10;
  }
  if ((uVar5 >> 0x10 & 1) != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             (ulong)(((uVar5 & 3) * 0x10 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                     (uVar5 >> 8 & 0xc) + (uVar5 >> 4 & 0x1c) +
                     (uVar5 >> 0xc & 8) + (-(uVar5 >> 0xc & 1) & 0xc) +
                    ((uVar5 >> 0xd & 3) + (uVar5 >> 2 & 3)) * 0x14));
    *(undefined4 *)(puVar1 + 3) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    if (0 < (int)param_5) {
      lVar8 = 0;
      do {
        uVar5 = *(uint *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x18) + lVar8;
        lVar8 = lVar8 + 0x10;
        puVar1 = (undefined8 *)
                 (lVar3 + (((ulong)uVar5 & 3) * 0x10 + ((ulong)uVar5 & 0x30) |
                          (ulong)(uVar5 >> 6) & 8) +
                          ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
                          ((ulong)(uVar5 >> 0xc) & 8) + (ulong)(-(uVar5 >> 0xc & 1) & 0xc) +
                          (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c) +
                          (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14);
        *puVar1 = 0;
        puVar1[1] = 0;
      } while ((ulong)param_5 * 0x10 != lVar8);
    }
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar6 = (ulong)uVar7;
  uVar5 = *(uint *)(param_1 + 0x14) & 0xfffc0000 |
          *(uint *)(param_1 + 0x14) & 0x1ffff | (uVar7 >> 0x11 & 1) << 0x11;
  *(uint *)(param_1 + 0x14) = uVar5;
  if ((uVar7 >> 0x11 & 1) != 0) {
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x18) +
             ((uVar6 & 3) * 0x10 + (uVar6 & 0x30) | (ulong)(uVar7 >> 6) & 8) +
             ((ulong)(uVar7 >> 8) & 0xc) + ((ulong)(uVar7 >> 4) & 0x1c) +
             ((ulong)(uVar7 >> 0xc) & 8) + (ulong)(-(uVar7 >> 0xc & 1) & 0xc) +
             (ulong)(-(uVar7 >> 0x10 & 1) & 0x1c) +
             ((ulong)(uVar7 >> 0xc) & 0x10) * ((ulong)(uVar7 >> 6) & 7) +
             (((ulong)(uVar7 >> 0xd) & 3) + ((ulong)(uVar7 >> 2) & 3)) * 0x14);
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    uVar6 = (ulong)*(uint *)(param_1 + 0x10);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  uVar5 = uVar5 & 0xfff3ffff | (uint)uVar6 & 0xc0000;
  *(uint *)(param_1 + 0x14) = uVar5;
  if (((uVar6 & 0xc0000) != 0) && (0 < (int)param_13)) {
    lVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x10);
      *(undefined4 *)
       (*(long *)(param_1 + 0x18) +
        (((ulong)uVar5 & 3) * 0x10 + ((ulong)uVar5 & 0x30) | (ulong)(uVar5 >> 6) & 8) +
        ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
        ((ulong)(uVar5 >> 0xc) & 8) + (ulong)(-(uVar5 >> 0xc & 1) & 0xc) +
        (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c) +
        ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) +
        (ulong)((int)(uVar5 << 0xe) >> 0x1f & 0x74) +
        (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14 + lVar8) = 0;
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18) + lVar8 +
              (((ulong)uVar5 & 3) * 0x10 + ((ulong)uVar5 & 0x30) | (ulong)(uVar5 >> 6) & 8) +
              ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
              ((ulong)(uVar5 >> 0xc) & 8) + (ulong)(-(uVar5 >> 0xc & 1) & 0xc) +
              (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c) +
              ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) +
              (ulong)((int)(uVar5 << 0xe) >> 0x1f & 0x74) +
              (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14;
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      uVar5 = *(uint *)(param_1 + 0x10);
      lVar3 = *(long *)(param_1 + 0x18) + lVar8;
      lVar8 = lVar8 + 0x20;
      *(undefined8 *)
       (lVar3 + (((ulong)uVar5 & 3) * 0x10 + ((ulong)uVar5 & 0x30) | (ulong)(uVar5 >> 6) & 8) +
                ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
                ((ulong)(uVar5 >> 0xc) & 8) + (ulong)(-(uVar5 >> 0xc & 1) & 0xc) +
                (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c) +
                ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) +
                (ulong)((int)(uVar5 << 0xe) >> 0x1f & 0x74) +
                (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14 + 0x18) = 0;
    } while ((ulong)param_13 * 0x20 != lVar8);
    uVar6 = (ulong)*(uint *)(param_1 + 0x10);
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  uVar7 = (uint)uVar6;
  *(uint *)(param_1 + 0x14) = uVar5 & 0xffcfffff | uVar7 & 0x300000;
  if ((uVar6 & 0x300000) != 0) {
    *(undefined8 *)
     (*(long *)(param_1 + 0x18) +
     (ulong)(((uVar7 & 3) * 0x10 + (uVar7 & 0x30) | uVar7 >> 6 & 8) +
             (uVar7 >> 8 & 0xc) + (uVar7 >> 4 & 0x1c) +
             (uVar7 >> 0xc & 8) + (uVar7 >> 0xd & 0x60) + (-(uVar7 >> 0xc & 1) & 0xc) +
             (-(uVar7 >> 0x10 & 1) & 0x1c) + (uVar7 >> 0xc & 0x10) * (uVar7 >> 6 & 7) +
            ((int)(uVar7 << 0xe) >> 0x1f & 0x74U)) +
     (ulong)(((uVar7 >> 0xd & 3) + (uVar7 >> 2 & 3)) * 0x14)) = 0;
    uVar5 = *(uint *)(param_1 + 0x10);
    *(undefined4 *)
     (*(long *)(param_1 + 0x18) +
      (((ulong)uVar5 & 3) * 0x10 + ((ulong)uVar5 & 0x30) | (ulong)(uVar5 >> 6) & 8) +
      ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
      ((ulong)(uVar5 >> 0xc) & 8) + ((ulong)(uVar5 >> 0xd) & 0x60) +
      (ulong)(-(uVar5 >> 0xc & 1) & 0xc) + (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c) +
      ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) +
      (ulong)((int)(uVar5 << 0xe) >> 0x1f & 0x74) +
      (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14 + 8) = 0;
    if (0 < (int)param_14) {
      lVar8 = 0;
      do {
        uVar5 = *(uint *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x18) + lVar8;
        lVar8 = lVar8 + 0x58;
        puVar1 = (undefined8 *)
                 (lVar3 + (((ulong)uVar5 & 3) * 0x10 + ((ulong)uVar5 & 0x30) |
                          (ulong)(uVar5 >> 6) & 8) +
                          ((ulong)(uVar5 >> 8) & 0xc) + ((ulong)(uVar5 >> 4) & 0x1c) +
                          ((ulong)(uVar5 >> 0xc) & 8) + ((ulong)(uVar5 >> 0xd) & 0x60) +
                          (ulong)(-(uVar5 >> 0xc & 1) & 0xc) + (ulong)(-(uVar5 >> 0x10 & 1) & 0x1c)
                          + ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) +
                          (ulong)((int)(uVar5 << 0xe) >> 0x1f & 0x74) +
                          (ulong)((uVar5 & 0x300000) != 0) * 0x10 +
                          (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14);
        *puVar1 = 0;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      } while ((ulong)param_14 * 0x58 != lVar8);
    }
  }
  return;
}


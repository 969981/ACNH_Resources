
void FUN_00376d44(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 8) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x48) = 0xe0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  bVar8 = *(byte *)(param_2 + 0x48);
  *(byte *)(param_1 + 0x48) = bVar8 & 0xf | 0xe0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_2 + 0x48) & 0xf0 | bVar8 & 0xf;
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x38) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    bVar8 = *(byte *)(param_2 + 0x49);
  }
  else {
    puVar14 = (undefined8 *)FUN_00367b30(0x10);
    *(undefined8 **)(param_1 + 0x38) = puVar14;
    uVar3 = (*(undefined8 **)(param_2 + 0x38))[1];
    *puVar14 = **(undefined8 **)(param_2 + 0x38);
    puVar14[1] = uVar3;
    *(undefined4 *)(*(long *)(param_1 + 0x38) + 0xc) = 0;
    bVar8 = *(byte *)(param_2 + 0x49);
  }
  if ((bVar8 >> 5 & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    puVar14 = (undefined8 *)FUN_00367b30(0x20);
    *(undefined8 **)(param_1 + 8) = puVar14;
    puVar15 = *(undefined8 **)(param_2 + 8);
    uVar3 = puVar15[2];
    uVar4 = puVar15[3];
    uVar5 = puVar15[1];
    *puVar14 = *puVar15;
    puVar14[1] = uVar5;
    puVar14[2] = uVar3;
    puVar14[3] = uVar4;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffc00000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffc00000;
  uVar6 = *(uint *)(param_2 + 0x10);
  FUN_00375554(param_1,uVar6 & 3,uVar6 >> 2 & 3,uVar6 >> 4 & 3,uVar6 >> 6 & 7,uVar6 >> 9 & 1,
               uVar6 >> 10 & 3,uVar6 >> 0xc & 1,uVar6 >> 0xd & 3,(byte)(uVar6 >> 0xf) & 1,
               (byte)(uVar6 >> 0x10) & 1,(byte)(uVar6 >> 0x11) & 1,uVar6 >> 0x12 & 3,
               uVar6 >> 0x14 & 3);
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    uVar6 = *(uint *)(param_1 + 0x14);
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar19 = (ulong)uVar7 & 3;
    uVar13 = (uint)uVar19;
    *(uint *)(param_1 + 0x14) = uVar6 & 0xfffffffc | uVar13;
    uVar16 = (ulong)*(uint *)(param_2 + 0x14) & 0xc;
    uVar9 = (uint)uVar16;
    *(uint *)(param_1 + 0x14) = uVar6 & 0xfffffff0 | uVar13 | uVar9;
    uVar18 = (ulong)*(uint *)(param_2 + 0x14) & 0x30;
    uVar10 = (uint)uVar18;
    *(uint *)(param_1 + 0x14) = uVar6 & 0xffffffc0 | uVar13 | uVar9 | uVar10;
    uVar17 = (ulong)*(uint *)(param_2 + 0x14) & 0x1c0;
    uVar11 = (uint)uVar17;
    *(uint *)(param_1 + 0x14) = uVar6 & 0xfffffe00 | uVar13 | uVar9 | uVar10 | uVar11;
    uVar20 = (ulong)*(uint *)(param_2 + 0x14) & 0x6000;
    uVar12 = (uint)uVar20;
    *(uint *)(param_1 + 0x14) = uVar6 & 0xffff9e00 | uVar13 | uVar9 | uVar10 | uVar11 | uVar12;
    uVar21 = (ulong)*(uint *)(param_2 + 0x14) & 0x8000;
    *(uint *)(param_1 + 0x14) =
         uVar6 & 0xffff1e00 | uVar13 | uVar9 | uVar10 | uVar11 | uVar12 | (uint)uVar21;
    uVar22 = (ulong)*(uint *)(param_2 + 0x14) & 0xc0000;
    *(uint *)(param_1 + 0x14) =
         uVar6 & 0xfff31e00 | uVar13 | uVar9 | uVar10 | uVar11 | uVar12 | (uint)uVar21 |
         (uint)uVar22;
    uVar23 = (ulong)*(uint *)(param_2 + 0x14) & 0x300000;
    uVar19 = (ulong)uVar6 & 0xffc31e00 | uVar19 | uVar16 | uVar18 | uVar17 | uVar20 | uVar21 |
             uVar22 | uVar23;
    *(int *)(param_1 + 0x14) = (int)uVar19;
    lVar1 = 0;
    if ((uVar6 & 0x1000) != 0) {
      lVar1 = 0xc;
    }
    lVar2 = 0;
    if ((uVar6 & 0x20000) != 0) {
      lVar2 = 0x74;
    }
    memcpy(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
           lVar2 + lVar1 + uVar18 + ((ulong)uVar7 & 3) * 0x10 +
           (((ulong)(uVar6 >> 10) & 3) + (uVar17 >> 6)) * 4 +
           (ulong)((int)(uVar17 >> 2) + 0x1cU & (int)(uVar6 << 0xf) >> 0x1f) +
           (((ulong)(uVar6 >> 9) & 1) + (uVar21 >> 0xf)) * 8 + (ulong)((int)uVar23 != 0) * 0x10 +
           (ulong)(uint)((int)(uVar23 >> 0x14) * 0x58) + (uVar22 >> 0xd) +
           (ulong)((((uint)(uVar19 >> 0xd) & 3) + (uVar9 >> 2)) * 0x14));
  }
  FUN_00377020(param_1,param_2,param_3);
  FUN_00375e48(param_1,*param_3);
  return;
}


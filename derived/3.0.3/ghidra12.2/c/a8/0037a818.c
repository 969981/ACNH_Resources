
void FUN_0037a818(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  void *__s;
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar8;
  undefined8 uVar7;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ushort local_44;
  ushort local_42;
  
  lVar4 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  __s = (void *)0x0;
  if (lVar4 != 0) {
    __s = (void *)(lVar4 + (ulong)*(uint *)(param_1 + 0x34));
  }
  memset(__s,0,0x220);
  *(undefined4 *)((long)__s + 4) = *param_5;
  *(undefined4 *)((long)__s + 8) = param_5[1];
  uVar1 = FUN_0037aaf0(param_1,__s);
  fVar14 = (float)*(undefined8 *)(param_2 + 0x50);
  fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_2 + 0x70);
  fVar9 = (float)*(undefined8 *)(param_2 + 0x78);
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_2 + 0x60);
  fVar28 = -fVar5 * fVar12;
  fVar13 = (float)*(undefined8 *)(param_2 + 0x68);
  fVar30 = -fVar14 * fVar8;
  fVar26 = -fVar11 * fVar16;
  fVar17 = (float)*(undefined8 *)(param_2 + 0x58);
  fVar22 = 0.0;
  fVar33 = fVar16 * fVar13 * fVar5 + fVar14 * fVar12 * fVar9 + fVar11 * fVar17 * fVar8 +
           fVar28 * fVar17 + fVar26 * fVar9 + fVar30 * fVar13;
  if (fVar33 != 0.0) {
    fVar22 = 1.0 / fVar33;
  }
  fVar35 = -(fVar16 * fVar9) + fVar17 * fVar8;
  fVar23 = fVar17 * -fVar5 + fVar9 * fVar14;
  fVar30 = fVar30 + fVar16 * fVar5;
  fVar21 = (-(fVar8 * fVar13) + fVar9 * fVar12) * fVar22;
  fVar28 = (fVar28 + fVar8 * fVar11) * fVar22;
  fVar33 = (fVar9 * -fVar11 + fVar13 * fVar5) * fVar22;
  fVar29 = (-(fVar12 * fVar17) + fVar13 * fVar16) * fVar22;
  fVar25 = (fVar13 * -fVar14 + fVar17 * fVar11) * fVar22;
  fVar27 = (fVar26 + fVar12 * fVar14) * fVar22;
  fVar34 = fVar35 * fVar22;
  fVar24 = fVar23 * fVar22;
  fVar26 = fVar30 * fVar22;
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x68) >> 0x20);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
  uVar18 = *(undefined8 *)(param_2 + 0x88);
  uVar15 = *(undefined8 *)(param_2 + 0x80);
  uVar20 = *(undefined8 *)(param_2 + 0x98);
  uVar19 = *(undefined8 *)(param_2 + 0x90);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
  fVar35 = (-(fVar35 * fVar22) * fVar8 - fVar21 * fVar9) - fVar29 * fVar5;
  fVar23 = (-(fVar23 * fVar22) * fVar8 - fVar33 * fVar9) - fVar25 * fVar5;
  fVar12 = (-(fVar30 * fVar22) * fVar8 - fVar28 * fVar9) - fVar27 * fVar5;
  uVar10 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  fVar13 = (float)uVar15;
  fVar14 = (float)((ulong)uVar15 >> 0x20);
  fVar16 = (float)uVar18;
  fVar17 = (float)((ulong)uVar18 >> 0x20);
  fVar22 = (float)uVar19;
  fVar30 = (float)((ulong)uVar19 >> 0x20);
  fVar31 = (float)uVar20;
  fVar32 = (float)((ulong)uVar20 >> 0x20);
  fVar5 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar9 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  *(undefined8 *)((long)__s + 0x88) = uVar18;
  *(undefined8 *)((long)__s + 0x80) = uVar15;
  *(undefined8 *)((long)__s + 0x98) = uVar20;
  *(undefined8 *)((long)__s + 0x90) = uVar19;
  *(undefined8 *)((long)__s + 0xa8) = uVar10;
  *(undefined8 *)((long)__s + 0xa0) = uVar7;
  *(ulong *)((long)__s + 0xb8) =
       CONCAT44(fVar35 + fVar17 * fVar21 + fVar32 * fVar34 + fVar11 * fVar29,
                fVar16 * fVar21 + fVar31 * fVar34 + fVar9 * fVar29 + 0.0);
  *(ulong *)((long)__s + 0xb0) =
       CONCAT44(fVar14 * fVar21 + fVar30 * fVar34 + fVar8 * fVar29 + 0.0,
                fVar13 * fVar21 + fVar22 * fVar34 + fVar5 * fVar29 + 0.0);
  *(ulong *)((long)__s + 200) =
       CONCAT44(fVar23 + fVar17 * fVar33 + fVar32 * fVar24 + fVar11 * fVar25,
                fVar16 * fVar33 + fVar31 * fVar24 + fVar9 * fVar25 + 0.0);
  *(ulong *)((long)__s + 0xc0) =
       CONCAT44(fVar14 * fVar33 + fVar30 * fVar24 + fVar8 * fVar25 + 0.0,
                fVar13 * fVar33 + fVar22 * fVar24 + fVar5 * fVar25 + 0.0);
  *(ulong *)((long)__s + 0xd8) =
       CONCAT44(fVar12 + fVar17 * fVar28 + fVar32 * fVar26 + fVar11 * fVar27,
                fVar16 * fVar28 + fVar31 * fVar26 + fVar9 * fVar27 + 0.0);
  *(ulong *)((long)__s + 0xd0) =
       CONCAT44(fVar14 * fVar28 + fVar30 * fVar26 + fVar8 * fVar27 + 0.0,
                fVar13 * fVar28 + fVar22 * fVar26 + fVar5 * fVar27 + 0.0);
  uVar20 = *(undefined8 *)(param_2 + 0x78);
  uVar19 = *(undefined8 *)(param_2 + 0x70);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar18 = *(undefined8 *)(param_2 + 0x68);
  uVar15 = *(undefined8 *)(param_2 + 0x60);
  *(ulong *)((long)__s + 0x110) = CONCAT44(fVar23,fVar35);
  *(float *)((long)__s + 0x118) = fVar12;
  *(undefined8 *)((long)__s + 0x108) = uVar20;
  *(undefined8 *)((long)__s + 0x100) = uVar19;
  *(undefined8 *)((long)__s + 0xe8) = uVar10;
  *(undefined8 *)((long)__s + 0xe0) = uVar7;
  *(undefined8 *)((long)__s + 0xf8) = uVar18;
  *(undefined8 *)((long)__s + 0xf0) = uVar15;
  FUN_0037ac90(uVar1,__s,param_3,param_4);
  uVar3 = *(uint *)(param_1 + 0x14);
  if ((uVar3 & 3) != 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))(&local_44);
      uVar6 = NEON_ucvtf((uint)local_44);
      *(undefined4 *)((long)__s + 0x1f0) = uVar6;
      uVar6 = NEON_ucvtf((uint)local_42);
      *(undefined4 *)((long)__s + 500) = uVar6;
      uVar3 = *(uint *)(param_1 + 0x14);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(&local_44);
        uVar6 = NEON_ucvtf((uint)local_44);
        *(undefined4 *)((long)__s + 0x200) = uVar6;
        uVar6 = NEON_ucvtf((uint)local_42);
        *(undefined4 *)((long)__s + 0x204) = uVar6;
        uVar3 = *(uint *)(param_1 + 0x14);
      }
      if ((((uVar3 ^ 0xffffffff) & 3) == 0) &&
         (plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x28), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x20))(&local_44);
        uVar6 = NEON_ucvtf((uint)local_44);
        *(undefined4 *)((long)__s + 0x210) = uVar6;
        uVar6 = NEON_ucvtf((uint)local_42);
        *(undefined4 *)((long)__s + 0x214) = uVar6;
      }
    }
  }
  return;
}


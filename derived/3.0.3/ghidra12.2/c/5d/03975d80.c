
void FUN_03975d80(long param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  lVar11 = *(long *)(param_1 + 0x20);
  uVar2 = param_2;
  if (*(uint *)(param_1 + 0x18) <= param_2) {
    uVar2 = 0;
  }
  puVar12 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 0x970);
  uVar18 = puVar12[1];
  uVar15 = *puVar12;
  uVar27 = puVar12[3];
  uVar22 = puVar12[2];
  uVar5 = *(ushort *)((long)puVar12 + 0x272);
  puVar12[0x11f] = uVar27;
  puVar12[0x11e] = uVar22;
  iVar8 = *(int *)(puVar12 + 0x4d);
  *(uint *)(puVar12 + 0x11b) = *(uint *)(puVar12 + 0x11b) & 0xfffffff8;
  fVar30 = (float)puVar12[0xc];
  fVar14 = (float)uVar15;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar17 = (float)uVar18;
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar31 = (float)((ulong)puVar12[0xc] >> 0x20);
  fVar20 = (float)uVar22;
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  fVar25 = (float)uVar27;
  fVar28 = (float)((ulong)uVar27 >> 0x20);
  fVar33 = (float)puVar12[0xe];
  fVar34 = (float)((ulong)puVar12[0xe] >> 0x20);
  fVar36 = (float)puVar12[0x10];
  fVar37 = (float)((ulong)puVar12[0x10] >> 0x20);
  puVar12[0x11d] = uVar18;
  puVar12[0x11c] = uVar15;
  fVar39 = (float)puVar12[0x12];
  fVar40 = (float)((ulong)puVar12[0x12] >> 0x20);
  *(undefined4 *)(puVar12 + 0x12d) = 0xbf800000;
  uVar18 = puVar12[5];
  uVar15 = puVar12[4];
  fVar35 = (float)puVar12[0xf];
  fVar21 = (float)uVar15;
  fVar24 = (float)((ulong)uVar15 >> 0x20);
  fVar26 = (float)uVar18;
  fVar29 = (float)((ulong)uVar18 >> 0x20);
  fVar41 = (float)puVar12[0x13];
  fVar32 = (float)puVar12[0xd];
  fVar38 = (float)puVar12[0x11];
  puVar12[0x121] = uVar18;
  puVar12[0x120] = uVar15;
  puVar12[0x125] =
       CONCAT44((float)((ulong)puVar12[0xf] >> 0x20) +
                fVar19 * fVar33 + fVar28 * fVar34 + fVar29 * fVar35,
                fVar17 * fVar33 + fVar25 * fVar34 + fVar26 * fVar35 + 0.0);
  puVar12[0x124] =
       CONCAT44(fVar16 * fVar33 + fVar23 * fVar34 + fVar24 * fVar35 + 0.0,
                fVar14 * fVar33 + fVar20 * fVar34 + fVar21 * fVar35 + 0.0);
  puVar12[0x123] =
       CONCAT44((float)((ulong)puVar12[0xd] >> 0x20) +
                fVar19 * fVar30 + fVar28 * fVar31 + fVar29 * fVar32,
                fVar17 * fVar30 + fVar25 * fVar31 + fVar26 * fVar32 + 0.0);
  puVar12[0x122] =
       CONCAT44(fVar16 * fVar30 + fVar23 * fVar31 + fVar24 * fVar32 + 0.0,
                fVar14 * fVar30 + fVar20 * fVar31 + fVar21 * fVar32 + 0.0);
  puVar12[0x127] =
       CONCAT44((float)((ulong)puVar12[0x11] >> 0x20) +
                fVar19 * fVar36 + fVar28 * fVar37 + fVar29 * fVar38,
                fVar17 * fVar36 + fVar25 * fVar37 + fVar26 * fVar38 + 0.0);
  puVar12[0x126] =
       CONCAT44(fVar16 * fVar36 + fVar23 * fVar37 + fVar24 * fVar38 + 0.0,
                fVar14 * fVar36 + fVar20 * fVar37 + fVar21 * fVar38 + 0.0);
  puVar12[0x129] =
       CONCAT44((float)((ulong)puVar12[0x13] >> 0x20) +
                fVar19 * fVar39 + fVar28 * fVar40 + fVar29 * fVar41,
                fVar17 * fVar39 + fVar25 * fVar40 + fVar26 * fVar41 + 0.0);
  puVar12[0x128] =
       CONCAT44(fVar16 * fVar39 + fVar23 * fVar40 + fVar24 * fVar41 + 0.0,
                fVar14 * fVar39 + fVar20 * fVar40 + fVar21 * fVar41 + 0.0);
  fVar14 = *(float *)((long)puVar12 + 0xe4) - *(float *)(puVar12 + 0x1c);
  *(float *)((long)puVar12 + 0x95c) = fVar14;
  *(float *)(puVar12 + 299) = 1.0 - *(float *)(puVar12 + 0x1c) / *(float *)((long)puVar12 + 0xe4);
  *(float *)(puVar12 + 300) = 1.0 / fVar14;
  fVar14 = *(float *)((long)puVar12 + 0xec) * *(float *)((long)puVar12 + 0xf4);
  *(float *)((long)puVar12 + 0x964) = fVar14;
  *(float *)(puVar12 + 0x12a) =
       fVar14 * (*(float *)((long)puVar12 + 0xfc) + *(float *)((long)puVar12 + 0xfc));
  *(float *)((long)puVar12 + 0x954) =
       *(float *)((long)puVar12 + 0xf4) * (*(float *)(puVar12 + 0x20) + *(float *)(puVar12 + 0x20));
  uVar3 = *(uint *)(param_1 + 0x7bc);
  *(char *)((long)puVar12 + 0x271) = (char)uVar3;
  iVar6 = (**(code **)(puVar12[0x47] + 0x20))(puVar12 + 0x47);
  iVar7 = (**(code **)(puVar12[0x47] + 0x20))(puVar12 + 0x47);
  iVar4 = *(int *)(puVar12 + 0x4a);
  lVar9 = 0;
  if (puVar12[0x4b] != 0) {
    lVar9 = (*DAT_04c61fd0)();
  }
  *(ulong *)(lVar11 + (long)(int)uVar2 * 0x970 + 0x248) =
       lVar9 + (ulong)(iVar4 + (uVar3 & 0xff) * (uint)uVar5 * ((iVar8 + iVar6) - 1U & -iVar7));
  iVar6 = (**(code **)(**(long **)(param_1 + 0x28) + 0x28))
                    (*(long **)(param_1 + 0x28),param_2,puVar12,*(undefined4 *)(param_1 + 0x7bc));
  iVar7 = (**(code **)(**(long **)(param_1 + 0x30) + 0x28))
                    (*(long **)(param_1 + 0x30),param_2,puVar12,*(undefined4 *)(param_1 + 0x7bc));
  iVar8 = (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                    (*(long **)(param_1 + 0x38),param_2,puVar12,*(undefined4 *)(param_1 + 0x7bc));
  iVar4 = *(int *)(param_1 + 0x40);
  iVar8 = iVar7 + iVar6 + iVar8;
  if (iVar4 != 0) {
    lVar9 = *(long *)(param_1 + 0x48);
    uVar13 = 0;
    do {
      plVar10 = *(long **)(lVar9 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
      if (plVar10 != (long *)0x0) {
        iVar6 = (**(code **)(*plVar10 + 0x28))
                          (plVar10,param_2,puVar12,*(undefined4 *)(param_1 + 0x7bc));
        iVar8 = iVar6 + iVar8;
      }
      uVar1 = uVar13 + 1;
      uVar13 = uVar1 & 0xffffffff;
    } while (iVar4 != (int)uVar1);
  }
  lVar11 = lVar11 + (long)(int)uVar2 * 0x970;
  *(uint *)(lVar11 + 0x8d4) = *(uint *)(lVar11 + 0x8d4) & 0xfffffffe | (uint)(iVar8 == 0);
  return;
}


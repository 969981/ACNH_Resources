
ulong FUN_0068d010(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  
  uVar14 = (ulong)*(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x80) == 0xffff) {
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar14 = (ulong)uVar2;
    lVar15 = (long)(int)uVar2;
    iVar16 = (int)(uVar14 << 1);
    if (*(int *)(param_1 + 0x44) < iVar16) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)(param_1 + 0x48) + 0x10))
                         (*(long **)(param_1 + 0x48),lVar15 << 6,0x10);
      puVar8 = *(undefined8 **)(param_1 + 0x38);
      uVar6 = *(uint *)(param_1 + 0x40);
      if (uVar6 != 0) {
        puVar9 = puVar8;
        puVar11 = puVar7;
        if ((uVar6 & 1) != 0) {
          uVar4 = puVar8[1];
          uVar3 = puVar8[2];
          uVar5 = puVar8[3];
          *puVar7 = *puVar8;
          puVar7[1] = uVar4;
          puVar9 = puVar8 + 4;
          puVar11 = puVar7 + 4;
          puVar7[2] = uVar3;
          puVar7[3] = uVar5;
        }
        if (((long)(int)uVar6 - 1U & 0x7ffffffffffffff) != 0) {
          do {
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            uVar5 = puVar9[3];
            puVar11[2] = puVar9[2];
            puVar11[3] = uVar5;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            uVar3 = puVar9[4];
            uVar4 = puVar9[5];
            puVar1 = puVar9 + 6;
            uVar5 = puVar9[7];
            puVar9 = puVar9 + 8;
            puVar11[6] = *puVar1;
            puVar11[7] = uVar5;
            puVar11[4] = uVar3;
            puVar11[5] = uVar4;
            puVar11 = puVar11 + 8;
          } while (puVar9 != puVar8 + (long)(int)uVar6 * 4);
        }
      }
      *(undefined8 **)(param_1 + 0x38) = puVar7;
      *(int *)(param_1 + 0x44) = iVar16;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      }
    }
    if (*(int *)(param_1 + 0x40) < iVar16) {
      lVar12 = *(long *)(param_1 + 0x38);
      lVar10 = (long)*(int *)(param_1 + 0x40) * 0x20;
      lVar13 = (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1) << 5;
      do {
        lVar13 = lVar13 + -0x20;
        puVar7 = (undefined8 *)(lVar12 + lVar10);
        *(undefined4 *)(puVar7 + 2) = 0xffffffff;
        lVar12 = lVar12 + 0x20;
        *(undefined8 *)((long)puVar7 + 0x14) = 0xffffffffffff;
        *puVar7 = 0;
        puVar7[1] = 0;
      } while (lVar10 != lVar13);
    }
    *(int *)(param_1 + 0x40) = iVar16;
    if ((int)uVar2 < iVar16 + -1) {
      lVar12 = lVar15 << 5;
      do {
        lVar15 = lVar15 + 1;
        *(short *)(*(long *)(param_1 + 0x38) + lVar12 + 0x16) = (short)lVar15;
        lVar10 = *(long *)(param_1 + 0x38) + lVar12;
        lVar12 = lVar12 + 0x20;
        *(undefined1 *)(lVar10 + 0x1a) = 1;
      } while (iVar16 + -1 != lVar15);
    }
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)(int)uVar14 * 0x20);
  *(uint *)(param_1 + 0x80) = (uint)*(ushort *)((long)puVar7 + 0x16);
  *(undefined4 *)(puVar7 + 2) = 0xffffffff;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined8 *)((long)puVar7 + 0x14) = 0xffffffffffff;
  DAT_04c811c8 = DAT_04c811c8 + 1;
  *(int *)(puVar7 + 2) = DAT_04c811c8;
  *(undefined1 *)((long)puVar7 + 0x1a) = 0;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  return uVar14;
}


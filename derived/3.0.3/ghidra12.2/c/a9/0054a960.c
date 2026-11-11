
void FUN_0054a960(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [480];
  
  uVar4 = *(uint *)(param_1 + 0x170);
  uVar6 = (ulong)uVar4;
  if (uVar4 != 0) {
    lVar9 = *(long *)(param_1 + 0x18);
    if (-1 < *(int *)(lVar9 + 0xa8)) {
      lVar7 = *(long *)(param_1 + 0x270);
      if (0 < (int)uVar4) {
        lVar12 = *(long *)(*(long *)(lVar7 + 0x30) + (long)*(int *)(lVar9 + 0xa8) * 8);
        lVar10 = 0;
        lVar11 = 0;
        do {
          puVar2 = (undefined8 *)(*(long *)(lVar9 + 0xc0) + lVar10);
          puVar3 = (undefined8 *)
                   (*(long *)(lVar12 + 0x18) +
                   (long)*(int *)(*(long *)(lVar9 + 0xb0) + lVar11 * 4) * 0x40);
          lVar10 = lVar10 + 0x40;
          uVar39 = puVar3[7];
          uVar38 = puVar3[6];
          fVar18 = (float)((ulong)*puVar2 >> 0x20);
          fVar27 = (float)puVar3[2];
          fVar28 = (float)((ulong)puVar3[2] >> 0x20);
          fVar29 = (float)puVar3[3];
          fVar30 = (float)((ulong)puVar3[3] >> 0x20);
          fVar21 = (float)((ulong)puVar2[2] >> 0x20);
          fVar17 = (float)*puVar2;
          fVar23 = (float)*puVar3;
          fVar24 = (float)((ulong)*puVar3 >> 0x20);
          fVar25 = (float)puVar3[1];
          fVar26 = (float)((ulong)puVar3[1] >> 0x20);
          fVar19 = (float)puVar2[1];
          fVar34 = (float)puVar3[4];
          fVar35 = (float)((ulong)puVar3[4] >> 0x20);
          fVar36 = (float)puVar3[5];
          fVar37 = (float)((ulong)puVar3[5] >> 0x20);
          fVar20 = (float)puVar2[2];
          fVar22 = (float)puVar2[3];
          fVar31 = (float)puVar2[4];
          fVar40 = (float)puVar2[6];
          fVar32 = (float)((ulong)puVar2[4] >> 0x20);
          fVar41 = (float)((ulong)puVar2[6] >> 0x20);
          fVar33 = (float)puVar2[5];
          fVar42 = (float)puVar2[7];
          lVar13 = *(long *)(*(long *)(param_1 + 0x168) + lVar11 * 8);
          lVar11 = lVar11 + 1;
          *(ulong *)(lVar13 + 0x28) =
               CONCAT44(fVar26 * fVar17 + fVar30 * fVar18 + fVar37 * fVar19,
                        fVar25 * fVar17 + fVar29 * fVar18 + fVar36 * fVar19);
          *(ulong *)(lVar13 + 0x20) =
               CONCAT44(fVar24 * fVar17 + fVar28 * fVar18 + fVar35 * fVar19,
                        fVar23 * fVar17 + fVar27 * fVar18 + fVar34 * fVar19);
          *(ulong *)(lVar13 + 0x38) =
               CONCAT44(fVar37 * fVar22 + fVar26 * fVar20 + fVar30 * fVar21,
                        fVar36 * fVar22 + fVar25 * fVar20 + fVar29 * fVar21);
          *(ulong *)(lVar13 + 0x30) =
               CONCAT44(fVar35 * fVar22 + fVar24 * fVar20 + fVar28 * fVar21,
                        fVar34 * fVar22 + fVar23 * fVar20 + fVar27 * fVar21);
          *(undefined8 *)(lVar13 + 0x70) = 0;
          *(undefined8 *)(lVar13 + 0x78) = 0;
          *(undefined8 *)(lVar13 + 0x60) = 0;
          *(undefined8 *)(lVar13 + 0x68) = 0;
          *(ulong *)(lVar13 + 0x48) =
               CONCAT44(fVar37 * fVar33 + fVar26 * fVar31 + fVar30 * fVar32,
                        fVar36 * fVar33 + fVar25 * fVar31 + fVar29 * fVar32);
          *(ulong *)(lVar13 + 0x40) =
               CONCAT44(fVar35 * fVar33 + fVar24 * fVar31 + fVar28 * fVar32,
                        fVar34 * fVar33 + fVar23 * fVar31 + fVar27 * fVar32);
          *(ulong *)(lVar13 + 0x58) =
               CONCAT44(fVar37 * fVar42 +
                        fVar30 * fVar41 + (float)((ulong)uVar39 >> 0x20) + fVar26 * fVar40,
                        fVar36 * fVar42 + fVar29 * fVar41 + (float)uVar39 + fVar25 * fVar40);
          *(ulong *)(lVar13 + 0x50) =
               CONCAT44(fVar35 * fVar42 +
                        fVar28 * fVar41 + (float)((ulong)uVar38 >> 0x20) + fVar24 * fVar40,
                        fVar34 * fVar42 + fVar27 * fVar41 + (float)uVar38 + fVar23 * fVar40);
          uVar6 = (ulong)*(int *)(param_1 + 0x170);
        } while (lVar11 < (long)uVar6);
      }
      puVar1 = (ulong *)(lVar7 + 0xc0);
      plVar5 = (long *)(*puVar1 & 0xfffffffffffffffc);
      *puVar1 = (ulong)plVar5 | 1;
      if (plVar5 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar15 = puVar1;
        do {
          while( true ) {
            puVar16 = (ulong *)(plVar5 + 1);
            uVar8 = *puVar16;
            plVar14 = (long *)(uVar8 & 0xfffffffffffffffc);
            if ((uVar8 & 3) == 0) break;
            (**(code **)(*plVar5 + 8))();
            *puVar15 = *puVar15 & 3 | (ulong)plVar14;
            plVar5 = plVar14;
            if (plVar14 == (long *)0x0) goto LAB_0054ab44;
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,param_1,uVar6 & 0xffffffff);
          plVar5 = plVar14;
          puVar15 = puVar16;
        } while (plVar14 != (long *)0x0);
LAB_0054ab44:
        uVar6 = *puVar1 & 0xfffffffffffffffc;
      }
      *puVar1 = uVar6;
      return;
    }
    FUN_004426d0(auStack_230,auStack_220,0x200);
    FUN_0043ac90(auStack_230,"Cannot reposition collidables - no map is defined.");
    FUN_004221e0(0x3779ee44,auStack_220,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Cloth/Cloth/Utilities/Character/hclCharacterUtils.cpp"
                 ,0x5d);
    FUN_00442760(auStack_230);
  }
  return;
}


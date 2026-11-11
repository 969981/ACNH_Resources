
void FUN_003ad340(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0 [8];
  
  if ((*(char *)(param_1 + 0x19) != '\0') && (*(short *)(param_1 + 0x30) != 0)) {
    lVar10 = 0;
    uVar11 = 0;
    lVar12 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
    uVar8 = 0xffffffff;
    do {
      plVar2 = (long *)(*(long *)(param_1 + 0x40) + lVar10);
      if ((*(char *)(*plVar2 + 0x5a) == '\0' || *(char *)(param_1 + 0x88) != '\0') &&
         (*(char *)((long)plVar2 + 0xd) != '\0')) {
        lVar5 = *(long *)(param_1 + 0x38);
        uVar3 = *(ushort *)(*plVar2 + 0x54);
        uVar9 = (ulong)uVar3;
        lVar7 = *(long *)(lVar5 + 0x10) + uVar9 * 0x60;
        if ((*(byte *)(lVar7 + 0x36) & 7) == 0) {
          puVar6 = (undefined8 *)(lVar12 + uVar9 * 0x40);
        }
        else {
          uVar4 = *(ushort *)(lVar7 + 0x30);
          if (uVar4 == 0xffff) {
            if ((uint)uVar8 != (uint)uVar3) {
              FUN_003b3928(lVar5,local_a0,param_3,(uint)uVar3,1);
              uVar8 = uVar9;
            }
            puVar6 = local_a0;
          }
          else {
            if ((uint)uVar8 != (uint)uVar4) {
              FUN_003b3928(lVar5,local_a0,param_3,uVar4,0);
              uVar8 = (ulong)uVar4;
            }
            puVar1 = (undefined8 *)(lVar12 + uVar9 * 0x40);
            puVar6 = &local_e0;
            fVar13 = (float)*puVar1;
            fVar22 = (float)local_a0[0];
            fVar23 = (float)((ulong)local_a0[0] >> 0x20);
            fVar24 = (float)local_a0[1];
            fVar25 = (float)((ulong)local_a0[1] >> 0x20);
            fVar14 = (float)((ulong)*puVar1 >> 0x20);
            fVar26 = (float)local_a0[2];
            fVar27 = (float)((ulong)local_a0[2] >> 0x20);
            fVar28 = (float)local_a0[3];
            fVar29 = (float)((ulong)local_a0[3] >> 0x20);
            fVar19 = (float)puVar1[4];
            fVar20 = (float)((ulong)puVar1[4] >> 0x20);
            fVar15 = (float)puVar1[1];
            fVar30 = (float)local_a0[4];
            fVar31 = (float)((ulong)local_a0[4] >> 0x20);
            fVar32 = (float)local_a0[5];
            fVar33 = (float)((ulong)local_a0[5] >> 0x20);
            fVar16 = (float)puVar1[2];
            fVar17 = (float)((ulong)puVar1[2] >> 0x20);
            fVar21 = (float)puVar1[5];
            fVar18 = (float)puVar1[3];
            uStack_d0 = CONCAT44(fVar23 * fVar16 + fVar27 * fVar17 + fVar31 * fVar18,
                                 fVar22 * fVar16 + fVar26 * fVar17 + fVar30 * fVar18);
            uStack_c8 = CONCAT44(fVar25 * fVar16 + fVar29 * fVar17 + fVar33 * fVar18,
                                 fVar24 * fVar16 + fVar28 * fVar17 + fVar32 * fVar18);
            fVar16 = (float)puVar1[6];
            fVar17 = (float)((ulong)puVar1[6] >> 0x20);
            fVar18 = (float)puVar1[7];
            uStack_d8 = CONCAT44(fVar25 * fVar13 + fVar29 * fVar14 + fVar33 * fVar15,
                                 fVar24 * fVar13 + fVar28 * fVar14 + fVar32 * fVar15);
            local_e0 = CONCAT44(fVar23 * fVar13 + fVar27 * fVar14 + fVar31 * fVar15,
                                fVar22 * fVar13 + fVar26 * fVar14 + fVar30 * fVar15);
            uStack_b0 = CONCAT44((float)((ulong)local_a0[6] >> 0x20) +
                                 fVar23 * fVar16 + fVar27 * fVar17 + fVar31 * fVar18,
                                 (float)local_a0[6] +
                                 fVar22 * fVar16 + fVar26 * fVar17 + fVar30 * fVar18);
            uStack_a8 = CONCAT44((float)((ulong)local_a0[7] >> 0x20) +
                                 fVar25 * fVar16 + fVar29 * fVar17 + fVar33 * fVar18,
                                 (float)local_a0[7] +
                                 fVar24 * fVar16 + fVar28 * fVar17 + fVar32 * fVar18);
            uStack_b8 = CONCAT44(fVar25 * fVar19 + fVar29 * fVar20 + fVar33 * fVar21,
                                 fVar24 * fVar19 + fVar28 * fVar20 + fVar32 * fVar21);
            local_c0 = CONCAT44(fVar23 * fVar19 + fVar27 * fVar20 + fVar31 * fVar21,
                                fVar22 * fVar19 + fVar26 * fVar20 + fVar30 * fVar21);
          }
        }
        FUN_003af6a0(plVar2,param_2,puVar6,param_4);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x70;
    } while (uVar11 < *(ushort *)(param_1 + 0x30));
  }
  return;
}


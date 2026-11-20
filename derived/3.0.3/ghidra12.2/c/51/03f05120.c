
void FUN_03f05120(long param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  short *psVar18;
  undefined8 *puVar19;
  uint uVar20;
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
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [48];
  undefined1 local_d0 [56];
  undefined1 auStack_98 [56];
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_2) {
    param_2 = 0;
  }
  puVar1 = (uint *)(lVar12 + (long)(int)param_2 * 0x10);
  uVar6 = *puVar1;
  if (0 < (int)uVar6) {
    uVar15 = 0;
    puVar3 = PTR_DAT_04bb3498 + 0x10;
    do {
      lVar13 = *(long *)(lVar12 + (long)(int)param_2 * 0x10 + 8);
      uVar4 = uVar15;
      if (*puVar1 <= uVar15) {
        uVar4 = 0;
      }
      puVar2 = (uint *)(lVar13 + (ulong)uVar4 * 0x10);
      uVar7 = *puVar2;
      if (0 < (int)uVar7) {
        uVar20 = 0;
        do {
          lVar14 = *(long *)(lVar13 + (ulong)uVar4 * 0x10 + 8);
          uVar5 = uVar20;
          if (*puVar2 <= uVar20) {
            uVar5 = 0;
          }
          lVar17 = lVar14 + (ulong)uVar5 * 0xa8;
          psVar18 = (short *)(lVar17 + 0x70);
          lVar16 = (long)*psVar18;
          sVar8 = *(short *)(lVar17 + 0x72);
          if (((lVar16 != -1 && sVar8 != -1) &&
              ((*(byte *)(lVar14 + (ulong)uVar5 * 0xa8 + 0x84) & 1) != 0)) && (-1 < sVar8)) {
            puVar19 = (undefined8 *)
                      **(undefined8 **)(*(long *)(*(long *)(param_1 + 0x28) + 0x38) + lVar16 * 8);
            if (((*PTR_DAT_04bb3490 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar9 != 0)) {
              *(undefined **)PTR_DAT_04bb3488 = puVar3;
              __cxa_guard_release(PTR_DAT_04bb3490);
            }
            if (((puVar19 != (undefined8 *)0x0) &&
                (uVar10 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bb3488), (uVar10 & 1) != 0)) &&
               (((long *)puVar19[0x22] != (long *)0x0 &&
                (((lVar14 = *(long *)puVar19[0x22], lVar14 != 0 &&
                  (lVar14 = *(long *)(lVar14 + 0x10), lVar14 != 0)) &&
                 (*(short *)(lVar14 + (ulong)(uint)(int)sVar8 * 0x60 + 0x2a) != -1)))))) {
              plVar11 = (long *)**(undefined8 **)
                                  (*(long *)(*(long *)(param_1 + 0x28) + 0x38) + lVar16 * 8);
              (**(code **)(*plVar11 + 0x70))(plVar11,auStack_98);
              plVar11 = (long *)**(undefined8 **)
                                  (*(long *)(*(long *)(param_1 + 0x28) + 0x38) + (long)*psVar18 * 8)
              ;
              (**(code **)(*plVar11 + 0x70))(plVar11,local_d0,(long)*(short *)(lVar17 + 0x72));
              FUN_007535b4(local_100,auStack_98);
              fVar21 = local_100._0_4_;
              fVar24 = local_d0._0_4_;
              fVar25 = local_d0._4_4_;
              fVar26 = local_d0._8_4_;
              fVar27 = local_d0._12_4_;
              fVar22 = local_100._4_4_;
              fVar28 = local_d0._16_4_;
              fVar29 = local_d0._20_4_;
              fVar30 = local_d0._24_4_;
              fVar31 = local_d0._28_4_;
              fVar23 = local_100._8_4_;
              fVar32 = local_d0._32_4_;
              fVar33 = local_d0._36_4_;
              fVar34 = local_d0._40_4_;
              fVar35 = local_d0._44_4_;
              local_130 = CONCAT44(fVar25 * fVar21 + fVar29 * fVar22 + fVar33 * fVar23 + 0.0,
                                   fVar24 * fVar21 + fVar28 * fVar22 + fVar32 * fVar23 + 0.0);
              uStack_128 = CONCAT44(local_100._12_4_ +
                                    fVar27 * fVar21 + fVar31 * fVar22 + fVar35 * fVar23,
                                    fVar26 * fVar21 + fVar30 * fVar22 + fVar34 * fVar23 + 0.0);
              fVar21 = local_100._16_4_;
              fVar22 = local_100._20_4_;
              fVar23 = local_100._24_4_;
              uStack_120 = CONCAT44(fVar25 * fVar21 + fVar29 * fVar22 + fVar33 * fVar23 + 0.0,
                                    fVar24 * fVar21 + fVar28 * fVar22 + fVar32 * fVar23 + 0.0);
              uStack_118 = CONCAT44(local_100._28_4_ +
                                    fVar27 * fVar21 + fVar31 * fVar22 + fVar35 * fVar23,
                                    fVar26 * fVar21 + fVar30 * fVar22 + fVar34 * fVar23 + 0.0);
              fVar21 = local_100._32_4_;
              fVar22 = local_100._36_4_;
              fVar23 = local_100._40_4_;
              local_110 = CONCAT44(fVar25 * fVar21 + fVar29 * fVar22 + fVar33 * fVar23 + 0.0,
                                   fVar24 * fVar21 + fVar28 * fVar22 + fVar32 * fVar23 + 0.0);
              uStack_108 = CONCAT44(local_100._44_4_ +
                                    fVar27 * fVar21 + fVar31 * fVar22 + fVar35 * fVar23,
                                    fVar26 * fVar21 + fVar30 * fVar22 + fVar34 * fVar23 + 0.0);
              plVar11 = (long *)**(undefined8 **)
                                  (*(long *)(*(long *)(param_1 + 0x28) + 0x38) + (long)*psVar18 * 8)
              ;
              (**(code **)(*plVar11 + 0x50))(plVar11,&local_130,(long)*(short *)(lVar17 + 0x72));
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar7 != uVar20);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar6);
  }
  return;
}


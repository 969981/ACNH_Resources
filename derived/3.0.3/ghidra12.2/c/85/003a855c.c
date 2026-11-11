
void FUN_003a855c(float param_1,long *param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8 [12];
  undefined8 local_98;
  int local_90;
  float local_8c;
  
  if (ABS(param_1) < 0.001) {
    return;
  }
  *(uint *)((long)param_2 + 0xc) = *(uint *)((long)param_2 + 0xc) & 0xfffffffb;
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_4 + 0x18))(param_4);
  uVar5 = *(ushort *)((long)param_3 + 100);
  if ((ulong)uVar5 != 0) {
    lVar10 = param_4[9];
    lVar12 = param_3[9];
    fVar19 = 1.0 - param_1;
    lVar18 = *param_2;
    uVar2 = *(uint *)(param_3[0xd] + 4);
    lVar16 = 0;
    puVar1 = (undefined8 *)
             (PTR_PTR_04bd0a88 + ((ulong)(*(uint *)((long)param_2 + 0xc) >> 1) & 1) * 0x10);
    do {
      if (-1 < (int)*(uint *)(param_3[0xb] + lVar16)) {
        uVar14 = (ulong)*(uint *)(param_3[0xb] + lVar16) & 0x7fff;
        iVar13 = (int)uVar14;
        if (iVar13 != 0x7fff) {
          lVar17 = lVar18 + uVar14 * 0x50;
          pfVar15 = (float *)(lVar17 + 0x44);
          if (ABS(*pfVar15) < 0.001) {
            uVar3 = *(uint *)((long)param_2 + 0xc);
            plVar6 = (long *)param_2[3];
            lVar7 = *(long *)(param_3[0x11] + 0x10) + uVar14 * 0x60;
            uVar4 = *(uint *)(lVar7 + 0x34);
            local_f8 = CONCAT44(local_f8._4_4_,uVar4);
            local_d8 = *(undefined8 *)(lVar7 + 0x44);
            uStack_d0 = *(undefined8 *)(lVar7 + 0x4c);
            uStack_f0._0_4_ = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x38) >> 0x20);
            local_e8 = *(undefined8 *)(lVar7 + 0x54);
            local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar7 + 0x5c));
            *(uint *)((long)param_2 + 0xc) = uVar3 & 0xfffffffb;
            fVar21 = 1.0;
            if (plVar6 != (long *)0x0) {
              local_98 = 0;
              local_8c = 1.0;
              local_90 = iVar13;
              (**(code **)(*plVar6 + 0x10))(0x3f800000,plVar6,&local_98);
              fVar21 = local_8c;
            }
            (*(code *)(&PTR_LAB_0484e288)[((ulong)uVar3 & 2 | (ulong)(uVar4 >> 0xc) & 7) * 2])
                      (fVar21,param_2,*param_2,&local_f8,uVar14);
            *pfVar15 = 0.0;
          }
          uVar8 = (ulong)(*(uint *)(param_4[0xb] + uVar14 * 4) >> 0xf) & 0x7fff;
          if (*(uint *)(param_4[0xb] + uVar8 * 4) >> 0x1e == 0) {
            puVar9 = (undefined8 *)(lVar10 + uVar8 * 0x30);
            local_f8 = *puVar9;
            uStack_f0 = puVar9[1];
            local_e8 = puVar9[2];
            local_e0 = puVar9[3];
            local_d8 = puVar9[4];
            uStack_d0 = puVar9[5];
            lVar7 = param_4[0xd];
          }
          else {
            lVar7 = param_3[0x11];
            lVar11 = *(long *)(lVar7 + 0x10) + uVar14 * 0x60;
            local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar11 + 0x34));
            local_d8 = *(undefined8 *)(lVar11 + 0x44);
            uStack_d0 = *(undefined8 *)(lVar11 + 0x4c);
            uStack_f0._0_4_ = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x38) >> 0x20);
            local_e8 = *(undefined8 *)(lVar11 + 0x54);
            local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar11 + 0x5c));
          }
          (*(code *)(&PTR_LAB_0484e348)
                    [(ulong)(*(uint *)(lVar7 + 4) >> 0xc) & 7 | (ulong)(uVar2 >> 0xb) & 0xe])
                    (local_c8,lVar12,&local_f8);
          (*(code *)*puVar1)(param_2,local_c8,lVar17,local_c8);
          uVar3 = local_c8[0];
          if ((*(byte *)((long)param_2 + 0xc) >> 1 & 1) == 0) {
            lVar17 = lVar18 + uVar14 * 0x50;
            *(ulong *)(lVar17 + 0x28) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar17 + 0x28) >> 0x20) * fVar19,
                          (float)*(undefined8 *)(lVar17 + 0x28) * fVar19);
            *(ulong *)(lVar17 + 0x20) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20) * fVar19,
                          (float)*(undefined8 *)(lVar17 + 0x20) * fVar19);
            *(ulong *)(lVar17 + 0x38) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar17 + 0x38) >> 0x20) * fVar19,
                          (float)*(undefined8 *)(lVar17 + 0x38) * fVar19);
            *(ulong *)(lVar17 + 0x30) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20) * fVar19,
                          (float)*(undefined8 *)(lVar17 + 0x30) * fVar19);
            if (0.001 <= ABS(param_1)) {
              uVar4 = *(uint *)((long)param_2 + 0xc);
              plVar6 = (long *)param_2[3];
              *(uint *)((long)param_2 + 0xc) = uVar4 & 0xfffffffb;
              fVar21 = param_1;
              if (plVar6 != (long *)0x0) {
                local_98 = 0;
                local_90 = iVar13;
                local_8c = param_1;
                (**(code **)(*plVar6 + 0x10))(param_1,plVar6,&local_98);
                fVar21 = local_8c;
              }
              (*(code *)(&PTR_LAB_0484e288)[((ulong)(uVar3 >> 0xc) & 7 | (ulong)uVar4 & 2) * 2])
                        (fVar21,param_2,*param_2,local_c8,uVar14);
            }
          }
          else {
            fVar21 = *pfVar15;
            *pfVar15 = fVar19;
            if (0.001 <= ABS(param_1)) {
              uVar4 = *(uint *)((long)param_2 + 0xc);
              plVar6 = (long *)param_2[3];
              *(uint *)((long)param_2 + 0xc) = uVar4 & 0xfffffffb;
              fVar20 = param_1;
              if (plVar6 != (long *)0x0) {
                local_98 = 0;
                local_90 = iVar13;
                local_8c = param_1;
                (**(code **)(*plVar6 + 0x10))(param_1,plVar6,&local_98);
                fVar20 = local_8c;
              }
              (*(code *)(&PTR_LAB_0484e288)[((ulong)(uVar3 >> 0xc) & 7 | (ulong)uVar4 & 2) * 2])
                        (fVar20,param_2,*param_2,local_c8,uVar14);
            }
            *pfVar15 = fVar21 + param_1;
          }
        }
      }
      lVar16 = lVar16 + 4;
      lVar12 = lVar12 + 0x30;
    } while ((ulong)uVar5 << 2 != lVar16);
  }
  return;
}


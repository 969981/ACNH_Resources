
void FUN_00392200(undefined4 param_1,long param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  ulong local_b8;
  long lStack_b0;
  ulong local_a8;
  long lStack_a0;
  ulong local_98;
  long lStack_90;
  ulong local_88;
  long lStack_80;
  
  if (0 < *(int *)(param_2 + 0x10)) {
    lVar10 = 0;
    lVar11 = 8;
    do {
      plVar6 = *(long **)(*(long *)(param_2 + 0x18) + lVar11);
      (**(code **)(*plVar6 + 0x28))(param_1,plVar6,param_3);
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x28;
    } while (lVar10 < *(int *)(param_2 + 0x10));
    if (0 < *(int *)(param_2 + 0x10)) {
      lVar10 = 0;
      uVar13 = 0;
      uVar12 = 0;
      do {
        plVar6 = *(long **)(*(long *)(param_2 + 0x18) + lVar10 * 0x28 + 8);
        for (iVar4 = (**(code **)(*plVar6 + 0x38))(plVar6); iVar4 != 0; iVar4 = iVar4 + -1) {
          iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
          uVar13 = (ulong)(uint)(iVar5 + (int)uVar13);
          iVar5 = (**(code **)(*plVar6 + 0x48))(plVar6);
          uVar12 = (ulong)(uint)(iVar5 * 3 + (int)uVar12);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_2 + 0x10));
      if ((int)uVar13 != 0) {
        uVar13 = -(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
        uVar12 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
        lVar11 = *(long *)(*(long *)(param_3 + 0xb8) + 0x70);
        lVar7 = *(long *)(*(long *)(param_3 + 0xb8) + 0x78);
        lVar10 = uVar12 + uVar13 + (lVar7 + lVar11) * 2 + 4;
        pbVar8 = *(byte **)(param_3 + 200);
        if ((*pbVar8 & 1) == 0) {
          lVar9 = *(long *)(pbVar8 + 0x48) + lVar10;
          *(long *)(pbVar8 + 0x48) = lVar9;
        }
        else {
          plVar6 = *(long **)(pbVar8 + 0x48);
          do {
            lVar9 = *plVar6 + lVar10;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar10 = *(long *)(pbVar8 + 0x18);
        lStack_80 = *(long *)(*(long *)(param_3 + 200) + 0x38);
        *(undefined8 *)(param_2 + 0x28) = 0;
        local_b8 = (lStack_80 + (lVar10 - lVar9) + 3U & 0xfffffffffffffffc) + lVar11 + -1 & -lVar11;
        lStack_b0 = local_b8 - lStack_80;
        local_a8 = lVar7 + -1 + uVar13 + local_b8 & -lVar7;
        lStack_a0 = local_a8 - lStack_80;
        *(long *)(param_2 + 0x30) = lStack_b0;
        *(long *)(param_2 + 0x38) = lStack_a0;
        local_98 = lVar11 + -1 + uVar12 + local_a8 & -lVar11;
        lStack_90 = local_98 - lStack_80;
        local_88 = local_98 + lVar7 + -1 & -lVar7;
        lStack_80 = local_88 - lStack_80;
        if (0 < *(int *)(param_2 + 0x10)) {
          lVar10 = 0;
          do {
            pbVar8 = *(byte **)(param_3 + 200);
            uVar19 = param_5[5];
            uVar16 = param_5[4];
            lVar11 = *(long *)(param_2 + 8);
            lVar7 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
            uVar51 = param_5[1];
            uVar48 = *param_5;
            uVar45 = param_5[3];
            uVar42 = param_5[2];
            uVar25 = param_4[1];
            uVar22 = *param_4;
            uVar35 = param_4[3];
            uVar32 = param_4[2];
            uVar12 = lVar7 + 0x3fU & -lVar7;
            uVar40 = param_4[5];
            uVar37 = param_4[4];
            uVar30 = param_4[7];
            uVar27 = param_4[6];
            if ((*pbVar8 & 1) == 0) {
              lVar7 = *(long *)(pbVar8 + 0x40);
              *(ulong *)(pbVar8 + 0x40) = lVar7 + uVar12;
            }
            else {
              plVar6 = *(long **)(pbVar8 + 0x40);
              do {
                lVar7 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar7 + uVar12;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            fVar21 = (float)uVar22;
            fVar47 = (float)uVar48;
            fVar49 = (float)((ulong)uVar48 >> 0x20);
            fVar50 = (float)uVar51;
            fVar52 = (float)((ulong)uVar51 >> 0x20);
            fVar23 = (float)((ulong)uVar22 >> 0x20);
            fVar41 = (float)uVar42;
            fVar43 = (float)((ulong)uVar42 >> 0x20);
            fVar44 = (float)uVar45;
            fVar46 = (float)((ulong)uVar45 >> 0x20);
            fVar31 = (float)uVar32;
            fVar33 = (float)((ulong)uVar32 >> 0x20);
            puVar1 = (undefined8 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar7);
            fVar36 = (float)uVar37;
            fVar38 = (float)((ulong)uVar37 >> 0x20);
            fVar26 = (float)uVar27;
            fVar28 = (float)((ulong)uVar27 >> 0x20);
            fVar24 = (float)uVar25;
            fVar14 = (float)uVar16;
            fVar17 = (float)((ulong)uVar16 >> 0x20);
            fVar18 = (float)uVar19;
            fVar20 = (float)((ulong)uVar19 >> 0x20);
            fVar34 = (float)uVar35;
            fVar39 = (float)uVar40;
            fVar29 = (float)uVar30;
            puVar1[1] = CONCAT44((float)((ulong)uVar25 >> 0x20) +
                                 fVar52 * fVar21 + fVar46 * fVar23 + fVar20 * fVar24,
                                 fVar50 * fVar21 + fVar44 * fVar23 + fVar18 * fVar24 + 0.0);
            *puVar1 = CONCAT44(fVar49 * fVar21 + fVar43 * fVar23 + fVar17 * fVar24 + 0.0,
                               fVar47 * fVar21 + fVar41 * fVar23 + fVar14 * fVar24 + 0.0);
            puVar1[3] = CONCAT44((float)((ulong)uVar35 >> 0x20) +
                                 fVar52 * fVar31 + fVar46 * fVar33 + fVar20 * fVar34,
                                 fVar50 * fVar31 + fVar44 * fVar33 + fVar18 * fVar34 + 0.0);
            puVar1[2] = CONCAT44(fVar49 * fVar31 + fVar43 * fVar33 + fVar17 * fVar34 + 0.0,
                                 fVar47 * fVar31 + fVar41 * fVar33 + fVar14 * fVar34 + 0.0);
            puVar1[5] = CONCAT44((float)((ulong)uVar40 >> 0x20) +
                                 fVar52 * fVar36 + fVar46 * fVar38 + fVar20 * fVar39,
                                 fVar50 * fVar36 + fVar44 * fVar38 + fVar18 * fVar39 + 0.0);
            puVar1[4] = CONCAT44(fVar49 * fVar36 + fVar43 * fVar38 + fVar17 * fVar39 + 0.0,
                                 fVar47 * fVar36 + fVar41 * fVar38 + fVar14 * fVar39 + 0.0);
            puVar1[7] = CONCAT44((float)((ulong)uVar30 >> 0x20) +
                                 fVar52 * fVar26 + fVar46 * fVar28 + fVar20 * fVar29,
                                 fVar50 * fVar26 + fVar44 * fVar28 + fVar18 * fVar29 + 0.0);
            puVar1[6] = CONCAT44(fVar49 * fVar26 + fVar43 * fVar28 + fVar17 * fVar29 + 0.0,
                                 fVar47 * fVar26 + fVar41 * fVar28 + fVar14 * fVar29 + 0.0);
            *(long *)(*(long *)(param_2 + 0x18) + lVar10 * 0x28) = lVar7;
            uVar15 = FUN_0038ef70(param_1,lVar11 + lVar10 * 0x38 + 0x18);
            pbVar8 = *(byte **)(param_3 + 200);
            lVar11 = *(long *)(*(long *)(param_3 + 0xb8) + 0x68);
            uVar12 = lVar11 + 0xfU & -lVar11;
            if ((*pbVar8 & 1) == 0) {
              lVar11 = *(long *)(pbVar8 + 0x40);
              *(ulong *)(pbVar8 + 0x40) = lVar11 + uVar12;
            }
            else {
              plVar6 = *(long **)(pbVar8 + 0x40);
              do {
                lVar11 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar11 + uVar12;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            puVar1 = (undefined8 *)(*(long *)(*(long *)(param_3 + 200) + 0x38) + lVar11);
            *puVar1 = &DAT_3f8000003f800000;
            *(undefined4 *)((long)puVar1 + 0xc) = uVar15;
            *(undefined4 *)(puVar1 + 1) = 0x3f800000;
            lVar7 = lVar10 * 0x28;
            *(long *)(*(long *)(param_2 + 0x18) + lVar7 + 0x20) = lVar11;
            iVar4 = *(int *)(param_2 + 0x2c);
            plVar6 = *(long **)(*(long *)(param_2 + 0x18) + lVar7 + 8);
            (**(code **)(*plVar6 + 0x68))
                      (plVar6,&local_b8,(undefined8 *)(param_2 + 0x28),&local_a8,param_2 + 0x2c,0);
            lVar10 = lVar10 + 1;
            *(int *)(*(long *)(param_2 + 0x18) + lVar7 + 0x14) = iVar4;
            *(int *)(*(long *)(param_2 + 0x18) + lVar7 + 0x18) = *(int *)(param_2 + 0x2c) - iVar4;
          } while (lVar10 < *(int *)(param_2 + 0x10));
        }
      }
    }
  }
  return;
}


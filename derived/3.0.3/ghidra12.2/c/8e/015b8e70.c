
/* WARNING: Removing unreachable block (ram,0x015b8efc) */

void FUN_015b8e70(long param_1,long param_2,long param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int *piVar10;
  float *pfVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float local_e0 [4];
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  
  if ((*(char *)(param_1 + 0x6e8) != '\0') && (lVar15 = *(long *)PTR_DAT_04bb30a0, lVar15 != 0)) {
    local_e0[0] = 0.0;
    iVar16 = *(int *)(lVar15 + 0x6533c);
    lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0x118);
    piVar10 = (int *)(**(code **)(*(long *)(lVar15 + 0x64d70) + 0xf0))();
    iVar22 = *piVar10;
    fVar21 = 0.0;
    lVar15 = *(long *)(lVar17 + 0x280);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 8), lVar15 != 0)) {
      pfVar11 = (float *)(**(code **)(*(long *)(lVar15 + 0xb20) + 0xf0))(lVar15 + 0xb20);
      fVar21 = *pfVar11;
    }
    fVar23 = *param_4;
    fVar24 = param_4[1];
    puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar2 = puVar12[3];
    uVar1 = *puVar12 ^ *puVar12 << 0xb;
    *puVar12 = puVar12[1];
    puVar12[1] = puVar12[2];
    uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
    puVar12[2] = uVar2;
    puVar12[3] = uVar1;
    FUN_038e4d90(param_1 + 0x3f8,param_3);
    uVar18 = *(undefined8 *)(param_3 + 0xb8);
    (**(code **)PTR_DAT_04bcf1a8)(uVar18,0x10,param_1 + 0x274);
    (**(code **)PTR_DAT_04bcf1b0)(uVar18,0x10,param_1 + 0x2b8);
    puVar9 = PTR_DAT_04bcf1e8;
    iVar4 = *(int *)(param_1 + 0x260);
    if (iVar4 != 0) {
      lVar15 = *(long *)(param_1 + 0x268);
      uVar19 = 0;
      uVar20 = 0;
      do {
        lVar17 = *(long *)(lVar15 + (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3));
        if (lVar17 != 0) {
          uVar13 = (**(code **)PTR_DAT_04bbd560)(lVar17 + 8);
          (**(code **)puVar9)(uVar18,uVar19 & 0xffffffff,uVar13,*(undefined4 *)(lVar17 + 0x118));
        }
        uVar19 = uVar20 + 1;
        uVar20 = uVar19 & 0xffffffff;
      } while (iVar4 != (int)uVar19);
    }
    puVar12 = (uint *)(param_2 + 0x14);
    do {
      uVar2 = *puVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar7) {
        *puVar12 = uVar2 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar2 & 0x7fffffff) != 0) {
      if ((int)uVar2 < 0) {
        if ((int)*puVar12 < 0) {
          lVar15 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar15 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar12 < 0);
        }
      }
      else {
        FUN_03907b80(param_2);
      }
    }
    fVar21 = -((float)(uVar1 >> 9 | 0x3f800000) + -1.0) +
             fVar23 * fVar24 * ((float)iVar16 / (float)iVar22) * fVar21;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar7) {
        *puVar12 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
      puVar9 = PTR_DAT_04bd0fc8;
    } while (cVar6 != '\0');
    local_e0[0] = 0.5;
    iVar16 = *(int *)(*(long *)(param_2 + 0x38) + (ulong)(1 < *(uint *)(param_2 + 0x30)) * 0x18);
    if (iVar16 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar16,4,local_e0);
    }
    lVar15 = *(long *)(param_1 + 0x3f0);
    do {
      uVar1 = *puVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar7) {
        *puVar12 = uVar1 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar1 & 0x7fffffff) != 0) {
      if ((int)uVar1 < 0) {
        if ((int)*puVar12 < 0) {
          lVar17 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar17 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar12 < 0);
        }
      }
      else {
        FUN_03907b80(param_2);
      }
    }
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
      if (bVar7) {
        *puVar12 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_0390d290(lVar15 + 0xa0,param_3,*(undefined8 *)(param_2 + 0x68),0xffffffff,0);
    if (0.0 < fVar21) {
      iVar16 = 0;
      lVar15 = *(long *)PTR_DAT_04bb29d0;
      do {
        puVar8 = PTR_DAT_04bb39d8;
        puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar1 = *puVar14 ^ *puVar14 << 0xb;
        uVar2 = puVar14[3];
        fVar23 = *param_4;
        *puVar14 = puVar14[1];
        puVar14[1] = puVar14[2];
        uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
        puVar14[2] = uVar2;
        puVar14[3] = uVar1;
        puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
        uVar2 = *puVar14 ^ *puVar14 << 0xb;
        uVar3 = puVar14[3];
        fVar24 = param_4[1];
        *puVar14 = puVar14[1];
        puVar14[1] = puVar14[2];
        uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
        puVar14[2] = uVar3;
        puVar14[3] = uVar2;
        local_e0[1] = 0.0;
        local_e0[2] = 0.0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b4 = 0;
        uStack_ac = 0;
        local_b8 = 0xbf800000;
        local_a4 = 0x3f800000;
        local_e0[0] = 1.0 / *param_4;
        local_e0[3] = (((fVar23 + -0.5 + -0.5) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + 0.5) /
                      *param_4) * 2.0 + -1.0;
        local_c4 = (((fVar24 + -0.5 + -0.5) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) + 0.5) /
                   param_4[1]) * 2.0 + -1.0;
        local_cc = 1.0 / param_4[1];
        do {
          uVar1 = *puVar12;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar7) {
            *puVar12 = uVar1 | 0x80000000;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar1 & 0x7fffffff) != 0) {
          if ((int)uVar1 < 0) {
            while ((int)*puVar12 < 0) {
              nn::os::ConvertToTimeSpan(lVar15 / 1000000);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(param_2);
          }
        }
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar7) {
            *puVar12 = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (**(int **)(param_2 + 0x38) != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(*(long *)puVar9 + 0x70),
                     *(undefined8 *)(*(long *)puVar9 + 0x18),(long)**(int **)(param_2 + 0x38),0x40,
                     local_e0);
        }
        iVar22 = *(int *)(param_1 + 0x360);
        if (iVar22 != 0) {
          uVar5 = *(undefined4 *)(param_1 + 0x344);
          uVar13 = *(undefined8 *)(param_3 + 0xb8);
          uVar18 = (**(code **)PTR_DAT_04bbd560)(param_1 + 0x368);
          (**(code **)PTR_DAT_04bbd568)(uVar13,uVar5,*(undefined4 *)(param_1 + 0x340),iVar22,uVar18)
          ;
        }
        iVar16 = iVar16 + 1;
      } while ((float)iVar16 < fVar21);
    }
  }
  return;
}


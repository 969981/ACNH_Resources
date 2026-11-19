
void FUN_03a6f700(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  int local_7c;
  
  if ((*(byte *)(param_1 + 0x1d0) & 1) != 0) {
    piVar1 = (int *)(param_1 + 0x1d4);
    do {
      iVar10 = *piVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar10 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((iVar10 == 0) && (uVar14 = *(uint *)(param_1 + 0x1440), 0 < (int)uVar14)) {
      uVar20 = 0;
      plVar5 = (long *)(param_1 + 0x1218);
      puVar6 = (uint *)(param_1 + 0x1434);
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      puVar3 = PTR_DAT_04bd0f08 + 0x10;
      puVar4 = PTR_DAT_04bd0fa0 + 0x10;
      do {
        if (uVar20 < uVar14) {
          plVar21 = *(long **)(*(long *)(param_1 + 0x1448) + uVar20 * 8);
        }
        else {
          plVar21 = (long *)0x0;
        }
        if (((*(uint *)(plVar21 + 1) ^ 0xffffffff) & 3) == 0) {
          *(uint *)(plVar21 + 1) = *(uint *)(plVar21 + 1) & 0xfffffffd;
          lVar22 = *(long *)PTR_DAT_04bbd510;
          local_a0 = "decalAoTmp";
          local_a8 = puVar2;
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
          if (lVar11 == 0) {
            local_7c = nn::os::GetCurrentCoreNumber();
          }
          else {
            local_7c = (int)lVar11 + -1;
          }
          puVar12 = (undefined4 *)
                    FUN_03948e10(lVar22,param_2,lVar22 + (long)local_7c * 0x290 + 0x10,&local_a8,
                                 0x5a,1,0x100,0x100,1,0,1,0,1,0,0,0);
          FUN_0155a100(param_1 + 0x1280,puVar12,*(undefined1 *)(param_1 + 0x133e),
                       *(undefined2 *)(param_1 + 0x133c));
          *(long *)(param_1 + 0x1278) = param_1 + 0x1280;
          *(undefined8 *)(param_1 + 0x1228) = 0;
          *(undefined8 *)(param_1 + 0x1220) = 0x4380000043800000;
          *(undefined8 *)(&DAT_00001230 + param_1) = 0x4380000043800000;
          *(undefined4 *)(param_1 + 0x1360) = *puVar12;
          *(undefined4 *)(param_1 + 0x1364) = puVar12[1];
          *(undefined8 *)(param_1 + 0x1368) = *(undefined8 *)(puVar12 + 2);
          *(undefined8 *)(param_1 + 0x1370) = *(undefined8 *)(puVar12 + 4);
          *(undefined4 *)(param_1 + 0x1378) = puVar12[6];
          *(undefined4 *)(param_1 + 0x137c) = puVar12[7];
          *(undefined8 *)(param_1 + 0x1380) = *(undefined8 *)(puVar12 + 8);
          *(undefined8 *)(param_1 + 5000) = *(undefined8 *)(puVar12 + 10);
          uVar15 = *(undefined8 *)(puVar12 + 0xc);
          uVar7 = *(undefined8 *)(puVar12 + 0xe);
          uVar19 = *(undefined8 *)(puVar12 + 0x10);
          *(undefined8 *)(param_1 + 0x13a7) = *(undefined8 *)((long)puVar12 + 0x47);
          *(undefined8 *)(param_1 + 0x1398) = uVar7;
          *(undefined8 *)(param_1 + 0x13a0) = uVar19;
          *(undefined8 *)(param_1 + 0x1390) = uVar15;
          FUN_038fd1e0(param_1 + 0x13b0);
          FUN_038fd2f0(param_1 + 0x13b0,puVar12 + 0x14);
          uVar15 = *(undefined8 *)(puVar12 + 0x24);
          *(undefined4 *)(param_1 + 0x13f8) = puVar12[0x26];
          *(undefined8 *)(param_1 + 0x13f0) = uVar15;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar9) {
              *puVar6 = *puVar6 | 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          *(undefined2 *)(param_1 + 0x1427) = 0x707;
          *(undefined1 *)(param_1 + 0x1429) = 7;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar9) {
              *puVar6 = *puVar6 | 2;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          local_a0 = (char *)0x7f7fffff7f7fffff;
          local_98 = 0xff7fffffff7fffff;
          local_8c = 0x3f80000000000000;
          local_90 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_90 < 6) {
            if ((1 << (ulong)(local_90 & 0x1f) & 0x39U) == 0) {
              fVar23 = *(float *)(param_1 + 0x1224);
              fVar24 = *(float *)(param_1 + 0x1220);
            }
            else {
              fVar23 = *(float *)(param_1 + 0x1220);
              fVar24 = *(float *)(param_1 + 0x1224);
            }
            fVar27 = fVar23;
            if (fVar23 <= 0.0) {
              fVar27 = 0.0;
            }
            fVar26 = 0.0;
            if (fVar23 <= 0.0) {
              fVar26 = fVar23;
            }
            fVar25 = fVar24;
            fVar23 = 0.0;
            if (fVar24 <= 0.0) {
              fVar25 = 0.0;
              fVar23 = fVar24;
            }
            local_a0 = (char *)CONCAT44(fVar23,fVar26);
            local_98 = CONCAT44(fVar25,fVar27);
          }
          local_a8 = puVar3;
          FUN_038e77e4(&local_a8,param_2,plVar5);
          (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
          if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar10 != 0)) {
            *(undefined **)PTR_DAT_04bd0f90 = puVar4;
            __cxa_guard_release(PTR_DAT_04bd0f98);
          }
          if (param_2 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)0x0;
            lVar11 = *(long *)(param_1 + 0x1278);
          }
          else {
            uVar13 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
            puVar16 = param_2;
            if ((uVar13 & 1) == 0) {
              puVar16 = (undefined8 *)0x0;
            }
            lVar11 = *(long *)(param_1 + 0x1278);
          }
          if (lVar11 != 0) {
            (**(code **)PTR_DAT_04bcf298)(0x3f800000,puVar16[0x17],1,0,0);
          }
          (**(code **)(*plVar21 + 0x18))(plVar21);
          (**(code **)(*plVar21 + 0x20))(plVar21,param_2,plVar5,&local_a8);
          if (*(int *)(param_1 + 0x12d8) == -1) {
            lVar11 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar11 + 0x5c8) >> 3 & 1) == 0) {
              uVar14 = 0;
              if (~(uint)*(ushort *)(lVar11 + 0x3da) < *(uint *)(lVar11 + 0x368)) {
                uVar14 = ~(uint)*(ushort *)(lVar11 + 0x3da);
              }
              if ((*(uint *)(*(long *)(lVar11 + 0x370) + (long)(int)uVar14 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_03a6fbd8;
              uVar13 = param_2[0x20] | 0x8000000000000000;
            }
            else {
LAB_03a6fbd8:
              if ((*(uint *)(lVar11 + 0x5c8) >> 5 & 1) == 0) {
                uVar17 = 0x112;
                uVar18 = 0x12;
              }
              else {
                uVar17 = 0x111;
                uVar18 = 0x11;
              }
              if ((*(uint *)(lVar11 + 800) & 2) != 0) {
                uVar18 = uVar17;
              }
              (**(code **)PTR_DAT_04bcf2a8)(param_2[0x17],uVar18);
              uVar13 = 0;
            }
            param_2[0x20] = uVar13;
          }
          FUN_03a6fd10(param_2,plVar21 + 0xf,param_1 + 0x10a0,(int)plVar21[0xb],puVar12,0,
                       (int)plVar21[0xc],*(undefined1 *)(param_1 + 0x1210));
          FUN_039499cc(lVar22,puVar12);
          uVar14 = *(uint *)(param_1 + 0x1440);
        }
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)(int)uVar14);
    }
  }
  return;
}


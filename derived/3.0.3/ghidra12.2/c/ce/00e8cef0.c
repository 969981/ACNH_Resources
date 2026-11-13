
void FUN_00e8cef0(long param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_40;
  int local_3c;
  int local_34;
  
  puVar10 = PTR_DAT_04bb27c0;
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  if (lVar17 == 0) {
    return;
  }
  uVar19 = *param_2;
  if ((((uVar19 == 0) ||
       (plVar18 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar19 >> 0x11) & 0x7ff8)), plVar18 == (long *)0x0)) ||
      ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar19)) {
    plVar18 = (long *)0x0;
  }
  if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
    plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar10;
    iVar13 = (**(code **)(*plVar15 + 0x60))();
    if (iVar13 < 0x11) {
      uVar19 = 1;
    }
    else {
      if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_00e8cfac;
      uVar19 = 0x1aU >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00e8cfac:
    uVar19 = 0;
  }
  if (plVar18 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar14 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb37d0);
    if (((uVar19 & uVar14) == 1) && (puVar2 = (uint *)(plVar18 + 0x49), (*puVar2 >> 8 & 1) != 0)) {
      puVar20 = (undefined8 *)plVar18[0x77];
      if (((*PTR_DAT_04bb6b60 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb6b60), iVar13 != 0)) {
        *(undefined **)PTR_DAT_04bb6b58 = PTR_DAT_04bb6b68 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6b60);
      }
      if ((puVar20 == (undefined8 *)0x0) ||
         (uVar16 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb6b58), (uVar16 & 1) == 0)) {
        puVar20 = (undefined8 *)plVar18[0x77];
        if (((*PTR_DAT_04bb6b78 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb6b78), iVar13 != 0)) {
          *(undefined **)PTR_DAT_04bb6b70 = PTR_DAT_04bb4100 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6b78);
        }
        if ((puVar20 == (undefined8 *)0x0) ||
           (uVar16 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb6b70), (uVar16 & 1) == 0)) {
          puVar20 = (undefined8 *)plVar18[0x77];
          if (((*PTR_DAT_04bb6908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb6908), iVar13 != 0)) {
            *(undefined **)PTR_DAT_04bb6900 = PTR_DAT_04bb6850 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb6908);
          }
          if ((puVar20 != (undefined8 *)0x0) &&
             (uVar16 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb6900), (uVar16 & 1) != 0)) {
            local_34 = 0x1e;
            if (puVar20[1] == 0) {
              local_60[0] = 0;
            }
            else {
              local_60[0] = FUN_021dcc90(puVar20[1] + 0x508);
            }
            if (local_60[0] < 0x1b) {
              bVar11 = true;
            }
            else if (local_60[0] == 0x1b) {
              bVar11 = false;
            }
            else {
              bVar11 = local_60[0] != local_34;
            }
            if ((*(ushort *)(puVar20 + 0x24ae) & 1) == 0) {
              bVar12 = (*(byte *)((long)puVar20 + 0xad5a) & 2) == 0;
            }
            else {
              bVar12 = false;
            }
            if (!(bool)(bVar11 | bVar12)) goto LAB_00e8d328;
            if (plVar18[0xd] != 0) {
              lVar17 = *(long *)(param_1 + 8);
              FUN_012e1cb8(local_60,plVar18[0xd] + 0x278,2,2);
              if ((((*(int *)(lVar17 + 0x10) <= local_50) && (local_40 <= *(int *)(lVar17 + 0x20)))
                  && (*(int *)(lVar17 + 0x14) <= local_4c)) && (local_3c <= *(int *)(lVar17 + 0x24))
                 ) {
                FUN_006fb550(plVar18);
              }
            }
          }
        }
        else {
          lVar17 = plVar18[0xd];
          if (lVar17 != 0) {
            fVar21 = *(float *)(lVar17 + 0x278) + -2.5;
            fVar22 = *(float *)(lVar17 + 0x280) + -2.5;
            lVar17 = *(long *)(param_1 + 8);
            iVar3 = *(int *)(lVar17 + 0x20);
            iVar5 = *(int *)(lVar17 + 0x24);
            iVar4 = *(int *)(lVar17 + 0x10);
            iVar6 = *(int *)(lVar17 + 0x14);
            iVar8 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
            iVar9 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
            iVar13 = iVar8 + 1;
            iVar1 = iVar9 + 1;
            if (((iVar4 <= iVar8 && iVar13 <= iVar3) && iVar6 <= iVar9) && iVar1 == iVar5 ||
                (((iVar4 <= iVar8 && iVar13 <= iVar3) && iVar6 <= iVar9) && iVar1 - iVar5 < 0) !=
                (((iVar4 <= iVar8 && iVar13 <= iVar3) && iVar6 <= iVar9) && SBORROW4(iVar1,iVar5)))
            {
LAB_00e8d328:
              FUN_006fb550(plVar18);
              return;
            }
          }
        }
      }
      else {
        lVar17 = plVar18[0xd];
        if (lVar17 != 0) {
          fVar21 = *(float *)(lVar17 + 0x278) + -2.5;
          fVar22 = *(float *)(lVar17 + 0x280) + -2.5;
          lVar17 = *(long *)(param_1 + 8);
          iVar3 = *(int *)(lVar17 + 0x20);
          iVar5 = *(int *)(lVar17 + 0x24);
          iVar4 = *(int *)(lVar17 + 0x10);
          iVar6 = *(int *)(lVar17 + 0x14);
          iVar8 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          iVar9 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
          iVar13 = iVar8 + 1;
          iVar1 = iVar9 + 1;
          if (((((iVar4 <= iVar8 && iVar13 <= iVar3) && iVar6 <= iVar9) && iVar1 == iVar5 ||
                (((iVar4 <= iVar8 && iVar13 <= iVar3) && iVar6 <= iVar9) && iVar1 - iVar5 < 0) !=
                (((iVar4 <= iVar8 && iVar13 <= iVar3) && iVar6 <= iVar9) && SBORROW4(iVar1,iVar5)))
              && ((*puVar2 >> 10 & 1) == 0)) &&
             (((*puVar2 >> 1 & 1) == 0 && (((*puVar2 >> 9 & 1) != 0 || ((*puVar2 >> 8 & 1) != 0)))))
             ) {
            do {
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar11) {
                *puVar2 = *puVar2 | 0x400;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((long *)plVar18[0x16] != plVar18 + 0x15) {
              lVar17 = (long)*(int *)((long)plVar18 + 0xbc);
              plVar15 = (long *)(plVar18[0x16] - lVar17);
              do {
                (**(code **)(*plVar15 + 0xb8))(plVar15);
                plVar15 = (long *)(*(long *)((long)plVar15 + lVar17 + 8) - lVar17);
              } while (plVar15 != (long *)((long)(plVar18 + 0x15) - lVar17));
            }
          }
        }
      }
    }
  }
  return;
}


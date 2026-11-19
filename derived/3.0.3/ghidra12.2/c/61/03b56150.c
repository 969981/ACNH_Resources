
void FUN_03b56150(long param_1,short *param_2,float *param_3)

{
  MutexType *pMVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  long *plVar5;
  short sVar6;
  undefined2 uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  short *psVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 *local_70;
  long *local_68;
  undefined8 local_60;
  undefined2 local_54 [2];
  float local_48;
  short local_44 [2];
  
  pMVar1 = (MutexType *)(param_1 + 0x28);
  nn::os::LockMutex(pMVar1);
  lVar18 = param_1 + 0x10;
  sVar6 = *param_2;
  lVar16 = lVar18;
  do {
    lVar16 = *(long *)(lVar16 + 8);
    if (lVar16 == lVar18) goto LAB_03b561f4;
    psVar19 = (short *)(lVar16 - *(int *)(param_1 + 0x24));
  } while (*psVar19 != sVar6);
  if ((lVar16 == 0) || (psVar19 == (short *)0x0)) {
LAB_03b561f4:
    nn::os::UnlockMutex(pMVar1);
    nn::os::LockMutex(pMVar1);
    uVar13 = *(uint *)(param_1 + 0x20);
    uVar8 = *(ushort *)(param_1 + 10);
    if ((int)uVar13 <= (int)(uint)uVar8) {
      local_60 = 0x2000000000;
      local_70 = &local_70;
      local_68 = (long *)&local_70;
      FUN_03b55fd0(&local_70);
      lVar16 = DAT_05aebb88[0x2e];
      if (*(char *)(lVar16 + 8) != '\0' || *(long *)(lVar16 + 0x10) != 0) {
        piVar2 = (int *)(lVar16 + 0x18);
        puVar3 = (uint *)(lVar16 + 0x38);
        do {
          while( true ) {
            uVar13 = *puVar3;
            if (uVar13 == 0xffff) goto LAB_03b56360;
            if (*puVar3 == uVar13) break;
            ClearExclusiveLocal();
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar10) {
            *puVar3 = (uint)*(ushort *)(*(long *)(lVar16 + 0x30) + (ulong)uVar13 * 2);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (((uVar13 ^ 0xffffffff) & 0xffff) != 0) {
          do {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar10) {
              *piVar2 = *piVar2 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          lVar17 = *(long *)(lVar16 + 0x10) + ((ulong)uVar13 & 0xffff) * 0x38;
          *(short *)(lVar17 + 0x30) = (short)uVar13;
          puVar12 = (undefined8 *)(local_60._4_4_ + lVar17);
          *puVar12 = local_70;
          puVar12[1] = &local_70;
          if (local_70 != (undefined8 *)0x0) {
            plVar5 = local_70 + 1;
            local_70 = puVar12;
            *plVar5 = (long)puVar12;
            puVar12 = local_70;
          }
          local_70 = puVar12;
          iVar14 = (int)local_60;
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 + 1);
          if ((*(char *)(lVar16 + 8) != '\0') || (*(long *)(lVar16 + 0x10) != 0)) {
            do {
              while( true ) {
                uVar13 = *puVar3;
                if (uVar13 == 0xffff) goto LAB_03b56360;
                if (*puVar3 == uVar13) break;
                ClearExclusiveLocal();
              }
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar10) {
                *puVar3 = (uint)*(ushort *)(*(long *)(lVar16 + 0x30) + (ulong)uVar13 * 2);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (((uVar13 ^ 0xffffffff) & 0xffff) != 0) {
              do {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar10) {
                  *piVar2 = *piVar2 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              lVar16 = *(long *)(lVar16 + 0x10) + ((ulong)uVar13 & 0xffff) * 0x38;
              *(short *)(lVar16 + 0x30) = (short)uVar13;
              puVar12 = (undefined8 *)(local_60._4_4_ + lVar16);
              *puVar12 = local_70;
              puVar12[1] = &local_70;
              if (local_70 != (undefined8 *)0x0) {
                local_70[1] = puVar12;
              }
              iVar14 = iVar14 + 2;
              local_60 = CONCAT44(local_60._4_4_,iVar14);
              local_70 = puVar12;
              while (plVar5 = local_68, 0 < iVar14) {
                if (*local_68 != 0) {
                  *(long *)(*local_68 + 8) = local_68[1];
                }
                if ((long *)local_68[1] != (long *)0x0) {
                  *(long *)local_68[1] = *local_68;
                }
                *local_68 = 0;
                plVar5[1] = 0;
                iVar14 = (int)local_60 + -1;
                local_60 = CONCAT44(local_60._4_4_,iVar14);
                if ((plVar5 == (long *)0x0) || ((long)plVar5 - (long)local_60._4_4_ == 0)) break;
                plVar5 = (long *)(((long)plVar5 - (long)local_60._4_4_) +
                                 (long)*(int *)(param_1 + 0x24));
                lVar16 = *(long *)(param_1 + 0x10);
                *(long **)(param_1 + 0x10) = plVar5;
                *plVar5 = lVar16;
                plVar5[1] = lVar18;
                if (lVar16 != 0) {
                  *(long **)(lVar16 + 8) = plVar5;
                }
                *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              }
              uVar8 = *(ushort *)(param_1 + 10);
              uVar13 = *(uint *)(param_1 + 0x20);
              goto LAB_03b56214;
            }
          }
        }
      }
LAB_03b56360:
      FUN_03b55fd0(&local_70);
      goto LAB_03b56570;
    }
LAB_03b56214:
    uVar15 = (uint)uVar8;
    *(ushort *)(param_1 + 10) = uVar8 + 1;
    if (uVar15 < uVar13) {
      uVar13 = uVar15 + 1 & 3;
      if (2 < uVar15) {
        uVar15 = uVar15 + 1 & 0x1fffc;
        do {
          uVar15 = uVar15 - 4;
          lVar18 = *(long *)(*(long *)(*(long *)(*(long *)(lVar18 + 8) + 8) + 8) + 8);
        } while (uVar15 != 0);
      }
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        lVar18 = *(long *)(lVar18 + 8);
      }
    }
    else {
      lVar18 = 0;
    }
    if ((lVar18 == 0) ||
       (psVar19 = (short *)(lVar18 - *(int *)(param_1 + 0x24)), psVar19 == (short *)0x0))
    goto LAB_03b56570;
    *psVar19 = *param_2;
    fVar21 = *(float *)(param_2 + 2);
    local_44[0] = *param_2;
    uVar7 = *(undefined2 *)(param_1 + 8);
    local_48 = fVar21;
    if ((param_3 != (float *)0x0) && (0.0 < *param_3)) {
      uVar20 = *(undefined4 *)(psVar19 + 8);
      local_54[0] = uVar7;
      goto LAB_03b563b8;
    }
    if (*(float *)(psVar19 + 8) != fVar21) {
      lVar18 = DAT_05aebb88[0x31];
      piVar2 = (int *)(lVar18 + 0x40);
      if (*piVar2 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (uint *)(lVar18 + 0x38);
        do {
          while( true ) {
            uVar13 = *puVar3;
            if (*puVar3 == uVar13) break;
            ClearExclusiveLocal();
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar10) {
            *puVar3 = (uint)*(ushort *)(*(long *)(lVar18 + 0x30) + (ulong)uVar13 * 2);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        piVar4 = (int *)(lVar18 + 0x10);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar10) {
            *piVar4 = *piVar4 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        puVar12 = (undefined8 *)(*(long *)(lVar18 + 0x18) + ((ulong)uVar13 & 0xffff) * 0x40);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = *piVar2 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        *(float *)(puVar12 + 1) = fVar21;
        *puVar12 = &PTR_LAB_04b76ad8;
        *(undefined2 *)((long)puVar12 + 0xc) = uVar7;
        *(short *)((long)puVar12 + 0xe) = local_44[0];
      }
      local_70 = DAT_05aebb88;
      FUN_03b519f0(&local_70,puVar12);
    }
    plVar5 = (long *)(psVar19 + 0xc);
    *(float *)(psVar19 + 8) = fVar21;
    plVar11 = (long *)*plVar5;
  }
  else {
    fVar21 = *(float *)(param_2 + 2);
    uVar7 = *(undefined2 *)(param_1 + 8);
    local_48 = fVar21;
    local_44[0] = sVar6;
    if ((param_3 != (float *)0x0) && (0.0 < *param_3)) {
      uVar20 = *(undefined4 *)(psVar19 + 8);
      local_54[0] = uVar7;
LAB_03b563b8:
      local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar20);
      FUN_03b56980(psVar19 + 4,&local_70,&local_48,param_3,local_54,local_44);
      goto LAB_03b56570;
    }
    if (*(float *)(psVar19 + 8) != fVar21) {
      lVar18 = DAT_05aebb88[0x31];
      piVar2 = (int *)(lVar18 + 0x40);
      if (*piVar2 == 0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        puVar3 = (uint *)(lVar18 + 0x38);
        do {
          while( true ) {
            uVar13 = *puVar3;
            if (*puVar3 == uVar13) break;
            ClearExclusiveLocal();
          }
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar10) {
            *puVar3 = (uint)*(ushort *)(*(long *)(lVar18 + 0x30) + (ulong)uVar13 * 2);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        piVar4 = (int *)(lVar18 + 0x10);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar10) {
            *piVar4 = *piVar4 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        puVar12 = (undefined8 *)(*(long *)(lVar18 + 0x18) + ((ulong)uVar13 & 0xffff) * 0x40);
        do {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = *piVar2 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        *(float *)(puVar12 + 1) = fVar21;
        *puVar12 = &PTR_LAB_04b76ad8;
        *(undefined2 *)((long)puVar12 + 0xc) = uVar7;
        *(short *)((long)puVar12 + 0xe) = sVar6;
      }
      local_70 = DAT_05aebb88;
      FUN_03b519f0(&local_70,puVar12);
    }
    *(float *)(psVar19 + 8) = fVar21;
    plVar5 = (long *)(psVar19 + 0xc);
    plVar11 = (long *)*plVar5;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))();
    *plVar5 = 0;
  }
LAB_03b56570:
  nn::os::UnlockMutex(pMVar1);
  return;
}


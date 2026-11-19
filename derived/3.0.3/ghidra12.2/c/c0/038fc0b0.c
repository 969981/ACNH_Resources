
int FUN_038fc0b0(long param_1,uint param_2,undefined8 *param_3,undefined2 param_4,undefined8 param_5
                )

{
  int *piVar1;
  undefined8 *puVar2;
  MutexType *pMVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  int iVar23;
  short *psVar24;
  byte *pbVar25;
  
  uVar15 = param_2;
  if (*(uint *)(param_1 + 0x5a0) <= param_2) {
    uVar15 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x5a8) + (ulong)uVar15 * 0x80);
  psVar24 = (short *)((long)puVar4 + 0x76);
  if (*psVar24 == 0) {
    uVar5 = param_3[4];
    uVar12 = param_3[1];
    uVar6 = param_3[2];
    uVar8 = *(ushort *)(param_1 + 0x5c0);
    puVar4[3] = param_3[3];
    puVar4[4] = uVar5;
    puVar11 = PTR_DAT_04bd1010;
    iVar23 = uVar8 + param_2;
    puVar4[1] = uVar12;
    puVar4[2] = uVar6;
    uVar12 = *param_3;
    *(undefined2 *)((long)puVar4 + 0x74) = param_4;
    puVar4[0xd] = param_5;
    *puVar4 = uVar12;
    *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(*(long *)puVar11 + 0xc);
    lVar13 = DAT_05ae78f0;
    pbVar25 = (byte *)(puVar4 + 0xf);
    if ((*pbVar25 & 1) != 0) {
      (*DAT_04c624b0)(puVar4 + 5);
      piVar1 = (int *)(lVar13 + 0x64c);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar10) {
          *piVar1 = *piVar1 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    puVar2 = puVar4 + 5;
    FUN_038f9340(param_3,puVar2);
    (**(code **)PTR_DAT_04bcf9e8)(puVar2,param_5);
    pMVar3 = (MutexType *)(DAT_05ae77d8 + 0x198);
    nn::os::LockMutex(pMVar3);
    (*DAT_04c62060)(DAT_05ae77d8 + 0x78,iVar23,puVar2);
    nn::os::UnlockMutex(pMVar3);
    *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + 1;
    *psVar24 = *psVar24 + 1;
    bVar7 = *pbVar25;
    if ((bVar7 & 1) == 0) {
      if (*(int *)(param_1 + 0x5b0) < *(int *)(param_1 + 0x5b4)) {
        *(undefined8 **)(*(long *)(param_1 + 0x5b8) + (long)*(int *)(param_1 + 0x5b0) * 8) = puVar4;
        *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + 1;
        bVar7 = *pbVar25;
      }
      *pbVar25 = bVar7 | 1;
    }
    if (1 < *(int *)(param_1 + 0x5b0)) {
      lVar13 = *(long *)(param_1 + 0x5b8);
      uVar16 = 0;
      uVar15 = *(int *)(param_1 + 0x5b0) - 1;
      do {
        if ((int)uVar15 <= (int)uVar16) {
          return iVar23;
        }
        lVar17 = *(long *)(lVar13 + (ulong)uVar16 * 8);
        uVar14 = (ulong)uVar16;
        if ((uVar15 - uVar16 & 1) == 0) {
          lVar19 = lVar17;
          uVar18 = uVar14;
        }
        else {
          uVar18 = uVar14 + 1;
          lVar19 = *(long *)(lVar13 + uVar18 * 8);
          if (*(ushort *)(lVar19 + 0x74) < *(ushort *)(lVar17 + 0x74)) {
            *(long *)(lVar13 + uVar18 * 8) = lVar17;
            *(long *)(lVar13 + uVar14 * 8) = lVar19;
            lVar19 = lVar17;
          }
        }
        uVar20 = (ulong)uVar15;
        uVar15 = uVar16;
        if (~uVar14 + uVar20 != 0) {
          plVar22 = (long *)(lVar13 + 8 + uVar18 * 8);
          do {
            lVar17 = *plVar22;
            if (*(ushort *)(lVar17 + 0x74) < *(ushort *)(lVar19 + 0x74)) {
              plVar22[-1] = lVar17;
              *plVar22 = lVar19;
              uVar15 = (uint)uVar18;
            }
            else {
              lVar19 = lVar17;
            }
            lVar17 = plVar22[1];
            if (*(ushort *)(lVar17 + 0x74) < *(ushort *)(lVar19 + 0x74)) {
              uVar15 = (uint)uVar18 + 1;
              *plVar22 = lVar17;
              plVar22[1] = lVar19;
            }
            else {
              lVar19 = lVar17;
            }
            uVar18 = uVar18 + 2;
            plVar22 = plVar22 + 2;
          } while (uVar20 != uVar18);
        }
        if ((int)uVar15 <= (int)uVar16) {
          return iVar23;
        }
        lVar17 = *(long *)(lVar13 + (ulong)uVar15 * 8);
        uVar18 = (ulong)uVar15;
        uVar16 = uVar15;
        do {
          lVar19 = lVar13 + uVar18 * 8;
          lVar21 = *(long *)(lVar19 + -8);
          if (*(ushort *)(lVar17 + 0x74) < *(ushort *)(lVar21 + 0x74)) {
            uVar16 = (uint)uVar18;
            *(long *)(lVar19 + -8) = lVar17;
            *(long *)(lVar13 + uVar18 * 8) = lVar21;
          }
          else {
            lVar17 = lVar21;
          }
          uVar18 = uVar18 - 1;
        } while ((long)uVar14 < (long)uVar18);
      } while (uVar16 != uVar15);
    }
  }
  else {
    iVar23 = -1;
  }
  return iVar23;
}


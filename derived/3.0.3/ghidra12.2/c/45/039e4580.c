
int FUN_039e4580(long param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  int iVar24;
  float fVar25;
  char local_d4;
  uint local_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar22 = *(long *)(param_1 + 0x170);
  if ((lVar22 == 0) || ((*(ushort *)(*(long *)(param_1 + 0x168) + 0x2a70) >> 2 & 1) != 0)) {
    bVar11 = false;
    iVar2 = *param_2;
    iVar4 = param_2[1];
    uVar12 = *(undefined8 *)(param_2 + 2);
    uVar19 = *(undefined8 *)(param_2 + 4);
    *(int *)(param_1 + 0x26c) = iVar4;
    *(undefined8 *)(param_1 + 0x270) = uVar12;
    *(undefined8 *)(param_1 + 0x278) = uVar19;
    uVar18 = (iVar2 + *(int *)(param_1 + 0x2a4)) - 1U & -*(int *)(param_1 + 0x2a4);
    *(uint *)(param_1 + 0x268) = uVar18;
    if ((*(byte *)(param_1 + 0x2b6) >> 1 & 1) != 0) {
      bVar11 = 0x11 < *(ushort *)(param_1 + 0x300) &&
               *(ushort *)(param_1 + 0x300) - 0x59 < 0xffffffd6;
    }
    local_78 = uVar18;
    iStack_74 = iVar4;
    local_70 = uVar12;
    uStack_68 = uVar19;
    FUN_038fd3e0(param_1 + 0x2b8,&local_78,param_1 + 0x298,0,*(undefined8 *)(param_1 + 0x2f8),bVar11
                 ,1);
    *(char **)(param_1 + 0x2f8) = "LM_ConstructMem";
    *(int *)(param_1 + 0x284) = iVar4;
    *(undefined8 *)(param_1 + 0x288) = uVar12;
    *(undefined8 *)(param_1 + 0x290) = uVar19;
    uVar18 = (uVar18 + *(int *)(param_1 + 0x2a8) + *(int *)(param_1 + 0x2a4)) - 1 &
             -*(int *)(param_1 + 0x2a4);
    *(uint *)(param_1 + 0x280) = uVar18;
    iVar2 = (*(int *)(param_1 + 0x2ac) + uVar18) - *param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(lVar22 + 0x268);
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(lVar22 + 0x26c);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(lVar22 + 0x270);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(lVar22 + 0x278);
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(lVar22 + 0x280);
    *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(lVar22 + 0x284);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(lVar22 + 0x288);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(lVar22 + 0x290);
    uVar12 = *(undefined8 *)(lVar22 + 0x298);
    uVar19 = *(undefined8 *)(lVar22 + 0x2a0);
    uVar20 = *(undefined8 *)(lVar22 + 0x2a8);
    *(undefined8 *)(param_1 + 0x2af) = *(undefined8 *)(lVar22 + 0x2af);
    *(undefined8 *)(param_1 + 0x2a8) = uVar20;
    *(undefined8 *)(param_1 + 0x2a0) = uVar19;
    *(undefined8 *)(param_1 + 0x298) = uVar12;
    FUN_038fd1e0(param_1 + 0x2b8);
    FUN_038fd2f0(param_1 + 0x2b8,lVar22 + 0x2b8);
    uVar12 = *(undefined8 *)(lVar22 + 0x2f8);
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(lVar22 + 0x300);
    *(undefined8 *)(param_1 + 0x2f8) = uVar12;
  }
  lVar22 = param_1;
  do {
    lVar16 = lVar22;
    lVar22 = *(long *)(lVar16 + 0x170);
  } while (lVar22 != 0);
  iVar4 = *(int *)(lVar16 + 0x6e8);
  if (iVar4 == 2) {
    uVar14 = 5;
    local_d4 = '\x02';
  }
  else if (iVar4 == 1) {
    uVar14 = 3;
    local_d4 = '\x02';
  }
  else if (iVar4 == 0) {
    uVar14 = 1;
    if ((*(byte *)(param_1 + 0x308) & 1) != 0) {
      uVar14 = 2;
    }
    local_d4 = (*(byte *)(param_1 + 0x308) & 1) << 1;
  }
  else {
    local_d4 = '\0';
    uVar14 = 1;
  }
  FUN_0390a9ec(param_1 + 0x268,uVar14);
  lVar22 = param_1;
  do {
    lVar16 = lVar22;
    lVar22 = *(long *)(lVar16 + 0x170);
  } while (lVar22 != 0);
  iVar4 = *(int *)(param_1 + 0x178);
  if (iVar4 != 0) {
    iVar17 = 0;
    iVar5 = *(int *)(&DAT_041b4174 + (ulong)*(uint *)(lVar16 + 0x848) * 4);
    lVar22 = *(long *)(param_1 + 0x180);
    do {
      iVar24 = 0;
      lVar16 = lVar22 + (long)iVar17 * 0x620;
      *(undefined8 *)(lVar16 + 0x20) = 0;
      *(undefined8 *)(lVar16 + 0x58) = 0;
      *(undefined8 *)(lVar16 + 0x60) = 0;
      *(undefined8 *)(lVar16 + 0x48) = 0;
      *(undefined8 *)(lVar16 + 0x50) = 0;
      *(undefined8 *)(lVar16 + 0x38) = 0;
      *(undefined8 *)(lVar16 + 0x40) = 0;
      *(undefined8 *)(lVar16 + 0x28) = 0;
      *(undefined8 *)(lVar16 + 0x30) = 0;
      uVar7 = *(ushort *)(param_1 + 0x298);
      *(undefined8 *)(lVar16 + 0x10) = 0;
      if (uVar7 < 2) {
        uVar7 = 1;
      }
      fVar25 = (float)uVar7;
      *(float *)(lVar16 + 8) = fVar25;
      *(float *)(lVar16 + 0xc) = fVar25;
      *(float *)(lVar16 + 0x18) = fVar25;
      *(float *)(lVar16 + 0x1c) = fVar25;
      do {
        cVar9 = *(char *)(param_1 + 0x30a);
        if (*(ushort *)(param_1 + 0x2a2) < 10 &&
            (1 << (ulong)(*(ushort *)(param_1 + 0x2a2) & 0x1f) & 0x350U) != 0) {
          uVar15 = (uint)*(ushort *)(param_1 + 0x29c);
          uVar18 = uVar15;
        }
        else {
          uVar15 = (uint)*(ushort *)(param_1 + 0x29c);
          uVar18 = 1;
        }
        if (uVar18 <= uVar15) {
          uVar18 = uVar15;
        }
        plVar23 = (long *)(lVar16 + 0x68 + (long)iVar24 * 0xe0);
        *(undefined4 *)(plVar23 + 1) = *(undefined4 *)(param_1 + 0x268);
        cVar6 = *(char *)((long)plVar23 + 0xbe);
        sVar8 = *(short *)((long)plVar23 + 0xbc);
        *(undefined4 *)((long)plVar23 + 0xc) = *(undefined4 *)(param_1 + 0x26c);
        plVar23[2] = *(long *)(param_1 + 0x270);
        plVar23[3] = *(long *)(param_1 + 0x278);
        *(undefined4 *)(plVar23 + 4) = *(undefined4 *)(param_1 + 0x280);
        *(undefined4 *)((long)plVar23 + 0x24) = *(undefined4 *)(param_1 + 0x284);
        plVar23[5] = *(long *)(param_1 + 0x288);
        plVar23[6] = *(long *)(param_1 + 0x290);
        lVar21 = *(long *)(param_1 + 0x2a8);
        lVar13 = *(long *)(param_1 + 0x298);
        lVar3 = *(long *)(param_1 + 0x2a0);
        *(undefined8 *)((long)plVar23 + 0x4f) = *(undefined8 *)(param_1 + 0x2af);
        plVar23[8] = lVar3;
        plVar23[9] = lVar21;
        plVar23[7] = lVar13;
        FUN_038fd1e0(plVar23 + 0xb);
        FUN_038fd2f0(plVar23 + 0xb,param_1 + 0x2b8);
        puVar1 = (uint *)(plVar23 + 0x17);
        lVar13 = *(long *)(param_1 + 0x2f8);
        *(undefined4 *)(plVar23 + 0x14) = *(undefined4 *)(param_1 + 0x300);
        plVar23[0x13] = lVar13;
        do {
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar11) {
            *puVar1 = *puVar1 & 0xfffffffb | 4;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        uVar15 = iVar5 * cVar9 + iVar24;
        if ((int)(uVar18 - 1) <= (int)uVar15) {
          uVar15 = uVar18 - 1;
        }
        if (*(short *)((long)plVar23 + 0xbc) != sVar8) {
          do {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = *puVar1 & 0xfffffffd | 2;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          *(short *)((long)plVar23 + 0xbc) = sVar8;
        }
        if (*(char *)((long)plVar23 + 0xbe) != cVar6) {
          do {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = *puVar1 | 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          *(char *)((long)plVar23 + 0xbe) = cVar6;
        }
        (**(code **)(*plVar23 + 0x10))(plVar23);
        if (uVar15 != *(ushort *)((long)plVar23 + 0xbc)) {
          do {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = *puVar1 & 0xfffffffd | 2;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          *(short *)((long)plVar23 + 0xbc) = (short)uVar15;
        }
        if (*(char *)((long)plVar23 + 0xbe) != '\0') {
          do {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar11) {
              *puVar1 = *puVar1 | 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          *(undefined1 *)((long)plVar23 + 0xbe) = 0;
        }
        if (iVar24 < iVar5) {
          ((undefined8 *)(lVar16 + 0x20))[iVar24] = plVar23;
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 != 6);
      iVar17 = iVar17 + 1;
    } while (iVar4 != iVar17);
  }
  puVar1 = (uint *)(param_1 + 0x25c);
  *(undefined2 *)(param_1 + 0x24c) = 0x101;
  *(char *)(param_1 + 0x24e) = local_d4;
  do {
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x288);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x26c);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x278);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x280);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_1 + 0x284);
  *(undefined8 *)(param_1 + 0x1cf) = *(undefined8 *)(param_1 + 0x2af);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x2a0);
  FUN_038fd1e0(param_1 + 0x1d8);
  FUN_038fd2f0(param_1 + 0x1d8,param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x300);
  do {
    cVar9 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = *puVar1 | 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 8;
  return iVar2;
}


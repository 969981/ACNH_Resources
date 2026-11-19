
void FUN_039c09b0(long param_1,undefined4 param_2,int param_3,long *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  long lVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  bool bVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined4 *)(param_1 + 0x240);
  iVar1 = *(byte *)(param_1 + 0xcc) + 2;
  if (param_3 < 2) {
    FUN_0390a734(puVar2,8,0x1a,param_2,param_2,6,iVar1,0,0,1);
  }
  else {
    FUN_0390c1b8(puVar2,0x1a,param_2,param_2,param_3,iVar1,0);
  }
  puVar8 = PTR_DAT_04bd0fa8;
  iVar18 = *(int *)(param_1 + 0x280);
  plVar11 = (long *)PTR_DAT_04bb2698;
  if (iVar18 != 0) {
    uVar19 = *(undefined4 *)(param_1 + 0x27c);
    lVar22 = *(long *)PTR_DAT_04bb2698;
    if (lVar22 == 0) {
      plVar12 = malloc(0x38);
    }
    else {
      plVar11 = param_4;
      if (param_4 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar22 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          plVar12 = (long *)0x0;
          goto LAB_039c0ab8;
        }
      }
      plVar12 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x38,8);
    }
LAB_039c0ab8:
    plVar12[6] = 0;
    plVar23 = plVar12 + 1;
    *plVar23 = 0;
    *(undefined2 *)((long)plVar12 + 0x2a) = 0;
    bVar15 = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(undefined1 *)(plVar12 + 5) = 0;
    *plVar12 = (long)(PTR_DAT_04bb2cc8 + 0x10);
    plVar11 = param_4;
    if (param_4 == (long *)0x0) {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar11 = (long *)(lVar10 + 8);
      if (lVar22 != 0) {
        plVar11 = (long *)(lVar22 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      bVar15 = *(byte *)(plVar12 + 5);
    }
    uVar13 = *(undefined8 *)puVar8;
    plVar12[6] = 0;
    *plVar23 = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(byte *)(plVar12 + 5) = bVar15 & 0xfe;
    *(undefined2 *)((long)plVar12 + 0x2a) = 0;
    FUN_038f8590(uVar13,plVar12,plVar11,iVar18,uVar19,4);
    lVar22 = plVar12[3];
    *(undefined2 *)((long)plVar12 + 0x2a) = 4;
    plVar11 = (long *)PTR_DAT_04bb2698;
    iVar18 = 0;
    if (plVar12[4] != 0) {
      iVar18 = (int)*plVar23 - *(int *)(plVar12[4] + 0x10);
    }
    if (lVar22 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined4 *)(lVar22 + 0x104);
    }
    *(int *)(param_1 + 0x2e0) = iVar18;
    *(undefined4 *)(param_1 + 0x2e4) = uVar19;
    *(long *)(param_1 + 0x2e8) = lVar22;
    *(long **)(param_1 + 0x2f0) = plVar12;
  }
  iVar18 = *(int *)(param_1 + 0x284);
  if (iVar18 == 0) goto LAB_039c0ce4;
  uVar19 = *(undefined4 *)(param_1 + 0x27c);
  lVar22 = *plVar11;
  if (lVar22 == 0) {
    plVar12 = malloc(0x38);
  }
  else {
    plVar12 = param_4;
    if (param_4 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar22 + 8);
      if (lVar10 != 0) {
        plVar12 = (long *)(lVar10 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_039c0c10;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x38,8);
  }
LAB_039c0c10:
  plVar12[6] = 0;
  plVar23 = plVar12 + 1;
  *plVar23 = 0;
  *(undefined2 *)((long)plVar12 + 0x2a) = 0;
  bVar15 = 0;
  plVar12[4] = 0;
  *(undefined1 *)(plVar12 + 5) = 0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *plVar12 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  if (param_4 == (long *)0x0) {
    lVar10 = *plVar11;
    lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_4 = (long *)(lVar10 + 8);
    if (lVar22 != 0) {
      param_4 = (long *)(lVar22 + 0xa8);
    }
    param_4 = (long *)*param_4;
    bVar15 = *(byte *)(plVar12 + 5) & 0xfe;
  }
  uVar13 = *(undefined8 *)puVar8;
  plVar12[6] = 0;
  *plVar23 = 0;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[4] = 0;
  *(byte *)(plVar12 + 5) = bVar15;
  *(undefined2 *)((long)plVar12 + 0x2a) = 0;
  FUN_038f8590(uVar13,plVar12,param_4,iVar18,uVar19,4);
  lVar22 = plVar12[3];
  *(undefined2 *)((long)plVar12 + 0x2a) = 4;
  iVar18 = 0;
  if (plVar12[4] != 0) {
    iVar18 = (int)*plVar23 - *(int *)(plVar12[4] + 0x10);
  }
  if (lVar22 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined4 *)(lVar22 + 0x104);
  }
  *(int *)(param_1 + 0x2f8) = iVar18;
  *(undefined4 *)(param_1 + 0x2fc) = uVar19;
  *(long *)(param_1 + 0x300) = lVar22;
  *(long **)(param_1 + 0x308) = plVar12;
LAB_039c0ce4:
  local_78 = *(undefined4 *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x240) = local_78;
  uStack_74 = *(undefined4 *)(param_1 + 0x2e4);
  local_70 = *(undefined8 *)(param_1 + 0x2e8);
  uStack_68 = *(undefined8 *)(param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x244) = uStack_74;
  *(undefined8 *)(param_1 + 0x248) = local_70;
  *(undefined8 *)(param_1 + 0x250) = uStack_68;
  if ((*(byte *)(param_1 + 0x28e) >> 1 & 1) == 0) {
    bVar14 = false;
  }
  else {
    bVar14 = 0x11 < *(ushort *)(param_1 + 0x2d8) && *(ushort *)(param_1 + 0x2d8) - 0x59 < 0xffffffd6
    ;
  }
  plVar11 = (long *)(param_1 + 0x270);
  lVar22 = param_1 + 0x290;
  FUN_038fd3e0(lVar22,&local_78,plVar11,0,*(undefined8 *)(param_1 + 0x2d0),bVar14,1);
  if (*(long *)(param_1 + 0x300) != 0) {
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x2f8);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x2fc);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x308);
  }
  puVar8 = PTR_DAT_04bcf030;
  lVar10 = *(long *)(param_1 + 0x248);
  if (lVar10 != 0) {
    uVar19 = *(undefined4 *)(param_1 + 0x280);
    uVar5 = *puVar2;
    uVar9 = (**(code **)PTR_DAT_04bcf030)(lVar10);
    if ((uVar9 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar10,uVar5,uVar19);
    }
  }
  lVar10 = *(long *)(param_1 + 0x260);
  if (lVar10 != 0) {
    uVar19 = *(undefined4 *)(param_1 + 600);
    uVar5 = *(undefined4 *)(param_1 + 0x284);
    uVar9 = (**(code **)puVar8)(lVar10);
    if ((uVar9 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar10,uVar19,uVar5);
    }
  }
  FUN_0390a9ec(puVar2,iVar1);
  iVar1 = *(int *)(param_1 + 0x150);
  if (iVar1 != 0) {
    lVar10 = *(long *)(param_1 + 0x158);
    iVar18 = 0;
    do {
      uVar24 = 0;
      lVar16 = lVar10 + (long)iVar18 * 0x5a8;
      do {
        plVar12 = (long *)(lVar16 + 0x68 + uVar24 * 0xe0);
        uVar21 = (ulong)*(ushort *)((long)plVar12 + 0xbc);
        if (uVar24 != uVar21) {
          puVar3 = (uint *)(plVar12 + 0x17);
          do {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar14) {
              *puVar3 = *puVar3 & 0xfffffffd | 2;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          uVar21 = uVar24 & 0xffffffff;
          *(short *)((long)plVar12 + 0xbc) = (short)uVar24;
        }
        cVar6 = *(char *)((long)plVar12 + 0xbe);
        *(undefined4 *)(plVar12 + 1) = *(undefined4 *)(param_1 + 0x240);
        *(undefined4 *)((long)plVar12 + 0xc) = *(undefined4 *)(param_1 + 0x244);
        plVar12[2] = *(long *)(param_1 + 0x248);
        plVar12[3] = *(long *)(param_1 + 0x250);
        *(undefined4 *)(plVar12 + 4) = *(undefined4 *)(param_1 + 600);
        *(undefined4 *)((long)plVar12 + 0x24) = *(undefined4 *)(param_1 + 0x25c);
        plVar12[5] = *(long *)(param_1 + 0x260);
        plVar12[6] = *(long *)(param_1 + 0x268);
        lVar17 = *plVar11;
        lVar4 = *(long *)(param_1 + 0x278);
        lVar20 = *(long *)(param_1 + 0x280);
        *(undefined8 *)((long)plVar12 + 0x4f) = *(undefined8 *)(param_1 + 0x287);
        plVar12[8] = lVar4;
        plVar12[9] = lVar20;
        plVar12[7] = lVar17;
        FUN_038fd1e0(plVar12 + 0xb);
        FUN_038fd2f0(plVar12 + 0xb,lVar22);
        lVar17 = *(long *)(param_1 + 0x2d0);
        puVar3 = (uint *)(plVar12 + 0x17);
        *(undefined4 *)(plVar12 + 0x14) = *(undefined4 *)(param_1 + 0x2d8);
        plVar12[0x13] = lVar17;
        do {
          cVar7 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar14) {
            *puVar3 = *puVar3 & 0xfffffffb | 4;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((uint)*(ushort *)((long)plVar12 + 0xbc) != ((uint)uVar21 & 0xffff)) {
          do {
            cVar7 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar14) {
              *puVar3 = *puVar3 & 0xfffffffd | 2;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *(short *)((long)plVar12 + 0xbc) = (short)uVar21;
        }
        if (*(char *)((long)plVar12 + 0xbe) != cVar6) {
          do {
            cVar7 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar14) {
              *puVar3 = *puVar3 | 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *(char *)((long)plVar12 + 0xbe) = cVar6;
        }
        (**(code **)(*plVar12 + 0x10))(plVar12);
        if (*(char *)((long)plVar12 + 0xbe) != '\0') {
          do {
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar14) {
              *puVar3 = *puVar3 | 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          *(undefined1 *)((long)plVar12 + 0xbe) = 0;
        }
        *(long **)(lVar16 + 0x20 + uVar24 * 8) = plVar12;
        uVar24 = uVar24 + 1;
      } while (uVar24 != 6);
      iVar18 = iVar18 + 1;
    } while (iVar1 != iVar18);
  }
  puVar3 = (uint *)(param_1 + 0x234);
  *(undefined2 *)(param_1 + 0x224) = 0x101;
  *(undefined1 *)(param_1 + 0x226) = 2;
  do {
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = *puVar3 & 0xfffffffb | 4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x244);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 600);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x268);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined8 *)(param_1 + 0x1a7) = *(undefined8 *)(param_1 + 0x287);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x280);
  *(long *)(param_1 + 400) = *plVar11;
  FUN_038fd1e0(param_1 + 0x1b0);
  FUN_038fd2f0(param_1 + 0x1b0,lVar22);
  *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x2d0);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x2d8);
  do {
    cVar6 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar14) {
      *puVar3 = *puVar3 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  return;
}


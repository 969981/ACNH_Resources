
void FUN_03a68b80(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 *param_6)

{
  uint *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar1 = (uint *)(param_1 + 0x30c);
  lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x410) + 8) +
                    0x18);
  *(undefined2 *)(param_1 + 0x2fc) = 0x101;
  *(undefined1 *)(param_1 + 0x2fe) = 0;
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = *puVar1 | 4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x27f) = *(undefined8 *)(param_1 + 0x97);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x80);
  FUN_038fd1e0(param_1 + 0x288);
  FUN_038fd2f0(param_1 + 0x288,param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0xe8);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = *puVar1 | 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  uVar4 = *(ushort *)(param_1 + 0x80);
  uVar5 = *(ushort *)(param_1 + 0x82);
  uVar2 = uVar5;
  if (*(short *)(param_1 + 0x8a) != 3) {
    uVar2 = 1;
  }
  FUN_03907810(lVar14,param_2);
  local_78 = *(undefined4 *)(param_6 + 1);
  puVar1 = (uint *)(lVar14 + 0x14);
  uStack_74 = *(undefined4 *)(param_4 + 0x10);
  local_80 = *param_6;
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar13 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar13 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
    puVar11 = PTR_DAT_04bd0fc8;
    puVar10 = PTR_DAT_04bcf2e0;
  } while (cVar8 != '\0');
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x18);
  if (iVar6 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar6,0x10,&local_80);
  }
  local_80 = CONCAT44((*(float *)((long)param_6 + 0xc) * (float)uVar4) / (float)uVar2,
                      *(float *)((long)param_6 + 0xc));
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar13 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar13 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (**(int **)(lVar14 + 0x38) != -1) {
    lVar13 = *(long *)puVar11;
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar13 + 0x70),
               *(undefined8 *)(lVar13 + 0x18),(long)**(int **)(lVar14 + 0x38),8,&local_80);
  }
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar13 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar13 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  lVar13 = 0x30;
  if (*(uint *)(lVar14 + 0x30) < 3) {
    lVar13 = 0;
  }
  iVar6 = *(int *)(*(long *)(lVar14 + 0x38) + lVar13);
  if (iVar6 != -1) {
    lVar13 = *(long *)puVar11;
    (**(code **)puVar10)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(lVar13 + 0x70),
               *(undefined8 *)(lVar13 + 0x18),(long)iVar6,0x40,param_4 + 0x14);
  }
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,param_5 + 0x3f4);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,param_5 + 0x438);
  puVar11 = PTR_DAT_04bcf1e8;
  puVar10 = PTR_DAT_04bbd560;
  iVar6 = *(int *)(param_5 + 0x3e0);
  if (iVar6 != 0) {
    lVar13 = *(long *)(param_5 + 1000);
    uVar17 = 0;
    uVar18 = 0;
    do {
      lVar15 = *(long *)(lVar13 + (-(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3));
      if (lVar15 != 0) {
        uVar12 = (**(code **)puVar10)(lVar15 + 8);
        (**(code **)puVar11)(uVar16,uVar17 & 0xffffffff,uVar12,*(undefined4 *)(lVar15 + 0x118));
      }
      uVar17 = uVar18 + 1;
      uVar18 = uVar17 & 0xffffffff;
    } while (iVar6 != (int)uVar17);
  }
  do {
    uVar7 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar7 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((uVar7 & 0x7fffffff) != 0) {
    if ((int)uVar7 < 0) {
      if ((int)*puVar1 < 0) {
        lVar13 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar13 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_0390d290(param_1 + 0x238,param_2,*(undefined8 *)(lVar14 + 0x68),0xffffffff,0);
  iVar6 = *(int *)(param_5 + 0x4e0);
  if (iVar6 == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(param_5 + 0x4c4);
  uVar12 = *(undefined8 *)(param_2 + 0xb8);
  uVar16 = (**(code **)puVar10)(param_5 + 0x4e8);
                    /* WARNING: Could not recover jumptable at 0x03a690f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar12,uVar3,*(undefined4 *)(param_5 + 0x4c0),iVar6,uVar16);
  return;
}


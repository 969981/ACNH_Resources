
void FUN_03abf410(long param_1,long param_2,uint param_3,long param_4,long param_5,long param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  uVar7 = *(uint *)(param_1 + 0x5d0) >> 2 & 1;
  lVar12 = *(long *)(*(long *)(param_6 + 8) + 0x28);
  uVar2 = 0;
  if (uVar7 + 1 < *(uint *)(*(long *)(param_6 + 8) + 0x20)) {
    uVar2 = uVar7 + 1;
  }
  uVar13 = (ulong)uVar2;
  lVar11 = lVar12 + uVar13 * 0x150;
  (*DAT_04c62868)(uVar16,0x10,param_1 + 0x32c);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,param_1 + 0x370);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar3 = *(int *)(param_1 + 0x318);
  if (iVar3 != 0) {
    lVar18 = *(long *)(param_1 + 800);
    uVar17 = 0;
    uVar15 = 0;
    do {
      lVar14 = *(long *)(lVar18 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      if (lVar14 != 0) {
        uVar10 = (**(code **)puVar8)(lVar14 + 8);
        (**(code **)puVar9)(uVar16,uVar17 & 0xffffffff,uVar10,*(undefined4 *)(lVar14 + 0x118));
      }
      uVar17 = uVar15 + 1;
      uVar15 = uVar17 & 0xffffffff;
    } while (iVar3 != (int)uVar17);
  }
  FUN_03907810(lVar11,param_2);
  puVar1 = (uint *)(lVar12 + uVar13 * 0x150 + 0x14);
  do {
    uVar2 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar2 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar2 & 0x7fffffff) != 0) {
    if ((int)uVar2 < 0) {
      if ((int)*puVar1 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(param_4 + 0x98,param_2,*(undefined8 *)(lVar12 + uVar13 * 0x150 + 0x68),0xffffffff,0);
  FUN_01557430(lVar11,param_2,0,param_4,0);
  if (*(uint *)(param_4 + 0x78) <= param_3) {
    param_3 = 0;
  }
  FUN_01557430(lVar11,param_2,1,*(long *)(param_4 + 0x80) + (long)(int)param_3 * 0x78,0);
  iVar3 = *(int *)(param_5 + 0x1570);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_5 + 0x1554);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  uVar16 = (**(code **)puVar8)(param_5 + 0x1578);
                    /* WARNING: Could not recover jumptable at 0x03abf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar10,uVar4,*(undefined4 *)(param_5 + 0x1550),iVar3,uVar16);
  return;
}


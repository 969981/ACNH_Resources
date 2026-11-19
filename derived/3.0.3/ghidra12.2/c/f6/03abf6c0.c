
void FUN_03abf6c0(long param_1,long param_2,uint param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  
  uVar15 = *(undefined8 *)(param_2 + 0xb8);
  lVar11 = *(long *)(*(long *)(param_6 + 8) + 0x28);
  uVar1 = (*(uint *)(param_1 + 0x5d0) >> 2 & 1) + 3;
  if (*(uint *)(*(long *)(param_6 + 8) + 0x20) <= uVar1) {
    uVar1 = 0;
  }
  uVar12 = (ulong)uVar1;
  lVar10 = lVar11 + uVar12 * 0x150;
  (*DAT_04c62868)(uVar15,0x10,param_1 + 0x50c);
  (**(code **)PTR_DAT_04bcf1b0)(uVar15,0x10,param_1 + 0x550);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar3 = *(int *)(param_1 + 0x4f8);
  if (iVar3 != 0) {
    lVar17 = *(long *)(param_1 + 0x500);
    uVar16 = 0;
    uVar14 = 0;
    do {
      lVar13 = *(long *)(lVar17 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
      if (lVar13 != 0) {
        uVar9 = (**(code **)puVar7)(lVar13 + 8);
        (**(code **)puVar8)(uVar15,uVar16 & 0xffffffff,uVar9,*(undefined4 *)(lVar13 + 0x118));
      }
      uVar16 = uVar14 + 1;
      uVar14 = uVar16 & 0xffffffff;
    } while (iVar3 != (int)uVar16);
  }
  FUN_03907810(lVar10,param_2);
  puVar2 = (uint *)(lVar11 + uVar12 * 0x150 + 0x14);
  do {
    uVar1 = *puVar2;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = uVar1 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar1 & 0x7fffffff) != 0) {
    if ((int)uVar1 < 0) {
      if ((int)*puVar2 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar10);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(param_4 + 0x98,param_2,*(undefined8 *)(lVar11 + uVar12 * 0x150 + 0x68),0xffffffff,0);
  FUN_01557430(lVar10,param_2,0,param_4,0);
  if (*(uint *)(param_4 + 0x88) <= param_3) {
    param_3 = 0;
  }
  FUN_01557430(lVar10,param_2,2,*(long *)(param_4 + 0x90) + (long)(int)param_3 * 0x78,0);
  iVar3 = *(int *)(param_5 + 0x2168);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_5 + 0x214c);
  uVar9 = *(undefined8 *)(param_2 + 0xb8);
  uVar15 = (**(code **)puVar7)(param_5 + 0x2170);
                    /* WARNING: Could not recover jumptable at 0x03abf940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar9,uVar4,*(undefined4 *)(param_5 + 0x2148),iVar3,uVar15);
  return;
}


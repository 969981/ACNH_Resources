
void FUN_03a72510(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined2 local_d4 [2];
  uint local_d0;
  uint local_b8;
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x9f) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4f0);
  }
  FUN_038e4cec(local_d4);
  local_d4[0] = 0;
  local_d0 = local_d0 & 0xfffffffe;
  local_b8 = local_b8 | 0xf;
  FUN_038e4d90(local_d4,param_2);
  lVar12 = *(long *)(*(long *)(lVar12 + 8) + 0x18);
  FUN_03907810(lVar12,param_2);
  puVar1 = (uint *)(lVar12 + 0x14);
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
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
  FUN_0390d290(param_4,param_2,*(undefined8 *)(lVar12 + 0x68),0xffffffff,0);
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar12);
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
  FUN_0390d290(param_5,param_2,
               *(long *)(lVar12 + 0x68) + (ulong)(1 < *(uint *)(lVar12 + 0x60)) * 0x18,0xffffffff,0)
  ;
  FUN_01557430(lVar12,param_2,0,param_3,0);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  lVar12 = *(long *)PTR_DAT_04bbd7e0;
  (*DAT_04c62868)(uVar10,0x10,lVar12 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar12 + 0xe88);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar12 + 0xe30);
  if (iVar2 != 0) {
    lVar12 = *(long *)(lVar12 + 0xe38);
    uVar11 = 0;
    uVar13 = 0;
    do {
      lVar14 = *(long *)(lVar12 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3));
      if (lVar14 != 0) {
        uVar9 = (**(code **)puVar7)(lVar14 + 8);
        (**(code **)puVar8)(uVar10,uVar11 & 0xffffffff,uVar9,*(undefined4 *)(lVar14 + 0x118));
      }
      uVar11 = uVar13 + 1;
      uVar13 = uVar11 & 0xffffffff;
    } while (iVar2 != (int)uVar11);
  }
  lVar12 = DAT_05ae9100;
  iVar2 = *(int *)(DAT_05ae9100 + 0x1f8);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(DAT_05ae9100 + 0x1dc);
    uVar9 = *(undefined8 *)(param_2 + 0xb8);
    uVar10 = (**(code **)puVar7)(DAT_05ae9100 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar9,uVar3,*(undefined4 *)(lVar12 + 0x1d8),iVar2,uVar10);
  }
  return;
}


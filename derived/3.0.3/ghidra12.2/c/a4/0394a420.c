
void FUN_0394a420(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  uVar3 = *(ushort *)(param_3 + 0x30);
  uVar4 = *(ushort *)(param_3 + 0x32);
  puVar1 = (uint *)(param_2 + 0x14);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  local_70 = (float)uVar3;
  uVar3 = uVar4;
  if (*(short *)(param_3 + 0x3a) != 3) {
    uVar3 = 1;
  }
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  fStack_6c = (float)uVar3;
  local_68 = 1.0 / local_70;
  fStack_64 = 1.0 / fStack_6c;
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  iVar5 = *(int *)(*(long *)(param_2 + 0x38) + (ulong)(1 < *(uint *)(param_2 + 0x30)) * 0x18);
  if (iVar5 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_1 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar5,0x10,&local_70);
  }
  do {
    uVar6 = *puVar1;
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = uVar6 | 0x80000000;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if ((uVar6 & 0x7fffffff) != 0) {
    if ((int)uVar6 < 0) {
      if ((int)*puVar1 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(param_2);
    }
  }
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  FUN_0390d290(param_3,param_1,*(undefined8 *)(param_2 + 0x68),0xffffffff,0);
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
  lVar15 = *(long *)PTR_DAT_04bbd7e0;
  (*DAT_04c62868)(uVar12,0x10,lVar15 + 0x1024);
  (*DAT_04c62870)(uVar12,0x10,lVar15 + 0x1068);
  puVar10 = PTR_DAT_04bcf1e8;
  puVar9 = PTR_DAT_04bbd560;
  iVar5 = *(int *)(lVar15 + 0x1010);
  if (iVar5 != 0) {
    lVar15 = *(long *)(lVar15 + 0x1018);
    uVar13 = 0;
    uVar14 = 0;
    do {
      lVar16 = *(long *)(lVar15 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
      if (lVar16 != 0) {
        uVar11 = (**(code **)puVar9)(lVar16 + 8);
        (**(code **)puVar10)(uVar12,uVar13 & 0xffffffff,uVar11,*(undefined4 *)(lVar16 + 0x118));
      }
      uVar13 = uVar14 + 1;
      uVar14 = uVar13 & 0xffffffff;
    } while (iVar5 != (int)uVar13);
  }
  lVar15 = DAT_05ae9100;
  iVar5 = *(int *)(DAT_05ae9100 + 0x480);
  if (iVar5 == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(DAT_05ae9100 + 0x464);
  uVar11 = *(undefined8 *)(param_1 + 0xb8);
  uVar12 = (**(code **)puVar9)(DAT_05ae9100 + 0x488);
                    /* WARNING: Could not recover jumptable at 0x0394a718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bbd568)(uVar11,uVar2,*(undefined4 *)(lVar15 + 0x460),iVar5,uVar12);
  return;
}


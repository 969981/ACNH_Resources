
void FUN_03a8aa10(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  
  (**(code **)(*param_2 + 0x38))(param_2,param_1);
  local_78 = 0xff7fffffff7fffff;
  local_88 = PTR_DAT_04bd0f08 + 0x10;
  local_80 = 0x7f7fffff7f7fffff;
  local_70 = *(uint *)PTR_DAT_04bd0ea8;
  local_6c = 0x3f80000000000000;
  if (local_70 < 6) {
    if ((1 << (ulong)(local_70 & 0x1f) & 0x39U) == 0) {
      fVar19 = *(float *)(param_2 + 1);
      fVar18 = *(float *)((long)param_2 + 0xc);
    }
    else {
      fVar18 = *(float *)(param_2 + 1);
      fVar19 = *(float *)((long)param_2 + 0xc);
    }
    fVar21 = fVar18;
    fVar7 = 0.0;
    if (fVar18 <= 0.0) {
      fVar21 = 0.0;
      fVar7 = fVar18;
    }
    fVar20 = fVar19;
    fVar18 = 0.0;
    if (fVar19 <= 0.0) {
      fVar20 = 0.0;
      fVar18 = fVar19;
    }
    local_80 = CONCAT44(fVar18,fVar7);
    local_78 = CONCAT44(fVar20,fVar21);
  }
  FUN_038e77e4(&local_88,param_1,param_2);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x8e) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x468);
  }
  FUN_03907810(lVar14,param_1);
  puVar1 = (uint *)(lVar14 + 0x14);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar9 = PTR_DAT_04bd0fc8;
    puVar8 = PTR_DAT_04bcf2e0;
  } while (cVar4 != '\0');
  if (**(int **)(lVar14 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar14 + 0x38),0xc
               ,param_4);
  }
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  local_88 = (undefined *)CONCAT44(local_88._4_4_,0x3f800000);
  iVar2 = *(int *)(*(long *)(lVar14 + 0x38) + (ulong)(1 < *(uint *)(lVar14 + 0x30)) * 0x18);
  if (iVar2 != -1) {
    (**(code **)puVar8)(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(*(long *)puVar9 + 0x70),
                        *(undefined8 *)(*(long *)puVar9 + 0x18),(long)iVar2,4,&local_88);
  }
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  FUN_0390d290(param_3,param_1,*(undefined8 *)(lVar14 + 0x68),0xffffffff,0);
  uVar13 = *(undefined8 *)(param_1 + 0xb8);
  lVar14 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar13,0x10,lVar14 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar13,0x10,lVar14 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar14 + 0x1010);
  if (iVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x1018);
    uVar15 = 0;
    uVar16 = 0;
    do {
      lVar17 = *(long *)(lVar14 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if (lVar17 != 0) {
        uVar10 = (**(code **)puVar8)(lVar17 + 8);
        (**(code **)puVar9)(uVar13,uVar15 & 0xffffffff,uVar10,*(undefined4 *)(lVar17 + 0x118));
      }
      uVar15 = uVar16 + 1;
      uVar16 = uVar15 & 0xffffffff;
    } while (iVar2 != (int)uVar15);
  }
  lVar14 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar14 + 0x480);
  if (iVar2 != 0) {
    uVar12 = *(undefined4 *)(lVar14 + 0x464);
    uVar10 = *(undefined8 *)(param_1 + 0xb8);
    uVar13 = (**(code **)puVar8)(lVar14 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar10,uVar12,*(undefined4 *)(lVar14 + 0x460),iVar2,uVar13);
  }
  uVar3 = *(uint *)(param_2[4] + 0x58);
  if (uVar3 != 0xffffffff) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar3 - *(ushort *)(lVar14 + 0x3da);
      if (*(uint *)(lVar14 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) = *(ulong *)(param_1 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
      uVar11 = 0x112;
      uVar12 = 0x12;
    }
    else {
      uVar11 = 0x111;
      uVar12 = 0x11;
    }
    if ((*(uint *)(lVar14 + 800) & 2) != 0) {
      uVar12 = uVar11;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar12);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}


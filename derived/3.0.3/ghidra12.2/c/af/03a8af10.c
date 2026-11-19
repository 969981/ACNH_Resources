
void FUN_03a8af10(long param_1,int param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
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
  
  (**(code **)(*param_3 + 0x38))(param_3,param_1);
  local_78 = 0xff7fffffff7fffff;
  local_88 = PTR_DAT_04bd0f08 + 0x10;
  local_80 = 0x7f7fffff7f7fffff;
  local_70 = *(uint *)PTR_DAT_04bd0ea8;
  local_6c = 0x3f80000000000000;
  if (local_70 < 6) {
    if ((1 << (ulong)(local_70 & 0x1f) & 0x39U) == 0) {
      fVar19 = *(float *)(param_3 + 1);
      fVar18 = *(float *)((long)param_3 + 0xc);
    }
    else {
      fVar18 = *(float *)(param_3 + 1);
      fVar19 = *(float *)((long)param_3 + 0xc);
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
  FUN_038e77e4(&local_88,param_1,param_3);
  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x480) + 8);
  param_2 = (uint)*(ushort *)(*(long *)(lVar11 + 0x38) + 0x30) * param_2;
  if (param_2 < 1) {
    lVar11 = *(long *)(lVar11 + 0x18);
  }
  else {
    uVar5 = param_2 - 1;
    if (*(uint *)(lVar11 + 0x20) <= uVar5) {
      uVar5 = 0;
    }
    lVar11 = *(long *)(lVar11 + 0x28) + (ulong)uVar5 * 0x150;
  }
  FUN_03907810(lVar11,param_1);
  puVar1 = (uint *)(lVar11 + 0x14);
  do {
    uVar5 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar5 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_0390d290(param_4,param_1,*(undefined8 *)(lVar11 + 0x68),0xffffffff,0);
  do {
    uVar5 = *puVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar5 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar1 < 0) {
        lVar17 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar17 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_0390d290(param_5,param_1,
               *(long *)(lVar11 + 0x68) + (ulong)(1 < *(uint *)(lVar11 + 0x60)) * 0x18,0xffffffff,0)
  ;
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  lVar11 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar14,0x10,lVar11 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar14,0x10,lVar11 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar11 + 0x1010);
  if (iVar2 != 0) {
    lVar11 = *(long *)(lVar11 + 0x1018);
    uVar15 = 0;
    uVar16 = 0;
    do {
      lVar17 = *(long *)(lVar11 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if (lVar17 != 0) {
        uVar10 = (**(code **)puVar8)(lVar17 + 8);
        (**(code **)puVar9)(uVar14,uVar15 & 0xffffffff,uVar10,*(undefined4 *)(lVar17 + 0x118));
      }
      uVar15 = uVar16 + 1;
      uVar16 = uVar15 & 0xffffffff;
    } while (iVar2 != (int)uVar15);
  }
  lVar11 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar11 + 0x480);
  if (iVar2 != 0) {
    uVar13 = *(undefined4 *)(lVar11 + 0x464);
    uVar10 = *(undefined8 *)(param_1 + 0xb8);
    uVar14 = (**(code **)puVar8)(lVar11 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar10,uVar13,*(undefined4 *)(lVar11 + 0x460),iVar2,uVar14);
  }
  uVar5 = *(uint *)(param_3[4] + 0x58);
  if (uVar5 != 0xffffffff) {
    lVar11 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar11 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar5 - *(ushort *)(lVar11 + 0x3da);
      if (*(uint *)(lVar11 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar11 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_1 + 0x100) = *(ulong *)(param_1 + 0x100) | 1L << ((ulong)uVar5 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar11 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar13 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar13 = 0x11;
    }
    if ((*(uint *)(lVar11 + 800) & 2) != 0) {
      uVar13 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_1 + 0xb8),uVar13);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}


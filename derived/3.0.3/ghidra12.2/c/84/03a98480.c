
void FUN_03a98480(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

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
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  undefined8 local_7c;
  
  (**(code **)(*param_3 + 0x38))(param_3);
  local_88 = 0xff7fffffff7fffff;
  local_98 = PTR_DAT_04bd0f08 + 0x10;
  local_90 = 0x7f7fffff7f7fffff;
  local_80 = *(uint *)PTR_DAT_04bd0ea8;
  local_7c = 0x3f80000000000000;
  if (local_80 < 6) {
    if ((1 << (ulong)(local_80 & 0x1f) & 0x39U) == 0) {
      fVar18 = *(float *)(param_3 + 1);
      fVar17 = *(float *)((long)param_3 + 0xc);
    }
    else {
      fVar17 = *(float *)(param_3 + 1);
      fVar18 = *(float *)((long)param_3 + 0xc);
    }
    fVar20 = fVar17;
    fVar7 = 0.0;
    if (fVar17 <= 0.0) {
      fVar20 = 0.0;
      fVar7 = fVar17;
    }
    fVar19 = fVar18;
    fVar17 = 0.0;
    if (fVar18 <= 0.0) {
      fVar19 = 0.0;
      fVar17 = fVar18;
    }
    local_90 = CONCAT44(fVar17,fVar7);
    local_88 = CONCAT44(fVar19,fVar20);
  }
  FUN_038e77e4(&local_98,param_2,param_3);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x8a) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x448);
  }
  FUN_03907810(lVar14,param_2);
  uVar21 = *(undefined4 *)(param_1 + 0x230);
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
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
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
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar21);
  if (**(int **)(lVar14 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar14 + 0x38),4,
               &local_98);
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
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
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
  FUN_0390d290(param_4,param_2,*(undefined8 *)(lVar14 + 0x68),0xffffffff,0);
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
        lVar16 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar16 / 1000000);
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
  FUN_0390d290(param_5,param_2,
               *(long *)(lVar14 + 0x68) + (ulong)(1 < *(uint *)(lVar14 + 0x60)) * 0x18,0xffffffff,0)
  ;
  uVar12 = *(undefined8 *)(param_2 + 0xb8);
  lVar14 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar12,0x10,lVar14 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar12,0x10,lVar14 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(lVar14 + 0x1010);
  if (iVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x1018);
    uVar13 = 0;
    uVar15 = 0;
    do {
      lVar16 = *(long *)(lVar14 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
      if (lVar16 != 0) {
        uVar10 = (**(code **)puVar8)(lVar16 + 8);
        (**(code **)puVar9)(uVar12,uVar13 & 0xffffffff,uVar10,*(undefined4 *)(lVar16 + 0x118));
      }
      uVar13 = uVar15 + 1;
      uVar15 = uVar13 & 0xffffffff;
    } while (iVar2 != (int)uVar13);
  }
  lVar14 = *(long *)PTR_DAT_04bbd7e8;
  iVar2 = *(int *)(lVar14 + 0x480);
  if (iVar2 != 0) {
    uVar21 = *(undefined4 *)(lVar14 + 0x464);
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    uVar12 = (**(code **)puVar8)(lVar14 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar10,uVar21,*(undefined4 *)(lVar14 + 0x460),iVar2,uVar12);
  }
  uVar3 = *(uint *)(param_3[4] + 0x58);
  if (uVar3 != 0xffffffff) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar3 - *(ushort *)(lVar14 + 0x3da);
      if (*(uint *)(lVar14 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar3 & 0x3f);
        return;
      }
    }
    if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
      uVar11 = 0x112;
      uVar21 = 0x12;
    }
    else {
      uVar11 = 0x111;
      uVar21 = 0x11;
    }
    if ((*(uint *)(lVar14 + 800) & 2) != 0) {
      uVar21 = uVar11;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar21);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}


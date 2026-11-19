
void FUN_0392c640(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined8 local_e4;
  undefined2 local_d4 [2];
  uint local_d0;
  
  if (*(char *)(param_1 + 0x218) != '\0') {
    FUN_038e4cec(local_d4);
    local_d4[0] = 0;
    local_d0 = local_d0 & 0xfffffffe;
    FUN_038e4d90(local_d4,param_2);
    local_f0 = 0xff7fffffff7fffff;
    local_100 = PTR_DAT_04bd0f08 + 0x10;
    local_f8 = 0x7f7fffff7f7fffff;
    local_e8 = *(uint *)PTR_DAT_04bd0ea8;
    local_e4 = 0x3f80000000000000;
    if (local_e8 < 6) {
      if ((1 << (ulong)(local_e8 & 0x1f) & 0x39U) == 0) {
        fVar18 = *(float *)(param_4 + 1);
        fVar17 = *(float *)((long)param_4 + 0xc);
      }
      else {
        fVar17 = *(float *)(param_4 + 1);
        fVar18 = *(float *)((long)param_4 + 0xc);
      }
      fVar20 = fVar17;
      fVar8 = 0.0;
      if (fVar17 <= 0.0) {
        fVar20 = 0.0;
        fVar8 = fVar17;
      }
      fVar19 = fVar18;
      fVar17 = 0.0;
      if (fVar18 <= 0.0) {
        fVar19 = 0.0;
        fVar17 = fVar18;
      }
      local_f8 = CONCAT44(fVar17,fVar8);
      local_f0 = CONCAT44(fVar19,fVar20);
    }
    FUN_038e77e4(&local_100,param_2,param_4);
    (**(code **)(*param_4 + 0x38))(param_4,param_2);
    uStack_108 = 0;
    uVar4 = *(ushort *)(param_1 + 0x2258);
    local_118 = 0;
    lVar14 = 0;
    if (uVar4 < 2) {
      uVar4 = 1;
    }
    _local_110 = CONCAT44(1.0 / ((float)uVar4 + -1.0),(float)uVar4);
    local_120 = *(undefined4 *)(param_1 + 0x1a14);
    uStack_11c = *(undefined4 *)(param_1 + 0x1a18);
    if (10 < *(uint *)(*(long *)PTR_DAT_04bbdd18 + 8)) {
      lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x50);
    }
    FUN_03907810(lVar14,param_2);
    local_128 = FUN_03900ad0(*(undefined8 *)PTR_DAT_04bd1128,&local_120,0x20);
    FUN_0391e640(lVar14,param_2,0,&local_128,0);
    puVar1 = (uint *)(lVar14 + 0x14);
    do {
      uVar5 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar5 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar5 & 0x7fffffff) != 0) {
      if ((int)uVar5 < 0) {
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
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_0390d290(param_5,param_2,*(undefined8 *)(lVar14 + 0x68),0xffffffff,0);
    do {
      uVar5 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar5 | 0x80000000;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar5 & 0x7fffffff) != 0) {
      if ((int)uVar5 < 0) {
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
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    FUN_0390d290(param_1 + 0x2228,param_2,
                 *(long *)(lVar14 + 0x68) + (ulong)(1 < *(uint *)(lVar14 + 0x60)) * 0x18,0xffffffff,
                 0);
    uVar12 = *(undefined8 *)(param_2 + 0xb8);
    lVar14 = *(long *)PTR_DAT_04bbd7e0;
    (**(code **)PTR_DAT_04bcf1a8)(uVar12,0x10,lVar14 + 0xe44);
    (**(code **)PTR_DAT_04bcf1b0)(uVar12,0x10,lVar14 + 0xe88);
    puVar10 = PTR_DAT_04bcf1e8;
    puVar9 = PTR_DAT_04bbd560;
    iVar2 = *(int *)(lVar14 + 0xe30);
    if (iVar2 != 0) {
      lVar14 = *(long *)(lVar14 + 0xe38);
      uVar13 = 0;
      uVar15 = 0;
      do {
        lVar16 = *(long *)(lVar14 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
        if (lVar16 != 0) {
          uVar11 = (**(code **)puVar9)(lVar16 + 8);
          (**(code **)puVar10)(uVar12,uVar13 & 0xffffffff,uVar11,*(undefined4 *)(lVar16 + 0x118));
        }
        uVar13 = uVar15 + 1;
        uVar15 = uVar13 & 0xffffffff;
      } while (iVar2 != (int)uVar13);
    }
    lVar14 = *(long *)PTR_DAT_04bbd7e8;
    iVar2 = *(int *)(lVar14 + 0x1f8);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(lVar14 + 0x1dc);
      uVar11 = *(undefined8 *)(param_2 + 0xb8);
      uVar12 = (**(code **)puVar9)(lVar14 + 0x200);
      (**(code **)PTR_DAT_04bbd568)(uVar11,uVar3,*(undefined4 *)(lVar14 + 0x1d8),iVar2,uVar12);
    }
  }
  return;
}


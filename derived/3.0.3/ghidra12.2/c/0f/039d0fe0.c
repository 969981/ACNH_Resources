
void FUN_039d0fe0(long param_1,long param_2,int param_3,int param_4,undefined1 param_5)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong local_118 [3];
  undefined4 local_fc;
  undefined1 local_b4;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_84;
  undefined *local_78;
  char *pcStack_70;
  
  pcStack_70 = "G-BufferMask";
  if (param_3 != 0) {
    pcStack_70 = "G-BufferMask(Pre)";
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  lVar13 = param_1 + 0x10 + (long)param_3 * 0x5d8;
  plVar1 = (long *)(lVar13 + 0x490);
  if (*(long *)(param_1 + 0x13d8) == 0) {
    fVar18 = *(float *)(lVar13 + 0x4a8);
    fVar19 = *(float *)(lVar13 + 0x4ac);
    fVar21 = *(float *)(lVar13 + 0x4a0);
    fVar22 = *(float *)(lVar13 + 0x4a4);
    local_118[1] = 0;
    local_118[2] = 0;
    local_118[0] = 0;
    lVar17 = *(long *)PTR_DAT_04bbd510;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar9 == 0) {
      iVar8 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar8 = (int)lVar9 + -1;
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,iVar8);
    uVar10 = FUN_03948e10(lVar17,param_2,lVar17 + (long)iVar8 * 0x290 + 0x10,&local_78,0x59,1,
                          (int)(fVar18 - fVar21),(int)(fVar19 - fVar22),1,0,1,local_118,1,0,0,0);
    *(undefined8 *)(param_1 + 0x13d8) = uVar10;
    FUN_0155a100(param_1 + 0x12f8,uVar10,*(undefined1 *)(param_1 + 0x13b6),
                 *(undefined2 *)(param_1 + 0x13b4));
  }
  *(long *)(param_1 + 0x10 + (long)param_3 * 0x5d8 + 0x4f0) = param_1 + 0x12f8;
  (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  local_90 = 0xff7fffffff7fffff;
  local_a0 = PTR_DAT_04bd0f08 + 0x10;
  local_98 = 0x7f7fffff7f7fffff;
  local_88 = *(uint *)PTR_DAT_04bd0ea8;
  local_84 = 0x3f80000000000000;
  if (local_88 < 6) {
    if ((1 << (ulong)(local_88 & 0x1f) & 0x39U) == 0) {
      fVar19 = *(float *)(lVar13 + 0x498);
      fVar18 = *(float *)(lVar13 + 0x49c);
    }
    else {
      fVar18 = *(float *)(lVar13 + 0x498);
      fVar19 = *(float *)(lVar13 + 0x49c);
    }
    fVar22 = fVar18;
    fVar21 = 0.0;
    if (fVar18 <= 0.0) {
      fVar22 = 0.0;
      fVar21 = fVar18;
    }
    fVar20 = fVar19;
    fVar18 = 0.0;
    if (fVar19 <= 0.0) {
      fVar20 = 0.0;
      fVar18 = fVar19;
    }
    local_98 = CONCAT44(fVar18,fVar21);
    local_90 = CONCAT44(fVar20,fVar22);
  }
  FUN_038e77e4(&local_a0,param_2,plVar1);
  lVar13 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0x150;
  if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 2) {
    lVar13 = 0;
  }
  lVar13 = *(long *)(lVar13 + 8);
  iVar8 = 0;
  if (*(char *)(param_1 + param_4 + 0x13f0) != -1) {
    iVar8 = param_4 + 1;
  }
  if (iVar8 < 1) {
    lVar13 = *(long *)(lVar13 + 0x18);
  }
  else {
    uVar5 = iVar8 - 1;
    if (*(uint *)(lVar13 + 0x20) <= uVar5) {
      uVar5 = 0;
    }
    lVar13 = *(long *)(lVar13 + 0x28) + (ulong)uVar5 * 0x150;
  }
  FUN_03907810(lVar13,param_2);
  FUN_01557430(lVar13,param_2,0,param_1 + 0x10c0,0);
  *(undefined4 *)(param_1 + 0x1f78) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1f7c) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined8 *)(param_1 + 0x1f80) = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f88) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1f90) = *(undefined4 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1fa8) = *(undefined8 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x1f94) = *(undefined4 *)(param_1 + 0x204);
  *(undefined8 *)(param_1 + 0x1f98) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x1fa0) = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x1fbf) = *(undefined8 *)(param_1 + 0x22f);
  *(undefined8 *)(param_1 + 0x1fb8) = *(undefined8 *)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x1fb0) = *(undefined8 *)(param_1 + 0x220);
  FUN_038fd1e0(param_1 + 0x1fc8);
  FUN_038fd2f0(param_1 + 0x1fc8,param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x2008) = *(undefined8 *)(param_1 + 0x278);
  *(undefined4 *)(param_1 + 0x2010) = *(undefined4 *)(param_1 + 0x280);
  puVar2 = (uint *)(param_1 + 0x204c);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = *puVar2 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(undefined1 *)(param_1 + 0x2048) = param_5;
  *(undefined1 *)(param_1 + 0x2049) = param_5;
  *(undefined1 *)(param_1 + 0x204b) = 1;
  *(undefined1 *)(param_1 + 0x204a) = param_5;
  *(byte *)(param_1 + 0x2050) = *(byte *)(param_1 + 0x2050) | 2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = *puVar2 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar2 = (uint *)(lVar13 + 0x14);
  do {
    uVar5 = *puVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = uVar5 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar2 < 0) {
        lVar9 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar9 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar2 < 0);
      }
    }
    else {
      FUN_03907b80(lVar13);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = 0x30;
  if (*(uint *)(lVar13 + 0x60) < 3) {
    lVar9 = 0;
  }
  FUN_0390d290(param_1 + 0x1f78,param_2,*(long *)(lVar13 + 0x68) + lVar9,0xffffffff,0);
  FUN_038e4cec(local_118);
  local_fc = 0;
  local_118[0] = CONCAT62(local_118[0]._2_6_,0x101);
  local_b4 = 8;
  local_118[0] = local_118[0] & 0xffffffff;
  FUN_038e4d90(local_118,param_2);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  lVar13 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar10,0x10,lVar13 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar10,0x10,lVar13 + 0x1068);
  puVar7 = PTR_DAT_04bcf1e8;
  puVar6 = PTR_DAT_04bbd560;
  iVar8 = *(int *)(lVar13 + 0x1010);
  if (iVar8 != 0) {
    lVar13 = *(long *)(lVar13 + 0x1018);
    uVar15 = 0;
    uVar16 = 0;
    do {
      lVar9 = *(long *)(lVar13 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
      if (lVar9 != 0) {
        uVar11 = (**(code **)puVar6)(lVar9 + 8);
        (**(code **)puVar7)(uVar10,uVar15 & 0xffffffff,uVar11,*(undefined4 *)(lVar9 + 0x118));
      }
      uVar15 = uVar16 + 1;
      uVar16 = uVar15 & 0xffffffff;
    } while (iVar8 != (int)uVar15);
  }
  lVar13 = *(long *)PTR_DAT_04bbd7e8;
  iVar8 = *(int *)(lVar13 + 0x480);
  if (iVar8 != 0) {
    uVar14 = *(undefined4 *)(lVar13 + 0x464);
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    uVar10 = (**(code **)puVar6)(lVar13 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar11,uVar14,*(undefined4 *)(lVar13 + 0x460),iVar8,uVar10);
  }
  if (*(int *)(param_1 + 0x1350) == -1) {
    lVar13 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar13 + 0x5c8) >> 3 & 1) == 0) {
      uVar5 = 0;
      if (~(uint)*(ushort *)(lVar13 + 0x3da) < *(uint *)(lVar13 + 0x368)) {
        uVar5 = ~(uint)*(ushort *)(lVar13 + 0x3da);
      }
      if ((*(uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 0x8000000000000000;
        return;
      }
    }
    if ((*(uint *)(lVar13 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar14 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar14 = 0x11;
    }
    if ((*(uint *)(lVar13 + 800) & 2) != 0) {
      uVar14 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar14);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}


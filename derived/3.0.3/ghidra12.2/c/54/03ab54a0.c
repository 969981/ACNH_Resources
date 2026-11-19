
void FUN_03ab54a0(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  float fVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  undefined8 local_54;
  int local_44;
  
  puVar10 = PTR_DAT_04bbd510;
  *(long *)(param_1 + 0xb30) = param_1 + 0x390;
  uVar3 = *(undefined4 *)(param_1 + 0x8d8);
  uVar4 = *(undefined4 *)(param_1 + 0x8a4);
  local_70 = PTR_DAT_04bb2020 + 0x10;
  lVar17 = *(long *)puVar10;
  uVar6 = *(undefined1 *)(param_1 + 0xb38);
  local_68 = "static_shadow_depth";
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar12 == 0) {
    local_44 = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_44 = (int)lVar12 + -1;
  }
  uVar13 = FUN_03948e10(lVar17,param_2,lVar17 + (long)local_44 * 0x290 + 0x10,&local_70,uVar3,1,
                        uVar4,uVar4,1,0,1,0,1,uVar6,0,0);
  *(undefined8 *)(param_1 + 0x238) = uVar13;
  FUN_0155a100(param_1 + 0x78,uVar13,*(undefined1 *)(param_1 + 0x136),
               *(undefined2 *)(param_1 + 0x134));
  uVar5 = *(uint *)(param_1 + 0x8a4);
  *(long *)(param_1 + 0x70) = param_1 + 0x78;
  puVar18 = *(undefined4 **)(param_1 + 0x238);
  *(float *)(param_1 + 0x18) = (float)(int)uVar5;
  *(float *)(param_1 + 0x1c) = (float)(int)uVar5;
  fVar19 = (float)(int)(uVar5 & (int)uVar5 >> 0x1f);
  *(float *)(param_1 + 0x20) = fVar19;
  *(float *)(param_1 + 0x24) = fVar19;
  fVar19 = (float)(int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  *(float *)(param_1 + 0x28) = fVar19;
  *(float *)(param_1 + 0x2c) = fVar19;
  *(undefined4 *)(param_1 + 0x158) = *puVar18;
  *(undefined4 *)(param_1 + 0x15c) = puVar18[1];
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(puVar18 + 2);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(puVar18 + 4);
  *(undefined4 *)(param_1 + 0x170) = puVar18[6];
  *(undefined4 *)(param_1 + 0x174) = puVar18[7];
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(puVar18 + 8);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(puVar18 + 10);
  uVar13 = *(undefined8 *)(puVar18 + 0xe);
  uVar16 = *(undefined8 *)(puVar18 + 0x10);
  uVar15 = *(undefined8 *)((long)puVar18 + 0x47);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(puVar18 + 0xc);
  *(undefined8 *)(param_1 + 400) = uVar13;
  *(undefined8 *)(param_1 + 0x198) = uVar16;
  *(undefined8 *)(param_1 + 0x19f) = uVar15;
  FUN_038fd1e0(param_1 + 0x1a8);
  FUN_038fd2f0(param_1 + 0x1a8,puVar18 + 0x14);
  uVar3 = puVar18[0x26];
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(puVar18 + 0x24);
  puVar1 = (uint *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x1f0) = uVar3;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 | 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  *(undefined2 *)(param_1 + 0x21f) = 0x707;
  *(undefined1 *)(param_1 + 0x221) = 7;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  local_60 = 0xff7fffffff7fffff;
  plVar2 = (long *)(param_1 + 0x10);
  local_70 = PTR_DAT_04bd0f08 + 0x10;
  local_68 = (char *)0x7f7fffff7f7fffff;
  local_58 = *(uint *)PTR_DAT_04bd0ea8;
  local_54 = 0x3f80000000000000;
  if (local_58 < 6) {
    if ((1 << (ulong)(local_58 & 0x1f) & 0x39U) == 0) {
      fVar20 = *(float *)(param_1 + 0x18);
      fVar19 = *(float *)(param_1 + 0x1c);
    }
    else {
      fVar19 = *(float *)(param_1 + 0x18);
      fVar20 = *(float *)(param_1 + 0x1c);
    }
    fVar22 = fVar19;
    fVar9 = 0.0;
    if (fVar19 <= 0.0) {
      fVar22 = 0.0;
      fVar9 = fVar19;
    }
    fVar21 = fVar20;
    fVar19 = 0.0;
    if (fVar20 <= 0.0) {
      fVar21 = 0.0;
      fVar19 = fVar20;
    }
    local_68 = (char *)CONCAT44(fVar19,fVar9);
    local_60 = CONCAT44(fVar21,fVar22);
  }
  FUN_038e77e4(&local_70,param_2,plVar2);
  (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  if (((*PTR_DAT_04bd0f98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bd0f98), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bd0f90 = PTR_DAT_04bd0fa0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd0f98);
  }
  if (param_2 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)0x0;
    lVar12 = *(long *)(param_1 + 0x70);
  }
  else {
    uVar14 = (**(code **)*param_2)(param_2,PTR_DAT_04bd0f90);
    if ((uVar14 & 1) == 0) {
      param_2 = (undefined8 *)0x0;
    }
    lVar12 = *(long *)(param_1 + 0x70);
  }
  if (lVar12 != 0) {
    (**(code **)PTR_DAT_04bcf298)(0x3f800000,param_2[0x17],1,0,0);
  }
  uVar5 = *(uint *)(param_1 + 0x8a8);
  *(long *)(param_1 + 0x268) = param_1 + 0x2b0;
  fVar20 = (float)(int)(uVar5 & (int)uVar5 >> 0x1f);
  *(undefined2 *)(param_1 + 0x457) = 0x707;
  *(undefined1 *)(param_1 + 0x459) = 7;
  puVar1 = (uint *)(param_1 + 0x464);
  *(float *)(param_1 + 0x250) = (float)(int)uVar5;
  *(float *)(param_1 + 0x254) = (float)(int)uVar5;
  *(float *)(param_1 + 600) = fVar20;
  fVar19 = (float)(int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  *(float *)(param_1 + 0x25c) = fVar20;
  *(float *)(param_1 + 0x260) = fVar19;
  *(float *)(param_1 + 0x264) = fVar19;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar5 = *(uint *)(param_1 + 0x8a8);
  *(long *)(param_1 + 0x490) = param_1 + 0x4d8;
  fVar20 = (float)(int)(uVar5 & (int)uVar5 >> 0x1f);
  *(undefined2 *)(param_1 + 0x67f) = 0x707;
  *(undefined1 *)(param_1 + 0x681) = 7;
  puVar1 = (uint *)(param_1 + 0x68c);
  *(float *)(param_1 + 0x478) = (float)(int)uVar5;
  *(float *)(param_1 + 0x47c) = (float)(int)uVar5;
  *(float *)(param_1 + 0x480) = fVar20;
  fVar19 = (float)(int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  *(float *)(param_1 + 0x484) = fVar20;
  *(float *)(param_1 + 0x488) = fVar19;
  *(float *)(param_1 + 0x48c) = fVar19;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 & 0xfffffffd | 2;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  return;
}


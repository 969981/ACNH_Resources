
void FUN_03aed840(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  undefined8 local_4c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x46);
  lVar13 = *(long *)PTR_DAT_04bbd510;
  uVar4 = *(undefined4 *)((long)param_1 + 0x234);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "OutlineDepth";
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar9 == 0) {
    iVar8 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar8 = (int)lVar9 + -1;
  }
  uVar10 = FUN_03948e10(lVar13,param_2,lVar13 + (long)iVar8 * 0x290 + 0x10,&local_68,0x5a,1,uVar3,
                        uVar4,1,0,1,0,1,0,0,0);
  *param_1 = uVar10;
  FUN_0155a100(param_1 + 1,uVar10,*(undefined1 *)((long)param_1 + 0xc6),
               *(undefined2 *)((long)param_1 + 0xc4));
  puVar14 = (undefined4 *)*param_1;
  param_1[0x29] = param_1 + 1;
  *(undefined4 *)(param_1 + 0x2a) = *puVar14;
  *(undefined4 *)((long)param_1 + 0x154) = puVar14[1];
  param_1[0x2b] = *(undefined8 *)(puVar14 + 2);
  param_1[0x2c] = *(undefined8 *)(puVar14 + 4);
  *(undefined4 *)(param_1 + 0x2d) = puVar14[6];
  *(undefined4 *)((long)param_1 + 0x16c) = puVar14[7];
  param_1[0x2e] = *(undefined8 *)(puVar14 + 8);
  param_1[0x2f] = *(undefined8 *)(puVar14 + 10);
  uVar10 = *(undefined8 *)(puVar14 + 0xc);
  uVar2 = *(undefined8 *)(puVar14 + 0xe);
  uVar11 = *(undefined8 *)(puVar14 + 0x10);
  *(undefined8 *)((long)param_1 + 0x197) = *(undefined8 *)((long)puVar14 + 0x47);
  param_1[0x31] = uVar2;
  param_1[0x32] = uVar11;
  param_1[0x30] = uVar10;
  FUN_038fd1e0(param_1 + 0x34);
  FUN_038fd2f0(param_1 + 0x34,puVar14 + 0x14);
  uVar3 = puVar14[0x26];
  param_1[0x3c] = *(undefined8 *)(puVar14 + 0x24);
  puVar1 = (uint *)((long)param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x3d) = uVar3;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plVar12 = param_1 + 0x1d;
  (**(code **)(*plVar12 + 0x38))(plVar12,param_2);
  local_58 = 0xff7fffffff7fffff;
  local_68 = PTR_DAT_04bd0f08 + 0x10;
  local_60 = (char *)0x7f7fffff7f7fffff;
  local_50 = *(uint *)PTR_DAT_04bd0ea8;
  local_4c = 0x3f80000000000000;
  if (local_50 < 6) {
    if ((1 << (ulong)(local_50 & 0x1f) & 0x39U) == 0) {
      fVar16 = *(float *)(param_1 + 0x1e);
      fVar15 = *(float *)((long)param_1 + 0xf4);
    }
    else {
      fVar15 = *(float *)(param_1 + 0x1e);
      fVar16 = *(float *)((long)param_1 + 0xf4);
    }
    fVar18 = fVar15;
    fVar7 = 0.0;
    if (fVar15 <= 0.0) {
      fVar18 = 0.0;
      fVar7 = fVar15;
    }
    fVar17 = fVar16;
    fVar15 = 0.0;
    if (fVar16 <= 0.0) {
      fVar17 = 0.0;
      fVar15 = fVar16;
    }
    local_60 = (char *)CONCAT44(fVar15,fVar7);
    local_58 = CONCAT44(fVar17,fVar18);
  }
  FUN_038e77e4(&local_68,param_2,plVar12);
  if (param_1[0x29] != 0) {
    (**(code **)PTR_DAT_04bcf298)(0x3f800000,*(undefined8 *)(param_2 + 0xb8),1,0,0);
  }
  return;
}


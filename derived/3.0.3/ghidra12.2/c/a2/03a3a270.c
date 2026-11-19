
void FUN_03a3a270(long param_1,undefined8 param_2,uint param_3,long param_4,long param_5)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined8 local_b4;
  float local_98;
  float fStack_94;
  
  lVar16 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  if (*(char *)(lVar16 + (long)(int)param_3 * 0x238 + 0x230) == '\x02') {
    fVar26 = *(float *)(param_4 + 8);
    fVar25 = *(float *)(param_4 + 0xc);
    lVar9 = *(long *)PTR_DAT_04bbd510;
    fVar24 = *(float *)(param_5 + 0x14) - *(float *)(param_5 + 0xc);
    fVar23 = *(float *)(param_5 + 0x10) - *(float *)(param_5 + 8);
    fVar18 = *(float *)(param_4 + 0x18);
    fVar20 = *(float *)(param_4 + 0x1c);
    fVar21 = *(float *)(param_4 + 0x10);
    fVar22 = *(float *)(param_4 + 0x14);
    uVar7 = *(int *)(param_5 + 0x18) - 1;
    fVar19 = fVar23;
    if (1 < uVar7) {
      fVar19 = fVar24;
    }
    FUN_038e79bc(param_5,&local_98,param_4);
    lVar13 = *(long *)(param_4 + 0x20);
    lVar15 = lVar16 + (long)(int)param_3 * 0x238;
    lVar1 = lVar15 + 0x58;
    puVar12 = (undefined4 *)(lVar15 + 8);
    *puVar12 = *(undefined4 *)(lVar13 + 8);
    *(undefined4 *)(lVar15 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
    *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
    *(undefined4 *)(lVar15 + 0x20) = *(undefined4 *)(lVar13 + 0x20);
    *(undefined4 *)(lVar15 + 0x24) = *(undefined4 *)(lVar13 + 0x24);
    *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)(lVar13 + 0x30);
    uVar10 = *(undefined8 *)(lVar13 + 0x4f);
    uVar8 = *(undefined8 *)(lVar13 + 0x40);
    uVar3 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(lVar13 + 0x38);
    *(undefined8 *)(lVar15 + 0x4f) = uVar10;
    *(undefined8 *)(lVar15 + 0x40) = uVar8;
    *(undefined8 *)(lVar15 + 0x48) = uVar3;
    FUN_038fd1e0(lVar1);
    FUN_038fd2f0(lVar1,lVar13 + 0x58);
    uVar4 = *(undefined4 *)(lVar13 + 0xa0);
    *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar13 + 0x98);
    puVar2 = (uint *)(lVar15 + 0xdc);
    *(undefined4 *)(lVar15 + 0xa0) = uVar4;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (1 < uVar7) {
      fVar24 = fVar23;
    }
    puVar17 = (undefined8 *)(lVar16 + (long)(int)param_3 * 0x238);
    local_148 = PTR_DAT_04bb2020 + 0x10;
    puStack_140 = &DAT_0407e853;
    fVar18 = (fVar24 / fVar26) * (fVar18 - fVar21);
    fVar20 = (fVar19 / fVar25) * (fVar20 - fVar22);
    uVar8 = FUN_03948e10(lVar9,param_2,lVar9 + 0x7c0,&local_148,0x1a,1,(int)fVar18,(int)fVar20,1,0,1
                         ,0,0,1,0,0);
    *puVar17 = uVar8;
    lVar16 = puVar17[0x21];
    FUN_01560750(lVar16,*puVar17,*(undefined1 *)(lVar16 + 0xbe),*(undefined2 *)(lVar16 + 0xbc));
    plVar14 = puVar17 + 0x1d;
    *(float *)(puVar17 + 0x1e) = fVar18;
    *(float *)((long)puVar17 + 0xf4) = fVar20;
    fVar24 = fVar18;
    fVar19 = 0.0;
    if (fVar18 <= 0.0) {
      fVar24 = 0.0;
      fVar19 = fVar18;
    }
    fVar21 = 0.0;
    if (fVar20 <= 0.0) {
      fVar21 = fVar20;
    }
    *(float *)(puVar17 + 0x20) = fVar24;
    *(float *)(puVar17 + 0x1f) = fVar19;
    *(float *)((long)puVar17 + 0xfc) = fVar21;
    *(float *)((long)puVar17 + 0x104) = fVar20;
    (**(code **)(*plVar14 + 0x38))(plVar14,param_2);
    local_c0 = 0xff7fffffff7fffff;
    local_d0 = PTR_DAT_04bd0f08 + 0x10;
    local_c8 = 0x7f7fffff7f7fffff;
    local_b8 = *(uint *)PTR_DAT_04bd0ea8;
    local_b4 = 0x3f80000000000000;
    if (local_b8 < 6) {
      if ((1 << (ulong)(local_b8 & 0x1f) & 0x39U) == 0) {
        fVar24 = *(float *)(puVar17 + 0x1e);
        fVar19 = *(float *)((long)puVar17 + 0xf4);
      }
      else {
        fVar19 = *(float *)(puVar17 + 0x1e);
        fVar24 = *(float *)((long)puVar17 + 0xf4);
      }
      fVar22 = fVar19;
      fVar21 = 0.0;
      if (fVar19 <= 0.0) {
        fVar22 = 0.0;
        fVar21 = fVar19;
      }
      fVar23 = fVar24;
      fVar19 = 0.0;
      if (fVar24 <= 0.0) {
        fVar23 = 0.0;
        fVar19 = fVar24;
      }
      local_c8 = CONCAT44(fVar19,fVar21);
      local_c0 = CONCAT44(fVar23,fVar22);
    }
    FUN_038e77e4(&local_d0,param_2,plVar14);
    FUN_038e4cec(&local_148);
    local_148 = (undefined *)((ulong)local_148 & 0xfffffffeffff0000);
    FUN_038e4d90(&local_148,param_2);
    fVar24 = *(float *)(param_4 + 0x1c) - *(float *)(param_4 + 0x14);
    fVar19 = *(float *)(param_4 + 0x18) - *(float *)(param_4 + 0x10);
    fStack_15c = fVar20 / fVar24;
    local_160 = fVar18 / fVar19;
    fStack_154 = -(0.5 - (0.5 - fStack_94 / fVar24) / fStack_15c);
    local_158 = 0.5 - (0.5 - local_98 / fVar19) / local_160;
    local_150 = local_160;
    fStack_14c = fStack_15c;
    FUN_0394a8e0(0,param_2,puVar12,&local_d0,&local_150,&local_158,&local_160,PTR_DAT_04bb2f48);
    puVar11 = (undefined4 *)*puVar17;
    *puVar12 = *puVar11;
    *(undefined4 *)(lVar15 + 0xc) = puVar11[1];
    *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)(lVar15 + 0x18) = *(undefined8 *)(puVar11 + 4);
    *(undefined4 *)(lVar15 + 0x20) = puVar11[6];
    *(undefined4 *)(lVar15 + 0x24) = puVar11[7];
    *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(puVar11 + 8);
    *(undefined8 *)(lVar15 + 0x30) = *(undefined8 *)(puVar11 + 10);
    uVar8 = *(undefined8 *)(puVar11 + 0xc);
    uVar3 = *(undefined8 *)(puVar11 + 0xe);
    uVar10 = *(undefined8 *)(puVar11 + 0x10);
    *(undefined8 *)(lVar15 + 0x4f) = *(undefined8 *)((long)puVar11 + 0x47);
    *(undefined8 *)(lVar15 + 0x40) = uVar3;
    *(undefined8 *)(lVar15 + 0x48) = uVar10;
    *(undefined8 *)(lVar15 + 0x38) = uVar8;
    FUN_038fd1e0(lVar1);
    FUN_038fd2f0(lVar1,puVar11 + 0x14);
    uVar8 = *(undefined8 *)(puVar11 + 0x24);
    *(undefined4 *)(lVar15 + 0xa0) = puVar11[0x26];
    *(undefined8 *)(lVar15 + 0x98) = uVar8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return;
}


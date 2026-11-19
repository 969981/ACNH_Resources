
void FUN_039a74a0(long param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined *local_60;
  char *pcStack_58;
  
  puVar10 = PTR_DAT_04bbd510;
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    puVar9 = PTR_DAT_04bb31c8;
    *(undefined8 *)(param_1 + 0x168) = 0;
    puVar14 = *(undefined4 **)(*(long *)puVar9 + 0x18);
    *(undefined4 *)(param_1 + 0x440) = *puVar14;
    *(undefined4 *)(param_1 + 0x444) = puVar14[1];
    *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(puVar14 + 2);
    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(puVar14 + 4);
    *(undefined4 *)(param_1 + 0x458) = puVar14[6];
    *(undefined4 *)(param_1 + 0x45c) = puVar14[7];
    *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(puVar14 + 8);
    *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(puVar14 + 10);
    uVar11 = *(undefined8 *)(puVar14 + 0xe);
    uVar4 = *(undefined8 *)(puVar14 + 0x10);
    uVar12 = *(undefined8 *)(puVar14 + 0xc);
    *(undefined8 *)(param_1 + 0x487) = *(undefined8 *)((long)puVar14 + 0x47);
    *(undefined8 *)(param_1 + 0x478) = uVar11;
    *(undefined8 *)(param_1 + 0x480) = uVar4;
    *(undefined8 *)(param_1 + 0x470) = uVar12;
    FUN_038fd1e0(param_1 + 0x490);
    FUN_038fd2f0(param_1 + 0x490,puVar14 + 0x14);
    uVar11 = *(undefined8 *)(puVar14 + 0x24);
    *(undefined4 *)(param_1 + 0x4d8) = puVar14[0x26];
    *(undefined8 *)(param_1 + 0x4d0) = uVar11;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "layer texture";
  puVar14 = (undefined4 *)
            FUN_03948e10(*(long *)puVar10,0,*(long *)puVar10 + 0x7c0,&local_60,param_4,1,
                         (int)*param_2,(int)param_2[1],1,0,1,0,0,1,0,0);
  *(undefined4 **)(param_1 + 0x168) = puVar14;
  piVar1 = (int *)(param_1 + 0x490);
  *(undefined4 *)(param_1 + 0x440) = *puVar14;
  *(undefined4 *)(param_1 + 0x444) = puVar14[1];
  *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(puVar14 + 2);
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(puVar14 + 4);
  *(undefined4 *)(param_1 + 0x458) = puVar14[6];
  *(undefined4 *)(param_1 + 0x45c) = puVar14[7];
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(puVar14 + 8);
  *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(puVar14 + 10);
  uVar11 = *(undefined8 *)(puVar14 + 0xc);
  uVar4 = *(undefined8 *)(puVar14 + 0xe);
  uVar12 = *(undefined8 *)(puVar14 + 0x10);
  *(undefined8 *)(param_1 + 0x487) = *(undefined8 *)((long)puVar14 + 0x47);
  *(undefined8 *)(param_1 + 0x480) = uVar12;
  *(undefined8 *)(param_1 + 0x478) = uVar4;
  *(undefined8 *)(param_1 + 0x470) = uVar11;
  FUN_038fd1e0(piVar1);
  FUN_038fd2f0(piVar1,puVar14 + 0x14);
  uVar5 = puVar14[0x26];
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(puVar14 + 0x24);
  uVar3 = uVar5 & 0xffff;
  *(uint *)(param_1 + 0x4d8) = uVar5;
  if ((uVar3 == 0x22) || (uVar3 == 0x1d)) {
    FUN_01560750(param_1 + 0x88,param_1 + 0x440,*(undefined1 *)(param_1 + 0x146),
                 *(undefined2 *)(param_1 + 0x144));
  }
  **(undefined4 **)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x490) == -1) {
    lVar13 = -1;
  }
  else {
    lVar13 = *(long *)PTR_DAT_04bc1010;
    uVar3 = *(int *)(param_1 + 0x490) - (uint)*(ushort *)(lVar13 + 0x3da);
    if (*(uint *)(lVar13 + 0x368) <= uVar3) {
      uVar3 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar3 * 0x20 + 4);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar7) {
        *puVar2 = *puVar2 | 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar13 = (long)*piVar1;
  }
  *(long *)(param_1 + 0x208) = lVar13;
  fVar15 = *param_2;
  fVar18 = param_2[1];
  fVar16 = fVar15;
  fVar8 = 0.0;
  if (fVar15 <= 0.0) {
    fVar16 = 0.0;
    fVar8 = fVar15;
  }
  fVar19 = fVar18;
  fVar15 = 0.0;
  if (fVar18 <= 0.0) {
    fVar19 = 0.0;
    fVar15 = fVar18;
  }
  *(float *)(param_1 + 0x30) = fVar8;
  *(float *)(param_1 + 0x38) = fVar16;
  *(float *)(param_1 + 0x34) = fVar15;
  *(float *)(param_1 + 0x3c) = fVar19;
  uVar17 = *param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_3[1];
  *(undefined4 *)(param_1 + 0x28) = uVar17;
  return;
}


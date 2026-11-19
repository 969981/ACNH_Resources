
void FUN_039d19a0(long param_1,undefined8 param_2,ulong param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined **local_68;
  char *pcStack_60;
  int local_54;
  
  FUN_039d1bfc();
  FUN_039d15f4(param_1,param_2);
  FUN_039d0fe0(param_1,param_2,1,1,2);
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(undefined8 *)(param_1 + 0xaa0) = 0;
  lVar7 = DAT_05ae90c0;
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  *(undefined8 *)(param_1 + 0xab0) = 0;
  *(undefined8 *)(param_1 + 0xab8) = 0;
  *(undefined8 *)(param_1 + 0xac0) = 0;
  *(undefined8 *)(param_1 + 0xac8) = 0;
  *(undefined8 *)(param_1 + 0xad0) = 0;
  if ((param_3 & 1) != 0) {
    fVar12 = *(float *)(param_1 + 0xa90);
    fVar14 = *(float *)(param_1 + 0xa88);
    uVar3 = *(undefined4 *)(param_1 + 0x1908);
    fVar15 = *(float *)(param_1 + 0xa8c);
    local_68 = &PTR_LAB_048f9770;
    pcStack_60 = "PreShading(Expand)";
    fVar13 = *(float *)(param_1 + 0xa94);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar8 == 0) {
      local_54 = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_54 = (int)lVar8 + -1;
    }
    uVar9 = FUN_03948e10(lVar7,param_2,lVar7 + (long)local_54 * 0x290 + 0x10,&local_68,uVar3,1,
                         (int)(fVar12 - fVar14),(int)(fVar13 - fVar15),1,0,1,0,1,0,0,0);
    *(undefined8 *)(param_1 + 0x1e90) = uVar9;
    FUN_01560750(param_1 + 0x1920,uVar9,*(undefined1 *)(param_1 + 0x19de),
                 *(undefined2 *)(param_1 + 0x19dc));
    puVar11 = *(undefined4 **)(param_1 + 0x1e90);
    *(undefined4 *)(param_1 + 0x1e98) = *puVar11;
    *(undefined4 *)(param_1 + 0x1e9c) = puVar11[1];
    *(undefined8 *)(param_1 + 0x1ea0) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)(param_1 + 0x1ea8) = *(undefined8 *)(puVar11 + 4);
    *(undefined4 *)(param_1 + 0x1eb0) = puVar11[6];
    *(undefined4 *)(param_1 + 0x1eb4) = puVar11[7];
    *(undefined8 *)(param_1 + 0x1eb8) = *(undefined8 *)(puVar11 + 8);
    *(undefined8 *)(param_1 + 0x1ec0) = *(undefined8 *)(puVar11 + 10);
    uVar10 = *(undefined8 *)(puVar11 + 0x10);
    uVar9 = *(undefined8 *)(puVar11 + 0xc);
    uVar2 = *(undefined8 *)(puVar11 + 0xe);
    *(undefined8 *)(param_1 + 0x1edf) = *(undefined8 *)((long)puVar11 + 0x47);
    *(undefined8 *)(param_1 + 0x1ed8) = uVar10;
    *(undefined8 *)(param_1 + 0x1ed0) = uVar2;
    *(undefined8 *)(param_1 + 0x1ec8) = uVar9;
    FUN_038fd1e0(param_1 + 0x1ee8);
    FUN_038fd2f0(param_1 + 0x1ee8,puVar11 + 0x14);
    uVar3 = puVar11[0x26];
    *(undefined8 *)(param_1 + 0x1f28) = *(undefined8 *)(puVar11 + 0x24);
    *(undefined4 *)(param_1 + 0x1f30) = uVar3;
    puVar1 = (uint *)(param_1 + 0x1f6c);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    cVar5 = *(char *)(param_1 + 0x1a00);
    uVar4 = *(uint *)(param_1 + 0xc);
    *(long *)(param_1 + 0xa98 + (long)cVar5 * 8) = param_1 + 0x1920;
    *(uint *)(param_1 + 0xc) = 0xf << (ulong)(((int)cVar5 & 7U) << 2) | uVar4;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x20;
  }
  return;
}


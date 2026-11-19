
undefined4 * FUN_03a3e640(long param_1,uint param_2,uint param_3,undefined4 param_4,float *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  bool bVar10;
  float fVar11;
  int local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined4 *puStack_a0;
  
  if (*(uint *)(param_1 + 0xa30) <= param_2) {
    param_2 = 0;
  }
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0xa38) + (long)(int)param_2 * 0xab8 + 0x3f0);
  puVar4 = puVar1 + (ulong)param_3 * 0x70;
  if (1 < param_3) {
    puVar4 = puVar1;
  }
  uVar5 = *(ushort *)(puVar4 + 0x44);
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  if (*param_5 == (float)uVar5) {
    uVar6 = *(ushort *)((long)puVar4 + 0x112);
    fVar11 = param_5[1];
    uVar5 = uVar6;
    if (*(short *)((long)puVar4 + 0x11a) != 3) {
      uVar5 = 1;
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (fVar11 == (float)uVar5) goto LAB_03a3e874;
  }
  else {
    fVar11 = param_5[1];
  }
  puVar2 = (undefined8 *)(puVar4 + 0x44);
  FUN_0390a734(puVar4 + 0x38,1,param_4,(int)*param_5,(int)fVar11,1,1,0,0,1);
  FUN_038f8f90(puVar2,&local_b0);
  uVar8 = (**(code **)PTR_DAT_04bcf770)(&local_b0);
  *(undefined2 *)(puVar4 + 0x4a) = uVar8;
  uVar9 = (**(code **)PTR_DAT_04bcf740)(&local_b0);
  puVar4[0x48] = uVar9;
  uVar9 = (**(code **)PTR_DAT_04bcf0b0)(&local_b0);
  puVar4[0x47] = uVar9;
  if ((*(byte *)(DAT_05ae78f0 + 800) & 1) != 0) {
    (**(code **)PTR_DAT_04bcf780)(&local_b0);
  }
  local_a8 = *(long *)(puVar4 + 0x66);
  puStack_a0 = puVar4 + 0x60;
  local_b0 = 0;
  if (*(long *)(puVar4 + 0x68) != 0) {
    local_b0 = puVar4[0x62] - *(int *)(*(long *)(puVar4 + 0x68) + 0x10);
  }
  if (local_a8 == 0) {
    uStack_ac = 0;
  }
  else {
    uStack_ac = *(undefined4 *)(local_a8 + 0x104);
  }
  puVar4[0x38] = local_b0;
  puVar4[0x39] = uStack_ac;
  *(long *)(puVar4 + 0x3a) = local_a8;
  *(undefined4 **)(puVar4 + 0x3c) = puStack_a0;
  if ((*(byte *)((long)puVar4 + 0x12e) >> 1 & 1) == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = 0x11 < *(ushort *)(puVar4 + 0x5e) && *(ushort *)(puVar4 + 0x5e) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(puVar4 + 0x4c,&local_b0,puVar2,0,*(undefined8 *)(puVar4 + 0x5c),bVar10,1);
  *puVar4 = puVar4[0x38];
  puVar4[1] = puVar4[0x39];
  *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar4 + 0x3a);
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar4 + 0x3c);
  puVar4[6] = puVar4[0x3e];
  puVar4[7] = puVar4[0x3f];
  *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar4 + 0x40);
  *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar4 + 0x42);
  *(undefined8 *)((long)puVar4 + 0x47) = *(undefined8 *)((long)puVar4 + 0x127);
  *(undefined8 *)(puVar4 + 0xe) = *(undefined8 *)(puVar4 + 0x46);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(puVar4 + 0x48);
  *(undefined8 *)(puVar4 + 0xc) = *puVar2;
  FUN_038fd1e0(puVar4 + 0x14);
  FUN_038fd2f0(puVar4 + 0x14,puVar4 + 0x4c);
  *(undefined8 *)(puVar4 + 0x24) = *(undefined8 *)(puVar4 + 0x5c);
  puVar4[0x26] = puVar4[0x5e];
  puVar3 = puVar4 + 0x35;
  do {
    cVar7 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar10) {
      *puVar3 = *puVar3 | 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_03a3e874:
  *(undefined1 *)(puVar4 + 0x6e) = 1;
  return puVar4;
}


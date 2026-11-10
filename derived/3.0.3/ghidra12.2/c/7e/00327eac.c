
void FUN_00327eac(undefined8 param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  lVar4 = *(long *)(param_2 + 0xa0);
  uVar7 = (ulong)param_3;
  plVar2 = (long *)(param_2 + 0x1d0);
  if (*(char *)(lVar4 + 0x792) != '\0') {
    plVar2 = *(long **)(param_2 + 0xc0);
  }
  if (*(char *)(lVar4 + 0x82c) == '\0') {
    lVar5 = *(long *)(param_2 + 0x5e0);
    fVar8 = (float)(*(undefined8 **)(param_2 + 0x680))[1];
    uVar9 = **(undefined8 **)(param_2 + 0x680);
    lVar4 = (long)*(int *)(param_2 + 0x688) * 0x10;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1e8) + lVar4);
    uStack_118 = puVar1[1];
    local_120 = *puVar1;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1f8) + lVar4);
    uStack_128 = puVar1[1];
    local_130 = *puVar1;
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x1f0) + lVar4);
    uStack_138 = puVar1[1];
    local_140 = *puVar1;
    lVar4 = *(long *)(lVar5 + 0xb0) + (long)*(int *)(param_2 + 0x688) * 0x20;
    uVar16 = *(undefined4 *)(lVar4 + 0xc);
    puVar1 = (undefined8 *)(*plVar2 + (long)(int)param_3 * 0x10);
    fVar15 = (*(float *)(lVar5 + 0x44) - *(float *)(lVar4 + 8)) - *(float *)(lVar5 + 0x48);
    uVar14 = (*(undefined8 **)(param_2 + 0x678))[1];
    uVar13 = **(undefined8 **)(param_2 + 0x678);
    *puVar1 = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)*puVar1 >> 0x20),
                       (float)uVar13 + (float)*puVar1);
    *(float *)(puVar1 + 1) = (float)uVar14 + *(float *)(puVar1 + 1);
    lVar4 = *(long *)(param_2 + 0xa0);
    cVar3 = *(char *)(lVar4 + 0x820);
  }
  else {
    local_120 = *(undefined8 *)(param_2 + 0x620);
    uStack_118 = *(undefined8 *)(param_2 + 0x628);
    fVar8 = (float)*(undefined8 *)(param_2 + 0x668);
    uVar9 = *(undefined8 *)(param_2 + 0x660);
    local_130 = *(undefined8 *)(param_2 + 0x630);
    uStack_128 = *(undefined8 *)(param_2 + 0x638);
    local_140 = *(undefined8 *)(param_2 + 0x640);
    uStack_138 = *(undefined8 *)(param_2 + 0x648);
    fVar15 = *(float *)(param_2 + 0x5fc);
    uVar16 = *(undefined4 *)(param_2 + 0x5f4);
    cVar3 = *(char *)(lVar4 + 0x820);
  }
  if (cVar3 != '\0') {
    puVar1 = (undefined8 *)(plVar2[1] + (long)(int)param_3 * 0x10);
    fVar12 = *(float *)(lVar4 + 0x830);
    *puVar1 = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar12 + (float)((ulong)*puVar1 >> 0x20),
                       (float)uVar9 * fVar12 + (float)*puVar1);
    *(float *)(puVar1 + 1) = fVar8 * fVar12 + *(float *)(puVar1 + 1);
    lVar4 = *(long *)(param_2 + 0xa0);
  }
  if (*(char *)(lVar4 + 0x821) != '\0') {
    FUN_0032e7f8(uVar16,fVar15,param_1,&local_a0,*(undefined8 *)(*(long *)(param_2 + 0x5e0) + 0x240)
                 ,&local_120,&local_140);
    uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
    fVar8 = *(float *)(*(long *)(param_2 + 0xa0) + 0x834);
    fVar12 = (float)local_a0 * fVar8;
    fVar10 = (float)((ulong)local_a0 >> 0x20) * fVar8;
    local_a0 = CONCAT44(fVar10,fVar12);
    fVar11 = (float)uStack_98 * fVar8;
    uStack_98 = CONCAT44((float)((ulong)uStack_98 >> 0x20) * fVar8,fVar11);
    *(float *)(plVar2[3] + uVar6) = fVar12;
    *(float *)(plVar2[3] + uVar6 + 4) = fVar10;
    *(float *)(plVar2[3] + uVar6 + 8) = fVar11;
    lVar4 = *(long *)(param_2 + 0xa0);
  }
  if (*(char *)(lVar4 + 0x822) != '\0') {
    FUN_0032fcc8(fVar15,param_1,&local_b0,*(undefined8 *)(*(long *)(param_2 + 0x5e0) + 0x240),
                 &local_130,&local_140);
    uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
    *(undefined4 *)(plVar2[5] + uVar6) = local_b0;
    *(undefined4 *)(plVar2[5] + uVar6 + 4) = local_ac;
    *(undefined4 *)(plVar2[5] + uVar6 + 8) = local_a8;
  }
  if ((plVar2[6] != 0) &&
     ((*(char *)(*(long *)(param_2 + 0xa0) + 0x824) != '\0' ||
      (*(char *)(*(long *)(param_2 + 0xa0) + 0x826) != '\0')))) {
    lVar4 = *(long *)(param_2 + 0x5e0);
    uStack_148 = (ulong)*(uint *)(lVar4 + 0x6bc);
    local_150 = *(undefined8 *)(lVar4 + 0x6b4);
    FUN_0032ec40(*(undefined4 *)(lVar4 + 0x6e4),uVar16,fVar15,param_1,&local_80,
                 *(undefined8 *)(lVar4 + 0x240),&local_140,lVar4 + 0x4b0,&local_150);
    lVar4 = *(long *)(param_2 + 0xa0);
    if (*(char *)(lVar4 + 0x824) != '\0') {
      uVar6 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
      *(undefined4 *)(plVar2[6] + uVar6) = local_80;
      *(undefined4 *)(plVar2[6] + uVar6 + 4) = local_7c;
      *(undefined4 *)(plVar2[6] + uVar6 + 8) = local_78;
      lVar4 = *(long *)(param_2 + 0xa0);
    }
    if (*(char *)(lVar4 + 0x826) != '\0') {
      *(undefined4 *)(plVar2[6] + (long)(int)param_3 * 0x10 + 0xc) = local_74;
    }
  }
  if ((plVar2[7] != 0) &&
     ((*(char *)(*(long *)(param_2 + 0xa0) + 0x825) != '\0' ||
      (*(char *)(*(long *)(param_2 + 0xa0) + 0x827) != '\0')))) {
    lVar4 = *(long *)(param_2 + 0x5e0);
    uStack_148 = (ulong)*(uint *)(lVar4 + 0x6bc);
    local_150 = *(undefined8 *)(lVar4 + 0x6b4);
    FUN_0032f484(*(undefined4 *)(lVar4 + 0x6e4),uVar16,fVar15,param_1,&local_70,
                 *(undefined8 *)(lVar4 + 0x240),&local_140,lVar4 + 0x4c0,&local_150);
    lVar4 = *(long *)(param_2 + 0xa0);
    if (*(char *)(lVar4 + 0x825) != '\0') {
      uVar7 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
      *(undefined4 *)(plVar2[7] + uVar7) = local_70;
      *(undefined4 *)(plVar2[7] + uVar7 + 4) = local_6c;
      *(undefined4 *)(plVar2[7] + uVar7 + 8) = local_68;
      lVar4 = *(long *)(param_2 + 0xa0);
    }
    if (*(char *)(lVar4 + 0x827) != '\0') {
      *(undefined4 *)(plVar2[7] + (long)(int)param_3 * 0x10 + 0xc) = local_64;
    }
  }
  return;
}


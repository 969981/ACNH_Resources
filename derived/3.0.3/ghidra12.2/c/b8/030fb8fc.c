
/* WARNING: Removing unreachable block (ram,0x030fb9ac) */
/* WARNING: Removing unreachable block (ram,0x030fb9d4) */

void FUN_030fb8fc(long param_1,float *param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_1 + 0x1bcc) - 3U < 2) {
    fVar6 = *param_2;
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    puVar3 = &DAT_04183db4 + (ulong)*(uint *)(param_1 + 0x1bcc) * 6;
    if (4 < *(uint *)(param_1 + 0x1bcc)) {
      puVar3 = &DAT_04183db4;
    }
    if ((float)puVar3[3] <= fVar6) {
      return;
    }
    bVar1 = false;
  }
  else {
    if (*(int *)(param_1 + 0x1bcc) == 0) {
      return;
    }
    fVar6 = *param_2;
    fVar4 = param_2[1];
    fVar5 = param_2[2];
    puVar3 = &DAT_04183db4 + (ulong)*(uint *)(param_1 + 0x1bcc) * 6;
    if (4 < *(uint *)(param_1 + 0x1bcc)) {
      puVar3 = &DAT_04183db4;
    }
    if (fVar6 <= (float)puVar3[3]) {
      return;
    }
    bVar1 = true;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
  if (lVar2 == 0) {
    fVar7 = 0.0;
  }
  else if (bVar1) {
    fVar7 = (float)*(int *)(lVar2 + 0x30) * 5.0 + 5.0;
  }
  else {
    fVar7 = (float)*(int *)(lVar2 + 0x20) * 5.0;
  }
  puVar3 = &DAT_04183db4 + (ulong)*(uint *)(param_1 + 0x1bcc) * 6;
  if (4 < *(uint *)(param_1 + 0x1bcc)) {
    puVar3 = &DAT_04183db4;
  }
  fVar8 = (float)puVar3[3];
  fVar9 = -*(float *)(param_1 + 0x1bd0);
  if (!bVar1) {
    fVar9 = *(float *)(param_1 + 0x1bd0);
  }
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  *param_2 = fVar8 + (fVar6 - fVar8) * (((fVar7 - fVar8) + fVar9) / (fVar7 - fVar8));
  return;
}


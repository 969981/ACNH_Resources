
uint FUN_0373b65c(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_78 [3];
  float afStack_6c [3];
  undefined4 local_24;
  
  lVar6 = param_1[1];
  if ((((*(int *)(param_2 + 0x10) < *(int *)(lVar6 + 0x10)) ||
       (*(int *)(lVar6 + 0x20) < *(int *)(param_2 + 0x20))) ||
      (*(int *)(param_2 + 0x14) < *(int *)(lVar6 + 0x14))) ||
     (*(int *)(lVar6 + 0x24) < *(int *)(param_2 + 0x24))) goto switchD_0373b818_default;
  uVar8 = *param_1;
  afStack_6c[1] = 0.0;
  local_78[1] = 0.0;
  lVar6 = param_1[2];
  puVar1 = (undefined4 *)param_1[3];
  iVar2 = FUN_01ae98d0(uVar8);
  fVar11 = ((float)*(int *)(lVar6 + 0x14) * 5.0 + (float)*(int *)(lVar6 + 0x24) * 5.0 + 5.0) * 0.5;
  fVar12 = ((float)*(int *)(param_2 + 0x14) * 5.0 + (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0) *
           0.5;
  fVar9 = ((float)*(int *)(lVar6 + 0x10) * 5.0 + (float)*(int *)(lVar6 + 0x20) * 5.0 + 5.0) * 0.5;
  fVar10 = ((float)*(int *)(param_2 + 0x10) * 5.0 + (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0) *
           0.5;
  local_78[0] = fVar10;
  local_78[2] = fVar12;
  afStack_6c[0] = fVar9;
  afStack_6c[2] = fVar11;
  local_24 = FUN_01ae98d0(uVar8);
  uVar5 = FUN_021fa5f0(puVar1,afStack_6c,&local_24,local_78);
  if ((uVar5 & 1) == 0) goto switchD_0373b818_default;
  iVar3 = FUN_006f0400(fVar10 - fVar9,fVar12 - fVar11);
  uVar7 = (uint)(long)((float)iVar2 * 90.0 * 11930465.0);
  uVar4 = (uint)(long)((float)(iVar3 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
  switch(*puVar1) {
  case 0:
  case 3:
  case 4:
    goto switchD_0373b818_caseD_0;
  case 1:
  case 5:
  case 6:
    goto joined_r0x0373b86c;
  case 2:
    uVar4 = uVar4 ^ 0x80000000;
joined_r0x0373b86c:
    if (uVar4 == uVar7) {
switchD_0373b818_caseD_0:
      uVar4 = FUN_0373b140(param_2);
      goto LAB_0373b840;
    }
    break;
  case 7:
    if ((uVar4 ^ 0x80000000) != uVar7) goto switchD_0373b818_caseD_0;
  }
switchD_0373b818_default:
  uVar4 = 0;
LAB_0373b840:
  return uVar4 & 1;
}


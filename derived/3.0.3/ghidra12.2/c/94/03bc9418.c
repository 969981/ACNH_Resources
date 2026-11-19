
/* WARNING: Removing unreachable block (ram,0x03bc96b8) */
/* WARNING: Removing unreachable block (ram,0x03bc964c) */
/* WARNING: Removing unreachable block (ram,0x03bc95f8) */
/* WARNING: Removing unreachable block (ram,0x03bc9578) */
/* WARNING: Removing unreachable block (ram,0x03bc9510) */
/* WARNING: Removing unreachable block (ram,0x03bc94b8) */
/* WARNING: Removing unreachable block (ram,0x03bc94d8) */
/* WARNING: Removing unreachable block (ram,0x03bc9558) */
/* WARNING: Removing unreachable block (ram,0x03bc95b0) */
/* WARNING: Removing unreachable block (ram,0x03bc9618) */
/* WARNING: Removing unreachable block (ram,0x03bc9694) */
/* WARNING: Removing unreachable block (ram,0x03bc96e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03bc9418(float param_1,undefined1 *param_2,long *param_3,int param_4)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_94;
  int iStack_90;
  int local_8c;
  uint local_88;
  uint uStack_84;
  undefined8 local_80;
  float local_78 [6];
  
  iVar3 = _DAT_04102370;
  uVar5 = (uint)(param_1 * 2.1474836e+09);
  local_78[4] = 0.0;
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 0.0;
  local_80 = 0xffffffff;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  local_88 = param_4 - uVar5;
  uStack_84 = (param_4 + uVar5) - 1;
  if (uStack_84 < local_88) {
    local_80 = CONCAT44(0xffffffff,local_88);
    local_88 = 0;
  }
  fVar9 = (float)uVar5 + (float)uVar5;
  local_94 = 0;
  local_8c = _DAT_041022b0;
  uVar1 = *(undefined4 *)((long)param_3 + 0x2c);
  (**(code **)(*param_3 + 0x18))(param_3);
  iStack_90 = (int)param_3[6] + -1;
  local_94 = uVar1;
  FUN_03bc97c4(fVar9,local_78 + iVar3,local_78 + local_8c,&local_94,&local_88,1);
  iVar3 = DAT_04102374;
  local_94 = 1;
  local_8c = DAT_041022b4;
  lVar2 = param_3[6];
  (**(code **)(*param_3 + 0x18))(param_3);
  iStack_90 = *(int *)((long)param_3 + 0x34) + -1;
  local_94 = (int)lVar2;
  FUN_03bc97c4(fVar9,local_78 + iVar3,local_78 + local_8c,&local_94,&local_88,1);
  iVar3 = DAT_04102378;
  local_94 = 2;
  local_8c = DAT_041022b8;
  uVar1 = *(undefined4 *)((long)param_3 + 0x34);
  (**(code **)(*param_3 + 0x18))(param_3);
  iStack_90 = (int)param_3[7] + -1;
  local_94 = uVar1;
  FUN_03bc97c4(fVar9,local_78 + iVar3,local_78 + local_8c,&local_94,&local_88,1);
  iVar3 = DAT_0410237c;
  local_94 = 3;
  local_8c = DAT_041022bc;
  lVar2 = param_3[7];
  uVar4 = (**(code **)(*param_3 + 0x18))(param_3);
  if ((uVar4 & 1) == 0) {
    iStack_90 = -1;
  }
  else {
    iStack_90 = *(int *)((long)param_3 + 0x3c) + -1;
  }
  local_94 = (int)lVar2;
  FUN_03bc97c4(fVar9,local_78 + iVar3,local_78 + local_8c,&local_94,&local_88,1);
  fVar9 = SQRT(local_78[0]);
  if (NAN(fVar9)) {
    fVar9 = sqrtf(local_78[0]);
  }
  fVar6 = SQRT(local_78[3]);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(local_78[3]);
  }
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 2) = 0;
  fVar9 = fVar9 * 255.0;
  fVar6 = fVar6 * 255.0;
  fVar7 = 255.0;
  if (fVar9 <= 255.0) {
    fVar7 = fVar9;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar7;
  }
  fVar9 = 255.0;
  if (fVar6 <= 255.0) {
    fVar9 = fVar6;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar6) {
    fVar7 = fVar9;
  }
  param_2[1] = (char)(int)fVar8;
  *param_2 = (char)(int)fVar7;
  return;
}


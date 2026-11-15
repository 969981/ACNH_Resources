
void FUN_01ff4090(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 local_1e8 [25];
  undefined4 local_184;
  undefined1 auStack_10c [204];
  
  uVar4 = FUN_01f93dc8();
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xaf4c) != 0xe) {
    return;
  }
  piVar1 = (int *)(param_1 + 0xcaa0);
  piVar7 = (int *)(param_1 + 0xaf80);
  if (0 < *piVar7) {
    lVar5 = 0;
    do {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0xaf88) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      puVar6[0xf] = &PTR_FUN_0498d548;
      *puVar6 = *(undefined8 *)(param_1 + 0xaf90);
      *(undefined8 **)(param_1 + 0xaf90) = puVar6;
    } while (lVar5 < *(int *)(param_1 + 0xaf80));
  }
  *piVar7 = 0;
  if (0 < *piVar1) {
    lVar5 = 0;
    do {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0xcaa8) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      puVar6[0xf] = &PTR_FUN_0498d548;
      *puVar6 = *(undefined8 *)(param_1 + 0xcab0);
      *(undefined8 **)(param_1 + 0xcab0) = puVar6;
    } while (lVar5 < *piVar1);
  }
  *piVar1 = 0;
  *(undefined8 *)(param_1 + 0xe5c0) = 0;
  *(undefined8 *)(param_1 + 0xe5c8) = 0;
  *(undefined8 *)(param_1 + 0xe5d0) = 0;
  FUN_01e63f1c(local_1e8);
  uVar3 = *(int *)(param_1 + 0xaf48) - 6;
  if (uVar3 < 10) {
    piVar1 = &DAT_0545c3c0;
    if (uVar3 != 9) {
      piVar1 = &DAT_0545c3c0 + (ulong)uVar3 * 2;
    }
    iVar2 = *piVar1;
    *(int *)(param_1 + 0xe744) = iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xe744);
  }
  if (iVar2 < 0) {
    local_1e8[0] = 1;
  }
  else {
    local_1e8[0] = 0x3f;
    FUN_01ff4740(param_1,auStack_10c);
  }
  local_184 = 1;
  if (*(int *)(param_1 + 0xaf80) < *(int *)(param_1 + 0xaf84)) {
    FUN_021920b0(piVar7,local_1e8);
  }
  FUN_02192850(param_1 + 0xaf70,0,0);
  return;
}


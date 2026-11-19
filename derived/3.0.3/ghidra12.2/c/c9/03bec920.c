
void FUN_03bec920(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int *piVar8;
  ulong uVar9;
  long local_70 [2];
  int local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2 + 0x48;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  param_1[0xf] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if (*(int *)(param_2 + 0x3c) == 0) {
    uVar7 = 0;
  }
  else {
    param_1[0x10] = lVar1;
    uVar7 = 0;
    if (*(uint *)(param_2 + 0x3c) != 0) {
      param_1[0x11] = lVar1 + (ulong)*(uint *)(param_2 + 0x3c) * 4;
      uVar7 = *(undefined4 *)(param_2 + 0x3c);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = uVar7;
  iVar4 = *(int *)(param_2 + 0x3c) * 4;
  local_70[1] = 0;
  iStack_5c = *(int *)(param_3 + 0x3c) + iVar4 + (int)lVar1 + iVar4;
  local_58 = *(undefined4 *)(param_3 + 4);
  uStack_54 = *(undefined4 *)(param_3 + 8);
  local_70[0] = param_2;
  local_60 = (int)param_2;
  FUN_03becad0(param_1,local_70);
  if ((*(byte *)(param_4 + 0x438) & 1) != 0) {
    FUN_03becd20(param_2,param_1,local_70,param_3,*(undefined8 *)(param_4 + 0xc0),0,0);
  }
  FUN_03bee770(param_1);
  puVar6 = PTR_DAT_04bb38c8;
  puVar5 = PTR_DAT_04bb38c0;
  if (*(int *)(param_1 + 0x12) != 0) {
    uVar9 = 0;
    do {
      uVar2 = *(int *)(param_1[0x11] + uVar9 * 4) + (int)param_2;
      *(uint *)(param_1[0x11] + uVar9 * 4) = uVar2;
      piVar8 = (int *)(*(ulong *)puVar6 | (ulong)uVar2);
      piVar3 = piVar8 + 0x40000000;
      if (*(ulong *)puVar5 <= (ulong)uVar2) {
        piVar3 = piVar8;
      }
      if (*piVar3 == 0) {
        FUN_03bee8d0(piVar3,param_1,param_3);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x12));
  }
  if (*(char *)(param_4 + 0x60) != '\0') {
    FUN_03beede0(param_1,param_3,param_4);
  }
  *(undefined1 *)((long)param_1 + 0x94) = 1;
  return;
}


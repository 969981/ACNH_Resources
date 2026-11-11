
void FUN_0052bf60(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  int local_48;
  int local_44;
  
  *param_1 = &PTR_LAB_048d59f0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  iVar4 = *(int *)(param_2 + 0x20);
  plVar5 = *(long **)(param_2 + 0x18);
  uVar3 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_44 = iVar4;
  if (iVar4 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    plVar1 = (long *)FUN_00421ed0(uVar3,8,&local_44);
    param_1[3] = plVar1;
    *(int *)(param_1 + 4) = iVar4;
    *(int *)((long)param_1 + 0x24) = local_44;
    do {
      lVar2 = *plVar5;
      *plVar1 = lVar2;
      if (lVar2 != 0) {
        FUN_004435a0();
      }
      iVar4 = iVar4 + -1;
      plVar1 = plVar1 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar4 != 0);
  }
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  iVar4 = *(int *)(param_2 + 0x30);
  plVar5 = *(long **)(param_2 + 0x28);
  if (iVar4 < 1) {
    param_1[5] = 0;
    param_1[6] = 0x8000000000000000;
  }
  else {
    local_48 = iVar4;
    plVar1 = (long *)FUN_00421ed0(uVar3,8,&local_48);
    param_1[5] = plVar1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((long)param_1 + 0x34) = local_48;
    do {
      lVar2 = *plVar5;
      *plVar1 = lVar2;
      if (lVar2 != 0) {
        FUN_004435a0();
      }
      iVar4 = iVar4 + -1;
      plVar1 = plVar1 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar4 != 0);
  }
  return;
}


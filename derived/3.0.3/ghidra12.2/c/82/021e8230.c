
void FUN_021e8230(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_04bb2010;
  local_48 = 0;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_60 = PTR_DAT_04bb2010 + 0x10;
  local_58 = 0;
  puStack_50 = puStack_60;
  FUN_0277f02c(param_2,&local_68);
  iVar2 = (int)local_48 - (int)local_58;
  iVar1 = iVar2 + 2;
  if (-1 < iVar2 + 1) {
    iVar1 = iVar2 + 1;
  }
  iVar5 = local_48._4_4_ - local_58._4_4_;
  iVar2 = iVar5 + 2;
  if (-1 < iVar5 + 1) {
    iVar2 = iVar5 + 1;
  }
  iVar2 = iVar2 >> 1;
  if (0 < *param_1) {
    lVar8 = 0;
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar8 * 8);
      (**(code **)*puVar7)(puVar7);
      lVar8 = lVar8 + 1;
      *puVar7 = *(undefined8 *)(param_1 + 4);
      *(undefined8 **)(param_1 + 4) = puVar7;
    } while (lVar8 < *param_1);
  }
  iVar5 = param_1[1];
  iVar1 = iVar1 >> 1;
  *param_1 = 0;
  if (iVar5 < 1) {
    iVar6 = 0;
  }
  else {
    plVar4 = *(long **)(param_1 + 4);
    if (plVar4 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar4;
    }
    *(uint *)(plVar4 + 1) = iVar1 << 1 | 1;
    *(int *)((long)plVar4 + 0xc) = iVar2;
    *plVar4 = (long)(puVar3 + 0x10);
    iVar6 = *param_1;
    iVar5 = param_1[1];
    if (iVar6 < iVar5) {
      *(long **)(*(long *)(param_1 + 2) + (long)iVar6 * 8) = plVar4;
      iVar5 = param_1[1];
      iVar6 = *param_1 + 1;
      *param_1 = iVar6;
    }
  }
  if (iVar6 < iVar5) {
    plVar4 = *(long **)(param_1 + 4);
    if (plVar4 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar4;
    }
    *(undefined4 *)(plVar4 + 1) = 0xffffffff;
    *(int *)((long)plVar4 + 0xc) = iVar2;
    *plVar4 = (long)(puVar3 + 0x10);
    iVar6 = *param_1;
    iVar5 = param_1[1];
    if (iVar6 < iVar5) {
      *(long **)(*(long *)(param_1 + 2) + (long)iVar6 * 8) = plVar4;
      iVar5 = param_1[1];
      iVar6 = *param_1 + 1;
      *param_1 = iVar6;
      if (iVar6 < iVar5) {
LAB_021e83d4:
        plVar4 = *(long **)(param_1 + 4);
        if (plVar4 != (long *)0x0) {
          *(long *)(param_1 + 4) = *plVar4;
        }
        *(int *)(plVar4 + 1) = iVar1;
        *(uint *)((long)plVar4 + 0xc) = iVar2 << 1 | 1;
        *plVar4 = (long)(puVar3 + 0x10);
        iVar2 = *param_1;
        if (iVar2 < param_1[1]) {
          *(long **)(*(long *)(param_1 + 2) + (long)iVar2 * 8) = plVar4;
          iVar2 = *param_1;
          *param_1 = iVar2 + 1;
          if (param_1[1] <= iVar2 + 1) {
            return;
          }
        }
        else if (param_1[1] <= iVar2) {
          return;
        }
        goto LAB_021e8434;
      }
    }
    else if (iVar6 < iVar5) goto LAB_021e83d4;
  }
  else if (iVar6 < iVar5) goto LAB_021e83d4;
  if (iVar5 <= iVar6) {
    return;
  }
LAB_021e8434:
  plVar4 = *(long **)(param_1 + 4);
  if (plVar4 != (long *)0x0) {
    *(long *)(param_1 + 4) = *plVar4;
  }
  *(int *)(plVar4 + 1) = iVar1;
  *(undefined4 *)((long)plVar4 + 0xc) = 0xffffffff;
  *plVar4 = (long)(puVar3 + 0x10);
  if (*param_1 < param_1[1]) {
    *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar4;
    *param_1 = *param_1 + 1;
  }
  return;
}


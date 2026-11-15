
/* WARNING: Removing unreachable block (ram,0x021fbc6c) */
/* WARNING: Removing unreachable block (ram,0x021fbec8) */
/* WARNING: Removing unreachable block (ram,0x021fbc00) */
/* WARNING: Removing unreachable block (ram,0x021fbe54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_021fbb40(float param_1,int *param_2,int *param_3,int *param_4,int *param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  int local_50;
  long *local_48;
  int *local_40;
  int local_28 [2];
  int local_20 [2];
  long local_18;
  int *local_10;
  
  iVar2 = *(int *)(param_6 + 0x10);
  iVar5 = *(int *)(param_6 + 0x14);
  local_48 = (long *)0x0;
  local_10 = local_28;
  iVar3 = *(int *)(param_6 + 0x20);
  iVar6 = *(int *)(param_6 + 0x24);
  local_50 = 0;
  if (&local_18 != (long *)0x0) {
    uVar8 = iVar3 - iVar2;
    uVar1 = -uVar8;
    if (-1 < (int)uVar8) {
      uVar1 = uVar8;
    }
    if (uVar1 < 5) {
      if (iVar3 != iVar2 + 1) {
        local_50 = 1;
        iVar9 = local_50;
        local_50 = 1;
        iVar4 = local_50;
        local_50 = iVar9;
        goto LAB_021fbc98;
      }
      local_50 = 0;
    }
    else {
      local_40 = local_10;
      if (local_10 != (int *)0x0) {
        local_40 = local_20;
      }
      local_50 = 2;
      iVar4 = local_50;
      *local_40 = iVar3;
      local_50 = 2;
      local_10 = local_40;
      iVar4 = local_50;
      local_50 = iVar4;
LAB_021fbc98:
      (&local_18)[iVar4] = (long)local_10;
    }
    local_50 = local_50 + 1;
    local_48 = &local_18;
  }
  if (local_50 != 0) {
    lVar11 = (long)local_50 << 3;
    do {
      uVar7 = *(undefined4 *)*local_48;
      if (*param_2 < param_2[1]) {
        puVar10 = *(undefined8 **)(param_2 + 4);
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 *)(param_2 + 4) = *puVar10;
        }
        *(undefined4 *)(puVar10 + 1) = uVar7;
        *(int *)((long)puVar10 + 0xc) = (int)((float)(iVar6 + 2) + param_1);
        *puVar10 = &DAT_048f9750;
        if (*param_2 < param_2[1]) {
          *(undefined8 **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = puVar10;
          *param_2 = *param_2 + 1;
        }
      }
      if (*param_4 < param_4[1]) {
        puVar10 = *(undefined8 **)(param_4 + 4);
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 *)(param_4 + 4) = *puVar10;
        }
        *(undefined4 *)(puVar10 + 1) = uVar7;
        *(int *)((long)puVar10 + 0xc) = (int)((float)(iVar5 + -1) - param_1);
        *puVar10 = &DAT_048f9750;
        if (*param_4 < param_4[1]) {
          *(undefined8 **)(*(long *)(param_4 + 2) + (long)*param_4 * 8) = puVar10;
          *param_4 = *param_4 + 1;
        }
      }
      local_48 = local_48 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  local_10 = local_28;
  local_48 = (long *)0x0;
  if (&local_18 == (long *)0x0) {
    local_50 = 0;
    goto LAB_021fbf0c;
  }
  uVar8 = iVar6 - iVar5;
  uVar1 = -uVar8;
  if (-1 < (int)uVar8) {
    uVar1 = uVar8;
  }
  if (uVar1 < 5) {
    if (iVar6 != iVar5 + 1) {
      local_50 = 1;
      iVar6 = local_50;
      local_50 = 1;
      iVar5 = local_50;
      local_50 = iVar6;
      goto LAB_021fbef8;
    }
    local_50 = 0;
  }
  else {
    local_40 = local_10;
    if (local_10 != (int *)0x0) {
      local_40 = local_20;
    }
    local_50 = 2;
    iVar5 = local_50;
    *local_40 = iVar6;
    local_50 = 2;
    local_10 = local_40;
    iVar5 = local_50;
    local_50 = iVar5;
LAB_021fbef8:
    (&local_18)[iVar5] = (long)local_10;
  }
  local_50 = local_50 + 1;
  local_48 = &local_18;
LAB_021fbf0c:
  if (local_50 != 0) {
    lVar11 = (long)local_50 << 3;
    do {
      uVar7 = *(undefined4 *)*local_48;
      if (*param_3 < param_3[1]) {
        puVar10 = *(undefined8 **)(param_3 + 4);
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 *)(param_3 + 4) = *puVar10;
        }
        *(int *)(puVar10 + 1) = (int)((float)(iVar3 + 2) + param_1);
        *(undefined4 *)((long)puVar10 + 0xc) = uVar7;
        *puVar10 = &DAT_048f9750;
        if (*param_3 < param_3[1]) {
          *(undefined8 **)(*(long *)(param_3 + 2) + (long)*param_3 * 8) = puVar10;
          *param_3 = *param_3 + 1;
        }
      }
      if (*param_5 < param_5[1]) {
        puVar10 = *(undefined8 **)(param_5 + 4);
        if (puVar10 != (undefined8 *)0x0) {
          *(undefined8 *)(param_5 + 4) = *puVar10;
        }
        *(int *)(puVar10 + 1) = (int)((float)(iVar2 + -1) - param_1);
        *(undefined4 *)((long)puVar10 + 0xc) = uVar7;
        *puVar10 = &DAT_048f9750;
        if (*param_5 < param_5[1]) {
          *(undefined8 **)(*(long *)(param_5 + 2) + (long)*param_5 * 8) = puVar10;
          *param_5 = *param_5 + 1;
        }
      }
      local_48 = local_48 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  return;
}


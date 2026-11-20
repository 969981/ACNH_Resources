
/* WARNING: Removing unreachable block (ram,0x03d4c844) */
/* WARNING: Removing unreachable block (ram,0x03d4c7e4) */
/* WARNING: Removing unreachable block (ram,0x03d4c964) */
/* WARNING: Removing unreachable block (ram,0x03d4c9d8) */
/* WARNING: Removing unreachable block (ram,0x03d4c890) */
/* WARNING: Removing unreachable block (ram,0x03d4c908) */

void FUN_03d4c754(long param_1,long param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
                 byte param_6)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long local_88;
  long *plStack_80;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  int local_6c;
  byte local_68;
  long local_60;
  undefined4 local_54;
  
  iVar2 = *(int *)(param_1 + 0x24);
  local_88 = param_1;
  local_78 = param_4;
  local_60 = param_2;
  if (0 < iVar2) {
    *(int *)(param_1 + 0x24) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      local_54 = 2;
      local_68 = param_6 & 1;
      plStack_80 = (long *)0x0;
      if (param_2 != 0) {
        plStack_80 = &local_60;
      }
      local_6c = *(int *)(param_1 + 0x28) + 1;
      *(int *)(param_1 + 0x28) = local_6c;
      local_74 = *param_5;
      uStack_70 = param_5[1];
      (*(code *)**(undefined8 **)(param_1 + 0x88))((undefined8 *)(param_1 + 0x88),2,&local_88);
      *(undefined4 *)(param_1 + 0x24) = param_3[1];
    }
    local_68 = param_6 & 1;
    local_74 = *param_5;
    uStack_70 = param_5[1];
    local_54 = 3;
    plStack_80 = (long *)0x0;
    if (param_2 != 0) {
      plStack_80 = &local_60;
    }
    local_6c = 0;
    local_88 = param_1;
    local_78 = param_4;
    local_60 = param_2;
    (*(code *)**(undefined8 **)(param_1 + 0xa8))((undefined8 *)(param_1 + 0xa8),3,&local_88);
    return;
  }
  if (iVar2 == -3) {
    local_74 = *param_5;
    uStack_70 = param_5[1];
    local_54 = 1;
    plStack_80 = (long *)0x0;
    if (param_2 != 0) {
      plStack_80 = &local_60;
    }
    local_68 = param_6 & 1;
    local_6c = 0;
    (*(code *)**(undefined8 **)(param_1 + 0x68))((undefined8 *)(param_1 + 0x68),1,&local_88);
    *(undefined4 *)(param_1 + 0x24) = 0xfffffffe;
    if (param_4 != 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar5 = *(uint *)(param_1 + 0x16c);
  }
  else {
    if (iVar2 != -1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    param_6 = param_6 & 1;
    local_54 = 0;
    local_74 = *param_5;
    uStack_70 = param_5[1];
    local_6c = 0;
    plStack_80 = (long *)0x0;
    if (param_2 != 0) {
      plStack_80 = &local_60;
    }
    plVar1 = (long *)0x0;
    if (param_2 != 0) {
      plVar1 = &local_60;
    }
    local_68 = param_6;
    (*(code *)**(undefined8 **)(param_1 + 0x48))((undefined8 *)(param_1 + 0x48),0,&local_88);
    local_74 = *param_5;
    uStack_70 = param_5[1];
    local_54 = 2;
    local_6c = *(undefined4 *)(param_1 + 0x28);
    local_88 = param_1;
    plStack_80 = plVar1;
    local_78 = param_4;
    local_68 = param_6;
    local_60 = param_2;
    (*(code *)**(undefined8 **)(param_1 + 0x88))((undefined8 *)(param_1 + 0x88),2,&local_88);
    local_6c = 0;
    *(undefined4 *)(param_1 + 0x24) = *param_3;
    local_54 = 3;
    local_74 = *param_5;
    uStack_70 = param_5[1];
    local_88 = param_1;
    plStack_80 = plVar1;
    local_78 = param_4;
    local_68 = param_6;
    local_60 = param_2;
    (*(code *)**(undefined8 **)(param_1 + 0xa8))((undefined8 *)(param_1 + 0xa8),3,&local_88);
    if (param_4 != 1) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x20);
    uVar5 = *(uint *)(param_1 + 0x170);
  }
  if (*(uint *)(param_2 + 8) <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(param_2 + 0x10) + (long)(int)uVar3 * 0x48;
  *(uint *)(lVar4 + 0x3c) = *(uint *)(lVar4 + 0x3c) | uVar5;
  return;
}


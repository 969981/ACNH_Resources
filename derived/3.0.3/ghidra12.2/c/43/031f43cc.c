
void FUN_031f43cc(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  byte local_4c [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x3e0) <= (int)param_2) {
    return;
  }
  local_4c[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar4 == 0) {
    return;
  }
  lVar11 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x194d8);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar11 + 0x28) == 0) goto LAB_031f44b8;
      plVar6 = *(long **)(*(long *)(lVar11 + 0x28) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar11 + 8);
      uStack_40 = *(undefined8 *)(lVar11 + 0x10);
      local_38 = 0x3ce60;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_031f44b8:
  puVar1 = (uint *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + 0x38c84);
  if (param_2 < *(uint *)(param_1 + 0x3e0)) {
    puVar9 = *(uint **)(*(long *)(param_1 + 1000) + (ulong)param_2 * 8);
  }
  else {
    puVar9 = (uint *)0x0;
  }
  pbVar8 = &DAT_0523c4c0;
  if (((DAT_0523c4c0 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), pbVar8 = PTR_DAT_04bbde00, iVar3 != 0)) {
    FUN_016cb6ac(&DAT_0523c4b0);
    __cxa_guard_release(&DAT_0523c4c0);
    pbVar8 = PTR_DAT_04bbde00;
  }
  uVar2 = *puVar9;
  if (DAT_0523c4b0 <= uVar2) {
    uVar2 = 0;
  }
  if ((*puVar1 >> (ulong)(*(uint *)(DAT_0523c4b8 + (long)(int)uVar2 * 4) & 0x1f) & 1) == 0) {
    if (param_2 < *(uint *)(param_1 + 0x3e0)) {
      puVar9 = *(uint **)(*(long *)(param_1 + 1000) + (ulong)param_2 * 8);
    }
    else {
      puVar9 = (uint *)0x0;
    }
    puVar10 = &DAT_0523c4b0;
    if (((*pbVar8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), puVar10 = (uint *)PTR_DAT_04bbddf8, iVar3 != 0))
    {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
      puVar10 = (uint *)PTR_DAT_04bbddf8;
    }
    uVar2 = *puVar9;
    if (*puVar10 <= uVar2) {
      uVar2 = 0;
    }
    *puVar1 = *puVar1 | 1 << (ulong)(*(uint *)(*(long *)(puVar10 + 2) + (long)(int)uVar2 * 4) & 0x1f
                                    );
    FUN_031fcd24(param_1,param_2);
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


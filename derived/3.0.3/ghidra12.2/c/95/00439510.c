
long FUN_00439510(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (*(ulong *)(param_1 + 0x10) < param_2) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + 1;
                    /* WARNING: Could not recover jumptable at 0x00439564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))(*(long **)(param_1 + 0x40),param_2,0);
    return lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + 1;
    lVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                      (*(long **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x10),0);
    plVar5 = *(long **)(param_1 + 8);
    iVar1 = (int)plVar5[3];
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar5 = *(long **)(param_1 + 8);
    iVar1 = (int)plVar5[3];
  }
  if (iVar1 != 0) {
    uVar3 = *(uint *)(plVar5 + 1);
    if (uVar3 == (*(uint *)((long)plVar5 + 0xc) & 0x3fffffff)) {
      FUN_00426990(*(undefined8 *)(param_1 + 0x48),plVar5,0x18);
      uVar3 = *(uint *)(plVar5 + 1);
    }
    puVar4 = (undefined8 *)(*plVar5 + (long)(int)uVar3 * 0x18);
    *(uint *)(plVar5 + 1) = uVar3 + 1;
    puVar4[1] = lVar2;
    *puVar4 = *(undefined8 *)(param_1 + 0x18);
    *(int *)(puVar4 + 2) = *(int *)(*(long *)(param_1 + 8) + 0x18) + -1;
    plVar5 = *(long **)(param_1 + 8);
    *(long *)(param_1 + 0x28) = lVar2;
  }
  *(ulong *)(param_1 + 0x18) = lVar2 + param_2;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x10) + lVar2;
  uVar3 = *(uint *)(plVar5 + 3);
  if (uVar3 == (*(uint *)((long)plVar5 + 0x1c) & 0x3fffffff)) {
    FUN_00426990(*(undefined8 *)(param_1 + 0x48),plVar5 + 2,8);
    uVar3 = *(uint *)(plVar5 + 3);
  }
  *(long *)(plVar5[2] + (long)(int)uVar3 * 8) = lVar2;
  *(uint *)(plVar5 + 3) = uVar3 + 1;
  return lVar2;
}


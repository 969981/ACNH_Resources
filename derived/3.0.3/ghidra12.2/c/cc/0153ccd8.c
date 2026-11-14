
void FUN_0153ccd8(long param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  float local_40 [3];
  int iStack_34;
  
  lVar4 = *(long *)(param_1 + 0x290);
  if (lVar4 != 0) {
    iVar2 = *(int *)(lVar4 + 0x2c8);
    iVar3 = *(int *)(lVar4 + 0x2cc);
    FUN_01473944(local_40);
    plVar5 = *(long **)(*(long *)(param_1 + 0x290) + 0x68);
    local_40[1] = 0.0;
    fVar1 = local_40[2];
    if ((*(uint *)(*(long *)(param_1 + 0x290) + 0x2a0) & 0x80000001) != 1) {
      fVar1 = (float)iStack_34;
      iStack_34 = (int)local_40[2];
    }
    local_40[0] = ((float)iVar2 * 5.0 + (float)(iVar2 + iStack_34 + -1) * 5.0 + 5.0) * 0.5;
    local_40[2] = ((float)iVar3 * 5.0 + (float)(iVar3 + (int)fVar1 + -1) * 5.0 + 5.0) * 0.5;
    (**(code **)(*plVar5 + 0x100))(plVar5,local_40);
    lVar4 = *(long *)(param_1 + 0x290);
    if (lVar4 != 0) {
      local_40[0] = (float)(long)((float)*(int *)(lVar4 + 0x2a0) * 90.0 * 11930465.0);
      (**(code **)(**(long **)(lVar4 + 0x68) + 0x160))(*(long **)(lVar4 + 0x68),local_40);
    }
  }
  return;
}


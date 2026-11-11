
void FUN_004947d0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_58 [4];
  long local_48;
  
  local_48 = (long)(int)param_1[1];
  iVar3 = FUN_004a1930(&local_48,local_58);
  uVar1 = (long)*param_2 + (long)iVar3;
  if (param_2[1] < uVar1) {
    FUN_004462a0(param_2);
    iVar2 = (int)param_1[2];
    iVar3 = (int)param_1[1];
    if (iVar3 <= iVar2) goto LAB_004948f0;
  }
  else {
    memcpy((void *)*param_2,local_58,(long)iVar3);
    *param_2 = uVar1;
    iVar2 = (int)param_1[2];
    iVar3 = (int)param_1[1];
    if (iVar3 <= iVar2) goto LAB_004948f0;
  }
  lVar4 = (long)iVar2;
  lVar5 = lVar4 << 3;
  do {
    lVar6 = *param_1;
    local_48 = (long)*(int *)(lVar6 + lVar5);
    iVar3 = FUN_004a1930(&local_48,local_58);
    __dest = (void *)((long)*param_2 + (long)iVar3);
    if ((void *)param_2[1] < __dest) {
      FUN_004462a0(param_2);
      __dest = (void *)*param_2;
    }
    else {
      memcpy((void *)*param_2,local_58,(long)iVar3);
      *param_2 = (ulong)__dest;
    }
    local_58[0] = *(undefined4 *)(lVar6 + lVar5 + 4);
    if (param_2[1] < (long)__dest + 4U) {
      FUN_004462a0(param_2,local_58,4);
    }
    else {
      memcpy(__dest,local_58,4);
      *param_2 = (long)__dest + 4U;
    }
    iVar3 = (int)param_1[1];
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 8;
  } while (lVar4 < iVar3);
LAB_004948f0:
  *(int *)(param_1 + 2) = iVar3;
  return;
}


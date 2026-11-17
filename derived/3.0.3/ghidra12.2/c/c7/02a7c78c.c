
/* WARNING: Removing unreachable block (ram,0x02a7c7d0) */

byte FUN_02a7c78c(long param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  undefined **local_20;
  int local_18;
  int iStack_14;
  
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    return 0;
  }
  bVar1 = false;
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x88);
    bVar1 = false;
    if (lVar4 != 0) {
      bVar1 = *(char *)(lVar4 + 0x48) != '\0';
    }
  }
  if (((*(uint *)(param_1 + 8) >> 1 & 1) != 0) || (bVar1)) {
    local_20 = &PTR_FUN_048f9730;
    fVar5 = (float)*(int *)(param_2 + 8) * 0.5;
    uVar3 = 0;
    if (fVar5 != (float)(int)fVar5) {
      uVar3 = (uint)(fVar5 < 0.0);
    }
    local_18 = (int)fVar5 - uVar3;
    fVar5 = (float)*(int *)(param_2 + 0xc) * 0.5;
    uVar3 = 0;
    if (fVar5 != (float)(int)fVar5) {
      uVar3 = (uint)(fVar5 < 0.0);
    }
    iStack_14 = (int)fVar5 - uVar3;
    bVar2 = FUN_02ad806c(param_1 + 0xb8,3,&local_20);
  }
  else {
    bVar2 = 0;
    if ((*(int *)(param_1 + 0xa0) <= *(int *)(param_2 + 8)) &&
       (*(int *)(param_2 + 8) <= *(int *)(param_1 + 0xb0))) {
      if (*(int *)(param_2 + 0xc) < *(int *)(param_1 + 0xa4)) {
        bVar2 = 0;
      }
      else {
        bVar2 = *(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0xb4);
      }
    }
  }
  return bVar2 & 1;
}


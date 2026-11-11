
void FUN_00687030(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int local_34;
  
  param_1[4] = 0x8000000000000000;
  *param_1 = &PTR_LAB_048f21d0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  iVar3 = *(int *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x18);
  if (iVar3 < 1) {
    param_1[3] = 0;
    param_1[4] = 0x8000000000000000;
  }
  else {
    local_34 = iVar3;
    puVar1 = (undefined8 *)FUN_00421ed0(PTR_DAT_048607b8,0x18,&local_34);
    param_1[3] = puVar1;
    *(int *)(param_1 + 4) = iVar3;
    *(int *)((long)param_1 + 0x24) = local_34;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0x8000000000000000;
      FUN_00687520(puVar1,lVar2);
      iVar3 = iVar3 + -1;
      puVar1 = puVar1 + 3;
      lVar2 = lVar2 + 0x18;
    } while (iVar3 != 0);
  }
  return;
}


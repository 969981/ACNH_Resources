
void FUN_03036f5c(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined **local_40;
  int local_38;
  undefined4 local_34;
  int iStack_30;
  undefined2 local_2c;
  undefined8 local_2a;
  undefined4 local_20;
  undefined8 local_1c;
  byte local_14;
  
  if ((*(long *)(param_1 + 0x218) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x218) + 0x570), lVar3 != 0)) {
    local_20 = 0;
    local_38 = *(int *)(param_1 + 0x220);
    local_2a = 0x101000001;
    local_1c = 0x60000000c;
    local_2c = 0;
    local_40 = &PTR_LAB_04b2b020;
    iVar2 = *(int *)(param_1 + 0x664c);
    if (iVar2 < local_38) {
      local_34 = 0xffffffff;
      iStack_30 = -1;
    }
    else {
      local_34 = *(undefined4 *)(param_1 + 0x6658);
      iVar1 = iVar2;
      if (local_38 + -1 <= iVar2) {
        iVar1 = local_38 + -1;
      }
      iStack_30 = 0;
      if (-1 < iVar2) {
        iStack_30 = iVar1;
      }
    }
    local_14 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_14) {
      local_14 = 0xff;
    }
    FUN_03864290(lVar3,&local_40);
  }
  return;
}


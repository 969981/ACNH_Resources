
void FUN_00687670(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    lVar4 = *(long *)(param_2 + 8);
    lVar3 = 0;
    do {
      iVar2 = FUN_0043a240(*(ulong *)(lVar4 + lVar3) & 0xfffffffffffffffe,param_3);
      if (iVar2 == 0) {
        local_50 = 0;
        local_48 = 0;
        local_58 = 0;
        lVar3 = *(long *)(*(long *)(param_2 + 8) + lVar3 + 8);
        *param_1 = lVar3;
        if (lVar3 == 0) {
          return;
        }
        FUN_004435a0();
        return;
      }
      lVar3 = lVar3 + 0x10;
    } while ((long)iVar1 * 0x10 != lVar3);
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  FUN_00484630(param_1,&local_58);
  if ((local_48 & 1) != 0) {
    FUN_0043dd50(local_48 & 0xfffffffffffffffe);
  }
  return;
}


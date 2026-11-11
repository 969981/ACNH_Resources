
void FUN_004aed30(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long local_88;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  ulong local_48;
  
  local_70 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = (ulong)param_4;
  local_88 = *param_2;
  local_80 = param_2[1];
  uVar4 = param_2[2];
  local_78 = uVar4;
  uStack_68 = param_3;
  if ((uVar4 & 1) != 0) {
    FUN_0043dd30(uVar4 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_00426fc0(param_2[1]);
  if (0 < (int)param_4) {
    lVar5 = 0;
    do {
      local_88 = lVar5 + *param_2;
      FUN_00427bc0(local_58,local_80,&DAT_04c15320);
      uVar1 = local_58[0];
      if ((local_48 & 1) != 0) {
        FUN_0043dd50(local_48 & 0xfffffffffffffffe);
      }
      FUN_004afb60(&local_70,&local_88,0,uVar1);
      lVar5 = lVar5 + iVar2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    uVar4 = local_78;
  }
  if ((uVar4 & 1) != 0) {
    FUN_0043dd50(uVar4 & 0xfffffffffffffffe);
  }
  return;
}


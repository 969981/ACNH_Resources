
void FUN_00495f30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_38;
  
  uVar3 = (ulong)((long)param_3 - (long)param_2) >> 3;
  iVar2 = (int)uVar3;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    uVar1 = FUN_00426720(PTR_DAT_048607b8,uVar3 & 0xffffffff,8,*param_1,*(undefined4 *)(param_1 + 1)
                        );
    *param_1 = uVar1;
  }
  if (*(int *)(param_1 + 3) * 2 < (iVar2 + 1) * 3) {
    FUN_0043d3c0(param_1 + 2);
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    local_38 = FUN_0043a360(*param_2,param_4);
    FUN_0049b210(param_1,&local_38);
  }
  return;
}


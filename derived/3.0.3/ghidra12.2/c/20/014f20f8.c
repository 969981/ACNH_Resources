
void FUN_014f20f8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38 [2];
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uStack_48 = *(undefined8 *)(param_2 + 8);
    lVar1 = param_1 + 0x20;
    puVar2 = PTR_DAT_04bbbc20 + 0x10;
    local_40 = *(undefined8 *)(param_2 + 0x10);
    local_38[0] = *(undefined4 *)(param_2 + 0x18);
    local_50 = puVar2;
    uVar3 = FUN_014ea4c0(lVar1,local_38,&local_50);
    if ((uVar3 & 1) == 0) {
      local_40 = 0;
      local_38[0] = 0;
      uStack_48 = 0;
      local_50 = puVar2;
      uVar3 = FUN_014eac80(lVar1,&local_50,(undefined8 *)(param_2 + 8),1);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(param_1 + 0x38) == 0) {
          return;
        }
        FUN_014ea1d0(lVar1,param_1 + 0x40);
        return;
      }
    }
    FUN_014ebb40(lVar1,&local_50,0);
  }
  return;
}


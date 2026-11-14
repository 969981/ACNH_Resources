
bool FUN_018afa7c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  char local_34;
  int local_14;
  
  local_34 = '\0';
  local_48 = 0;
  local_40 = 0xffffffff00000000;
  local_38 = 0xffffffff;
  uVar3 = FUN_01923850(param_2[1],&local_48,param_1 + 0x318,*param_2);
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    local_4c = *(undefined4 *)(param_2 + 2);
    local_68 = local_48;
    local_60 = (undefined4)local_40;
    uStack_5c = 0;
    local_54 = *(undefined4 *)param_2[3];
    uStack_50 = local_40._4_4_;
    local_58 = FUN_0277d6c4(param_2 + 4);
    iVar2 = FUN_018afb50(param_1,&local_68);
    if ((iVar2 != 0) && (local_34 != '\0')) {
      local_14 = iVar2;
      FUN_019d6d70((long)&local_40 + 4,param_2 + 2,local_38,&local_14);
    }
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


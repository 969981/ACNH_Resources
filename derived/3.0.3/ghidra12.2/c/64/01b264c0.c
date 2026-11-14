
bool FUN_01b264c0(undefined2 *param_1,long *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_42;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  uVar1 = *param_1;
  lVar5 = *(long *)PTR_DAT_04bb32f0;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_40 = FUN_006bd550(param_2[1],0);
  lVar5 = FUN_0088c0d0(lVar5 + 8,&local_40);
  bVar2 = false;
  if (lVar5 != 0) {
    uVar4 = FUN_00874dd0(lVar5,lVar5,local_34,local_38,uVar1);
    if ((uVar4 & 1) == 0) {
      bVar2 = false;
    }
    else {
      local_48 = *param_1;
      local_3c = 0;
      local_3a = 0;
      local_44 = 0;
      local_42 = 0;
      local_46 = param_1[1];
      local_40 = CONCAT13(local_38[0],CONCAT12(local_34[0],local_48));
      iVar3 = FUN_00a82474(&local_40,&local_48);
      bVar2 = iVar3 - 1U < 6;
    }
  }
  return bVar2;
}


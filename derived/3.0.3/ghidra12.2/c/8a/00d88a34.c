
void FUN_00d88a34(long param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_58 [4];
  int local_34;
  undefined *local_30;
  char *local_28;
  
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x288);
    *(undefined4 *)(lVar4 + 0x20) = 2;
    *(undefined1 *)(lVar4 + 0x24) = 1;
    goto LAB_00d88b60;
  }
  FUN_01df9e40();
  puVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "wherearen_follow_list";
  FUN_025ffac8(local_58,&local_30,puVar1);
  puVar1 = PTR_DAT_04bc3500 + 0x10;
  local_30 = (undefined *)CONCAT71(local_30._1_7_,1);
  local_30 = (undefined *)(ulong)CONCAT14(*(int *)(param_1 + 0x160) != 0,local_30._0_4_);
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb7bc0 + 0x270);
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar5 = (ulong)*(uint *)(lVar4 + 0x10);
    if (1 < *(uint *)(lVar4 + 0x10)) {
      uVar5 = 0;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar4 + uVar5 * 8) + 0x28);
  }
  local_28 = (char *)CONCAT44(local_28._4_4_,uVar3);
  local_58[0] = puVar1;
  FUN_025f5ef4(local_58,&local_30);
  local_58[0] = puVar1;
  iVar2 = FUN_025f60ec(local_58);
  if (iVar2 == -1) {
LAB_00d88b20:
    if (local_34 == 0) {
      local_34 = 1;
    }
  }
  else {
    iVar2 = (**(code **)(local_58[0] + 0x20))(local_58);
    local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar2);
    if (0xc < iVar2) goto LAB_00d88b20;
  }
  FUN_02601530(local_58);
  *(undefined4 *)(param_1 + 0xb0) = 1;
LAB_00d88b60:
  local_58[0] = (undefined *)((ulong)local_58[0] & 0xffffffff00000000);
  FUN_03ebb160(param_1 + 0xf0,0);
  return;
}


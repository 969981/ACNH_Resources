
void FUN_016cc79c(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined *local_58 [4];
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 uStack_5;
  uint local_4;
  
  lVar7 = *(long *)PTR_DAT_04bb4938;
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0x98) != 0) {
    return;
  }
  uVar4 = FUN_0290d828();
  if ((uVar4 & 1) != 0) {
    return;
  }
  FUN_0252d11c(&uStack_5);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "hotel_visit_room";
  FUN_025ffac8(local_58,&local_30,&uStack_5);
  local_28 = (char *)CONCAT44(local_28._4_4_,4);
  local_58[0] = PTR_DAT_04bc3320 + 0x10;
  local_30 = (undefined *)CONCAT44(*(undefined4 *)(lVar7 + 0xc),(uint)*(byte *)(lVar7 + 8));
  FUN_021d7e50(lVar7 + 0x58);
  lVar7 = FUN_016c91a4();
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    bVar1 = *(byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x1635);
    uVar6 = 4;
    if (bVar1 < 5) {
      local_4 = (uint)bVar1;
      uVar6 = local_4;
      if (3 < local_4) {
        uVar6 = 4;
      }
    }
    local_28 = (char *)CONCAT44(local_28._4_4_,uVar6);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  local_28._0_5_ = CONCAT14((int)local_28 != 4,(int)local_28);
  FUN_025b39ec(local_58,&local_30);
  iVar3 = (**(code **)(local_58[0] + 0x20))(local_58);
  if (iVar3 != -1) {
    iVar3 = (**(code **)(local_58[0] + 0x20))(local_58);
    local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar3);
    if (iVar3 < 0xd) goto LAB_016cc910;
  }
  if (local_34 == 0) {
    local_34 = 1;
  }
LAB_016cc910:
  FUN_02601530(local_58);
  return;
}


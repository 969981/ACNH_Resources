
void FUN_03784a30(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar4 = *(long *)PTR_DAT_04bb2720;
  if (lVar4 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar4 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar4 + 0x338));
      iVar1 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar6 + 7);
  if ((iVar1 != -0x7975b8e8 && iVar1 != -0x17df00c3) && iVar1 != -0x3e092032) {
    return;
  }
  local_48 = PTR_DAT_04bb7648 + 0x10;
  local_40 = CONCAT62(local_40._2_6_,*DAT_05ab5ea8);
  lVar4 = FUN_03775a30(&local_48);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar4 + 0x28);
  if (lVar5 == 0) {
    lVar4 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    *(undefined1 *)(lVar4 + 5) = param_1;
    *(undefined1 *)(lVar4 + 6) = param_2;
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar4 + 0x28) == 0) goto LAB_03784b68;
    plVar3 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_48 = *(undefined **)(lVar4 + 8);
    local_40 = *(undefined8 *)(lVar4 + 0x10);
    local_38 = 0x48b0;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_03784b68:
  lVar5 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
  *(undefined1 *)(lVar5 + 5) = param_1;
  *(undefined1 *)(lVar5 + 6) = param_2;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


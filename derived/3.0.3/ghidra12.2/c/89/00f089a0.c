
undefined8 FUN_00f089a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_78;
  undefined4 uStack_74;
  char *local_70;
  uint local_24;
  
  puVar2 = PTR_s_InduceFailAlreadyInduced_04bb9b88;
  local_24 = 5;
  FUN_006d8678(&local_78,"Camp_%s",PTR_s_InduceFailAlreadyInduced_04bb9b88);
  (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
  (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
  if (local_70 == "Camp_InduceFailAlreadyInduced") {
LAB_00f08a8c:
    FUN_006d8678(&local_78,"Camp_%s",puVar2 + 0x1a);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    if (local_70 != "Camp_InduceFailAlreadyInduced") {
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_70[uVar6] != "Camp_InduceFailAlreadyInduced"[uVar6]) break;
        if (local_70[uVar6] == '\0') {
          if (bVar3) goto LAB_00f08b30;
          break;
        }
        bVar3 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      puVar1 = PTR_DAT_04bb32e0;
      if (*(long *)(param_1 + 8) != 0) {
        puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
      }
      iVar4 = FUN_0274bce0(puVar1,&local_78);
      if (iVar4 != 0) {
        local_24 = 1;
        goto LAB_00f08d2c;
      }
    }
LAB_00f08b30:
    FUN_006d8678(&local_78,"Camp_%s",puVar2 + 0x33);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    if (local_70 != "Camp_InduceFailAlreadyInduced") {
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_70[uVar6] != "Camp_InduceFailAlreadyInduced"[uVar6]) break;
        if (local_70[uVar6] == '\0') {
          if (bVar3) goto LAB_00f08bdc;
          break;
        }
        bVar3 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      puVar1 = PTR_DAT_04bb32e0;
      if (*(long *)(param_1 + 8) != 0) {
        puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
      }
      iVar4 = FUN_0274bce0(puVar1,&local_78);
      if (iVar4 != 0) {
        local_24 = 2;
        goto LAB_00f08d2c;
      }
    }
LAB_00f08bdc:
    FUN_006d8678(&local_78,"Camp_%s",puVar2 + 0x4c);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    if (local_70 != "Camp_InduceFailAlreadyInduced") {
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_70[uVar6] != "Camp_InduceFailAlreadyInduced"[uVar6]) break;
        if (local_70[uVar6] == '\0') {
          if (bVar3) goto LAB_00f08c80;
          break;
        }
        bVar3 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      puVar1 = PTR_DAT_04bb32e0;
      if (*(long *)(param_1 + 8) != 0) {
        puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
      }
      iVar4 = FUN_0274bce0(puVar1,&local_78);
      if (iVar4 != 0) {
        local_24 = 3;
        goto LAB_00f08d2c;
      }
    }
LAB_00f08c80:
    FUN_006d8678(&local_78,"Camp_%s",puVar2 + 99);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x18))(&local_78);
    if (local_70 != "Camp_InduceFailAlreadyInduced") {
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_70[uVar6] != "Camp_InduceFailAlreadyInduced"[uVar6]) break;
        if (local_70[uVar6] == '\0') {
          if (bVar3) goto LAB_00f08d2c;
          break;
        }
        bVar3 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      puVar2 = PTR_DAT_04bb32e0;
      if (*(long *)(param_1 + 8) != 0) {
        puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
      }
      iVar4 = FUN_0274bce0(puVar2,&local_78);
      if (iVar4 != 0) {
        local_24 = 4;
      }
    }
  }
  else {
    uVar6 = 0;
    bVar3 = true;
    do {
      if (local_70[uVar6] != "Camp_InduceFailAlreadyInduced"[uVar6]) break;
      if (local_70[uVar6] == '\0') {
        if (bVar3) goto LAB_00f08a8c;
        break;
      }
      bVar3 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
    puVar1 = PTR_DAT_04bb32e0;
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
    }
    iVar4 = FUN_0274bce0(puVar1,&local_78);
    if (iVar4 == 0) goto LAB_00f08a8c;
    local_24 = 0;
  }
LAB_00f08d2c:
  if (local_24 == 5) {
LAB_00f08d90:
    uVar5 = 1;
  }
  else {
    local_78 = local_24;
    if (local_24 < 5) {
      puVar2 = PTR_DAT_04bb32e0;
      if (*(long *)(param_1 + 8) != 0) {
        puVar2 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
      }
      uVar6 = (*(code *)(&PTR_LAB_04a765d8)[(long)(int)local_24 * 2])(&DAT_05453f20,param_2,puVar2);
      if ((uVar6 & 1) == 0) goto LAB_00f08d90;
    }
    uVar5 = 0;
  }
  return uVar5;
}


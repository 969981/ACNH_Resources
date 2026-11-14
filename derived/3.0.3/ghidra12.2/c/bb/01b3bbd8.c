
bool FUN_01b3bbd8(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined2 local_418 [46];
  undefined1 local_3bc;
  undefined1 local_360;
  undefined8 local_35c;
  undefined4 local_354;
  undefined1 local_350;
  char local_34c;
  undefined1 auStack_34a [672];
  ushort local_aa;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar5 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 8)), lVar5 == 0)) {
    return false;
  }
  if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    uVar3 = uVar3 ^ 1;
  }
  local_418[0] = 0;
  local_3bc = 0;
  local_360 = 0;
  local_35c = 0xfffe00000000;
  local_354 = 0;
  FUN_0277d4ac((long)&local_35c + 4);
  local_350 = 0;
  local_34c = '\0';
  memset(auStack_34a,0,0x2a2);
  local_a8 = 0xfffe;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0;
  uStack_8c = 0;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = 0;
  uStack_6c = 0;
  uVar7 = FUN_01b3b7ec(param_1,local_418,*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90),
                       param_3);
  bVar2 = false;
  if ((uVar7 & 1) == 0) goto LAB_01b3bdc0;
  if (local_34c == '\0') {
    uVar7 = FUN_027aef1c(local_418,0);
    bVar2 = false;
    if ((uVar7 & 1) == 0) goto LAB_01b3bdc0;
LAB_01b3bd38:
    if (local_34c == '\0') {
      uVar7 = FUN_027aef1c(local_418,0);
      bVar2 = false;
      if ((uVar7 & 1) == 0) goto LAB_01b3bdc0;
    }
    else {
      uVar4 = FUN_027af0b0(local_418,0);
      bVar2 = false;
      lVar8 = *(long *)PTR_DAT_04bb4788;
      uVar1 = (uint)local_aa - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (*(uint *)(lVar8 + 0x1d8) <= uVar1) goto LAB_01b3bdc0;
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar1 * 8) == 0 ||
          ((uVar4 ^ 0xffffffff) & 1) != 0) goto LAB_01b3bd8c;
    }
    lVar8 = FUN_02831c80(param_2 + 0x15ae0,local_418);
    bVar2 = lVar8 != 0;
  }
  else {
    uVar4 = FUN_027af0b0(local_418,0);
    bVar2 = false;
    lVar8 = *(long *)PTR_DAT_04bb4788;
    uVar1 = (uint)local_aa - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar1) goto LAB_01b3bdc0;
    if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar1 * 8) != 0 &&
        ((uVar4 ^ 0xffffffff) & 1) == 0) goto LAB_01b3bd38;
LAB_01b3bd8c:
    bVar2 = false;
  }
LAB_01b3bdc0:
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return bVar2;
}


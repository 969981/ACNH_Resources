
bool FUN_01b44c38(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined2 local_3b4 [46];
  undefined1 local_358;
  undefined1 local_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  char local_2e8;
  undefined1 auStack_2e6 [672];
  ushort local_46;
  undefined2 local_44;
  
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
  local_3b4[0] = 0;
  local_358 = 0;
  local_2fc = 0;
  local_2f8 = 0xfffe00000000;
  local_2f0 = 0;
  FUN_0277d4ac((long)&local_2f8 + 4);
  local_2ec = 0;
  local_2e8 = '\0';
  memset(auStack_2e6,0,0x2a2);
  local_44 = 0xfffe;
  uVar7 = FUN_01b449d0(param_1,local_3b4,*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90));
  bVar2 = false;
  if ((uVar7 & 1) == 0) goto LAB_01b44d94;
  if (local_2e8 == '\0') {
    uVar7 = FUN_027aef1c(local_3b4,0);
    bVar2 = false;
    if ((uVar7 & 1) == 0) goto LAB_01b44d94;
  }
  else {
    uVar4 = FUN_027af0b0(local_3b4,0);
    bVar2 = false;
    lVar8 = *(long *)PTR_DAT_04bb4788;
    uVar1 = (uint)local_46 - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar1) goto LAB_01b44d94;
    if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar1 * 8) == 0 ||
        ((uVar4 ^ 0xffffffff) & 1) != 0) {
      bVar2 = false;
      goto LAB_01b44d94;
    }
  }
  lVar8 = FUN_01b48c40(local_3b4,0,param_2);
  bVar2 = lVar8 != 0;
LAB_01b44d94:
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x17bb0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return bVar2;
}


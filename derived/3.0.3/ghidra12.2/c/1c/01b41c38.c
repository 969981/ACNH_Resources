
bool FUN_01b41c38(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined2 local_3ec [46];
  undefined1 local_390;
  undefined1 local_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined1 local_324;
  char local_320;
  undefined1 auStack_31e [672];
  ushort local_7e;
  undefined2 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar6 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 8)), lVar6 == 0)) {
    return false;
  }
  if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  local_3ec[0] = 0;
  local_390 = 0;
  local_334 = 0;
  local_330 = 0xfffe00000000;
  local_328 = 0;
  FUN_0277d4ac((long)&local_330 + 4);
  local_324 = 0;
  local_320 = '\0';
  memset(auStack_31e,0,0x2a2);
  local_7c = 0xfffe;
  uVar8 = FUN_01b413d0(param_1,local_3ec,*(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90),
                       param_4);
  bVar3 = false;
  if ((uVar8 & 1) == 0) goto LAB_01b41e74;
  if (local_320 == '\0') {
    uVar8 = FUN_027aef1c(local_3ec,0);
    bVar3 = false;
    if ((uVar8 & 1) == 0) goto LAB_01b41e74;
  }
  else {
    uVar5 = FUN_027af0b0(local_3ec,0);
    bVar3 = false;
    lVar11 = *(long *)PTR_DAT_04bb4788;
    uVar2 = (uint)local_7e - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar2) goto LAB_01b41e74;
    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) == 0 ||
        ((uVar5 ^ 0xffffffff) & 1) != 0) {
      bVar3 = false;
      goto LAB_01b41e74;
    }
  }
  lVar11 = FUN_01b48c40(local_3ec,0,param_2);
  bVar3 = lVar11 != 0;
  lVar1 = *(long *)(lVar6 + 0x17b90);
  lVar11 = *(long *)(lVar6 + 0x17b98);
  lVar9 = FUN_0265c3e0(*(undefined4 *)(param_1 + 0x20));
  if (lVar9 == 0) goto LAB_01b41e74;
  lVar12 = *(long *)(lVar9 + 0x28);
  lVar11 = lVar11 + lVar1;
  if (lVar12 == 0) {
    FUN_01b40b80(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),lVar11,param_3,param_1 + 0x2c);
    goto LAB_01b41e74;
  }
  if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
    uVar8 = 0;
LAB_01b41e0c:
    plVar10 = *(long **)(lVar12 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar9 + 8);
      uStack_70 = *(undefined8 *)(lVar9 + 0x10);
      local_68 = 0x13230;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    }
  }
  else {
    uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
    lVar12 = *(long *)(lVar9 + 0x28);
    uVar8 = uVar8 & 0xffffffff;
    if (lVar12 != 0) goto LAB_01b41e0c;
  }
  FUN_01b40b80(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),lVar11,param_3,param_1 + 0x2c);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_01b41e74:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return bVar3;
}



void FUN_02537690(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  byte bVar9;
  byte local_5c [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb4f78;
  local_5c[0] = *param_1;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar4 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_5c,1);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x1aa0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1aa0), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    uVar3 = FUN_028169a0(*(long *)(lVar4 + 0x1a88) + *(long *)(lVar4 + 0x1a80));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1aa0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1aa0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (uVar3 < 0x28) {
      FUN_02674700(param_1,uVar3,PTR_DAT_04bb37e0,1,0);
    }
  }
  bVar9 = *param_1;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_58 = CONCAT71(local_58._1_7_,bVar9);
  lVar4 = FUN_02583354(*(undefined8 *)puVar1,&local_58,1);
  if (lVar4 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar4 + 0x1aa0);
  if (lVar8 == 0) {
    FUN_02816c30(*(long *)(lVar4 + 0x1a88) + *(long *)(lVar4 + 0x1a80),PTR_DAT_04bb37e0,
                 *(undefined4 *)PTR_DAT_04bb4e20,0);
    return;
  }
  if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
    plVar7 = *(long **)(lVar8 + 0x20);
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    uVar6 = uVar6 & 0xffffffff;
    if (*(long *)(lVar4 + 0x1aa0) == 0) goto LAB_025377dc;
    plVar7 = *(long **)(*(long *)(lVar4 + 0x1aa0) + 0x20);
  }
  if (plVar7 != (long *)0x0) {
    local_58 = *(undefined8 *)(lVar4 + 0x1a80);
    uStack_50 = *(undefined8 *)(lVar4 + 0x1a88);
    local_48 = 0x8b8;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
LAB_025377dc:
  FUN_02816c30(*(long *)(lVar4 + 0x1a88) + *(long *)(lVar4 + 0x1a80),PTR_DAT_04bb37e0,
               *(undefined4 *)PTR_DAT_04bb4e20,0);
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x1aa0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1aa0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


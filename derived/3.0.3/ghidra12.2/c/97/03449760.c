
void FUN_03449760(byte *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_04bb4f78;
  bVar3 = *param_1;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  local_58._0_1_ = bVar3;
  lVar6 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_58,1);
  if (lVar6 != 0) {
    lVar13 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar13 = *(long *)(DAT_05574040 + 0x20);
    }
    bVar3 = *param_1;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    local_58 = CONCAT71(local_58._1_7_,bVar3);
    lVar6 = FUN_02583354(*(undefined8 *)puVar2,&local_58,1);
    if (lVar6 != 0) {
      lVar10 = lVar6 + 0x194b0;
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar10 = *(long *)(DAT_05574040 + 0x20);
      }
      plVar9 = (long *)(lVar10 + 0x8428);
      if ((*(long *)(lVar10 + 0x8448) == 0) ||
         (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x8448) + 0x10), puVar7 == (undefined8 *)0x0)
         ) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar7)();
        uVar4 = uVar4 ^ 1;
      }
      plVar1 = (long *)(lVar13 + 0x8460);
      if (*(long *)PTR_DAT_04bb2230 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      }
      if (*(char *)(lVar6 + 0x1c58) == '\0') {
        bVar3 = 1;
      }
      else {
        bVar3 = (**(code **)(*(long *)(lVar6 + 0x1c50) + 0x18))(lVar6 + 0x1c50);
        *(char *)(lVar6 + 0x1c58) = '\0';
      }
      *(byte *)(lVar6 + 0x1c59) = bVar3 & 1;
      if ((*(long *)(lVar13 + 0x8480) == 0) ||
         (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x8480) + 0x10), puVar7 == (undefined8 *)0x0)
         ) {
        uVar5 = 1;
        lVar11 = *(long *)(lVar10 + 0x8448);
      }
      else {
        uVar5 = (**(code **)*puVar7)();
        uVar5 = uVar5 ^ 1;
        lVar11 = *(long *)(lVar10 + 0x8448);
      }
      if ((lVar11 != 0) && (plVar8 = *(long **)(lVar11 + 0x20), plVar8 != (long *)0x0)) {
        local_58 = *plVar9;
        local_50 = *(undefined8 *)(lVar10 + 0x8430);
        uStack_48 = 0x3c8;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
      }
      if (*(char *)(*(long *)(lVar10 + 0x8430) + *plVar9) == '\0') {
        uVar12 = *(undefined8 *)(lVar6 + 0x1c60);
        if ((*(long *)(lVar13 + 0x8480) != 0) &&
           (plVar8 = *(long **)(*(long *)(lVar13 + 0x8480) + 0x20), plVar8 != (long *)0x0)) {
          local_58 = *plVar1;
          local_50 = *(undefined8 *)(lVar13 + 0x8468);
          uStack_48 = 8;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
        }
        *(undefined8 *)(*(long *)(lVar13 + 0x8468) + *plVar1) = uVar12;
      }
      if ((*(long *)(lVar10 + 0x8448) != 0) &&
         (plVar8 = *(long **)(*(long *)(lVar10 + 0x8448) + 0x20), plVar8 != (long *)0x0)) {
        local_58 = *plVar9;
        local_50 = *(undefined8 *)(lVar10 + 0x8430);
        uStack_48 = 0x3c8;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
      }
      lVar6 = *plVar9;
      lVar11 = *(long *)(lVar10 + 0x8430);
      if ((*(long *)(lVar13 + 0x8480) != 0) &&
         (plVar9 = *(long **)(*(long *)(lVar13 + 0x8480) + 0x20), plVar9 != (long *)0x0)) {
        local_58 = *plVar1;
        local_50 = *(undefined8 *)(lVar13 + 0x8468);
        uStack_48 = 8;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_58);
      }
      (**(code **)*param_2)(param_2,lVar11 + lVar6,*(long *)(lVar13 + 0x8468) + *plVar1);
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar13 + 0x8480) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar13 + 0x8480) + 0x18), puVar7 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar7)();
      }
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar10 + 0x8448) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x8448) + 0x18), puVar7 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar7)();
      }
    }
  }
  return;
}


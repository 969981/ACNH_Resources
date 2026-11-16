
void FUN_0281bf60(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar8 = *(long *)PTR_DAT_04bb46b0;
  if (lVar8 != 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar8 = 0;
      if (lVar6 != 0) {
        lVar8 = lVar6 + 0x70;
      }
      goto LAB_0281bfdc;
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar8 = 0;
      if ((long *)puVar9[0x26] != (long *)0x0) {
        lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      }
      goto LAB_0281bfdc;
    }
  }
  lVar8 = 0;
LAB_0281bfdc:
  if ((*(long *)(lVar8 + 0x1c24e8) == 0) ||
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x1c24e8) + 0x10), puVar9 == (undefined8 *)0x0)) {
    uVar5 = 1;
    iVar3 = *param_1;
  }
  else {
    uVar5 = (**(code **)*puVar9)();
    uVar5 = uVar5 ^ 1;
    iVar3 = *param_1;
  }
  if (iVar3 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    iVar10 = 0;
    do {
      if ((*(long *)(lVar8 + 0x1c24e8) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar8 + 0x1c24e8) + 0x20), plVar7 != (long *)0x0)) {
        local_68 = *(long *)(lVar8 + 0x1c24c8);
        local_60 = *(undefined8 *)(lVar8 + 0x1c24d0);
        uStack_58 = 0x928;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
      }
      uVar4 = *(uint *)(lVar6 + (long)iVar10 * 0x3c + 0x38);
      puVar1 = (undefined4 *)(*(long *)(lVar8 + 0x1c24d0) + *(long *)(lVar8 + 0x1c24c8) + 0x904);
      puVar2 = puVar1 + uVar4;
      if (7 < uVar4) {
        puVar2 = puVar1;
      }
      *puVar2 = 0;
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x1c24e8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x1c24e8) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}


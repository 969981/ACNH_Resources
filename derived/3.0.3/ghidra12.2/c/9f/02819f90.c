
void FUN_02819f90(int *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar4 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar7[0x26] == (long *)0x0) {
      return;
    }
    lVar4 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    if (lVar4 == 0) {
      return;
    }
  }
  lVar8 = *(long *)(lVar4 + 0x28);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar4 + 0x28) == 0) goto LAB_0281a074;
      plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar4 + 8);
      uStack_60 = *(undefined8 *)(lVar4 + 0x10);
      local_58 = &LAB_005b3c40;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
    }
  }
LAB_0281a074:
  iVar2 = *param_1;
  if (iVar2 != 0) {
    lVar8 = *(long *)(lVar4 + 8);
    lVar1 = *(long *)(lVar4 + 0x10);
    iVar10 = 0;
    lVar9 = *(long *)(param_1 + 2);
    do {
      uVar3 = *(uint *)(lVar9 + (long)iVar10 * 0x3c + 0x38);
      if ((uVar3 < 8) &&
         (plVar6 = (long *)(lVar1 + lVar8 + 0x1e33b0 + (ulong)uVar3 * 0x48),
         *plVar6 != 0 || plVar6[1] != 0)) {
        plVar6[7] = 0;
        plVar6[8] = 0;
        *plVar6 = 0;
        plVar6[5] = 0;
        plVar6[6] = 0;
        plVar6[3] = 0;
        plVar6[4] = 0;
        plVar6[1] = 0;
        plVar6[2] = 0;
        FUN_0281836c();
      }
      iVar10 = iVar10 + 1;
    } while (iVar2 != iVar10);
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


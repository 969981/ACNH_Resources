
undefined8 FUN_01694760(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar5 = FUN_027a991c();
  if (((((uVar5 & 1) == 0) || (uVar5 = FUN_027a9de4(param_1), (uVar5 & 1) == 0)) ||
      (DAT_05574040 == 0)) ||
     (lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar6 == 0))
  {
    return 0;
  }
  plVar2 = (long *)(lVar6 + 0x276f90);
  lVar9 = *(long *)(lVar6 + 0x276fb0);
  if (lVar9 == 0) {
    uVar4 = 1;
    if ((param_2 & 1) != 0) goto LAB_0169484c;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      lVar9 = *(long *)(lVar6 + 0x276fb0);
      uVar4 = uVar4 ^ 1;
    }
    if ((param_2 & 1) != 0) {
      if ((lVar9 != 0) && (plVar7 = *(long **)(lVar9 + 0x20), plVar7 != (long *)0x0)) {
        local_48 = *plVar2;
        local_40 = *(undefined8 *)(lVar6 + 0x276f98);
        uStack_38 = 0x280;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
      }
LAB_0169484c:
      uVar5 = 0;
      do {
        if (*(short *)(*(long *)(lVar6 + 0x276f98) + *plVar2 +
                      (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) == -2) {
          lVar9 = *(long *)(lVar6 + 0x276fb0);
          goto LAB_0169488c;
        }
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
      } while (uVar1 != 0x50);
      uVar10 = 0;
      goto joined_r0x01694880;
    }
LAB_0169488c:
    if ((lVar9 != 0) && (plVar7 = *(long **)(lVar9 + 0x20), plVar7 != (long *)0x0)) {
      local_48 = *plVar2;
      local_40 = *(undefined8 *)(lVar6 + 0x276f98);
      uStack_38 = 0x280;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
  }
  lVar9 = *plVar2;
  lVar3 = *(long *)(lVar6 + 0x276f98);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  local_48 = *param_1;
  uVar10 = 1;
  local_40 = CONCAT53((int5)((ulong)local_40 >> 0x18),0x10000);
  FUN_027a9730(lVar3 + lVar9,&local_48);
joined_r0x01694880:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x276fb0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x276fb0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return uVar10;
}


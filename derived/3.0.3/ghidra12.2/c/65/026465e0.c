
void FUN_026465e0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar9 + 0x28);
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar9 + 0x28) == 0) goto LAB_02646670;
      plVar4 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(long *)(lVar9 + 8);
      lStack_50 = *(long *)(lVar9 + 0x10);
      local_48 = 0xb548;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_02646670:
  lVar7 = 0;
  plVar4 = (long *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
  while( true ) {
    uVar2 = *(uint *)((long)plVar4 + lVar7 * 4 + 0xaf00);
    plVar5 = plVar4 + (ulong)uVar2 * 0xe;
    if (399 < uVar2) {
      plVar5 = plVar4;
    }
    if ((*plVar5 != 0) &&
       ((*(int *)((long)plVar5 + 0x2c) != 0 && (int)plVar5[2] != 0) && *plVar5 == *param_2)) break;
    lVar7 = lVar7 + 1;
    if (lVar7 == 400) {
LAB_0264673c:
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
      return;
    }
  }
  if ((*(long *)(lVar9 + 0x28) != 0) &&
     (plVar5 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
    local_48 = 0xb548;
    local_58 = *(long *)(lVar9 + 8);
    lStack_50 = *(long *)(lVar9 + 0x10);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
    plVar4 = (long *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
  }
  plVar5 = plVar4;
  if (((uint)lVar7 < 400) &&
     (uVar2 = *(uint *)((long)plVar4 + lVar7 * 4 + 0xaf00), plVar5 = plVar4 + (ulong)uVar2 * 0xe,
     399 < uVar2)) {
    plVar5 = plVar4;
  }
  lVar7 = *param_3;
  lVar1 = param_3[1];
  lVar8 = param_3[2];
  *(int *)(plVar5 + 5) = (int)param_3[3];
  plVar5[2] = lVar7;
  plVar5[3] = lVar1;
  plVar5[4] = lVar8;
  goto LAB_0264673c;
}



void FUN_02647ac0(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar7 + 0x28);
  if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar7 + 0x28) == 0) goto LAB_02647b48;
      plVar3 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar7 + 8);
      lStack_40 = *(long *)(lVar7 + 0x10);
      local_38 = 0xb548;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_02647b48:
  lVar6 = 0;
  plVar3 = (long *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
  while( true ) {
    uVar1 = *(uint *)((long)plVar3 + lVar6 * 4 + 0xaf00);
    plVar4 = plVar3 + (ulong)uVar1 * 0xe;
    if (399 < uVar1) {
      plVar4 = plVar3;
    }
    if ((*plVar4 != 0) &&
       ((*(int *)((long)plVar4 + 0x2c) != 0 && (int)plVar4[2] != 0) && *plVar4 == *param_2)) break;
    lVar6 = lVar6 + 1;
    if (lVar6 == 400) {
LAB_02647c14:
      if ((((uVar2 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      return;
    }
  }
  if (-1 < (int)(uint)lVar6) {
    if ((*(long *)(lVar7 + 0x28) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
      local_38 = 0xb548;
      local_48 = *(long *)(lVar7 + 8);
      lStack_40 = *(long *)(lVar7 + 0x10);
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
      plVar3 = (long *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
    }
    plVar4 = plVar3;
    if (((uint)lVar6 < 400) &&
       (uVar1 = *(uint *)((long)plVar3 + lVar6 * 4 + 0xaf00), plVar4 = plVar3 + (ulong)uVar1 * 0xe,
       399 < uVar1)) {
      plVar4 = plVar3;
    }
    *(byte *)((long)plVar4 + 0x6e) = *(byte *)((long)plVar4 + 0x6e) & 0xf9;
  }
  goto LAB_02647c14;
}


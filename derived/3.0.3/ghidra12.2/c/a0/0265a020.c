
void FUN_0265a020(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar7 = param_1 + 0x194b0;
  lVar5 = lVar7;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar5 + 0x2acb8);
  lVar6 = *(long *)(lVar5 + 0x2acd8);
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x2acc0) + *plVar1);
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 1;
      plVar3 = *(long **)(lVar6 + 0x20);
joined_r0x0265a1e8:
      if (plVar3 != (long *)0x0) {
        local_48 = *plVar1;
        local_40 = *(undefined8 *)(lVar5 + 0x2acc0);
        uStack_38 = 0x40;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar2 = uVar2 ^ 1;
      if (*(long *)(lVar5 + 0x2acd8) != 0) {
        plVar3 = *(long **)(*(long *)(lVar5 + 0x2acd8) + 0x20);
        goto joined_r0x0265a1e8;
      }
    }
    puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x2acc0) + *plVar1);
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0x2acd8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x2acd8) + 0x18), puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)();
    }
  }
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar7 + 0x2ac80);
  lVar5 = *(long *)(lVar7 + 0x2aca0);
  if (lVar5 == 0) {
    memset((void *)(*(long *)(lVar7 + 0x2ac88) + *plVar1),0,0x180);
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar7 + 0x2aca0) == 0) goto LAB_0265a180;
    plVar3 = *(long **)(*(long *)(lVar7 + 0x2aca0) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar7 + 0x2ac88);
    uStack_38 = 0x180;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_0265a180:
  memset((void *)(*(long *)(lVar7 + 0x2ac88) + *plVar1),0,0x180);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x2aca0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x2aca0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


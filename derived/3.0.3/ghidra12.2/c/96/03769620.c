
/* WARNING: Removing unreachable block (ram,0x03769660) */

void FUN_03769620(undefined4 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_48 = CONCAT44(local_48._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar2 == 0) {
    return;
  }
  if ((*(long **)(lVar2 + 0x36620) == (long *)0x0) ||
     (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x36620), puVar3 == (undefined8 *)0x0)) {
    cVar1 = *(char *)(*(long *)(lVar2 + 0x36608) + *(long *)(lVar2 + 0x36600));
  }
  else {
    uVar4 = (**(code **)*puVar3)();
    cVar1 = *(char *)(*(long *)(lVar2 + 0x36608) + *(long *)(lVar2 + 0x36600));
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x36620) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x36620) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return;
    }
    lVar6 = *(long *)(lVar2 + 0x37ca8);
    if (lVar6 == 0) {
      lVar6 = 0x4090;
      lVar2 = *(long *)(lVar2 + 0x37c90) + *(long *)(lVar2 + 0x37c88);
      uVar7 = *param_1;
      goto LAB_03769870;
    }
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
LAB_0376987c:
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar2 + 0x37c88);
        local_40 = *(undefined8 *)(lVar2 + 0x37c90);
        uStack_38 = 0x4098;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0x37ca8);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar6 != 0) goto LAB_0376987c;
    }
    *(undefined4 *)(*(long *)(lVar2 + 0x37c90) + *(long *)(lVar2 + 0x37c88) + 0x4090) = *param_1;
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x37ca8);
    goto joined_r0x037698c8;
  }
  lVar6 = *(long *)(lVar2 + 0x36658);
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar2 + 0x36658);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar6 == 0) goto LAB_03769794;
    }
    plVar5 = *(long **)(lVar6 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar2 + 0x36638);
      local_40 = *(undefined8 *)(lVar2 + 0x36640);
      uStack_38 = 0x490c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_03769794:
  *(undefined4 *)(*(long *)(lVar2 + 0x36640) + *(long *)(lVar2 + 0x36638) + 0x48b8) = *param_1;
  lVar6 = *(long *)(lVar2 + 0x36658);
  if ((uVar4 & 1) == 0) {
LAB_037697cc:
    if (lVar6 == 0) {
LAB_037697f4:
      lVar6 = 0x4908;
      lVar2 = *(long *)(lVar2 + 0x36640) + *(long *)(lVar2 + 0x36638);
      uVar7 = param_1[1];
LAB_03769870:
      *(undefined4 *)(lVar2 + lVar6) = uVar7;
      return;
    }
  }
  else {
    if (lVar6 == 0) goto LAB_037697f4;
    if (*(undefined8 **)(lVar6 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      lVar6 = *(long *)(lVar2 + 0x36658);
      goto LAB_037697cc;
    }
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
LAB_0376980c:
    plVar5 = *(long **)(lVar6 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar2 + 0x36638);
      local_40 = *(undefined8 *)(lVar2 + 0x36640);
      uStack_38 = 0x490c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar2 + 0x36658);
    uVar4 = uVar4 & 0xffffffff;
    if (lVar6 != 0) goto LAB_0376980c;
  }
  *(undefined4 *)(*(long *)(lVar2 + 0x36640) + *(long *)(lVar2 + 0x36638) + 0x4908) = param_1[1];
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(lVar2 + 0x36658);
joined_r0x037698c8:
  if ((lVar2 != 0) && (*(undefined8 **)(lVar2 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar2 + 0x18))();
  }
  return;
}


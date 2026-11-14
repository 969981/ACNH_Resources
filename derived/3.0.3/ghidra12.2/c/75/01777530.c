
void FUN_01777530(undefined4 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  undefined *local_a8;
  undefined1 *local_a0;
  int local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  local_55 = 0;
  local_98 = 0x40;
  local_94[0] = 0;
  local_a0 = local_94;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  lVar3 = FUN_0074f690(param_2,&DAT_0528c980);
  puVar2 = local_a0;
  switch(param_1) {
  case 2:
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar4 = 0;
    do {
      if (local_a0[lVar4] == '\0') goto LAB_01777718;
      if (local_a0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01777718;
      }
      if (local_a0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01777718;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01777718:
    plVar5 = &DAT_0528c9c0;
    uVar6 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528c9c0 + 0x18))(&DAT_0528c9c0);
    lVar4 = 0;
    do {
      if (*(char *)(DAT_0528c9c8 + lVar4) == '\0') goto LAB_017777dc;
      if (*(char *)(DAT_0528c9c8 + lVar4 + 1) == '\0') goto LAB_017777d0;
      if (*(char *)(DAT_0528c9c8 + lVar4 + 2) == '\0') goto LAB_017777d8;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    break;
  case 3:
  case 5:
  case 6:
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar4 = 0;
    do {
      if (local_a0[lVar4] == '\0') goto LAB_017776bc;
      if (local_a0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017776bc;
      }
      if (local_a0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017776bc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017776bc:
    plVar5 = &DAT_0528c9d0;
    uVar6 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528c9d0 + 0x18))(&DAT_0528c9d0);
    lVar4 = 0;
    do {
      if (*(char *)(DAT_0528c9d8 + lVar4) == '\0') goto LAB_017777dc;
      if (*(char *)(DAT_0528c9d8 + lVar4 + 1) == '\0') goto LAB_017777d0;
      if (*(char *)(DAT_0528c9d8 + lVar4 + 2) == '\0') goto LAB_017777d8;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    break;
  case 4:
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar4 = 0;
    do {
      if (local_a0[lVar4] == '\0') goto LAB_01777778;
      if (local_a0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01777778;
      }
      if (local_a0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01777778;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01777778:
    plVar5 = &DAT_0528c9e0;
    uVar6 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528c9e0 + 0x18))(&DAT_0528c9e0);
    lVar4 = 0;
    do {
      if (*(char *)(DAT_0528c9e8 + lVar4) == '\0') goto LAB_017777dc;
      if (*(char *)(DAT_0528c9e8 + lVar4 + 1) == '\0') goto LAB_017777d0;
      if (*(char *)(DAT_0528c9e8 + lVar4 + 2) == '\0') goto LAB_017777d8;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    break;
  default:
    goto switchD_017775bc_default;
  }
  lVar4 = 0;
  goto LAB_017777dc;
LAB_017777d0:
  lVar4 = lVar4 + 1;
  goto LAB_017777dc;
LAB_017777d8:
  lVar4 = lVar4 + 2;
LAB_017777dc:
  uVar1 = (uint)lVar4;
  if ((int)(local_98 - uVar6) <= (int)(uint)lVar4) {
    uVar1 = local_98 + ~uVar6;
  }
  if (0 < (int)uVar1) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    memcpy(puVar2 + uVar6,(void *)plVar5[1],(ulong)uVar1);
    puVar2[(int)(uVar1 + uVar6)] = 0;
  }
switchD_017775bc_default:
  puVar2 = local_a0;
  if (lVar3 != 0) {
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar4 = 0;
    do {
      if (local_a0[lVar4] == '\0') goto LAB_01777880;
      if (local_a0[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01777880;
      }
      if (local_a0[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01777880;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01777880:
    uVar6 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc10 + 0x18))(&DAT_0528cc10);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_0528cc18 + lVar4) == '\0') goto LAB_017778e0;
      if (*(char *)((long)DAT_0528cc18 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_017778e0;
      }
      if (*(char *)((long)DAT_0528cc18 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_017778e0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_017778e0:
    uVar1 = (uint)lVar4;
    if ((int)(local_98 - uVar6) <= (int)(uint)lVar4) {
      uVar1 = local_98 + ~uVar6;
    }
    if (0 < (int)uVar1) {
      (**(code **)(DAT_0528cc10 + 0x18))(&DAT_0528cc10);
      memcpy(puVar2 + uVar6,DAT_0528cc18,(ulong)uVar1);
      puVar2[(int)(uVar1 + uVar6)] = 0;
    }
    if ((*(long *)(lVar3 + 8) != 0) && (lVar3 = *(long *)(*(long *)(lVar3 + 8) + 0x20), lVar3 != 0))
    {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar3 = FUN_038fe510(lVar3,local_a0);
      if (lVar3 != 0) {
        FUN_039a9540(*(undefined8 *)(param_3 + 0x1150),lVar3,&DAT_0528ca70);
        FUN_039a9540(*(undefined8 *)(param_3 + 0x1150),lVar3,&DAT_0528cac0);
      }
    }
  }
  return;
}


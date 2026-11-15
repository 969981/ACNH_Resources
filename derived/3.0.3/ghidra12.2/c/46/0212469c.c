
/* WARNING: Removing unreachable block (ram,0x021246e4) */
/* WARNING: Removing unreachable block (ram,0x0212478c) */

void FUN_0212469c(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  lVar1 = FUN_026f480c();
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x10130);
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)(*(long *)(lVar1 + 0x10118) + *(long *)(lVar1 + 0x10110));
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
joined_r0x02124838:
      if (plVar3 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar1 + 0x10110);
        uStack_40 = *(undefined8 *)(lVar1 + 0x10118);
        local_38 = 0x10;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x10130) != 0) {
        plVar3 = *(long **)(*(long *)(lVar1 + 0x10130) + 0x20);
        goto joined_r0x02124838;
      }
    }
    puVar4 = (undefined8 *)(*(long *)(lVar1 + 0x10118) + *(long *)(lVar1 + 0x10110));
    *puVar4 = 0;
    puVar4[1] = 0;
    if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x10130) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x10130) + 0x18), puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)();
    }
  }
  lVar5 = *(long *)(lVar1 + 0x10280);
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)(*(long *)(lVar1 + 0x10268) + *(long *)(lVar1 + 0x10260));
    *puVar4 = 0;
    puVar4[1] = 0;
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar1 + 0x10280) == 0) goto LAB_021247e0;
    plVar3 = *(long **)(*(long *)(lVar1 + 0x10280) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar1 + 0x10260);
    uStack_40 = *(undefined8 *)(lVar1 + 0x10268);
    local_38 = 0x10;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_021247e0:
  puVar4 = (undefined8 *)(*(long *)(lVar1 + 0x10268) + *(long *)(lVar1 + 0x10260));
  *puVar4 = 0;
  puVar4[1] = 0;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x10280) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x10280) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


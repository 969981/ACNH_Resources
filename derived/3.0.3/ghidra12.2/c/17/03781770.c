
/* WARNING: Removing unreachable block (ram,0x037817ac) */

void FUN_03781770(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_38 = CONCAT44(local_38._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar3 == 0) {
    return;
  }
  plVar1 = (long *)(lVar3 + 0x5dab30);
  lVar6 = *(long *)(lVar3 + 0x5dab50);
  if (lVar6 == 0) {
    memset((void *)(*(long *)(lVar3 + 0x5dab38) + *plVar1),0,2000);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar3 + 0x5dab50);
    uVar2 = uVar2 ^ 1;
    if (lVar6 == 0) goto LAB_03781858;
  }
  plVar4 = *(long **)(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar3 + 0x5dab38);
    uStack_28 = 2000;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
LAB_03781858:
  memset((void *)(*(long *)(lVar3 + 0x5dab38) + *plVar1),0,2000);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x5dab50) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x5dab50) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


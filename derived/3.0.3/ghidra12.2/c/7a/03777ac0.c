
/* WARNING: Removing unreachable block (ram,0x03777afc) */

void FUN_03777ac0(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (DAT_05574040 == 0) {
    lVar5 = 0;
    lVar1 = lRam0000000000000060;
  }
  else {
    local_38 = CONCAT44(local_38._4_4_,1);
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar1 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar1 = 0;
    }
    lVar5 = 0;
    if (lVar1 != 0) {
      lVar5 = lVar1 + 0xa8;
    }
    lVar1 = *(long *)(lVar5 + 0x60);
  }
  if (lVar1 == 0) {
    puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40));
    puVar4[2] = 0xffffffffffffffff;
    puVar4[3] = 0xffffffffffffffff;
    *puVar4 = 0xffffffffffffffff;
    puVar4[1] = 0xffffffffffffffff;
    return;
  }
  if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar1 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar5 + 0x60) == 0) goto LAB_03777ba8;
    plVar3 = *(long **)(*(long *)(lVar5 + 0x60) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_38 = *(undefined8 *)(lVar5 + 0x40);
    uStack_30 = *(undefined8 *)(lVar5 + 0x48);
    local_28 = 0x20;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
  }
LAB_03777ba8:
  puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40));
  puVar4[2] = 0xffffffffffffffff;
  puVar4[3] = 0xffffffffffffffff;
  *puVar4 = 0xffffffffffffffff;
  puVar4[1] = 0xffffffffffffffff;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


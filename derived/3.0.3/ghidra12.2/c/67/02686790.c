
/* WARNING: Removing unreachable block (ram,0x026867d0) */

void FUN_02686790(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  void *__src;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
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
  lVar6 = *(long *)(lVar2 + 0x5d3db8);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x5d3db8) == 0) goto LAB_02686870;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x5d3db8) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar2 + 0x5d3d98);
      local_40 = *(undefined8 *)(lVar2 + 0x5d3da0);
      uStack_38 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_02686870:
  lVar6 = *(long *)(lVar2 + 0x5d3d98);
  lVar1 = *(long *)(lVar2 + 0x5d3da0);
  __src = (void *)(**(code **)(*param_1 + 0x20))(param_1);
  memcpy((void *)(lVar1 + lVar6),__src,0x754);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x5d3db8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x5d3db8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


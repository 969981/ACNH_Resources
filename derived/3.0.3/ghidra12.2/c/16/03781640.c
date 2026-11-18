
/* WARNING: Removing unreachable block (ram,0x03781680) */

void FUN_03781640(ushort param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
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
  lVar1 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x5dab50);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x5dab50) == 0) goto LAB_03781720;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x5dab50) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar1 + 0x5dab30);
      local_40 = *(undefined8 *)(lVar1 + 0x5dab38);
      uStack_38 = 2000;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_03781720:
  if (param_1 < 500) {
    *(undefined4 *)(*(long *)(lVar1 + 0x5dab38) + *(long *)(lVar1 + 0x5dab30) + (ulong)param_1 * 4)
         = 0;
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x5dab50) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x5dab50) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


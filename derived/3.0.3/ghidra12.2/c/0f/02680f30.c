
/* WARNING: Removing unreachable block (ram,0x02680f70) */

void FUN_02680f30(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
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
  plVar1 = (long *)(&LAB_005d3d28 + lVar2);
  lVar6 = *(long *)(lVar2 + 0x5d3d48);
  if (lVar6 == 0) {
    FUN_0285dc20(*(long *)(&LAB_005d3d30 + lVar2) + *plVar1,param_2,999999999);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar2 + 0x5d3d48);
    uVar3 = uVar3 & 0xffffffff;
    if (lVar6 == 0) goto LAB_02681028;
  }
  plVar4 = *(long **)(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(&LAB_005d3d30 + lVar2);
    uStack_38 = 8;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_02681028:
  FUN_0285dc20(*(long *)(&LAB_005d3d30 + lVar2) + *plVar1,param_2,999999999);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x5d3d48) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x5d3d48) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


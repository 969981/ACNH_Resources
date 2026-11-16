
/* WARNING: Removing unreachable block (ram,0x02757e2c) */

void FUN_02757de8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_58 = CONCAT44(local_58._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (long *)(lVar2 + 0x5d4540);
  lVar6 = *(long *)(lVar2 + 0x5d4560);
  if (lVar6 == 0) {
    FUN_02757f40(*(long *)(lVar2 + 0x5d4548) + *plVar1,param_2,param_3,param_1);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar2 + 0x5d4560);
    uVar3 = uVar3 & 0xffffffff;
    if (lVar6 == 0) goto LAB_02757ef0;
  }
  plVar4 = *(long **)(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar2 + 0x5d4548);
    uStack_48 = 0x1000;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
LAB_02757ef0:
  FUN_02757f40(*(long *)(lVar2 + 0x5d4548) + *plVar1,param_2,param_3,param_1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x5d4560) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x5d4560) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


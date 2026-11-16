
void FUN_026426a0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined2 local_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_1 == 0) {
    return;
  }
  FUN_02642490(&local_44,param_2,param_3);
  lVar5 = *(long *)(param_1 + 0x3278);
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
      if (*(long *)(param_1 + 0x3278) == 0) goto LAB_02642734;
      plVar3 = *(long **)(*(long *)(param_1 + 0x3278) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_38 = *(undefined8 *)(param_1 + 0x3258);
      uStack_30 = *(undefined8 *)(param_1 + 0x3260);
      local_28 = 0x2b8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    }
  }
LAB_02642734:
  puVar1 = (undefined4 *)(*(long *)(param_1 + 0x3260) + *(long *)(param_1 + 0x3258));
  *puVar1 = local_44;
  puVar1[1] = uStack_40;
  *(undefined1 *)(puVar1 + 2) = local_3c;
  *(undefined2 *)((long)puVar1 + 10) = local_3a;
  if ((((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x3278) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x3278) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


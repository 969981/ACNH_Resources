
void FUN_0265d4e0(uint param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar7 = (ulong)param_1;
  lVar2 = FUN_0265d660();
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar2 + 0x28);
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
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_0265d57c;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar2 + 8);
      uStack_50 = *(undefined8 *)(lVar2 + 0x10);
      local_48 = 0x100;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_0265d57c:
  FUN_02747170(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8),param_3,param_4);
  if ((*(long *)(lVar2 + 0x28) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
    local_58 = *(undefined8 *)(lVar2 + 8);
    uStack_50 = *(undefined8 *)(lVar2 + 0x10);
    local_48 = 0x100;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  }
  uVar1 = FUN_02746e10(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8),param_3);
  FUN_020ec080(uVar7,param_2,param_3,uVar1);
  if (*param_2 < 8) {
    if (9 < param_1) {
      uVar7 = 0;
    }
    *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) =
         *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) | 1 << (ulong)(*param_2 & 0x1f);
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


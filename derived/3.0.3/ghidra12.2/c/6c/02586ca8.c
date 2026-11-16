
void FUN_02586ca8(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(byte *)(param_1 + 8) < 8) {
    local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_1 + 8));
    lVar1 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_48,1);
  }
  else {
    if (*(int *)(param_1 + 0xc) == -1) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    lVar1 = FUN_026eec4c();
  }
  if (lVar1 == 0) {
    return;
  }
  lVar5 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar1 = *(long *)(lVar5 + 0x2a958);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar1 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar5 + 0x2a958) == 0) goto LAB_02586da8;
      plVar3 = *(long **)(*(long *)(lVar5 + 0x2a958) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar5 + 0x2a938);
      local_40 = *(undefined8 *)(lVar5 + 0x2a940);
      uStack_38 = 0x80;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_02586da8:
  lVar1 = *(long *)(lVar5 + 0x2a940) + *(long *)(lVar5 + 0x2a938);
  lVar6 = (param_2 & 0xffffffff) * 4;
  *(int *)(lVar1 + lVar6) = *(int *)(lVar1 + lVar6) + 1;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x2a958) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x2a958) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


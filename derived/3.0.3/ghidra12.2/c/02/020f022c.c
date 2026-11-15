
void FUN_020f022c(char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  
  cVar1 = *param_1;
  lVar2 = FUN_0265c3e0((int)cVar1);
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
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_020f02c0;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(undefined **)(lVar2 + 8);
      pcStack_40 = *(char **)(lVar2 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_020f02c0:
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "AbandonedHouse";
  FUN_02749650(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 0x1267c,(int)cVar1,&local_48,2,0);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


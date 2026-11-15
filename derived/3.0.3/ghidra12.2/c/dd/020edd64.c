
void FUN_020edd64(char *param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar3 = FUN_0265c3e0((long)*param_1);
  if (lVar3 == 0) {
    return;
  }
  if ((*(long *)(lVar3 + 0x28) == 0) ||
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x10), puVar4 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar4)();
    uVar2 = uVar2 ^ 1;
  }
  cVar1 = param_1[1];
  if (cVar1 == '\x02') {
    if ((*(long *)(lVar3 + 0x28) != 0) &&
       (plVar5 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar3 + 8);
      uStack_40 = *(undefined8 *)(lVar3 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
    lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x12618;
  }
  else if (cVar1 == '\x01') {
    if ((*(long *)(lVar3 + 0x28) != 0) &&
       (plVar5 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar3 + 8);
      uStack_40 = *(undefined8 *)(lVar3 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
    lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x12644;
  }
  else {
    if (cVar1 != '\0') goto LAB_020edeb0;
    if ((*(long *)(lVar3 + 0x28) != 0) &&
       (plVar5 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar3 + 8);
      uStack_40 = *(undefined8 *)(lVar3 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
    lVar6 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x125ec;
  }
  *(bool *)(lVar6 + 0x29) = param_1[2] != '\0';
LAB_020edeb0:
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}


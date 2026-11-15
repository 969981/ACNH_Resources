
void FUN_020efe70(char *param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar4 = FUN_0265c3e0((long)*param_1);
  if (lVar4 == 0) {
    return;
  }
  if ((*(long *)(lVar4 + 0x28) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x10), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  cVar2 = param_1[0xc];
  if (cVar2 == '\x02') {
    if ((*(long *)(lVar4 + 0x28) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar4 + 8);
      uStack_40 = *(undefined8 *)(lVar4 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
    lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    uVar9 = *(undefined2 *)(param_1 + 4);
    puVar8 = (undefined2 *)(lVar1 + 0x13224);
    puVar7 = (undefined4 *)(lVar1 + 0x13228);
  }
  else if (cVar2 == '\x01') {
    if ((*(long *)(lVar4 + 0x28) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar4 + 8);
      uStack_40 = *(undefined8 *)(lVar4 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
    lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    uVar9 = *(undefined2 *)(param_1 + 4);
    puVar8 = (undefined2 *)(lVar1 + 0x1321c);
    puVar7 = (undefined4 *)(lVar1 + 0x13220);
  }
  else {
    if (cVar2 != '\0') goto LAB_020effec;
    if ((*(long *)(lVar4 + 0x28) != 0) &&
       (plVar6 = *(long **)(*(long *)(lVar4 + 0x28) + 0x20), plVar6 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar4 + 8);
      uStack_40 = *(undefined8 *)(lVar4 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
    lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    uVar9 = *(undefined2 *)(param_1 + 4);
    puVar8 = (undefined2 *)(lVar1 + 0x13214);
    puVar7 = (undefined4 *)(lVar1 + 0x13218);
  }
  *puVar8 = uVar9;
  *(char *)(puVar8 + 1) = param_1[6];
  *(char *)((long)puVar8 + 3) = param_1[7];
  *puVar7 = *(undefined4 *)(param_1 + 8);
LAB_020effec:
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}


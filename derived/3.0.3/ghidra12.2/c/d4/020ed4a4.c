
void FUN_020ed4a4(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar5 = FUN_0265c3e0((long)*param_1);
  if (lVar5 == 0) {
    return;
  }
  if ((*(long *)(lVar5 + 0x28) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x10), puVar6 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar6)();
    uVar4 = uVar4 ^ 1;
  }
  cVar3 = param_1[1];
  if (cVar3 == '\x01') {
    if ((*(long *)(lVar5 + 0x28) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar5 + 8);
      uStack_40 = *(undefined8 *)(lVar5 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
    puVar8 = (undefined2 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x12644);
  }
  else if (cVar3 == '\x02') {
    if ((*(long *)(lVar5 + 0x28) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar5 + 8);
      uStack_40 = *(undefined8 *)(lVar5 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
    puVar8 = (undefined2 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x12618);
  }
  else {
    if (cVar3 != '\x05') goto LAB_020ed65c;
    if ((*(long *)(lVar5 + 0x28) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
      local_48 = *(undefined8 *)(lVar5 + 8);
      uStack_40 = *(undefined8 *)(lVar5 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
    puVar8 = (undefined2 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0x125ec);
  }
  *puVar8 = *(undefined2 *)(param_1 + 4);
  *(char *)(puVar8 + 1) = param_1[6];
  *(char *)((long)puVar8 + 3) = param_1[7];
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    uVar2 = *(undefined8 *)(param_1 + 0x14);
    uVar9 = *(undefined8 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)(puVar8 + 4) = uVar1;
    *(undefined8 *)(puVar8 + 8) = uVar2;
    *(undefined8 *)(puVar8 + 0xc) = uVar9;
  }
  *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(param_1 + 0x28);
  *(char *)(puVar8 + 0x14) = param_1[0x2c];
  *(char *)((long)puVar8 + 0x29) = param_1[0x2d];
  *(char *)((long)puVar8 + 0x2b) = param_1[0x2f];
LAB_020ed65c:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}



void FUN_016c976c(char *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_1 + 4) == -1) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar5 == 0) {
      return;
    }
    lVar5 = lVar5 + 0x70;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar7[0x26] == (long *)0x0) {
      return;
    }
    lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    if (lVar5 == 0) {
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 4);
  puVar1 = &LAB_002057b0 + lVar5;
  if (*param_1 != '\0') {
    puVar1 = (undefined1 *)(lVar5 + 0x20b9e8);
  }
  lVar5 = *(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6f0);
  if (lVar5 == 0) {
    lVar5 = *(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6d0);
    lVar2 = *(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6d8);
    *(undefined1 *)((undefined4 *)(lVar2 + lVar5) + 1) = 0;
    *(undefined4 *)(lVar2 + lVar5) = 0;
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    lVar5 = *(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6f0);
    uVar4 = uVar4 ^ 1;
    if (lVar5 == 0) goto LAB_016c987c;
  }
  plVar6 = *(long **)(lVar5 + 0x20);
  if (plVar6 != (long *)0x0) {
    local_38 = *(undefined8 *)(puVar1 + (long)iVar3 * 0xc40 + 0x6d0);
    local_30 = *(undefined8 *)(puVar1 + (long)iVar3 * 0xc40 + 0x6d8);
    uStack_28 = 5;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
  }
LAB_016c987c:
  lVar5 = *(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6d0);
  lVar2 = *(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6d8);
  *(undefined1 *)((undefined4 *)(lVar2 + lVar5) + 1) = 0;
  *(undefined4 *)(lVar2 + lVar5) = 0;
  if ((((uVar4 & 1) == 0) && (*(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6f0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(puVar1 + (long)iVar3 * 0xc40 + 0x6f0) + 0x18),
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}


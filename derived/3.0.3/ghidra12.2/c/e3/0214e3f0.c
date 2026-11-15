
void FUN_0214e3f0(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)(param_1 + 0x70)) {
    plVar5 = plVar3 + -2;
    do {
      if (*(int *)((long)plVar5 + 4) == 0) {
        if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x98)) goto LAB_0214e468;
        goto LAB_0214e4e0;
      }
      plVar3 = (long *)plVar3[1];
      plVar5 = plVar3 + -2;
    } while (plVar5 != (long *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x98)) {
    plVar3 = (long *)(param_1 + 0x70);
LAB_0214e468:
    puVar4 = *(undefined8 **)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = *puVar4;
    *puVar4 = 0;
    *(undefined1 *)puVar4 = *param_2;
    *(undefined1 *)((long)puVar4 + 1) = param_2[1];
    *(undefined1 *)((long)puVar4 + 2) = param_2[2];
    *(undefined1 *)((long)puVar4 + 3) = param_2[3];
    *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(puVar4 + 1) = param_2[8];
    *(undefined1 *)((long)puVar4 + 9) = param_2[9];
    uVar1 = param_2[10];
    plVar5 = puVar4 + 2;
    *plVar5 = 0;
    puVar4[3] = 0;
    *(undefined1 *)((long)puVar4 + 10) = uVar1;
    lVar6 = *plVar3;
    *plVar3 = (long)plVar5;
    *plVar5 = lVar6;
    puVar4[3] = plVar3;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
LAB_0214e4e0:
  if (*(long *)(param_1 + 0x1f0) == 0) {
    uVar2 = 0x22;
  }
  else {
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 4);
  }
  *(undefined4 *)(param_1 + 0x1fc) = uVar2;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_0214d220(param_1);
  *(undefined1 *)(param_1 + 0x236) = 1;
  return;
}


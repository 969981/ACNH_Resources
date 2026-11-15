
void FUN_0214e6d0(long param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  lVar4 = *(long *)(param_1 + 0x78);
  lVar3 = param_1 + 0x70;
  if (lVar4 == lVar3) {
LAB_0214e7a4:
    if (*(int *)(param_1 + 0x98) <= *(int *)(param_1 + 0x80)) goto LAB_0214e834;
    puVar6 = *(undefined8 **)(param_1 + 0x88);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = *puVar6;
    }
    *puVar6 = 0;
    *(undefined1 *)puVar6 = *param_2;
    *(undefined1 *)((long)puVar6 + 1) = param_2[1];
    *(undefined1 *)((long)puVar6 + 2) = param_2[2];
    *(undefined1 *)((long)puVar6 + 3) = param_2[3];
    *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(puVar6 + 1) = param_2[8];
    *(undefined1 *)((long)puVar6 + 9) = param_2[9];
    uVar1 = param_2[10];
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)((long)puVar6 + 10) = uVar1;
  }
  else {
    lVar5 = 0;
    lVar7 = lVar4 + -0x10;
    do {
      if ((*(int *)(lVar7 + 4) == 7) || (*(char *)(lVar7 + 10) != '\0')) {
        lVar5 = lVar7;
      }
      lVar4 = *(long *)(lVar4 + 8);
      lVar7 = lVar4 + -0x10;
    } while (lVar7 != param_1 + 0x60);
    if (lVar5 == 0) goto LAB_0214e7a4;
    if (*(int *)(param_1 + 0x98) <= *(int *)(param_1 + 0x80)) goto LAB_0214e834;
    puVar6 = *(undefined8 **)(param_1 + 0x88);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = *puVar6;
    }
    *puVar6 = 0;
    *(undefined1 *)puVar6 = *param_2;
    *(undefined1 *)((long)puVar6 + 1) = param_2[1];
    *(undefined1 *)((long)puVar6 + 2) = param_2[2];
    *(undefined1 *)((long)puVar6 + 3) = param_2[3];
    *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined1 *)(puVar6 + 1) = param_2[8];
    *(undefined1 *)((long)puVar6 + 9) = param_2[9];
    uVar1 = param_2[10];
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)((long)puVar6 + 10) = uVar1;
    lVar3 = lVar5 + 0x10;
  }
  puVar8 = *(undefined8 **)(lVar3 + 8);
  *(undefined8 **)(lVar3 + 8) = puVar6 + 2;
  puVar6[2] = lVar3;
  puVar6[3] = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = puVar6 + 2;
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
LAB_0214e834:
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


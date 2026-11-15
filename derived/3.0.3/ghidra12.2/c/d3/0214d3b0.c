
void FUN_0214d3b0(long param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (((param_3 & 1) != 0) && (*(long *)(param_1 + 0x1f0) != 0)) {
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != param_1 + 0x70) {
      lVar6 = lVar3 + -0x10;
      do {
        if (*(int *)(lVar6 + 4) == *(int *)(*(long *)(param_1 + 0x1f0) + 4)) {
          if (*(int *)(param_1 + 0x98) <= *(int *)(param_1 + 0x80)) goto LAB_0214d4a8;
          puVar4 = *(undefined8 **)(param_1 + 0x88);
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x88) = *puVar4;
          }
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
          puVar7 = *(undefined8 **)(lVar3 + 8);
          *(long **)(lVar3 + 8) = plVar5;
          *plVar5 = lVar3;
          puVar4[3] = puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = plVar5;
          }
          goto LAB_0214d49c;
        }
        lVar3 = *(long *)(lVar3 + 8);
        lVar6 = lVar3 + -0x10;
      } while (lVar6 != param_1 + 0x60);
    }
  }
  if (*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x98)) {
    puVar4 = *(undefined8 **)(param_1 + 0x88);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = *puVar4;
    }
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
    puVar7 = *(undefined8 **)(param_1 + 0x78);
    *(long **)(param_1 + 0x78) = plVar5;
    *plVar5 = param_1 + 0x70;
    puVar4[3] = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = plVar5;
    }
LAB_0214d49c:
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  }
LAB_0214d4a8:
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


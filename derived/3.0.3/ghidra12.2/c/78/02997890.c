
void FUN_02997890(long param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined2 *puVar8;
  
  puVar8 = (undefined2 *)*param_2;
  puVar1 = *(undefined2 **)(puVar8 + 0x14);
  if (puVar1 != puVar8 + 0x10) {
    do {
      puVar4 = (undefined8 *)(puVar1 + -4);
      puVar1 = *(undefined2 **)(puVar1 + 4);
      FUN_0299ae60(param_1,*puVar4);
    } while (puVar1 + -4 != puVar8 + 0xc);
  }
  puVar2 = *(undefined1 **)(puVar8 + 0xc);
  *(undefined2 *)(puVar2 + 0x122) = 0xfffe;
  *(undefined8 *)(puVar2 + 0x14) = 0xffffffff00000000;
  puVar2[8] = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar2[0x120] = 0;
  *(undefined8 *)(puVar2 + 0x124) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x28) = 0xffffffff;
  *(undefined4 *)(puVar2 + 300) = 0xffffffff;
  plVar3 = *(long **)(puVar2 + 0x50);
  while (plVar3 != (long *)(puVar2 + 0x48)) {
    plVar5 = (long *)plVar3[1];
    plVar7 = plVar5;
    if (*plVar3 != 0) {
      *(long **)(*plVar3 + 8) = plVar5;
      plVar7 = (long *)plVar3[1];
    }
    if (plVar7 != (long *)0x0) {
      *plVar7 = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(puVar2 + 0x58) = *(int *)(puVar2 + 0x58) + -1;
    plVar3[-1] = *(long *)(puVar2 + 0x60);
    *(long **)(puVar2 + 0x60) = plVar3 + -1;
    plVar3 = plVar5;
  }
  *(undefined4 *)(puVar2 + 0x40) = 0xffffffff;
  *puVar2 = 1;
  *(undefined4 *)(puVar2 + 0x138) = 0;
  *(undefined2 *)(puVar2 + 0x131) = 0x101;
  *(undefined8 *)(puVar2 + 0x140) = 0xffffffffffffffff;
  *(undefined1 *)(puVar8 + 4) = 0;
  *(undefined4 *)(puVar8 + 6) = 0;
  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
  plVar3 = param_2 + 1;
  if (*plVar3 != 0) {
    *(undefined8 *)(*plVar3 + 8) = param_2[2];
  }
  if ((long *)param_2[2] != (long *)0x0) {
    *(long *)param_2[2] = *plVar3;
  }
  *plVar3 = 0;
  param_2[2] = 0;
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
  *param_2 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 **)(param_1 + 0x170) = param_2;
  if (*(int *)(param_1 + 0x138) < *(int *)(param_1 + 0x150)) {
    puVar4 = *(undefined8 **)(param_1 + 0x140);
    plVar3 = (long *)(param_1 + 0x128);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x140) = *puVar4;
    }
    *puVar4 = puVar8;
    puVar4[2] = 0;
    plVar5 = puVar4 + 1;
    *plVar5 = 0;
    lVar6 = *plVar3;
    *plVar3 = (long)plVar5;
    puVar4[2] = plVar3;
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  }
  return;
}


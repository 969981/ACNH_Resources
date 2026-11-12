
void FUN_00962530(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = *(int *)(param_2 + 8) + *(int *)(param_1 + 0x38) * *(int *)(param_2 + 0xc);
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + (long)(int)uVar2 * 0x34);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar2 * 0x34);
  if (*(uint *)(param_1 + 0x58) <= uVar2) {
    puVar5 = (undefined8 *)0x0;
  }
  if (*(uint *)(param_1 + 0x48) <= uVar2) {
    puVar4 = (undefined8 *)0x0;
  }
  if ((*(long *)(param_1 + 0x60) == 0) || (puVar5 == (undefined8 *)0x0)) {
    uVar3 = *puVar4;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
    *param_3 = uVar3;
    *(undefined1 *)(param_3 + 6) = *(undefined1 *)(puVar4 + 6);
    uVar3 = *(undefined8 *)((long)puVar4 + 0xc);
    *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)((long)puVar4 + 0x14);
    *(undefined8 *)((long)param_3 + 0xc) = uVar3;
    *(undefined1 *)((long)param_3 + 0x31) = *(undefined1 *)((long)puVar4 + 0x31);
    uVar3 = puVar4[3];
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar4 + 4);
    param_3[3] = uVar3;
    *(undefined1 *)((long)param_3 + 0x32) = *(undefined1 *)((long)puVar4 + 0x32);
    uVar3 = *(undefined8 *)((long)puVar4 + 0x24);
    *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)((long)puVar4 + 0x2c);
    *(undefined8 *)((long)param_3 + 0x24) = uVar3;
    goto LAB_009626f0;
  }
  if (*(char *)(puVar5 + 6) == '\a') {
    uVar3 = *puVar4;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
    *param_3 = uVar3;
LAB_0096260c:
    *(undefined1 *)(param_3 + 6) = *(undefined1 *)(puVar4 + 6);
  }
  else {
    uVar3 = *puVar5;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar5 + 1);
    *param_3 = uVar3;
    cVar1 = *(char *)(puVar5 + 6);
    *(char *)(param_3 + 6) = cVar1;
    if (cVar1 == '\t') goto LAB_0096260c;
  }
  if (*(char *)((long)puVar5 + 0x31) == '\a') {
    uVar3 = *(undefined8 *)((long)puVar4 + 0xc);
    *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)((long)puVar4 + 0x14);
    *(undefined8 *)((long)param_3 + 0xc) = uVar3;
LAB_00962658:
    *(undefined1 *)((long)param_3 + 0x31) = *(undefined1 *)((long)puVar4 + 0x31);
  }
  else {
    uVar3 = *(undefined8 *)((long)puVar5 + 0xc);
    *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)((long)puVar5 + 0x14);
    *(undefined8 *)((long)param_3 + 0xc) = uVar3;
    cVar1 = *(char *)((long)puVar5 + 0x31);
    *(char *)((long)param_3 + 0x31) = cVar1;
    if (cVar1 == '\t') goto LAB_00962658;
  }
  if (*(char *)((long)puVar5 + 0x32) == '\a') {
    uVar3 = puVar4[3];
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar4 + 4);
    param_3[3] = uVar3;
LAB_009626a4:
    *(undefined1 *)((long)param_3 + 0x32) = *(undefined1 *)((long)puVar4 + 0x32);
  }
  else {
    uVar3 = puVar5[3];
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar5 + 4);
    param_3[3] = uVar3;
    cVar1 = *(char *)((long)puVar5 + 0x32);
    *(char *)((long)param_3 + 0x32) = cVar1;
    if (cVar1 == '\t') goto LAB_009626a4;
  }
  if (*(char *)((long)puVar5 + 0x33) == '\a') {
    uVar3 = *(undefined8 *)((long)puVar4 + 0x24);
    *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)((long)puVar4 + 0x2c);
    *(undefined8 *)((long)param_3 + 0x24) = uVar3;
  }
  else {
    uVar3 = *(undefined8 *)((long)puVar5 + 0x24);
    *(undefined4 *)((long)param_3 + 0x2c) = *(undefined4 *)((long)puVar5 + 0x2c);
    *(undefined8 *)((long)param_3 + 0x24) = uVar3;
    cVar1 = *(char *)((long)puVar5 + 0x33);
    *(char *)((long)param_3 + 0x33) = cVar1;
    if (cVar1 != '\t') {
      return;
    }
  }
LAB_009626f0:
  *(undefined1 *)((long)param_3 + 0x33) = *(undefined1 *)((long)puVar4 + 0x33);
  return;
}


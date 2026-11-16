
void FUN_026961a8(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  iVar1 = FUN_02749340(param_1 + 0x1267c,&DAT_055691b8);
  if ((0 < iVar1) && (*(int *)(param_2 + 0x10) < *(int *)(param_2 + 0x28))) {
    puVar2 = *(undefined8 **)(param_2 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 0x18) = *puVar2;
    }
    *(undefined1 *)(puVar2 + 3) = 0;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffffffffffff;
    plVar3 = puVar2 + 5;
    *plVar3 = 0;
    puVar2[2] = 0xffffffffffffffff;
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 4) = 1;
    puVar2[6] = 0;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(long **)(param_2 + 8) = plVar3;
    *plVar3 = param_2;
    puVar2[6] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = plVar3;
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  iVar1 = FUN_02749340(param_1 + 0x1267c,&DAT_055691c8);
  if ((0 < iVar1) && (*(int *)(param_2 + 0x10) < *(int *)(param_2 + 0x28))) {
    puVar2 = *(undefined8 **)(param_2 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 0x18) = *puVar2;
    }
    *(undefined1 *)(puVar2 + 3) = 0;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffffffffffff;
    plVar3 = puVar2 + 5;
    *plVar3 = 0;
    puVar2[2] = 0xffffffffffffffff;
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 4) = 2;
    puVar2[6] = 0;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(long **)(param_2 + 8) = plVar3;
    *plVar3 = param_2;
    puVar2[6] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = plVar3;
    }
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  }
  return;
}


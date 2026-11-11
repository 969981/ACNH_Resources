
void FUN_00400eb0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_180 [320];
  
  puVar5 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  while (puVar4 != puVar5) {
    puVar4 = puVar4 + -0x28;
    (**(code **)*puVar4)(puVar4);
  }
  param_2[1] = (long)puVar5;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar3 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  *(long *)(param_1 + 0x18) = lVar2 + 4;
  FUN_00409330(param_2,iVar3);
  do {
    if (iVar3 == 0) {
      return;
    }
    while( true ) {
      if (*(char *)(param_1 + 8) != '\0') {
        return;
      }
      FUN_00405eb8(auStack_180);
      FUN_003ffe54(param_1,auStack_180);
      puVar5 = (undefined8 *)param_2[1];
      if (*(char *)(param_1 + 8) != '\0') {
        puVar4 = (undefined8 *)*param_2;
        if (puVar5 != puVar4) {
          do {
            puVar5 = puVar5 + -0x28;
            (**(code **)*puVar5)(puVar5);
          } while (puVar5 != puVar4);
          param_2[1] = (long)puVar4;
        }
        FUN_01c67860(auStack_180);
        return;
      }
      if (puVar5 == (undefined8 *)param_2[2]) break;
      FUN_00405930(puVar5);
      *puVar5 = &PTR_FUN_04a42788;
      param_2[1] = (long)(puVar5 + 0x28);
      FUN_01c67860(auStack_180);
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
    }
    FUN_00409480(param_2,auStack_180);
    FUN_01c67860(auStack_180);
    iVar3 = iVar3 + -1;
  } while( true );
}


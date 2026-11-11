
void FUN_0057a360(long param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      puVar1 = (undefined2 *)(*(long *)(param_1 + 0x48) + lVar4);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      FUN_005164e0(param_2,*(undefined4 *)(param_1 + 0x58),uVar2,0);
      FUN_00516520(param_2,*(undefined4 *)(param_1 + 0x5c),uVar3,0);
      if (*(char *)(param_1 + 0x60) != '\0') {
        FUN_005164e0(param_2,*(undefined4 *)(param_1 + 0x58),uVar2,1);
        FUN_00516520(param_2,*(undefined4 *)(param_1 + 0x5c),uVar3,1);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 4;
    } while (lVar5 < *(int *)(param_1 + 0x50));
  }
  return;
}


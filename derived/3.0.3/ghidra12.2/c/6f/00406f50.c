
void FUN_00406f50(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *local_50;
  undefined1 local_48;
  
  puVar1 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[1];
  while (puVar5 != puVar1) {
    puVar5 = puVar5 + -4;
    (**(code **)*puVar5)(puVar5);
  }
  param_2[1] = (long)puVar1;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar2 + 0x18) - lVar3) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar4 = *(int *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) + lVar3);
  *(long *)(param_1 + 0x18) = lVar3 + 4;
  FUN_004070b0(param_2,iVar4);
  while( true ) {
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(param_1 + 8) != '\0') break;
    local_48 = 0;
    local_50 = &DAT_04851a00;
    FUN_0040156c(param_1,&local_50);
    if (*(char *)(param_1 + 8) != '\0') {
      puVar1 = (undefined8 *)*param_2;
      puVar5 = (undefined8 *)param_2[1];
      if (puVar5 == puVar1) {
        return;
      }
      do {
        puVar5 = puVar5 + -4;
        (**(code **)*puVar5)(puVar5);
      } while (puVar5 != puVar1);
      param_2[1] = (long)puVar1;
      return;
    }
    FUN_004071b0(param_2,&local_50);
    iVar4 = iVar4 + -1;
  }
  return;
}


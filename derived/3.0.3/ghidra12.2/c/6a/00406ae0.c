
void FUN_00406ae0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined *local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar3 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[1];
  while (puVar5 != puVar3) {
    puVar5 = puVar5 + -4;
    (**(code **)*puVar5)(puVar5);
  }
  param_2[1] = (long)puVar3;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  iVar4 = *(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
  *(long *)(param_1 + 0x18) = lVar2 + 4;
  FUN_00406c90(param_2,iVar4);
  do {
    if (iVar4 == 0) {
      return;
    }
    while( true ) {
      if (*(char *)(param_1 + 8) != '\0') {
        return;
      }
      local_48 = 0;
      local_50 = &DAT_04851720;
      FUN_00401c24(param_1,&local_50);
      puVar3 = (undefined8 *)param_2[1];
      if (*(char *)(param_1 + 8) != '\0') {
        puVar5 = (undefined8 *)*param_2;
        if (puVar3 == puVar5) {
          return;
        }
        do {
          puVar3 = puVar3 + -4;
          (**(code **)*puVar3)(puVar3);
        } while (puVar3 != puVar5);
        param_2[1] = (long)puVar5;
        return;
      }
      if (puVar3 == (undefined8 *)param_2[2]) break;
      *(undefined1 *)(puVar3 + 1) = local_48;
      *(undefined4 *)((long)puVar3 + 0xc) = local_44;
      puVar3[2] = local_40;
      *(undefined4 *)(puVar3 + 3) = local_38;
      *(undefined4 *)((long)puVar3 + 0x1c) = local_34;
      *puVar3 = &DAT_04851720;
      param_2[1] = (long)(puVar3 + 4);
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        return;
      }
    }
    FUN_00406dc0(param_2,&local_50);
    iVar4 = iVar4 + -1;
  } while( true );
}


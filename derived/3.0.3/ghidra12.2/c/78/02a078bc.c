
void FUN_02a078bc(long param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  lVar1 = *param_2;
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x30) = param_2[1];
  if (((lVar1 == 0) && (DAT_05aebb78 != 0)) && (*(long *)(DAT_05aebb78 + 0x28) != 0)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(DAT_05aebb78 + 0x28) + 0x88);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0xe8) == '\0') {
    FUN_02a08d44(param_1,lVar1 + 0xf8);
    uVar4 = *(undefined4 *)(lVar1 + 0x104);
    puVar2 = (undefined4 *)(lVar1 + 0x114);
    puVar3 = (undefined4 *)(lVar1 + 0x124);
  }
  else {
    FUN_02a08d44(param_1,lVar1 + 0x158);
    uVar4 = *(undefined4 *)(lVar1 + 0x164);
    puVar2 = (undefined4 *)(lVar1 + 0x174);
    puVar3 = (undefined4 *)(lVar1 + 0x184);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = *puVar2;
  *(undefined4 *)(param_1 + 0x18) = *puVar3;
  *(int *)(param_1 + 0x38) = (int)param_2[2];
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x14);
  *(char *)(param_1 + 0x40) = (char)param_2[3];
  return;
}


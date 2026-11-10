
void FUN_00288dd0(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((*(ushort *)(param_1 + 0xd0) & 1) == 0) {
    lVar5 = 0;
    lVar4 = *(long *)(param_1 + 0x78);
    uVar2 = *(ushort *)(param_1 + 0xd0) | 2;
    *(ushort *)(param_1 + 0xd0) = uVar2;
    if (lVar4 == param_1 + 0x70) goto LAB_00288e9c;
  }
  else {
    lVar5 = param_1 + 0x90;
    FUN_00290438(lVar5);
    lVar4 = *(long *)(param_1 + 0x78);
    uVar2 = *(ushort *)(param_1 + 0xd0) | 2;
    *(ushort *)(param_1 + 0xd0) = uVar2;
    if (lVar4 == param_1 + 0x70) goto LAB_00288e9c;
  }
  iVar3 = *(int *)(param_1 + 0x84);
  lVar6 = (long)iVar3;
  puVar1 = (undefined8 *)(lVar4 - lVar6);
  do {
    while (puVar1[1] == 0) {
      puVar1 = (undefined8 *)(*(long *)((long)puVar1 + (long)iVar3 + 8) + (long)-iVar3);
      if (puVar1 == (undefined8 *)((long)-(int)lVar6 + param_1 + 0x70)) goto LAB_00288e98;
    }
    (**(code **)*puVar1)();
    iVar3 = *(int *)(param_1 + 0x84);
    lVar6 = (long)iVar3;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar6);
  } while (puVar1 != (undefined8 *)((param_1 + 0x70) - lVar6));
LAB_00288e98:
  uVar2 = *(ushort *)(param_1 + 0xd0);
LAB_00288e9c:
  *(ushort *)(param_1 + 0xd0) = uVar2 & 0xfffd;
  FUN_0028a330(param_1);
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 != 0) {
    FUN_00290438(&DAT_04c608c8);
    if ((*(ushort *)(lVar4 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar4 + 0x90;
      FUN_00290438(lVar6);
    }
    FUN_002860e8(*(int *)(lVar4 + 0x5c) + param_1);
    *(int *)(lVar4 + 0x58) = *(int *)(lVar4 + 0x58) + -1;
    if (lVar6 != 0) {
      FUN_00290440(lVar6);
    }
    FUN_00290440(&DAT_04c608c8);
  }
  if (lVar5 == 0) {
    return;
  }
  FUN_00290440(lVar5);
  return;
}


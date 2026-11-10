
long FUN_00286c9c(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = FUN_002870b0(param_1,param_2,*(undefined4 *)(param_1 + 0xd4));
  if (lVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0xec);
    lVar5 = *(long *)(lVar4 + 0x18);
    uVar2 = *(ushort *)(lVar4 + 0x12);
    *(long *)(lVar4 + 0x18) = param_2;
    FUN_002860e8(iVar3 + lVar4);
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
    if (*(int *)(param_1 + 0x88) == 1) {
      FUN_002860d0();
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    else {
      FUN_002860b8(param_1 + 0xf0,*(int *)(param_1 + 0x104) + lVar4);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    if (0x20 < (ulong)(lVar5 - param_2)) {
      lVar1 = param_2 + lVar4 + (ulong)uVar2;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined4 *)(lVar1 + 0x30) = 0;
      *(ulong *)(lVar1 + 0x38) = (lVar5 - param_2) - 0x20;
      FUN_00286560(param_1);
      return lVar4;
    }
    if (lVar5 != param_2) {
      *(long *)(lVar4 + 0x18) = lVar5;
    }
  }
  return lVar4;
}


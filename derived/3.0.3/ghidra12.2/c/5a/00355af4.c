
long FUN_00355af4(long param_1,undefined4 param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x1880) == 0) {
    iVar3 = 0;
  }
  else {
    lVar5 = param_1 + (ulong)(*(int *)(param_1 + 0x1880) - 1) * 0x18;
    uVar2 = *(ushort *)(lVar5 + 0x90);
    iVar3 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)(lVar5 + 0x94));
    iVar3 = (uint)uVar2 + iVar3 + 2;
  }
  iVar4 = (**(code **)(param_1 + 0x1be8))(param_2);
  if ((uint)(iVar4 + iVar3) < *(uint *)(param_1 + 0x2c)) {
    uVar1 = *(uint *)(param_1 + 0x1880);
    lVar5 = param_1 + (ulong)uVar1 * 0x18;
    *(char *)(lVar5 + 0x95) = (char)uVar1;
    *(undefined2 *)(lVar5 + 0x92) = 0;
    *(short *)(lVar5 + 0x90) = (short)iVar3;
    *(char *)(lVar5 + 0x94) = (char)param_2;
    *(uint *)(param_1 + 0x1880) = uVar1 + 1;
    return lVar5 + 0x80;
  }
  return 0;
}


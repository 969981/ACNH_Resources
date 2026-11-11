
void FUN_0039cac0(undefined4 param_1,long param_2,long param_3,short *param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  ushort *puVar4;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 0x34);
  if (uVar2 != 0) {
    iVar3 = 0;
    puVar4 = (ushort *)(*(long *)(param_2 + 0x10) + 8);
    do {
      if ((*param_4 != -1) && ((ulong)*puVar4 != 0xffff)) {
        uVar1 = FUN_0039dcf4(param_1,*(long *)(param_2 + 0x18) + (ulong)*puVar4 * 0x30,
                             param_5 + (long)iVar3 * 0xc);
        *(undefined4 *)(param_3 + (long)iVar3 * 4) = uVar1;
        iVar3 = iVar3 + 1;
      }
      uVar2 = uVar2 - 1;
      puVar4 = puVar4 + 8;
      param_4 = param_4 + 1;
    } while (uVar2 != 0);
  }
  return;
}


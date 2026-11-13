
bool FUN_0124ee28(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  long lVar6;
  
  iVar1 = FUN_0123d070(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0 || iVar1 == 0xfffe) goto LAB_0124ee5c;
  puVar5 = (undefined2 *)(param_1 + 8);
  *puVar5 = (short)iVar1;
  lVar6 = *(long *)PTR_DAT_04bbbc68;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0xb0) == 0)) ||
     (*(long *)(*(long *)(lVar6 + 0xb0) + 8) == 0)) {
LAB_0124eed0:
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_0277d6c4(puVar5);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if (*(uint *)(lVar6 + 0x1d8) <= uVar2) goto LAB_0124eed0;
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  iVar3 = FUN_0123db50(puVar5);
  if (iVar3 - 0x12U < 6) {
    iVar3 = FUN_0123db50(puVar5,*(undefined8 *)(param_1 + 0x10));
    if (iVar3 - 0x12U < 6) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffff1f;
    }
    else {
      FUN_0123db50(puVar5,*(undefined8 *)(param_1 + 0x10));
    }
  }
LAB_0124ee5c:
  return iVar1 != 0xfffe && iVar1 != 0;
}


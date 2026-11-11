
undefined8 FUN_0039f48c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_04bd0028;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + *(long *)PTR_DAT_04bd0028);
  if ((lVar3 == 0) || (iVar2 = FUN_0034d730(*(undefined8 *)(lVar3 + 0x68),param_2), iVar2 != 0)) {
    uVar5 = 0;
    uVar4 = (uint)*(ushort *)(param_1 + 0x34);
    if ((*(ushort *)(param_1 + 0x34) >> 1 & 1) == 0) goto LAB_0039f51c;
  }
  else {
    uVar5 = 1;
    uVar4 = *(ushort *)(param_1 + 0x34) | 6;
    *(short *)(param_1 + 0x34) = (short)uVar4;
    if ((uVar4 >> 1 & 1) == 0) goto LAB_0039f51c;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if ((uVar4 >> 2 & 1) == 0) {
    if ((uVar4 >> 4 & 1) != 0) goto LAB_0039f554;
LAB_0039f504:
    if ((uVar4 >> 3 & 1) == 0) goto LAB_0039f51c;
  }
  else {
    FUN_0034e324(*(undefined8 *)(*(long *)(lVar3 + *(long *)puVar1) + 0x68),param_2);
    uVar4 = (uint)*(ushort *)(param_1 + 0x34);
    if ((*(ushort *)(param_1 + 0x34) >> 4 & 1) == 0) goto LAB_0039f504;
LAB_0039f554:
    FUN_0034e324(*(undefined8 *)(*(long *)(lVar3 + *(long *)(puVar1 + 8)) + 0x68),param_2);
    if ((*(ushort *)(param_1 + 0x34) >> 3 & 1) == 0) goto LAB_0039f51c;
  }
  FUN_0034e324(*(undefined8 *)(*(long *)(lVar3 + *(long *)(puVar1 + 0x10)) + 0x68),param_2);
LAB_0039f51c:
  *(undefined2 *)(param_1 + 0x34) = 0;
  return uVar5;
}


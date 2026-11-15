
byte FUN_01f118e8(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar5 = FUN_01f09424();
  if ((uVar5 & 1) == 0) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x77f4);
  iVar2 = *(int *)(param_1 + 0x77b0);
  if (iVar1 == 0x3c) {
LAB_01f11924:
    bVar3 = (*(ushort *)(param_1 + 0xaf64) & 0x40) == 0;
    bVar6 = false;
  }
  else {
    if (iVar2 == 0x3c) {
      bVar6 = false;
    }
    else {
      if (iVar1 == 0x10) goto LAB_01f11924;
      bVar6 = iVar2 != 0x10 && (iVar1 != 0x3e && iVar2 != 0x3e);
    }
    bVar3 = (*(ushort *)(param_1 + 0xaf64) & 0x40) == 0;
    if (iVar1 == 0x3d) {
      bVar4 = true;
      goto LAB_01f1198c;
    }
  }
  bVar4 = iVar2 == 0x3d;
LAB_01f1198c:
  return bVar4 | (bVar3 | bVar6) ^ 1U;
}



void FUN_01ad6844(long param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = FUN_0277d6c4(param_1 + 8);
  if ((iVar3 == 0xac5) || (iVar3 = FUN_0277d6c4(param_1 + 8), iVar3 == 0x14ed)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    bVar2 = *param_2;
    *(uint *)(param_1 + 0xc) = uVar1 & 0xffffff00 | (uint)bVar2;
    *(uint *)(param_1 + 0xc) = uVar1 & 0xffff0000 | (uint)CONCAT11(param_2[1],bVar2);
  }
  return;
}


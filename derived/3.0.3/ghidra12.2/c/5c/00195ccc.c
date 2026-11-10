
void FUN_00195ccc(long param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 7) {
    pbVar3 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar3 = param_2;
  }
  else {
    pbVar3 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    bVar2 = *pbVar3;
    pbVar3 = (byte *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *pbVar3 = bVar2 | param_2 >> (ulong)(7U - iVar1 & 0x1f);
    pcVar4 = (char *)FUN_001939b4(*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18) + 1);
    *pcVar4 = param_2 << (ulong)(iVar1 + 1U & 0x1f);
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
  return;
}


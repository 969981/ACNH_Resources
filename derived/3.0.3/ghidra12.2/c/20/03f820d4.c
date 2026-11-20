
void FUN_03f820d4(long param_1)

{
  long lVar1;
  ushort *puVar2;
  int iVar3;
  byte bVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  
  puVar2 = (ushort *)(param_1 + 0x34e0b4);
  if (*(char *)(param_1 + 0x34e0f4) != '\0') {
    return;
  }
  iVar5 = (int)*(short *)(param_1 + ((ulong)*(ushort *)(param_1 + 0x34e0b6) & 0xff) * 0x20 +
                          (ulong)(*puVar2 >> 0xc) * 2 + 0x3861b8);
  iVar3 = iVar5 + 0x600;
  if ((*puVar2 & 0xfe00) != 0x4000 || (*(ushort *)(param_1 + 0x34e0b6) & 0x40) != 0) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x34e0bc) = iVar3 + *(int *)(param_1 + 0x34e0bc);
  bVar4 = FUN_03f4bda8();
  *(byte *)(param_1 + 0x34e0b8) = bVar4;
  *puVar2 = *puVar2 + 1;
  lVar1 = param_1 + (ulong)bVar4 * 0x10;
  UNRECOVERED_JUMPTABLE = *(code **)(&LAB_003cace8 + lVar1);
  if ((*(ulong *)(&LAB_003cacf0 + lVar1) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(param_1 + ((long)*(ulong *)(&LAB_003cacf0 + lVar1) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x03f82184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


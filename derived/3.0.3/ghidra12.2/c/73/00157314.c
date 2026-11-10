
void FUN_00157314(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  if ((*(long *)(param_1 + 0x550) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 0x550) + 0x68), uVar1 != 0)) {
    local_30 = 4;
    local_38 = 0x6500004e21;
    local_28 = (ulong)uVar1;
    iVar2 = nnsocketResolverSetOption(&local_38);
    while ((iVar2 == -1 && (iVar2 = nnsocketGetLastErrno(), iVar2 == 0xb))) {
      nnosSleepThread(10000000);
      iVar2 = nnsocketResolverSetOption(&local_38);
    }
  }
  FUN_001573a4(param_1 + 0x530);
  return;
}


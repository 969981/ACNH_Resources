
void FUN_01395094(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((((*(long *)(param_1 + 0x118) != 0 || *(long *)(param_1 + 0x110) != 0) &&
       ((*(byte *)(param_1 + 0x120) & 1) != 0)) &&
      (*(long *)(param_1 + 0x170) != 0 || *(long *)(param_1 + 0x168) != 0)) &&
     (*(int *)(param_1 + 0x124) - 0x1aU < 3)) {
    FUN_0138e0a0(param_1 + 0x108);
  }
  if ((iVar2 != 1) || ((*(byte *)(param_1 + 0x28) >> 1 & 1) != 0)) {
    return;
  }
  FUN_013951c0(param_1);
  if (((*(long **)(param_1 + 0x58) != (long *)0x0) &&
      (lVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar4 != 0)) &&
     ((*(long **)(param_1 + 0x58) != (long *)0x0 &&
      (lVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar5 != 0)))) {
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar7 + 0x473);
    pcVar6 = PTR_DAT_04bc1220;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar6 = (char *)(lVar7 + 0x473);
      }
    }
    if ((*(char *)(lVar5 + 0x16) == *pcVar6) && (*(char *)(lVar4 + 8) < '\0')) {
      return;
    }
  }
  FUN_0139534c(param_1);
  return;
}


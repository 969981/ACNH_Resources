
bool FUN_02874a88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
LAB_02874b08:
    uVar3 = FUN_0277d6c4(param_1 + 8);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        uVar4 = FUN_0277d7b4(param_1 + 8,param_2);
        lVar5 = 1;
        if ((uVar4 & 1) == 0) {
          return true;
        }
        goto LAB_02874b64;
      }
    }
    bVar2 = true;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02874b08;
    uVar4 = FUN_0277d7b4(param_1,param_2);
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)puVar1;
      goto LAB_02874b08;
    }
    lVar5 = 0;
LAB_02874b64:
    bVar2 = *(char *)(param_1 + lVar5 + 0x10) != '\0';
  }
  return bVar2;
}


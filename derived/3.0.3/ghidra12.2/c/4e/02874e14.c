
long FUN_02874e14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
LAB_02874e94:
    uVar2 = FUN_0277d6c4(param_1 + 8);
    if (*(long *)puVar1 == 0) goto LAB_02874f0c;
    lVar4 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if (((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
        (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) ||
       (uVar3 = FUN_0277d7b4(param_1 + 8,param_2), (uVar3 & 1) == 0)) goto LAB_02874f0c;
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((*(uint *)(lVar4 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02874e94;
    uVar3 = FUN_0277d7b4(param_1,param_2);
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)puVar1;
      goto LAB_02874e94;
    }
    lVar4 = 0;
  }
  if (*(char *)(param_1 + lVar4 + 0x10) != '\0') {
    param_1 = param_1 + lVar4 * 0x38;
  }
LAB_02874f0c:
  return param_1 + 0x14;
}


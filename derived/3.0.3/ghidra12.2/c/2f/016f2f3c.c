
undefined8 FUN_016f2f3c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x90);
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5b58);
    }
    uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb5b50);
    if (((uVar5 & 1) != 0) && (lVar6 = plVar7[0x4f], (*(byte *)(lVar6 + 0x18) >> 1 & 1) != 0)) {
      uVar3 = FUN_006f0400(*(float *)(lVar6 + 0xe8) - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                           *(float *)(lVar6 + 0xf0) - *(float *)(*(long *)(param_1 + 0x68) + 0x280))
      ;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
      if (uVar3 - uVar2 != 0) {
        uVar1 = uVar3 - uVar2;
        if (uVar3 <= uVar2) {
          uVar1 = uVar2 - uVar3;
        }
        uVar2 = -uVar1;
        if (uVar1 < 0x80000001) {
          uVar2 = uVar1;
        }
        if (60.0 <= (float)uVar2 * 8.381903e-08) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


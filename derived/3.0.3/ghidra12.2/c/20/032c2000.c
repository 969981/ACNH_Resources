
void FUN_032c2000(long param_1)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  while (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x18);
    FUN_032c2000();
  }
  if (0 < (int)*(uint *)(DAT_0572b7f0 + 4)) {
    plVar1 = (long *)(DAT_0572b7f0 + 8);
    uVar6 = 0;
    plVar5 = plVar1;
    do {
      plVar2 = plVar5;
      if (0xf < uVar6) {
        plVar2 = plVar1;
      }
      if (*(long *)(*plVar2 + 0x30) == param_1) {
        if (0xf < (uint)uVar6) {
          plVar5 = plVar1;
        }
        if (*(char *)(*plVar5 + 4) == '\0') {
          uVar3 = *(ushort *)(param_1 + 0x50) & 0xfffb;
        }
        else {
          uVar3 = *(ushort *)(param_1 + 0x50) | 4;
        }
        *(ushort *)(param_1 + 0x50) = uVar3;
        FUN_032c2300(param_1,uVar6 & 0xffffffff);
        FUN_032c29e0(param_1,uVar6 & 0xffffffff);
        FUN_032c2b24(param_1,uVar6 & 0xffffffff);
        return;
      }
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (*(uint *)(DAT_0572b7f0 + 4) != uVar6);
  }
  FUN_032c2100(param_1);
  return;
}


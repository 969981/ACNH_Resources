
void FUN_00286560(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar3 = param_1 + 0xd8;
  lVar2 = (long)*(int *)(param_1 + 0xec);
  if (*(long *)(param_1 + 0xe0) == lVar3) {
    uVar4 = 0;
LAB_00286598:
    if ((*(int *)(param_1 + 0xe8) != 0) &&
       (lVar1 = *(long *)(uVar4 + 0x18) + 0x20, lVar1 + uVar4 + *(ushort *)(uVar4 + 0x12) == param_2
       )) {
      *(ulong *)(uVar4 + 0x18) =
           lVar1 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
      return;
    }
  }
  else {
    uVar5 = *(long *)(param_1 + 0xe0) - lVar2;
    if (param_2 < uVar5) {
      uVar4 = 0;
    }
    else {
      do {
        uVar4 = uVar5;
        uVar5 = *(long *)(uVar4 + lVar2 + 8) - lVar2;
        if (uVar5 == lVar3 - lVar2) goto LAB_00286598;
      } while (uVar5 <= param_2);
    }
    if (uVar4 == 0) {
      lVar3 = param_2 + *(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
    }
    else {
      lVar3 = *(long *)(uVar4 + 0x18) + 0x20;
      if (lVar3 + uVar4 + *(ushort *)(uVar4 + 0x12) == param_2) {
        lVar3 = lVar3 + (ulong)*(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
        *(long *)(uVar4 + 0x18) = lVar3;
        if (uVar5 != uVar4 + *(ushort *)(uVar4 + 0x12) + lVar3 + 0x20) {
          return;
        }
        plVar6 = (long *)(uVar4 + 0x18);
        goto LAB_002866f0;
      }
      lVar3 = param_2 + *(ushort *)(param_2 + 0x12) + *(long *)(param_2 + 0x18);
    }
    if (uVar5 == lVar3 + 0x20U) {
      plVar6 = (long *)(param_2 + 0x18);
      FUN_002860d0(uVar5 + lVar2,param_2 + lVar2);
      lVar2 = (long)*(int *)(param_1 + 0xec);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      lVar3 = *plVar6;
LAB_002866f0:
      *plVar6 = lVar3 + (ulong)*(ushort *)(uVar5 + 0x12) + *(long *)(uVar5 + 0x18) + 0x20;
      FUN_002860e8(uVar5 + lVar2);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
      return;
    }
    lVar3 = uVar5 + lVar2;
  }
  FUN_002860d0(lVar3,param_2 + lVar2);
  *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
  return;
}



void FUN_003ad4e0(long param_1,undefined4 param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(short *)(param_1 + 0x30) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + lVar3);
      if ((*(char *)(*plVar1 + 0x5a) == '\0' || *(char *)(param_1 + 0x88) != '\0') &&
         (*(char *)((long)plVar1 + 0xd) == '\0')) {
        FUN_003af6a0(plVar1,0,lVar5 + (ulong)*(ushort *)(*plVar1 + 0x54) * 0x40,param_2);
        uVar2 = *(uint *)(plVar1 + 1);
      }
      else {
        uVar2 = *(uint *)(plVar1 + 1);
      }
      if (((uVar2 ^ 0xffffffff) & 0xc) == 0) {
        FUN_003ae8d0(plVar1,param_2);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x70;
    } while (uVar4 < *(ushort *)(param_1 + 0x30));
  }
  return;
}


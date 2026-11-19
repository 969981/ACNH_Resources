
void FUN_03a64d80(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((((*(long *)(param_1 + 0x2a0) != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x1580) != '\0'))
      && (*(char *)(*(long *)(param_1 + 8) + 0x610) != '\0')) &&
     ((*(byte *)(*(long *)(param_1 + 0x2a0) + 0x1e4) >> 1 & 1) != 0)) {
    uVar3 = (uint)param_3;
    uVar1 = uVar3;
    if (*(uint *)(param_4 + 8) <= uVar3) {
      uVar1 = 0;
    }
    FUN_03a6a0d0(*(undefined8 *)(param_1 + 0x290),param_2,param_3,
                 *(long *)(param_4 + 0x10) + (long)(int)uVar1 * 0x23c0 +
                 (ulong)(*(int *)(param_5 + 0x488) == 1) * 0x7c0 + 0x610,param_6);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x2a0) + 0x220);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar6 < *(uint *)(*(long *)(param_1 + 0x2a0) + 0x220)) {
          uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x2a0) + 0x228) + uVar6 * 8);
        }
        else {
          uVar4 = 0;
        }
        uVar2 = uVar3;
        if (*(uint *)(param_4 + 8) <= uVar3) {
          uVar2 = 0;
        }
        lVar5 = *(long *)(param_4 + 0x10) + (long)(int)uVar2 * 0x23c0 +
                (ulong)(*(int *)(*(long *)(param_1 + 0x290) + 0x488) == 1) * 0x7c0;
        FUN_03a6a390(*(long *)(param_1 + 0x290),param_2,param_3 & 0xffffffff,lVar5 + 0x610,
                     lVar5 + 0x7e8,lVar5 + 0x8c8,uVar4,1);
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  return;
}



void FUN_02a061d0(long param_1,undefined2 param_2,short param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  short *psVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x18);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      uVar1 = uVar4;
      if (*(uint *)(param_1 + 0x10) <= uVar4) {
        uVar1 = 0;
      }
      if ((*(short *)(lVar3 + (ulong)uVar1 * 0x18 + 2) != 0) &&
         (psVar5 = (short *)(lVar3 + (ulong)uVar1 * 0x18), param_3 == *psVar5)) goto LAB_02a0624c;
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
    uVar2 = 0;
  }
  psVar5 = (short *)(lVar3 + (long)(int)uVar2 * 0x18);
  psVar5[1] = 0;
  *psVar5 = param_3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
LAB_02a0624c:
  uVar2 = (uint)(ushort)psVar5[1];
  if (*(uint *)(psVar5 + 4) <= (uint)(ushort)psVar5[1]) {
    uVar2 = 0;
  }
  *(undefined2 *)(*(long *)(psVar5 + 8) + (ulong)uVar2 * 2) = param_2;
  psVar5[1] = psVar5[1] + 1;
  return;
}


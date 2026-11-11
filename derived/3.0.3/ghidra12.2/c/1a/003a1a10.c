
void FUN_003a1a10(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((ulong)*(ushort *)(param_1 + 0x4c) != 0) {
    memset(*(void **)(param_1 + 0x20),0xff,(ulong)*(ushort *)(param_1 + 0x4c) << 1);
  }
  uVar2 = *(uint *)(param_1 + 4);
  if ((uVar2 & 1) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x4c);
    if ((ulong)uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar5 = *(long *)(param_1 + 0x28) + uVar4 * 0x38;
        uVar3 = (ulong)*(byte *)(lVar5 + 0x2e);
        if (uVar3 != 0) {
          lVar6 = 0;
          lVar7 = uVar3 * 0x30;
          do {
            while ((*(ushort *)(*(long *)(lVar5 + 8) + lVar6 + 0x10) >> 6 & 1) == 0) {
              FUN_0039ddf4();
              lVar6 = lVar6 + 0x30;
              if (lVar7 == lVar6) goto LAB_003a1a64;
            }
            FUN_0039de78();
            lVar6 = lVar6 + 0x30;
          } while (lVar7 != lVar6);
        }
LAB_003a1a64:
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar1);
      uVar2 = *(uint *)(param_1 + 4);
    }
    *(uint *)(param_1 + 4) = uVar2 ^ 1;
  }
  return;
}


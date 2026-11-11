
void FUN_0039f2b0(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x5a);
  if ((ulong)uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x18) + uVar3 * 0x40;
      uVar2 = *(ushort *)(lVar5 + 4);
      if ((uVar2 & 1) != 0) {
        if ((ulong)*(byte *)(lVar5 + 0x3a) != 0) {
          lVar4 = 0;
          lVar6 = (ulong)*(byte *)(lVar5 + 0x3a) * 0x30;
          do {
            while ((*(ushort *)(*(long *)(lVar5 + 0x10) + lVar4 + 0x10) >> 6 & 1) == 0) {
              FUN_0039ddf4();
              lVar4 = lVar4 + 0x30;
              if (lVar6 == lVar4) goto LAB_0039f2e0;
            }
            FUN_0039de78();
            lVar4 = lVar4 + 0x30;
          } while (lVar6 != lVar4);
LAB_0039f2e0:
          uVar2 = *(ushort *)(lVar5 + 4);
        }
        *(ushort *)(lVar5 + 4) = uVar2 ^ 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  uVar1 = *(ushort *)(param_1 + 0x5c);
  if ((ulong)uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x28) + uVar3 * 0x58;
      uVar2 = *(ushort *)(lVar5 + 4);
      if ((uVar2 & 1) != 0) {
        if ((ulong)*(byte *)(lVar5 + 0x52) != 0) {
          lVar4 = 0;
          lVar6 = (ulong)*(byte *)(lVar5 + 0x52) * 0x30;
          do {
            while ((*(ushort *)(*(long *)(lVar5 + 0x10) + lVar4 + 0x10) >> 6 & 1) == 0) {
              FUN_0039ddf4();
              lVar4 = lVar4 + 0x30;
              if (lVar6 == lVar4) goto LAB_0039f370;
            }
            FUN_0039de78();
            lVar4 = lVar4 + 0x30;
          } while (lVar6 != lVar4);
LAB_0039f370:
          uVar2 = *(ushort *)(lVar5 + 4);
        }
        *(ushort *)(lVar5 + 4) = uVar2 ^ 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  uVar1 = *(ushort *)(param_1 + 0x5e);
  if ((ulong)uVar1 != 0) {
    uVar3 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x38) + uVar3 * 0x48;
      uVar2 = *(ushort *)(lVar5 + 4);
      if ((uVar2 & 1) != 0) {
        if ((ulong)*(byte *)(lVar5 + 0x42) != 0) {
          lVar4 = 0;
          lVar6 = (ulong)*(byte *)(lVar5 + 0x42) * 0x30;
          do {
            while ((*(ushort *)(*(long *)(lVar5 + 0x10) + lVar4 + 0x10) >> 6 & 1) == 0) {
              FUN_0039ddf4();
              lVar4 = lVar4 + 0x30;
              if (lVar6 == lVar4) goto LAB_0039f400;
            }
            FUN_0039de78();
            lVar4 = lVar4 + 0x30;
          } while (lVar6 != lVar4);
LAB_0039f400:
          uVar2 = *(ushort *)(lVar5 + 4);
        }
        *(ushort *)(lVar5 + 4) = uVar2 ^ 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}


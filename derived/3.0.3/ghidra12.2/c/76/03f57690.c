
ushort FUN_03f57690(long param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  
  if (((param_2 & 0xf000) == 0x6000) || ((param_2 >> 0xe & 1) == 0)) {
    sVar2 = *(short *)(param_1 + 0x10);
    if (sVar2 == 0) {
      uVar7 = 0xff;
    }
    else {
      *(short *)(param_1 + 0x10) = sVar2 + -1;
      uVar5 = (uint)*(ushort *)(param_1 + 0x12);
      if (0xe < uVar5) {
        uVar5 = 0xf;
      }
      uVar1 = uVar5 + 1;
      uVar7 = (ushort)*(byte *)(param_1 + (ulong)uVar5 + 0x264);
      *(short *)(param_1 + 0x12) = (short)uVar1;
      if ((sVar2 == 1) && (uVar4 = (ulong)*(byte *)(param_1 + 0xb), *(byte *)(param_1 + 0xb) < 0x40)
         ) {
        if ((1L << (uVar4 & 0x3f) & 0x400040004000400U) == 0) {
          if ((1L << (uVar4 & 0x3f) & 0x8080000080800000U) != 0) {
            uVar7 = *(ushort *)(&DAT_041ea9d8 + (uVar1 & 0xfffe));
            if ((uVar1 & 1) == 0) {
              uVar7 = uVar7 >> 8;
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x10) = 8;
          FUN_03f55a10(param_1,uVar4,1);
          uVar3 = *(ushort *)(param_1 + 0x10);
          if ((ulong)uVar3 != 0) {
            iVar6 = *(int *)(param_1 + 0x250);
            if (0 < iVar6) {
              uVar4 = 0;
              do {
                if (0 < iVar6) {
                  if (uVar4 < 0x10) {
                    *(undefined2 *)(param_1 + uVar4 + 0x264) =
                         *(undefined2 *)(param_1 + uVar4 + 0x240);
                  }
                  iVar6 = iVar6 + -1;
                  *(int *)(param_1 + 0x250) = iVar6;
                }
                uVar4 = uVar4 + 2;
              } while (uVar4 < uVar3);
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 9) = 1;
    }
  }
  else {
    uVar7 = 0x80;
  }
  return uVar7;
}


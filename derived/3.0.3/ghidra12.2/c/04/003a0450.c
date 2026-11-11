
void FUN_003a0450(long param_1,undefined8 param_2,MutexType *param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  MutexType *pMVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(ushort *)(param_1 + 0x40);
  *(undefined1 **)(param_1 + 0x28) = &LAB_003a0740;
  if ((((*(ushort *)(param_1 + 0x42) >> 1 & 1) == 0) || (uVar2 == 0)) ||
     ((*(ushort *)(param_1 + 0x42) >> 3 & 1) != 0)) {
    if (uVar2 == 0) goto LAB_003a0710;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10);
    if (*(short *)(lVar10 + 0xe8) != 0) {
      uVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
      FUN_0034fe10(uVar4,param_2,0,0,0);
      uVar9 = FUN_0039f48c(*(undefined8 *)(lVar10 + 0x88),param_2);
      FUN_0034ffd8(uVar4,param_2);
      if ((uVar9 & 1) != 0) {
        *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | 8;
      }
    }
  }
  if (param_3 == (MutexType *)0x0) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x10) + uVar9 * 0x100;
      uVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
      FUN_0034fe10(uVar4,param_2,0,0,0);
      uVar3 = *(ushort *)(lVar10 + 0xe8);
      if (uVar3 != 0) {
        if (uVar3 < 4) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          lVar7 = 0xf4;
          do {
            uVar6 = uVar6 + 4;
            lVar1 = *(long *)(lVar10 + 0x88) + lVar7;
            *(ushort *)(lVar1 + -0xc0) = *(ushort *)(lVar1 + -0xc0) | 1;
            lVar1 = *(long *)(lVar10 + 0x88) + lVar7;
            *(ushort *)(lVar1 + -0x80) = *(ushort *)(lVar1 + -0x80) | 1;
            lVar1 = *(long *)(lVar10 + 0x88) + lVar7;
            *(ushort *)(lVar1 + -0x40) = *(ushort *)(lVar1 + -0x40) | 1;
            *(ushort *)(*(long *)(lVar10 + 0x88) + lVar7) =
                 *(ushort *)(*(long *)(lVar10 + 0x88) + lVar7) | 1;
            lVar7 = lVar7 + 0x100;
          } while (((ulong)uVar3 & 0xfffc) != uVar6);
        }
        uVar5 = (ulong)uVar3 & 3;
        if ((uVar3 & 3) != 0) {
          uVar6 = uVar6 << 6 | 0x34;
          do {
            uVar5 = uVar5 - 1;
            *(ushort *)(*(long *)(lVar10 + 0x88) + uVar6) =
                 *(ushort *)(*(long *)(lVar10 + 0x88) + uVar6) | 1;
            uVar6 = uVar6 + 0x40;
          } while (uVar5 != 0);
        }
      }
      uVar9 = uVar9 + 1;
      *(undefined8 *)(lVar10 + 0xb0) = 0;
    } while (uVar9 != uVar2);
  }
  else {
    uVar9 = 0;
    pMVar8 = param_3;
    do {
      lVar10 = *(long *)(param_1 + 0x10) + uVar9 * 0x100;
      nn::os::InitializeMutex(pMVar8,false,0);
      uVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
      FUN_0034fe10(uVar4,param_2,0,0,0);
      uVar3 = *(ushort *)(lVar10 + 0xe8);
      if (uVar3 != 0) {
        if (uVar3 < 4) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          lVar7 = 0xf4;
          do {
            uVar6 = uVar6 + 4;
            lVar1 = *(long *)(lVar10 + 0x88) + lVar7;
            *(ushort *)(lVar1 + -0xc0) = *(ushort *)(lVar1 + -0xc0) | 1;
            lVar1 = *(long *)(lVar10 + 0x88) + lVar7;
            *(ushort *)(lVar1 + -0x80) = *(ushort *)(lVar1 + -0x80) | 1;
            lVar1 = *(long *)(lVar10 + 0x88) + lVar7;
            *(ushort *)(lVar1 + -0x40) = *(ushort *)(lVar1 + -0x40) | 1;
            *(ushort *)(*(long *)(lVar10 + 0x88) + lVar7) =
                 *(ushort *)(*(long *)(lVar10 + 0x88) + lVar7) | 1;
            lVar7 = lVar7 + 0x100;
          } while (((ulong)uVar3 & 0xfffc) != uVar6);
        }
        uVar5 = (ulong)uVar3 & 3;
        if ((uVar3 & 3) != 0) {
          uVar6 = uVar6 << 6 | 0x34;
          do {
            uVar5 = uVar5 - 1;
            *(ushort *)(*(long *)(lVar10 + 0x88) + uVar6) =
                 *(ushort *)(*(long *)(lVar10 + 0x88) + uVar6) | 1;
            uVar6 = uVar6 + 0x40;
          } while (uVar5 != 0);
        }
      }
      uVar9 = uVar9 + 1;
      *(MutexType **)(lVar10 + 0xb0) = pMVar8;
      pMVar8 = pMVar8 + 0x20;
    } while (uVar9 != uVar2);
  }
LAB_003a0710:
  *(MutexType **)(param_1 + 0x30) = param_3;
  *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | 0x80;
  return;
}


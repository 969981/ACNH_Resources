
void FUN_01186830(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  
  uVar5 = nn::os::TryLockMutex((MutexType *)&DAT_050ca288);
  iVar4 = DAT_050b8f20;
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (DAT_050b8f20 != 0) {
    iVar9 = 0;
    lVar10 = DAT_050b8f10;
    iVar8 = DAT_050b8f18;
    iVar7 = DAT_050b8f1c;
    do {
      iVar2 = 0;
      if (iVar8 <= iVar9 + iVar7) {
        iVar2 = iVar8;
      }
      lVar12 = lVar10 + (long)((iVar9 + iVar7) - iVar2) * 0x2268;
      if (*(byte *)(lVar12 + 0x2264) == 0) {
        if (*(int *)(lVar12 + 0x2260) < 1) {
          bVar11 = 0;
        }
        else {
          uVar5 = 0;
          bVar11 = 0;
          lVar10 = lVar10 + (((long)iVar9 + (long)iVar7) - (long)iVar2) * 0x2268;
          do {
            lVar3 = lVar10;
            if (99 < uVar5) {
              lVar3 = lVar12;
            }
            lVar1 = lVar3 + 0x10;
            uVar6 = FUN_03f2e0c0(lVar1);
            if ((uVar6 & 1) != 0) {
              FUN_03f2dedc(lVar1,0);
            }
            uVar6 = FUN_03f2e940(lVar1);
            if ((uVar6 & 1) == 0) {
              bVar11 = 1;
            }
            else if ((*(byte *)(lVar3 + 0x18) >> 1 & 1) != 0) {
              *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) & 0xf8 | 4;
              if (*(long *)(lVar3 + 0x38) == 0) {
                if (*(long *)(lVar3 + 0x20) != 0) goto LAB_01186988;
              }
              else {
                FUN_03f45838(lVar3 + 0x28);
                if (*(long *)(lVar3 + 0x20) == 0) {
                  *(undefined4 *)(lVar3 + 0x1c) = 0xe;
                }
                else {
LAB_01186988:
                  if (DAT_05b05848 != 0) {
                    FUN_03f350f4(DAT_05b05848,lVar1);
                  }
                }
              }
            }
            uVar5 = uVar5 + 1;
            lVar10 = lVar10 + 0x58;
          } while ((long)uVar5 < (long)*(int *)(lVar12 + 0x2260));
        }
        *(byte *)(lVar12 + 0x2264) = (bVar11 ^ 0xff) & 1;
        lVar10 = DAT_050b8f10;
        iVar8 = DAT_050b8f18;
        iVar7 = DAT_050b8f1c;
      }
      iVar9 = iVar9 + 1;
    } while (iVar4 != iVar9);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_050ca288);
  return;
}



int FUN_038fbe40(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  uVar9 = *(uint *)(param_1 + 0x5c8);
  lVar11 = 0;
  uVar16 = 0;
  do {
    pbVar2 = (byte *)(param_2 + lVar11);
    lVar11 = lVar11 + 2;
    uVar16 = (uint)(ushort)(*(ushort *)
                             (PTR_DAT_04bd0f10 +
                             ((ulong)((uint)pbVar2[1] ^
                                     (uint)*(ushort *)
                                            (PTR_DAT_04bd0f10 +
                                            ((ulong)(*pbVar2 ^ uVar16) & 0xff) * 2) ^ uVar16 >> 8) &
                             0xff) * 2) ^
                           *(ushort *)(PTR_DAT_04bd0f10 + ((ulong)(*pbVar2 ^ uVar16) & 0xff) * 2) >>
                           8);
  } while ((int)lVar11 != 0x26);
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  if ((uVar9 & 1) != 0) {
    iVar5 = *(int *)(param_1 + 0x5b0);
    if (iVar5 != 0) {
      if (iVar5 < 2) {
        lVar11 = *(long *)(param_1 + 0x5b8);
        uVar12 = 0;
      }
      else {
        lVar11 = *(long *)(param_1 + 0x5b8);
        uVar12 = 0;
        iVar14 = iVar5 + -1;
        do {
          uVar9 = (uint)uVar12;
          iVar1 = iVar14 + uVar9;
          if (iVar1 < 0 != SCARRY4(iVar14,uVar9)) {
            iVar1 = iVar1 + 1;
          }
          uVar10 = iVar1 >> 1;
          uVar15 = (uint)*(ushort *)(*(long *)(lVar11 + (long)(int)uVar10 * 8) + 0x74);
          if (uVar15 == uVar16) {
            uVar12 = (ulong)uVar10;
            goto joined_r0x038fbf40;
          }
          if (uVar15 < uVar16) {
            uVar9 = uVar10 + 1;
          }
          else {
            iVar14 = uVar10 - 1;
          }
          uVar12 = (ulong)uVar9;
        } while ((int)uVar9 < iVar14);
      }
      uVar10 = (uint)uVar12;
      if (*(ushort *)(*(long *)(lVar11 + (long)(int)uVar10 * 8) + 0x74) == uVar16) {
joined_r0x038fbf40:
        if (-1 < (int)uVar10) {
          lVar11 = uVar12 << 0x20;
          do {
            uVar12 = uVar12 + 1;
            uVar6 = FUN_038f921c(param_2);
            if ((uVar6 & 1) != 0) {
              lVar13 = *(long *)(*(long *)(param_1 + 0x5b8) + (lVar11 >> 0x1d));
              iVar5 = (uint)*(ushort *)(param_1 + 0x5c0) +
                      ((uint)((int)lVar13 - *(int *)(param_1 + 0x5a8)) >> 7);
              sVar8 = *(short *)(lVar13 + 0x76);
              *(short *)(lVar13 + 0x76) = sVar8 + 1;
              if (sVar8 == 0) {
                *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x5b8) + (lVar11 >> 0x20) * 8) + 0x70)
                     = *(undefined4 *)(*(long *)PTR_DAT_04bd1010 + 0xc);
                *(short *)(param_1 + 0x5c4) = *(short *)(param_1 + 0x5c4) + 1;
              }
              goto LAB_038fc020;
            }
          } while (((long)uVar12 < (long)iVar5) &&
                  (lVar11 = lVar11 + 0x100000000,
                  *(ushort *)(*(long *)(*(long *)(param_1 + 0x5b8) + uVar12 * 8) + 0x74) == uVar16))
          ;
        }
      }
    }
  }
  uVar3 = *(ushort *)(param_1 + 0x5c2);
  uVar7 = uVar3;
  while( true ) {
    uVar7 = uVar7 + 1;
    *(ushort *)(param_1 + 0x5c2) = uVar7;
    if (*(int *)(param_1 + 0x5a0) <= (int)(uint)uVar7) break;
    iVar5 = FUN_038fc0b0(param_1,(uint)uVar7,param_2,uVar16,param_3);
    if (iVar5 != -1) goto LAB_038fc020;
    uVar7 = *(ushort *)(param_1 + 0x5c2);
  }
  *(undefined2 *)(param_1 + 0x5c2) = 0;
  if (uVar3 != 0) {
    sVar8 = 0;
    do {
      iVar5 = FUN_038fc0b0(param_1,sVar8,param_2,uVar16,param_3);
      if (iVar5 != -1) goto LAB_038fc020;
      sVar4 = *(short *)(param_1 + 0x5c2);
      sVar8 = sVar4 + 1;
      *(short *)(param_1 + 0x5c2) = sVar8;
    } while ((ushort)(sVar4 + 1U) < uVar3);
  }
  iVar5 = 0xffff;
LAB_038fc020:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return iVar5;
}


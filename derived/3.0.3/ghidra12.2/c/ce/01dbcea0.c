
void FUN_01dbcea0(long *param_1)

{
  MutexType *pMVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar7 = DAT_0537d558;
  lVar8 = param_1[2];
  *(undefined1 *)(lVar8 + 0x1fc) = 0;
  lVar9 = *plVar7;
  pMVar1 = (MutexType *)(lVar9 + 0x4d8);
  nn::os::LockMutex(pMVar1);
  *(undefined1 *)(lVar9 + 0x4f9) = 1;
  nn::os::UnlockMutex(pMVar1);
  iVar4 = *(int *)(lVar8 + 0xc0);
  if (iVar4 == 9 || iVar4 == 5) {
    uVar5 = 6;
  }
  else {
    if (iVar4 != 2) goto LAB_01dbcf24;
    uVar5 = 3;
  }
  FUN_03ebb160(lVar8 + 0xb8,uVar5);
LAB_01dbcf24:
  bVar6 = *(byte *)(*param_1 + 0x472);
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(*param_1 + 0x48);
    pbVar3 = pbVar2 + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar3 = pbVar2;
    }
    if ((*pbVar3 >> 1 & 1) != 0) {
      lVar8 = *(long *)(*(long *)(DAT_05ae6a60 + 0x70) + 0x10);
      *(uint *)(lVar8 + 0x188) = *(uint *)(lVar8 + 0x188) | 1;
    }
  }
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}


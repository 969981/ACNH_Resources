
void FUN_004828d0(undefined4 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_4c;
  undefined4 local_44;
  
  lVar2 = DAT_04c70a98;
  pMVar1 = (MutexType *)(DAT_04c70a98 + 0x28);
  nn::os::LockMutex(pMVar1);
  lVar2 = lVar2 + 0x18;
  uVar3 = FUN_00482c60(lVar2);
  uVar4 = FUN_00482c60(lVar2);
  uVar5 = FUN_00482c60(lVar2);
  uVar6 = FUN_00482c60(lVar2);
  uVar6 = uVar6 & 0xffffffff;
  nn::os::UnlockMutex(pMVar1);
  local_4c = CONCAT22((short)uVar4,(short)((uint)uVar4 >> 0x10)) & 0xfffffff | 0x40000000;
  local_44 = CONCAT13((char)uVar6,
                      CONCAT12((char)(uVar6 >> 8),
                               CONCAT11((char)(uVar6 >> 0x10),(char)(uVar6 >> 0x18))));
  *param_1 = uVar3;
  param_1[1] = local_4c;
  param_1[2] = CONCAT13((char)uVar5,
                        CONCAT21(CONCAT11((char)((uVar5 & 0xffffffff) >> 8),
                                          (char)((uVar5 & 0xffffffff) >> 0x10)),
                                 (char)(uVar5 >> 0x18))) & 0xffffff3f | 0x80;
  param_1[3] = local_44;
  return;
}


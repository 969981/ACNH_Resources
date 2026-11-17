
void FUN_02a02420(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  nn::os::LockMutex((MutexType *)(param_1 + 0x1818));
  lVar3 = 0xf;
  puVar2 = (undefined1 *)(param_1 + 0x183b);
  do {
    uVar1 = uVar1 ^ uVar1 << 0xb;
    lVar3 = lVar3 + -1;
    uVar1 = uVar6 >> 0x13 ^ uVar1 >> 8 ^ uVar6 ^ uVar1;
    puVar2[-3] = (char)((ulong)uVar1 * 0x65 >> 0x20);
    uVar4 = uVar4 ^ uVar4 << 0xb;
    uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
    puVar2[-2] = (char)((ulong)uVar4 * 0x65 >> 0x20);
    uVar5 = uVar5 ^ uVar5 << 0xb;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    puVar2[-1] = (char)((ulong)uVar5 * 0x65 >> 0x20);
    uVar6 = uVar6 ^ uVar6 << 0xb;
    uVar6 = uVar6 >> 8 ^ uVar5 >> 0x13 ^ uVar6 ^ uVar5;
    *puVar2 = (char)((ulong)uVar6 * 0x65 >> 0x20);
    puVar2 = puVar2 + 4;
  } while (lVar3 != 0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1818));
  return;
}


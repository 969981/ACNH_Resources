
long FUN_039ffba0(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  char *__s;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  if (*(long *)(param_1 + 0x20) != param_1 + 0x18) {
    lVar6 = (long)*(int *)(param_1 + 0x2c);
    lVar7 = *(long *)(param_1 + 0x20) - lVar6;
    do {
      do {
        nn::os::LockMutex((MutexType *)(lVar7 + 0x2e0));
        uVar2 = *(uint *)(lVar7 + 0x2b4);
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x2e0));
      } while ((uVar2 >> 5 & 1) == 0);
      lVar9 = *(long *)(lVar7 + 0x20);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar10 = *(long *)(lVar9 + 0x30);
      if (lVar10 != 0) {
        __s = (char *)param_2[1];
        if (__s == (char *)0x0) {
          __n = 0;
        }
        else {
          __n = strlen(__s);
        }
        uVar4 = (ulong)*(ushort *)(lVar10 + 0xc);
        puVar8 = (uint *)((int *)(lVar10 + 8) + uVar4 * 4);
        uVar2 = *puVar8;
        if (*(int *)(lVar10 + 8) < (int)*puVar8) {
          do {
            uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
            if (uVar5 < __n) {
              uVar5 = (ulong)((byte)__s[__n + ~uVar5] >> ((ulong)uVar2 & 7)) & 1;
            }
            else {
              uVar5 = 0;
            }
            uVar4 = (ulong)*(ushort *)(lVar10 + 8 + uVar4 * 0x10 + uVar5 * 2 + 4);
            puVar8 = (uint *)(lVar10 + 8 + uVar4 * 0x10);
            bVar1 = (int)uVar2 < (int)*puVar8;
            uVar2 = *puVar8;
          } while (bVar1);
        }
        if ((((__n == **(ushort **)(puVar8 + 2)) &&
             (iVar3 = memcmp(*(ushort **)(puVar8 + 2) + 1,__s,__n), iVar3 == 0)) &&
            (uVar4 = (long)puVar8 + (-0x18 - lVar10),
            ((uVar4 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
           (lVar9 = *(long *)(lVar9 + 0x28), lVar9 != 0)) {
          lVar9 = lVar9 + (long)(int)(uVar4 >> 4) * 0x78;
          goto LAB_039ffd18;
        }
      }
      lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
    } while (lVar7 != (param_1 + 0x18) - lVar6);
  }
  lVar9 = 0;
LAB_039ffd18:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return lVar9;
}


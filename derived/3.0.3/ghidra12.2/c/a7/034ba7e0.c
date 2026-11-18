
void FUN_034ba7e0(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *__s;
  long lVar5;
  uint uVar6;
  int iVar7;
  
  if (0 < *(int *)(param_1 + 600)) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x270);
      uVar1 = uVar6;
      if (*(uint *)(param_1 + 0x268) <= uVar6) {
        uVar1 = 0;
      }
      __s = (long *)(lVar5 + (ulong)uVar1 * 0x32830 + 8);
      if (*__s == 0) {
        iVar7 = -1;
      }
      else {
        uVar2 = FUN_01d77c78();
        iVar7 = -1;
        if ((uVar2 & 1) != 0) {
          iVar7 = *(int *)(*__s + 4);
        }
      }
      lVar3 = (**(code **)(*param_2 + 0xc0))(param_2);
      if (iVar7 == *(int *)(lVar3 + 4)) {
        if ((((*(int *)(lVar5 + (ulong)uVar1 * 0x32830 + 0x19410) == 2) ||
             (*(int *)(lVar5 + (ulong)uVar1 * 0x32830 + 0x32820) == 2)) && (*__s != 0)) &&
           (lVar3 = *(long *)(DAT_05231900 + 0x140), *(char *)(lVar3 + 0x16d) != '\0')) {
          uVar6 = *(uint *)(*__s + 4);
          nn::os::LockMutex((MutexType *)(lVar3 + 0x990));
          if (uVar6 < *(uint *)(lVar3 + 0x760)) {
            lVar4 = *(long *)(*(long *)(lVar3 + 0x768) + (long)(int)uVar6 * 8);
          }
          else {
            lVar4 = 0;
          }
          if (*(char *)(lVar4 + 0x32820) != '\0') {
            *(undefined1 *)(lVar4 + 0x32810) = 0;
            *(undefined1 *)(lVar4 + 0x32820) = 0;
            *(undefined1 *)(lVar4 + 0x19400) = 0;
          }
          nn::os::UnlockMutex((MutexType *)(lVar3 + 0x990));
        }
        lVar5 = lVar5 + (ulong)uVar1 * 0x32830;
        memset(__s,0,0x1940c);
        *(undefined4 *)(lVar5 + 0x48) = 0xffffffff;
        *(undefined4 *)(lVar5 + 0x40) = 1;
        memset((void *)(lVar5 + 0x19420),0,0x19404);
        *(undefined4 *)(lVar5 + 0x19450) = 1;
        *(undefined4 *)(lVar5 + 0x19458) = 0xffffffff;
        return;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 600));
  }
  return;
}


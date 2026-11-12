
undefined8 FUN_0095ef30(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  void *__dest;
  long *plVar7;
  void *__src;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar11 = param_2[1];
  (**(code **)(DAT_04cf8588 + 0x18))(&DAT_04cf8588);
  if (lVar11 == DAT_04cf8590) {
    return 0;
  }
  uVar6 = 0;
  bVar4 = true;
  do {
    if (*(char *)(param_2[1] + uVar6) != *(char *)(DAT_04cf8590 + uVar6)) break;
    if (*(char *)(param_2[1] + uVar6) == '\0') {
      if (bVar4) {
        return 0;
      }
      break;
    }
    bVar4 = uVar6 < 0x80000;
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x80001);
  if (*(int *)(DAT_04cce818 + 8) == 0) {
    plVar7 = (long *)0x0;
    if ((param_3 & 1) != 0) goto LAB_0095f00c;
LAB_0095f030:
    uVar5 = *(uint *)(param_1 + 0x518);
    if ((int)uVar5 < 1) {
      return 1;
    }
    uVar10 = 0;
    do {
      uVar1 = uVar10;
      if (uVar5 <= uVar10) {
        uVar1 = 0;
      }
      lVar11 = *(long *)(param_1 + 0x520) + (ulong)uVar1 * 0xe8;
      if (((*(byte *)(lVar11 + 0x18) >> 1 & 1) != 0) &&
         (uVar6 = FUN_03f2d924(lVar11 + 0x10), (uVar6 & 1) != 0)) {
        uVar5 = uVar10;
        if (*(uint *)(param_1 + 0x518) <= uVar10) {
          uVar5 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x520) + (ulong)uVar5 * 0xe8;
        plVar9 = (long *)(lVar8 + 0x50);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        lVar12 = *(long *)(lVar8 + 0x58);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar11 = param_2[1];
        if (lVar12 == lVar11) {
          return 0;
        }
        uVar6 = 0;
        bVar4 = true;
        lVar8 = *(long *)(lVar8 + 0x58) + 2;
        do {
          lVar12 = lVar8 + uVar6;
          cVar3 = *(char *)(lVar12 + -2);
          if (cVar3 != *(char *)(lVar11 + uVar6)) break;
          if (cVar3 == '\0') {
            if (bVar4) {
              return 0;
            }
            break;
          }
          cVar3 = *(char *)(lVar12 + -1);
          if (cVar3 != *(char *)(lVar11 + uVar6 + 1)) break;
          if (cVar3 == '\0') {
            return 0;
          }
          cVar3 = *(char *)(lVar8 + uVar6);
          if (cVar3 != *(char *)(lVar11 + uVar6 + 2)) break;
          if (cVar3 == '\0') {
            return 0;
          }
          bVar4 = uVar6 < 0x7fffe;
          uVar6 = uVar6 + 3;
        } while (uVar6 != 0x80001);
      }
      uVar5 = *(uint *)(param_1 + 0x518);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar5);
    if ((int)uVar5 < 1) {
      return 1;
    }
    uVar10 = 0;
    while( true ) {
      lVar11 = *(long *)(param_1 + 0x520);
      uVar1 = uVar10;
      if (uVar5 <= uVar10) {
        uVar1 = 0;
      }
      lVar8 = lVar11 + (ulong)uVar1 * 0xe8;
      if ((*(byte *)(lVar8 + 0x18) >> 1 & 1) == 0) break;
      uVar6 = FUN_03f2d924(lVar8 + 0x10);
      uVar5 = *(uint *)(param_1 + 0x518);
      if ((uVar6 & 1) == 0) {
        lVar11 = *(long *)(param_1 + 0x520);
        break;
      }
      uVar10 = uVar10 + 1;
      if ((int)uVar5 <= (int)uVar10) {
        return 1;
      }
    }
    uVar1 = uVar10;
    if (uVar5 <= uVar10) {
      uVar1 = 0;
    }
    nn::os::LockMutex((MutexType *)(plVar7 + 0x4d));
    (**(code **)(*plVar7 + 0x30))(plVar7,lVar11 + (ulong)uVar1 * 0xe8,param_2,PTR_PTR_04bb2238);
    nn::os::UnlockMutex((MutexType *)(plVar7 + 0x4d));
    if (*(uint *)(param_1 + 0x518) <= uVar10) {
      uVar10 = 0;
    }
    lVar11 = *(long *)(param_1 + 0x520) + (ulong)uVar10 * 0xe8;
    __dest = *(void **)(lVar11 + 0x58);
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest == __src) {
      return 0;
    }
    lVar11 = lVar11 + 0x50;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_0095f49c;
      lVar12 = param_2[1] + lVar8;
      if (*(char *)(lVar12 + 1) == '\0') goto LAB_0095f490;
      if (*(char *)(lVar12 + 2) == '\0') goto LAB_0095f498;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  else {
    plVar7 = (long *)**(undefined8 **)(DAT_04cce818 + 0x10);
    if ((param_3 & 1) == 0) goto LAB_0095f030;
LAB_0095f00c:
    uVar5 = *(uint *)(param_1 + 0x508);
    if ((int)uVar5 < 1) {
      return 1;
    }
    uVar10 = 0;
    do {
      uVar1 = uVar10;
      if (uVar5 <= uVar10) {
        uVar1 = 0;
      }
      lVar11 = *(long *)(param_1 + 0x510) + (ulong)uVar1 * 0xe8;
      if (((*(byte *)(lVar11 + 0x18) >> 1 & 1) != 0) &&
         (uVar6 = FUN_03f2d924(lVar11 + 0x10), (uVar6 & 1) != 0)) {
        uVar5 = uVar10;
        if (*(uint *)(param_1 + 0x508) <= uVar10) {
          uVar5 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x510) + (ulong)uVar5 * 0xe8;
        plVar9 = (long *)(lVar8 + 0x50);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        lVar12 = *(long *)(lVar8 + 0x58);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar11 = param_2[1];
        if (lVar12 == lVar11) {
          return 0;
        }
        uVar6 = 0;
        bVar4 = true;
        lVar8 = *(long *)(lVar8 + 0x58) + 2;
        do {
          lVar12 = lVar8 + uVar6;
          cVar3 = *(char *)(lVar12 + -2);
          if (cVar3 != *(char *)(lVar11 + uVar6)) break;
          if (cVar3 == '\0') {
            if (bVar4) {
              return 0;
            }
            break;
          }
          cVar3 = *(char *)(lVar12 + -1);
          if (cVar3 != *(char *)(lVar11 + uVar6 + 1)) break;
          if (cVar3 == '\0') {
            return 0;
          }
          cVar3 = *(char *)(lVar8 + uVar6);
          if (cVar3 != *(char *)(lVar11 + uVar6 + 2)) break;
          if (cVar3 == '\0') {
            return 0;
          }
          bVar4 = uVar6 < 0x7fffe;
          uVar6 = uVar6 + 3;
        } while (uVar6 != 0x80001);
      }
      uVar5 = *(uint *)(param_1 + 0x508);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar5);
    if ((int)uVar5 < 1) {
      return 1;
    }
    uVar10 = 0;
    while( true ) {
      lVar11 = *(long *)(param_1 + 0x510);
      uVar1 = uVar10;
      if (uVar5 <= uVar10) {
        uVar1 = 0;
      }
      lVar8 = lVar11 + (ulong)uVar1 * 0xe8;
      if ((*(byte *)(lVar8 + 0x18) >> 1 & 1) == 0) break;
      uVar6 = FUN_03f2d924(lVar8 + 0x10);
      uVar5 = *(uint *)(param_1 + 0x508);
      if ((uVar6 & 1) == 0) {
        lVar11 = *(long *)(param_1 + 0x510);
        break;
      }
      uVar10 = uVar10 + 1;
      if ((int)uVar5 <= (int)uVar10) {
        return 1;
      }
    }
    uVar1 = uVar10;
    if (uVar5 <= uVar10) {
      uVar1 = 0;
    }
    nn::os::LockMutex((MutexType *)(plVar7 + 0x4d));
    (**(code **)(*plVar7 + 0x30))(plVar7,lVar11 + (ulong)uVar1 * 0xe8,param_2,PTR_PTR_04bb2238);
    nn::os::UnlockMutex((MutexType *)(plVar7 + 0x4d));
    if (*(uint *)(param_1 + 0x508) <= uVar10) {
      uVar10 = 0;
    }
    lVar11 = *(long *)(param_1 + 0x510) + (ulong)uVar10 * 0xe8;
    __dest = *(void **)(lVar11 + 0x58);
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest == __src) {
      return 0;
    }
    lVar11 = lVar11 + 0x50;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_0095f49c;
      lVar12 = param_2[1] + lVar8;
      if (*(char *)(lVar12 + 1) == '\0') goto LAB_0095f490;
      if (*(char *)(lVar12 + 2) == '\0') goto LAB_0095f498;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  lVar8 = 0;
LAB_0095f49c:
  iVar2 = (int)lVar8;
  if (*(int *)(lVar11 + 0x10) <= (int)lVar8) {
    iVar2 = *(int *)(lVar11 + 0x10) + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  return 0;
LAB_0095f490:
  lVar8 = lVar8 + 1;
  goto LAB_0095f49c;
LAB_0095f498:
  lVar8 = lVar8 + 2;
  goto LAB_0095f49c;
}


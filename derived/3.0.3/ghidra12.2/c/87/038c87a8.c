
void * FUN_038c87a8(long *param_1,long param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  void *pvVar6;
  void *__dest;
  ulong __n;
  ulong uVar7;
  long *plVar8;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x038c8830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar6 = (void *)(**(code **)(*param_1 + 0x30))(param_1,param_3,param_4);
    return pvVar6;
  }
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
    return (void *)0x0;
  }
  uVar5 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
  if (param_4 < 0) {
    return (void *)0x0;
  }
  if ((uVar5 & 1) == 0) {
    return (void *)0x0;
  }
  if ((*(uint *)(param_1 + 0x1a) & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1 + 0x12;
    nn::os::LockMutex((MutexType *)(param_1 + 0x16));
  }
  lVar3 = param_2 + -0x20;
  if ((*(ulong *)(param_2 + -8) & 1) != 0) {
    lVar3 = *(ulong *)(param_2 + -8) - 1;
  }
  __n = param_3 + 7U & 0xfffffffffffffff8;
  uVar7 = *(ulong *)(lVar3 + 0x18);
  uVar5 = uVar7 - __n;
  if (uVar7 < __n) {
    iVar2 = 8;
    if (param_4 != 0) {
      iVar2 = param_4;
    }
    uVar4 = *(ushort *)(lVar3 + 0x12);
    __dest = (void *)(**(code **)(*param_1 + 0x30))(param_1,__n,iVar2);
    if (__dest == (void *)0x0) goto LAB_038c88d4;
    pvVar6 = (void *)(lVar3 + (ulong)uVar4 + 0x20);
    __n = uVar7;
  }
  else {
    if (uVar5 == 0) {
      pvVar6 = (void *)(lVar3 + (ulong)*(ushort *)(lVar3 + 0x12) + 0x20);
      __dest = pvVar6;
      if ((param_4 != 0) && (((ulong)pvVar6 & (ulong)(param_4 - 1)) != 0)) {
        __dest = (void *)(**(code **)(*param_1 + 0x30))(param_1,__n,param_4);
        if (__dest == (void *)0x0) {
          __dest = (void *)0x0;
        }
        else {
          memcpy(__dest,pvVar6,__n);
          (**(code **)(*param_1 + 0x38))(param_1,param_2);
        }
      }
      goto LAB_038c88d4;
    }
    if ((param_4 == 0) ||
       (pvVar6 = (void *)(lVar3 + (ulong)*(ushort *)(lVar3 + 0x12) + 0x20),
       ((ulong)pvVar6 & (ulong)(param_4 - 1)) == 0)) {
      if (uVar5 < 0x20) {
        __dest = (void *)(lVar3 + (ulong)*(ushort *)(lVar3 + 0x12) + 0x20);
      }
      else {
        *(ulong *)(lVar3 + 0x18) = __n;
        puVar1 = (undefined8 *)(lVar3 + 0x20 + __n + (ulong)*(ushort *)(lVar3 + 0x12));
        *(undefined4 *)(puVar1 + 2) = 0;
        puVar1[3] = uVar5 - 0x20;
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_038c8240(param_1);
        __dest = (void *)(lVar3 + 0x20 + (ulong)*(ushort *)(lVar3 + 0x12));
      }
      goto LAB_038c88d4;
    }
    __dest = (void *)(**(code **)(*param_1 + 0x30))(param_1,__n,param_4);
    if (__dest == (void *)0x0) goto LAB_038c88d4;
  }
  memcpy(__dest,pvVar6,__n);
  (**(code **)(*param_1 + 0x38))(param_1,param_2);
LAB_038c88d4:
  if (plVar8 != (long *)0x0) {
    nn::os::UnlockMutex((MutexType *)(plVar8 + 4));
  }
  return __dest;
}


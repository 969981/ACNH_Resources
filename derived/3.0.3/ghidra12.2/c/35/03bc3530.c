
void FUN_03bc3530(long param_1,uint param_2,long *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  void *__s;
  uint uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  if (param_4 != 0) {
    *(long *)(param_1 + 0x28) = param_4;
  }
  if ((int)param_2 < 1) {
    memset((void *)0x0,0,(ulong)(uint)(*(int *)(param_1 + 8) << 4));
    *(undefined4 *)(param_1 + 0x18) = 0;
    goto LAB_03bc3698;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    __s = malloc((ulong)param_2 << 4);
    if (__s == (void *)0x0) goto LAB_03bc3604;
LAB_03bc35cc:
    *(uint *)(param_1 + 8) = param_2;
    *(void **)(param_1 + 0x10) = __s;
    uVar4 = param_2;
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) goto LAB_03bc3604;
    }
    __s = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,(ulong)param_2 << 4,8);
    if (__s != (void *)0x0) goto LAB_03bc35cc;
LAB_03bc3604:
    __s = *(void **)(param_1 + 0x10);
    uVar4 = *(uint *)(param_1 + 8);
  }
  memset(__s,0,(ulong)(uVar4 << 4));
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  do {
    lVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(*(long **)(param_1 + 0x28),param_3);
    if (lVar5 == 0) break;
    FUN_03bc1e20(lVar5,uVar4,param_1 + 0x20,param_3);
    uVar1 = uVar4;
    if (*(uint *)(param_1 + 8) <= uVar4) {
      uVar1 = 0;
    }
    *(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x10) = lVar5;
    uVar1 = uVar4;
    if (*(uint *)(param_1 + 8) <= uVar4) {
      uVar1 = 0;
    }
    uVar4 = uVar4 + 1;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 0x10 + 8) = 0;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  } while (param_2 != uVar4);
LAB_03bc3698:
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


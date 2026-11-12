
void FUN_006dfb70(long param_1,int param_2,void *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_340 [768];
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar4 = malloc(0x718);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
    }
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x718,8);
  }
  FUN_006dfcf8(pvVar4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  *(int *)((long)pvVar4 + 0x18) = param_2;
  memcpy((void *)((long)pvVar4 + 0x20),param_3,0x6b8);
  if (param_2 == 1) {
    param_3 = (void *)((long)param_3 + 0x3b4);
  }
  else {
    if (param_2 != 0) goto LAB_006dfc3c;
    param_3 = (void *)((long)param_3 + 0xb4);
  }
  memcpy(auStack_340,param_3,0x300);
LAB_006dfc3c:
  lVar6 = *(long *)((long)pvVar4 + 0x6f8);
  memcpy((void *)(lVar6 + 0x60),auStack_340,0x300);
  *(long *)(lVar6 + 0x360) = (long)pvVar4 + 0x6d8;
  *(undefined8 *)(lVar6 + 0x368) = 0;
  *(undefined8 *)(lVar6 + 0x370) = 0;
  plVar2 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb21c8 + 0x110) + 0xd0);
  nn::os::LockMutex((MutexType *)(plVar2 + 0xd));
  iVar1 = *(int *)((long)plVar2 + 0x14);
  lVar3 = *plVar2;
  lVar6 = (long)pvVar4 + (long)iVar1 + 0x700;
  *plVar2 = lVar6;
  *(long *)((long)pvVar4 + (long)iVar1 + 0x700) = lVar3;
  *(long **)((long)pvVar4 + (long)iVar1 + 0x708) = plVar2;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = lVar6;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  nn::os::UnlockMutex((MutexType *)(plVar2 + 0xd));
  plVar5 = (long *)(param_1 + 0x40);
  lVar6 = *plVar5;
  plVar2 = (long *)((long)*(int *)(param_1 + 0x54) + (long)pvVar4);
  *plVar5 = (long)plVar2;
  *plVar2 = lVar6;
  plVar2[1] = (long)plVar5;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}


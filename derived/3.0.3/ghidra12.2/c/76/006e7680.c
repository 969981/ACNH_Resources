
void FUN_006e7680(long param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_350 [768];
  
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    pvVar4 = malloc(0x1008);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
    }
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1008,8);
  }
  FUN_006e786c(pvVar4,*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)((long)pvVar4 + 0x18) = param_2;
  memcpy((void *)((long)pvVar4 + 0x20),param_3,0xfa8);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  switch(param_2) {
  case 0:
    memcpy(auStack_350,(void *)((long)param_3 + 0x8c),0x300);
    puVar5 = (undefined8 *)(param_1 + 0x10);
    break;
  case 1:
    memcpy(auStack_350,(void *)((long)param_3 + 0x38c),0x300);
    puVar5 = (undefined8 *)(param_1 + 0x18);
    break;
  case 2:
    param_3 = (void *)((long)param_3 + 0x68c);
    goto LAB_006e7798;
  case 3:
    param_3 = (void *)((long)param_3 + 0x98c);
LAB_006e7798:
    memcpy(auStack_350,param_3,0x300);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    break;
  default:
    uVar8 = 0;
    goto LAB_006e77ac;
  }
  uVar8 = *puVar5;
LAB_006e77ac:
  lVar7 = *(long *)((long)pvVar4 + 0xfe8);
  memcpy((void *)(lVar7 + 0x60),auStack_350,0x300);
  *(long *)(lVar7 + 0x360) = (long)pvVar4 + 0xfc8;
  *(undefined8 *)(lVar7 + 0x368) = uVar8;
  *(undefined8 *)(lVar7 + 0x370) = uVar9;
  plVar2 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb21c8 + 0x110) + 0xd0);
  nn::os::LockMutex((MutexType *)(plVar2 + 0xd));
  iVar1 = *(int *)((long)plVar2 + 0x14);
  lVar3 = *plVar2;
  lVar7 = (long)pvVar4 + (long)iVar1 + 0xff0;
  *plVar2 = lVar7;
  *(long *)((long)pvVar4 + (long)iVar1 + 0xff0) = lVar3;
  *(long **)((long)pvVar4 + (long)iVar1 + 0xff8) = plVar2;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 8) = lVar7;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  nn::os::UnlockMutex((MutexType *)(plVar2 + 0xd));
  plVar6 = (long *)(param_1 + 0x58);
  lVar7 = *plVar6;
  plVar2 = (long *)((long)*(int *)(param_1 + 0x6c) + (long)pvVar4);
  *plVar6 = (long)plVar2;
  *plVar2 = lVar7;
  plVar2[1] = (long)plVar6;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar2;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}


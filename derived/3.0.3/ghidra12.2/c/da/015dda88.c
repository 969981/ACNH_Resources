
void FUN_015dda88(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 0x960);
    if (lVar7 == 0) {
      lVar4 = 1;
      plVar3 = *(long **)(lVar6 + 0x10);
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar4 = *(long *)(lVar2 + 0xa8);
      *(long *)(lVar2 + 0xa8) = lVar7;
      plVar3 = *(long **)(lVar6 + 0x10);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x40))();
      (**(code **)(**(long **)(lVar6 + 0x10) + 0x30))();
    }
    if (*(long **)(lVar6 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 0x18) + 0x40))();
      (**(code **)(**(long **)(lVar6 + 0x18) + 0x30))();
    }
    if (lVar4 != 1) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar6 + 0xa8) = lVar4;
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if (*(char *)(lVar6 + 0x3f1) != '\0') {
      *(undefined1 *)(lVar6 + 0x3f0) = 1;
      nn::os::SendMessageQueue((MessageQueueType *)(lVar6 + 0x908),0);
      nn::os::DestroyThread((ThreadType *)(lVar6 + 0x3f8));
      *(undefined1 *)(lVar6 + 0x3f1) = 0;
      lVar6 = *(long *)(param_1 + 0x48);
    }
    FUN_015dd310(lVar6);
    lVar6 = *(long *)(param_1 + 0x48);
    lVar7 = *(long *)(lVar6 + 0x960);
    if (lVar7 == 0) {
      lVar4 = 1;
      lVar7 = *(long *)(lVar6 + 0x958);
    }
    else {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      lVar4 = *(long *)(lVar2 + 0xa8);
      *(long *)(lVar2 + 0xa8) = lVar7;
      lVar7 = *(long *)(lVar6 + 0x958);
    }
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x9d0) = 5;
      FUN_015db180(*(undefined8 *)(lVar6 + 0x958));
    }
    if (lVar4 != 1) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
      *(long *)(lVar6 + 0xa8) = lVar4;
    }
    puVar1 = PTR_DAT_04bb2698;
    pvVar5 = *(void **)(*(long *)(param_1 + 0x48) + 0x950);
    if (pvVar5 != (void *)0x0) {
      FUN_015df72c(pvVar5);
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    lVar6 = *(long *)(param_1 + 0x48);
    pvVar5 = *(void **)(lVar6 + 0x958);
    if (pvVar5 != (void *)0x0) {
      FUN_015da214(pvVar5);
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      *(undefined8 *)(lVar6 + 0x958) = 0;
      lVar6 = *(long *)(param_1 + 0x48);
    }
    FUN_015dd414(lVar6);
    lVar6 = *(long *)(param_1 + 0x48);
    plVar3 = *(long **)(lVar6 + 8);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      lVar6 = *(long *)(param_1 + 0x48);
    }
    FUN_015db868(lVar6);
    pvVar5 = *(void **)(param_1 + 0x48);
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x168) = 1;
    *(undefined1 *)(param_1 + 0x178) = 0xff;
  }
  return;
}


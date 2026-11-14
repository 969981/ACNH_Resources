
void FUN_015db868(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined2 *)(param_1 + 0x968) = 0;
  if (*(char *)(param_1 + 0x5c1) != '\0') {
    *(undefined1 *)(param_1 + 0x5c0) = 1;
    nn::os::SignalEvent((EventType *)(param_1 + 0x160));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x5c8));
    *(undefined1 *)(param_1 + 0x5c1) = 0;
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar5 = *(void **)(param_1 + 0x5b8);
  if (pvVar5 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
      cVar1 = *(char *)(param_1 + 0x3f1);
      goto joined_r0x015db8dc;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
    }
  }
  cVar1 = *(char *)(param_1 + 0x3f1);
joined_r0x015db8dc:
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x3f0) = 1;
    nn::os::SendMessageQueue((MessageQueueType *)(param_1 + 0x908),0);
    nn::os::DestroyThread((ThreadType *)(param_1 + 0x3f8));
    *(undefined1 *)(param_1 + 0x3f1) = 0;
  }
  pvVar5 = *(void **)(param_1 + 1000);
  if (pvVar5 != (void *)0x0) {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x160));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x20));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x48));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x70));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x98));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0xc0));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0xe8));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x110));
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x138));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x188));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x1c8));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x208));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x248));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x288));
  nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x2c8));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8b8));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8d8));
  nn::os::FinalizeMessageQueue((MessageQueueType *)(param_1 + 0x908));
  pvVar5 = *(void **)(param_1 + 0x900);
  if (pvVar5 != (void *)0x0) {
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  movie::SetAllocator((_func_void_ptr_ulong_ulong_void_ptr *)0x0,(_func_void_void_ptr_void_ptr *)0x0
                      ,(_func_void_ptr_void_ptr_ulong_void_ptr *)0x0,(void *)0x0);
  return;
}


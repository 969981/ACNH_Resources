
undefined8 FUN_015db5d4(int *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  
  movie::SetAllocator((_func_void_ptr_ulong_ulong_void_ptr *)&LAB_015db330,
                      (_func_void_void_ptr_void_ptr *)&LAB_015db350,
                      (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_015db370,param_2);
  *(long **)(param_1 + 600) = param_2;
  *(undefined2 *)(param_1 + 0x25a) = 0;
  *(undefined1 *)((long)param_1 + 0x96a) = 0;
  param_1[0x23e] = 0x20;
  puVar2 = PTR_DAT_04bb2698;
  param_1[0x23f] = 0;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    puVar6 = malloc(0x100);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        param_1[0x240] = 0;
        param_1[0x241] = 0;
        return 0x1002;
      }
    }
    puVar6 = (ulong *)(**(code **)(*plVar5 + 0x30))(plVar5,0x100,8);
  }
  *(ulong **)(param_1 + 0x240) = puVar6;
  if (puVar6 != (ulong *)0x0) {
    nn::os::InitializeMessageQueue
              ((MessageQueueType *)(param_1 + 0x242),puVar6,*(ulong *)(param_1 + 0x23e));
    if (*(char *)((long)param_1 + 0x3f1) == '\0') {
      lVar9 = *(long *)(param_1 + 0xf8);
      lVar4 = *(long *)puVar2;
      if (lVar4 == 0) {
        pvVar8 = malloc(lVar9 << 1);
        *(void **)(param_1 + 0xfa) = pvVar8;
      }
      else {
        plVar5 = param_2;
        if (param_2 == (long *)0x0) {
          lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar5 = (long *)(lVar4 + 8);
          if (lVar7 != 0) {
            plVar5 = (long *)(lVar7 + 0xa8);
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) {
            param_1[0xfa] = 0;
            param_1[0xfb] = 0;
            return 0x1002;
          }
        }
        pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,lVar9 << 1,8);
        *(void **)(param_1 + 0xfa) = pvVar8;
      }
      if (pvVar8 == (void *)0x0) {
        return 0x1002;
      }
      *(undefined1 *)(param_1 + 0xfc) = 0;
      iVar3 = nn::os::CreateThread
                        ((ThreadType *)(param_1 + 0xfe),(_func_void_void_ptr *)&LAB_015dba40,param_1
                         ,(void *)((long)pvVar8 + 0xfffU & 0xfffffffffffff000),
                         *(ulong *)(param_1 + 0xf8),param_1[1],*param_1);
      if (iVar3 != 0) {
        return 0x100d;
      }
      nn::os::SetThreadName((ThreadType *)(param_1 + 0xfe),"AudioVideoInputReadThread");
      *(undefined1 *)((long)param_1 + 0x3f1) = 1;
    }
    lVar9 = *(long *)(param_1 + 0xf8);
    lVar4 = *(long *)puVar2;
    if (lVar4 == 0) {
      pvVar8 = malloc(lVar9 << 1);
      *(void **)(param_1 + 0x16e) = pvVar8;
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar4 + 8);
        if (lVar7 != 0) {
          puVar1 = (undefined8 *)(lVar7 + 0xa8);
        }
        param_2 = (long *)*puVar1;
        if (param_2 == (long *)0x0) {
          param_1[0x16e] = 0;
          param_1[0x16f] = 0;
          return 0x1002;
        }
      }
      pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,lVar9 << 1,8);
      *(void **)(param_1 + 0x16e) = pvVar8;
    }
    if (pvVar8 != (void *)0x0) {
      *(undefined1 *)(param_1 + 0x170) = 0;
      iVar3 = nn::os::CreateThread
                        ((ThreadType *)(param_1 + 0x172),(_func_void_void_ptr *)&LAB_015dbd90,
                         param_1,(void *)((long)pvVar8 + 0xfffU & 0xfffffffffffff000),
                         *(ulong *)(param_1 + 0xf8),param_1[1],*param_1);
      if (iVar3 == 0) {
        nn::os::SetThreadName((ThreadType *)(param_1 + 0x172),"AudioVideoWorkerThread");
        *(undefined1 *)((long)param_1 + 0x5c1) = 1;
        return 0;
      }
      return 0x100d;
    }
  }
  return 0x1002;
}


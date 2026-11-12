
void * FUN_007c95d0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  undefined **local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  void *local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar2 = FUN_006bd550(param_2[1],0);
  lVar1 = DAT_05ae7600;
  lVar5 = *(long *)(param_1 + 8);
  do {
    if (lVar5 == 0) {
LAB_007c9660:
      plVar6 = *(long **)(param_1 + 0x78);
      if (param_3 != (long *)0x0) {
        plVar6 = param_3;
      }
      if (DAT_05ae7600 == 0) {
        pvVar4 = malloc(200);
      }
      else {
        plVar3 = plVar6;
        if (plVar6 == (long *)0x0) {
          lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar3 = (long *)(lVar1 + 8);
          if (lVar5 != 0) {
            plVar3 = (long *)(lVar5 + 0xa8);
          }
          plVar3 = (long *)*plVar3;
        }
        pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,200,8);
      }
      FUN_007ca314(pvVar4,param_2,plVar6);
      uStack_58 = *(undefined8 *)((long)pvVar4 + 0x30);
      local_60 = &PTR_LAB_048f9770;
      local_48 = pvVar4;
      (**(code **)(*(long *)((long)pvVar4 + 0x28) + 0x18))((long *)((long)pvVar4 + 0x28));
      local_50 = FUN_006bd550(*(undefined8 *)((long)pvVar4 + 0x30),0);
      FUN_007c9750((long *)(param_1 + 8),&local_60,&local_48);
      pvVar4 = local_48;
LAB_007c9724:
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
      return pvVar4;
    }
    if (uVar2 < *(uint *)(lVar5 + 0x30)) {
      plVar6 = (long *)(lVar5 + 8);
    }
    else {
      if (uVar2 <= *(uint *)(lVar5 + 0x30)) {
        pvVar4 = *(void **)(lVar5 + 0x38);
        if (pvVar4 != (void *)0x0) goto LAB_007c9724;
        goto LAB_007c9660;
      }
      plVar6 = (long *)(lVar5 + 0x10);
    }
    lVar5 = *plVar6;
  } while( true );
}


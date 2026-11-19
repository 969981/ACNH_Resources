
void FUN_0386d9a0(long param_1,long param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  lVar7 = *(long *)PTR_DAT_04bb49e0;
  pMVar1 = (MutexType *)(lVar7 + 0x540);
  nn::os::LockMutex(pMVar1);
  lVar7 = FUN_0386a210(lVar7 + 0x4f0,uVar4);
  nn::os::UnlockMutex(pMVar1);
  if (lVar7 == 0) {
    if (param_2 == 0) {
      lVar7 = 1;
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar7 = *(long *)(lVar5 + 0xa8);
      *(long *)(lVar5 + 0xa8) = param_2;
    }
    lVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0xc0) = 1;
      lVar3 = DAT_05ae7600;
      if (param_2 == 0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar2 = (long *)(lVar3 + 8);
        if (lVar6 != 0) {
          plVar2 = (long *)(lVar6 + 0xa8);
        }
        param_2 = *plVar2;
      }
      uVar4 = FUN_038c6d48(0,lVar5 + 0xa0,param_2,8,1,0);
      *(undefined8 *)(lVar5 + 0xb8) = uVar4;
      (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),lVar5);
      (**(code **)(**(long **)(param_1 + 8) + 0x40))(*(long **)(param_1 + 8),lVar5);
      *(undefined4 *)(lVar5 + 0xc0) = 2;
      (**(code **)(**(long **)(lVar5 + 0xb8) + 0x28))();
    }
    if (lVar7 != 1) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      *(long *)(lVar5 + 0xa8) = lVar7;
    }
  }
  return;
}


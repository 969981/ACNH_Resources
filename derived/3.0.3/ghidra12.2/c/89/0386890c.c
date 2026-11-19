
void FUN_0386890c(long *param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined1 auStack_98 [88];
  
  (**(code **)(*param_1 + 0x28))();
  uVar4 = (**(code **)(*param_1 + 0xd8))(param_1);
  if ((uVar4 & 1) != 0) {
    (**(code **)(param_1[0x10] + 0x18))(param_1 + 0x10);
    FUN_0071b954(auStack_98,"PageHolder_%s",param_1[0x11]);
    lVar7 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(0x98);
    }
    else {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar7 + 8);
      if (lVar5 != 0) {
        puVar3 = (undefined8 *)(lVar5 + 0xa8);
      }
      pvVar6 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x98,8);
    }
    FUN_03d5bdf0(pvVar6,auStack_98);
    param_1[0x14] = (long)pvVar6;
    FUN_03d5c3d8(pvVar6,0,*(undefined1 *)((long)param_1 + 0x166),
                 *(undefined1 *)((long)param_1 + 0x167));
    FUN_03d5c508(pvVar6,PTR_PTR_04bb2238);
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
    lVar5 = param_1[0x14];
    lVar7 = *(long *)(lVar5 + 0x68);
    FUN_03ca1ab0(lVar7 + 0x20);
    (**(code **)(**(long **)(lVar7 + 0x10) + 0x28))();
    *(undefined8 *)(lVar5 + 0x68) = 0;
    lVar7 = DAT_05af83f0;
    pMVar1 = (MutexType *)(DAT_05af83f0 + 0x3e0);
    nn::os::LockMutex(pMVar1);
    plVar2 = (long *)(*(int *)(lVar7 + 0x464) + lVar5);
    lVar5 = *(long *)(lVar7 + 0x450);
    *(long **)(lVar7 + 0x450) = plVar2;
    *plVar2 = lVar5;
    plVar2[1] = lVar7 + 0x450;
    if (lVar5 != 0) {
      *(long **)(lVar5 + 8) = plVar2;
    }
    *(int *)(lVar7 + 0x460) = *(int *)(lVar7 + 0x460) + 1;
    nn::os::UnlockMutex(pMVar1);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
  }
  return;
}



void FUN_03f45184(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_2;
  lVar5 = lVar8;
  if (lVar8 == 0) {
    FUN_03f45350(param_1,param_2,1);
    lVar5 = *param_2;
    if (lVar5 == 0) {
      return;
    }
  }
  lVar9 = param_2[2];
  if (lVar9 == 0) {
    if (*(long *)(lVar5 + 0xa8) == 0) {
      *(undefined8 *)(lVar5 + 0xa8) = 0;
    }
  }
  else {
    plVar7 = *(long **)(param_2[1] + 0x18);
    if (plVar7 == (long *)0x0) {
      lVar3 = *(long *)(param_2[1] + 0x10);
      if (lVar3 != 0) {
        plVar7 = *(long **)(lVar3 + 0x180);
        goto LAB_03f451e4;
      }
      plVar7 = (long *)0x0;
      lVar3 = *(long *)(lVar5 + 0xa8);
    }
    else {
LAB_03f451e4:
      lVar3 = *(long *)(lVar5 + 0xa8);
    }
    if (lVar3 == 0) {
      *(long *)(lVar9 + 0x10) = lVar5;
      *(long **)(lVar9 + 0x18) = plVar7;
      (**(code **)(*plVar7 + 0x20))(plVar7);
      *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
      (**(code **)(*plVar7 + 0x28))(plVar7);
      *(undefined4 *)(lVar9 + 8) = 1;
      *(long *)(lVar5 + 0xa8) = lVar9;
    }
  }
  uVar2 = FUN_03f44830(lVar5,param_2[1]);
  if ((uVar2 & 1) == 0) {
    puVar6 = (undefined8 *)*param_2;
    if (((*PTR_DAT_04bcb2d8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcb2d8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bcb2d0 = PTR_DAT_04bcb2e0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcb2d8);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bcb2d0), (uVar2 & 1) != 0)) {
      if (puVar6[0x15] == 0) {
        puVar6[0x15] = 0;
      }
      if (lVar8 != 0) {
        return;
      }
      nn::os::LockMutex((MutexType *)(param_1 + 0x78));
      lVar5 = param_1 + (ulong)(~(uint)*(byte *)(param_1 + 9) & 1) * 0x18;
      plVar4 = (long *)(lVar5 + 0xf8);
      lVar8 = *plVar4;
      plVar7 = (long *)((long)*(int *)(lVar5 + 0x10c) + (long)puVar6);
      *plVar4 = (long)plVar7;
      *plVar7 = lVar8;
      plVar7[1] = (long)plVar4;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar7;
      }
      *(int *)(lVar5 + 0x108) = *(int *)(lVar5 + 0x108) + 1;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb8));
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
      goto LAB_03f452fc;
    }
  }
  if (lVar8 != 0) {
    return;
  }
LAB_03f452fc:
  *param_2 = 0;
  return;
}



void FUN_039a6720(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  FUN_0399dd90();
  *param_1 = &PTR_FUN_04b6a258;
  param_1[0x196] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x197] = &PTR_FUN_04b64428;
  if (DAT_05ae7600 != 0) {
    lVar2 = FUN_038cb610(DAT_05ae7600,param_1 + 0x197);
    param_1[0x198] = lVar2;
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = lVar2 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
      }
      plVar4 = (long *)(lVar2 + 0x70);
      lVar3 = *plVar4;
      plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)(param_1 + 0x197));
      *plVar4 = (long)plVar1;
      *plVar1 = lVar3;
      plVar1[1] = (long)plVar4;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar1;
      }
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
      if (lVar5 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x19e) = 1;
  *(undefined2 *)(param_1 + 0x1a3) = 0xff;
  param_1[0x19b] = &PTR_LAB_048f9770;
  *(code **)((long)param_1 + 0xd04) = FUN_039a6860;
  *(undefined8 *)((long)param_1 + 0xd0c) = 0;
  param_1[0x197] = &PTR_FUN_04b68378;
  *(undefined ***)((long)param_1 + 0xcf4) = &PTR_LAB_04b6a328;
  *(undefined8 **)((long)param_1 + 0xcfc) = param_1;
  param_1[0x19c] = "gsys::Layer3D";
  param_1[0x19d] = 0xffffff9c00000001;
  return;
}


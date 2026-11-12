
undefined4 FUN_00742510(long param_1,undefined4 param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *local_48;
  long *local_40;
  undefined4 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x548));
  local_40 = *(long **)(*(long *)(DAT_04c93e08 + 0x1c0) + 8);
  lVar5 = *(long *)(param_1 + 0x1c0);
  local_48 = (undefined8 *)(PTR_DAT_04bb3308 + 0x10);
  plVar2 = *(long **)(lVar5 + 0x18);
  local_38 = param_2;
  if (*(long **)(lVar5 + 8) <= param_3 && param_3 <= plVar2) {
    if (plVar2 == param_3) {
      plVar3 = param_3;
    }
    else {
      do {
        if ((*param_3 != 0) && ((*(uint *)(*param_3 + 0x248) >> 1 & 1) == 0)) {
          uVar1 = (*(code *)*local_48)(&local_48);
          plVar2 = *(long **)(lVar5 + 0x18);
          if ((uVar1 & 1) != 0) {
            plVar3 = param_3;
            break;
          }
        }
        param_3 = param_3 + 1;
        plVar3 = plVar2;
      } while (param_3 != plVar2);
      lVar5 = *(long *)(param_1 + 0x1c0);
      param_3 = plVar2;
    }
    plVar2 = plVar3;
    local_40 = plVar2 + (plVar2 != param_3);
  }
  if (plVar2 == *(long **)(lVar5 + 0x18)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*plVar2 + 0x230);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x548));
  return uVar4;
}



void FUN_00221338(long *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bcb8c0;
  uVar5 = 6;
  if ((param_2 & 1) == 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
  lVar6 = *(long *)puVar1;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x60));
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  nn::os::LockMutex((MutexType *)(lVar6 + 0x60));
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  uVar5 = 8;
  switch(uVar2 & 0xff) {
  case 0:
  case 6:
  case 7:
    FUN_002282f0(param_1 + 2);
    if ((uVar2 & 0xff) == 7) {
      FUN_002234f0(*(undefined8 *)puVar1,param_1,1);
LAB_00221490:
      uVar5 = 5;
    }
    else {
      if ((uVar2 & 0xff) == 6) {
        FUN_002234f0(*(undefined8 *)puVar1,param_1,0);
      }
      else {
        FUN_002234f0(*(undefined8 *)puVar1,param_1,param_2 & 1);
        if ((param_2 & 1) != 0) goto LAB_00221490;
      }
      uVar5 = 2;
    }
    break;
  case 1:
  case 2:
    break;
  case 3:
    uVar5 = 7;
    break;
  case 4:
    FUN_002282f0(param_1 + 2);
    plVar3 = (long *)FUN_00228380();
    uVar4 = *(undefined8 *)puVar1;
    param_1[2] = param_1[2] + *plVar3 * (ulong)(uVar2 >> 0x10);
    uVar5 = 4;
    if ((param_2 & 1) == 0) {
      uVar5 = 1;
    }
    FUN_002234f0(uVar4,param_1,param_2 & 1);
    break;
  case 5:
    FUN_002282f0(param_1 + 2);
    FUN_00223558(*(undefined8 *)puVar1,param_1);
    uVar5 = 4;
    if ((param_2 & 1) == 0) {
      uVar5 = 1;
    }
    break;
  default:
    goto switchD_002213cc_default;
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
switchD_002213cc_default:
  return;
}


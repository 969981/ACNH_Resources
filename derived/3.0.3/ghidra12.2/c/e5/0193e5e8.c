
void FUN_0193e5e8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  local_60 = *(undefined8 *)(param_2 + 8);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  uStack_50 = *(undefined8 *)(param_3 + 8);
  puStack_40 = &DAT_0407ebb1;
  local_38 = 0;
  *param_1 = &PTR_FUN_04b64428;
  param_1[1] = 0;
  lVar2 = DAT_05ae7600;
  param_1[2] = 0;
  param_1[3] = 0;
  local_58 = local_68;
  local_48 = local_68;
  if (lVar2 != 0) {
    lVar2 = FUN_038cb610(lVar2,param_1);
    param_1[1] = lVar2;
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
      plVar1 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
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
  param_1[4] = PTR_DAT_04bb3050 + 0x10;
  (**(code **)(local_68 + 0x18))(&local_68);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x11b) = 0;
  *(undefined4 *)(param_1 + 8) = local_38;
  *param_1 = &PTR_LAB_049e0330;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[4] = &PTR_LAB_049e0410;
  param_1[5] = local_60;
  param_1[0x10] = &PTR_LAB_049e0570;
  *(undefined4 *)(param_1 + 0x13) = 0x80;
  param_1[0x12] = (undefined *)((long)param_1 + 0x9c);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((undefined *)((long)param_1 + 0x9c) != &DAT_040cd53f) {
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0x656e6f4e;
  }
  param_1[0x11] = &DAT_048fc708;
  return;
}


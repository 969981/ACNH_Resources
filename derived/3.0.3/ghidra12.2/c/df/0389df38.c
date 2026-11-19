
void FUN_0389df38(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_70;
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_34;
  
  local_60 = 0;
  local_70 = local_70 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  puVar2 = PTR_DAT_04bcb7d8;
  uVar4 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb7d8 + 0x60) + 0x80))();
  if ((uVar4 & 1) != 0) {
    nn::os::LockMutex((MutexType *)(param_2 + 0xd0));
    FUN_0388fba0(*(undefined8 *)(param_2 + 0x80));
    nn::os::UnlockMutex((MutexType *)(param_2 + 0xd0));
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0xd0));
  if (*(long *)PTR_DAT_04bcb8c0 != 0) {
    FUN_00223260(*(long *)PTR_DAT_04bcb8c0,*(undefined4 *)(param_2 + 0xa8));
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0xd0));
  lVar7 = *(long *)puVar2;
  if (*(int *)(*(long *)(lVar7 + 0x60) + 0x5c) == 1) {
    nn::os::LockMutex((MutexType *)(param_2 + 0x110));
    puVar3 = PTR_DAT_04bcb900;
    plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar5;
      if (uVar1 != 0) {
        lVar7 = **(long **)(puVar3 + 0xa0);
        if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("D:/home/Project/Park/App/Lib/NintendoSDK-NEX/Include\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar8 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    FUN_0019f2c8(*(undefined8 *)(*(long *)(*plVar8 + 0x10) + 0x10),
                 *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x18) + 700),0);
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x110));
    lVar7 = *(long *)puVar2;
  }
  local_70 = 0;
  uVar6 = (**(code **)(**(long **)(lVar7 + 0x38) + 0x80))(*(long **)(lVar7 + 0x38),&local_70);
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  else {
    *(undefined1 *)(param_2 + 0x130) = 1;
    nn::os::LockMutex((MutexType *)(param_2 + 0x160));
    *(ulong *)(param_2 + 0x138) = local_70;
    nn::os::UnlockMutex((MutexType *)(param_2 + 0x160));
  }
  if ((uVar4 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x90) + 0x30))();
    (**(code **)(**(long **)(param_2 + 0x58) + 0x20))();
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_70 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_70);
  return;
}


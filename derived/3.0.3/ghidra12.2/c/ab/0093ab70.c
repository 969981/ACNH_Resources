
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float FUN_0093ab70(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined5 uStack_a4;
  undefined3 local_9f;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  
  if (param_3 != 0) {
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x4c) = 0;
    *(undefined4 *)(param_3 + 0x48) = 7;
    *(undefined8 *)(param_3 + 0x54) = 0;
    *(undefined8 *)(param_3 + 0x59) = 0;
    *(undefined8 *)(param_3 + 0x70) = 0;
    *(undefined8 *)(param_3 + 0x75) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x50) == param_1 + 0x48) {
    fVar8 = -500.0;
  }
  else {
    lVar5 = (long)*(int *)(param_1 + 0x5c);
    plVar4 = (long *)(*(long *)(param_1 + 0x50) - lVar5);
    plVar6 = (long *)((param_1 + 0x48) - lVar5);
    if (param_3 == 0) {
      puVar1 = PTR_DAT_04bb2cc0 + 0x10;
      puVar2 = PTR_DAT_04bb2ca0 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      fVar7 = -500.0;
      do {
        local_f0 = 0;
        local_e8 = 0;
        uStack_e4 = 0;
        local_e0 = 0;
        uStack_dc = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_b0 = 7;
        local_80 = 0;
        local_7c = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        local_9f = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        local_88 = 0;
        local_f8 = puVar1;
        local_c8 = puVar2;
        local_90 = puVar3;
        fVar8 = (float)(**(code **)(*plVar4 + 0x38))(plVar4,param_2,&local_f8,0);
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) + -lVar5);
        fVar7 = fVar8;
      } while (plVar4 != plVar6);
    }
    else {
      fVar8 = -500.0;
      puVar1 = PTR_DAT_04bb2cc0 + 0x10;
      puVar2 = PTR_DAT_04bb2ca0 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      do {
        local_f0 = 0;
        local_e8 = 0;
        uStack_e4 = 0;
        local_e0 = 0;
        uStack_dc = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_b0 = 7;
        local_80 = 0;
        local_7c = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        local_9f = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        local_88 = 0;
        local_f8 = puVar1;
        local_c8 = puVar2;
        local_90 = puVar3;
        fVar7 = (float)(**(code **)(*plVar4 + 0x38))(plVar4,param_2,&local_f8,0);
        if (fVar8 < fVar7) {
          *(undefined8 *)(param_3 + 8) = local_f0;
          *(undefined4 *)(param_3 + 0x10) = local_e8;
          *(undefined4 *)(param_3 + 0x38) = (undefined4)local_c0;
          *(ulong *)(param_3 + 0x14) = CONCAT44(local_e0,uStack_e4);
          *(undefined4 *)(param_3 + 0x1c) = uStack_dc;
          *(undefined8 *)(param_3 + 0x20) = local_d8;
          *(undefined4 *)(param_3 + 0x28) = local_d0;
          *(ulong *)(param_3 + 0x48) = CONCAT44(uStack_ac,local_b0);
          *(undefined4 *)(param_3 + 0x40) = (undefined4)uStack_b8;
          *(undefined4 *)(param_3 + 0x50) = uStack_a8;
          *(undefined4 *)(param_3 + 0x3c) = local_c0._4_4_;
          *(ulong *)(param_3 + 0x54) = CONCAT35(local_9f,uStack_a4);
          *(undefined4 *)(param_3 + 0x44) = uStack_b8._4_4_;
          *(undefined1 *)(param_3 + 0x60) = uStack_98;
          *(undefined4 *)(param_3 + 0x5c) = uStack_9c;
          *(undefined4 *)(param_3 + 0x70) = (undefined4)local_88;
          *(undefined4 *)(param_3 + 0x74) = local_88._4_4_;
          *(undefined1 *)(param_3 + 0x7c) = local_7c;
          *(undefined4 *)(param_3 + 0x78) = local_80;
          fVar8 = fVar7;
        }
        plVar4 = (long *)(*(long *)((long)plVar4 + lVar5 + 8) + -lVar5);
      } while (plVar4 != plVar6);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return fVar8;
}


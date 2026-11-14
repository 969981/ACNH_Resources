
void FUN_01baf140(long param_1,long *param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_64;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  undefined8 local_4c;
  uint local_44;
  
  lVar4 = FUN_01bc1730(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 8);
  if (lVar4 != 0) {
    local_4c = 0;
    local_44 = 0;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar3 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    uVar2 = *param_4;
    if (*(uint *)PTR_DAT_04bc0a80 <= uVar2) {
      uVar2 = 0;
    }
    local_58 = 0;
    local_50 = 0;
    local_4c = CONCAT44(param_5,*(undefined4 *)
                                 (*(long *)(PTR_DAT_04bc0a80 + 8) + (long)(int)uVar2 * 4));
    local_44 = param_3;
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar3 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    uVar2 = *param_4;
    local_50 = param_3 | 0x2000000;
    if (*(uint *)PTR_DAT_04bc0a80 <= uVar2) {
      uVar2 = 0;
    }
    local_64 = 0;
    local_5c = 0;
    local_58 = CONCAT44(param_5,*(undefined4 *)
                                 (*(long *)(PTR_DAT_04bc0a80 + 8) + (long)(int)uVar2 * 4));
    if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar3 != 0)) {
      FUN_01bb25c8(PTR_DAT_04bc0a80);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
    uVar2 = *param_4;
    if (*(uint *)PTR_DAT_04bc0a80 <= uVar2) {
      uVar2 = 0;
    }
    local_64 = CONCAT44(param_5,*(undefined4 *)
                                 (*(long *)(PTR_DAT_04bc0a80 + 8) + (long)(int)uVar2 * 4));
    local_5c = param_3 | 0x3000000;
    while (plVar5 = (long *)FUN_01bc0860(lVar4,&local_4c,1), plVar5 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x2c) + (long)plVar5);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
      (**(code **)(*plVar5 + 0x18))();
    }
    while (plVar5 = (long *)FUN_01bc0860(lVar4,&local_58,1), plVar5 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x2c) + (long)plVar5);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
      (**(code **)(*plVar5 + 0x18))();
    }
    while (plVar5 = (long *)FUN_01bc0860(lVar4,&local_64,1), plVar5 != (long *)0x0) {
      plVar1 = (long *)((long)*(int *)(lVar4 + 0x2c) + (long)plVar5);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar4 + 0x28) = *(int *)(lVar4 + 0x28) + -1;
      (**(code **)(*plVar5 + 0x18))();
    }
    iVar3 = (**(code **)(*param_2 + 0x28))(param_2);
    puVar8 = &local_4c;
    if (iVar3 == 0) {
      lVar7 = 7;
    }
    else {
      if (iVar3 == 1) {
        puVar8 = &local_64;
        puVar9 = &local_4c;
      }
      else {
        if (iVar3 != 2) {
          return;
        }
        puVar9 = &local_58;
      }
      uVar6 = (**(code **)(*param_2 + 0x38))(param_2);
      FUN_01bc09d8(lVar4,puVar9,uVar6);
      lVar7 = 9;
    }
    uVar6 = (**(code **)(*param_2 + lVar7 * 8))(param_2);
    FUN_01bc09d8(lVar4,puVar8,uVar6);
  }
  return;
}


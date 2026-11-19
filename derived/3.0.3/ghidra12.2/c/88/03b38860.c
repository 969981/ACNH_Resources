
undefined8 FUN_03b38860(undefined4 param_1,long param_2,undefined2 *param_3,uint *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined2 local_40;
  undefined4 uStack_3e;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  uint local_24;
  
  puVar1 = PTR_DAT_04bcb018;
  if (((*PTR_DAT_04bcb018 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05ad1da8), iVar3 != 0)) {
    FUN_037d8910(&DAT_05ad1d98);
    __cxa_guard_release(&DAT_05ad1da8);
  }
  local_24 = *param_4;
  uVar2 = local_24;
  if (*(uint *)PTR_DAT_04bcb010 <= local_24) {
    uVar2 = 0;
  }
  if (*(int *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar2 * 4) < 0x40) {
    uVar2 = FUN_03b38450(param_2,&local_24);
    if (DAT_05aebc00 == '\0') {
      lVar6 = FUN_03b38a74();
      plVar5 = *(long **)(lVar6 + (long)(int)uVar2 * 8 + 0x110);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      (**(code **)(*plVar5 + 0x10))(param_1,plVar5,&local_40,uVar2);
    }
    else {
      uStack_38 = 0;
      if (0x3e < (int)uVar2) {
        uVar2 = 0x3f;
      }
      local_40 = 0;
      uStack_3e = 0;
      uStack_3a = 0;
      plVar5 = *(long **)(*(long *)(*(long *)PTR_DAT_04bd1e70 + 0x168) +
                          (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) * 8 + 8);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      (**(code **)(*plVar5 + 0x10))(param_1,plVar5,&local_40);
    }
    *(uint *)(param_3 + 3) = CONCAT22(uStack_38,uStack_3a);
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = uStack_3e;
  }
  else {
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bcb018), iVar3 != 0)) {
      FUN_037d8910(&DAT_05ad1d98);
      __cxa_guard_release(&DAT_05ad1da8);
    }
    uVar2 = *param_4;
    if (*(uint *)PTR_DAT_04bcb010 <= uVar2) {
      uVar2 = 0;
    }
    uVar2 = *(int *)(*(long *)(PTR_DAT_04bcb010 + 8) + (long)(int)uVar2 * 4) - 0x40;
    plVar5 = (long *)(param_2 + 8) + uVar2;
    if (0x1f < uVar2) {
      plVar5 = (long *)(param_2 + 8);
    }
    if (*plVar5 == 0) {
      return 0;
    }
    puVar4 = *(undefined8 **)(*plVar5 + 8);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    (**(code **)*puVar4)(param_1,puVar4,param_3);
  }
  return 1;
}


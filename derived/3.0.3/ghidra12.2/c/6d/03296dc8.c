
void FUN_03296dc8(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bc94d0;
  local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(param_1 + 0xaa0));
  uVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bc94d0);
  nn::os::SetTlsValue(*(undefined4 *)puVar1,(long)(int)local_28);
  if (*(int *)(param_1 + 0xa98) == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x918);
    *(undefined8 *)(param_1 + 0x918) = 0;
    FUN_03281ac0(&local_28);
    plVar3 = *(long **)(param_1 + 0x920);
    *(undefined8 *)(param_1 + 0x920) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined8 *)(param_1 + 0x910) = 0;
  if (*(long *)(param_1 + 0x248) != 0) {
    FUN_032d15b0(*(undefined8 *)(*(long *)(param_1 + 0x240) + 0x18),
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0x240) + 0x20) + 0x248) + 8));
    FUN_0329ca50(*(undefined8 *)(param_1 + 0x248));
    plVar3 = *(long **)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  lVar4 = *(long *)(param_1 + 0x230);
  if (lVar4 != 0) {
    FUN_032d15b0(*(undefined8 *)(lVar4 + 8),
                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x10) + 0x240) + 0x18));
    FUN_0329dd80(*(undefined8 *)(param_1 + 0x240));
    if ((*(char *)(param_1 + 0xa9e) != '\0') &&
       (plVar3 = *(long **)(param_1 + 0x240), plVar3 != (long *)0x0)) {
      *(undefined8 *)(param_1 + 0x240) = 0;
      (**(code **)(*plVar3 + 0x18))();
    }
    lVar4 = *(long *)(param_1 + 0x230);
    if ((lVar4 != 0) && (lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + 0x238), lVar5 != 0)) {
      FUN_032d15b0(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar5 + 8));
    }
  }
  plVar3 = *(long **)(param_1 + 0x238);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if (plVar3[1] != 0) {
      FUN_032d1384();
      __ptr = (void *)plVar3[1];
      plVar3[1] = 0;
      if (__ptr != (void *)0x0) {
        FUN_032d0688(__ptr);
        if (DAT_05ae7600 == 0) {
          free(__ptr);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
          }
        }
      }
    }
    plVar3 = *(long **)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  FUN_032c6840(param_1 + 0x250);
  FUN_032c6840(param_1 + 0x2a8);
  if (*(long *)(param_1 + 0x230) != 0) {
    FUN_03299770();
    plVar3 = *(long **)(param_1 + 0x230);
    *(undefined8 *)(param_1 + 0x230) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  FUN_032ae1e0(param_1 + 0x300);
  FUN_032c1bf0(param_1 + 0x4d0);
  FUN_032c1bf0(param_1 + 0x6f0);
  local_28 = CONCAT44(local_28._4_4_,uVar2);
  nn::os::GetTlsValue(*(undefined4 *)puVar1);
  nn::os::SetTlsValue(*(undefined4 *)puVar1,(long)(int)local_28);
  return;
}


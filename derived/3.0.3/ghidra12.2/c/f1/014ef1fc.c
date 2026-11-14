
void FUN_014ef1fc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_2 + 0x18) == 1) && (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 != 0)) {
    uVar8 = *(uint *)(param_2 + 0x8c);
    if ((uVar8 == 0) ||
       (((plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0 ||
         ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)))) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014ef2c4;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014ef2c4:
      uVar8 = 0;
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[0x2a];
      uVar1 = *(uint *)(plVar7 + 0x49);
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
      if ((((int)lVar6 == 1) && ((uVar4 & uVar8) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        plVar7 = plVar7 + 0x71;
        param_1[0x13] = 0;
        param_1[0xe] = param_1 + 0x13;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[9] = param_1 + 0xe;
        param_1[4] = param_1 + 9;
        goto LAB_014ef384;
      }
    }
  }
  if (((DAT_051f0fc8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_051f0fc8), iVar3 != 0)) {
    DAT_051f0f80 = 0;
    DAT_051f0f58 = &DAT_051f0f80;
    DAT_051f0f30 = &DAT_051f0f58;
    DAT_051f0f08 = &DAT_051f0f30;
    DAT_051f0ef8 = &DAT_051f0f08;
    DAT_051f0f00 = &DAT_051f0f08;
    DAT_051f0ef0 = &DAT_051f0fa8;
    DAT_051f0ee8 = 0x400000000;
    __cxa_guard_release(&DAT_051f0fc8);
  }
  param_1[0x13] = 0;
  param_1[0xe] = param_1 + 0x13;
  param_1[9] = param_1 + 0xe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_1 + 9;
  plVar7 = &DAT_051f0ee8;
LAB_014ef384:
  param_1[2] = param_1 + 4;
  param_1[3] = param_1 + 4;
  if (param_1 + 0x18 != (undefined8 *)0x0) {
    param_1[1] = param_1 + 0x18;
    *(undefined4 *)((long)param_1 + 4) = 4;
  }
  FUN_014f0170(param_1,plVar7);
  return;
}


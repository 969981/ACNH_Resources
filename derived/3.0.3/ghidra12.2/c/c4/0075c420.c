
void FUN_0075c420(long param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x3b0) != 0) {
    if (((param_4 & 1) == 0) && (uVar4 = FUN_0075c824(param_1), (uVar4 & 1) != 0)) {
      local_118 = 0;
      local_128 = 0xffffffff00000000;
      uStack_120 = 0;
      local_114 = 0x3f800000;
      local_f0 = local_e4;
      local_e8 = 0x80;
      local_65 = 0;
      local_e4[0] = 0;
      plVar7 = *(long **)(param_1 + 0x3b0);
      local_f8 = PTR_DAT_04bb2d88 + 0x10;
      local_58 = 0;
      local_5b = 0;
      local_60 = 7;
      local_5c = *(undefined1 *)(param_1 + 0x224);
      local_10c = 0;
      local_104 = 0;
      if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar3 != 0)) {
        *(undefined ***)PTR_DAT_04bb37c0 = &PTR_LAB_04908e00;
        __cxa_guard_release(PTR_DAT_04bb37c8);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37c0), puVar2 = local_f0,
         (uVar4 & 1) != 0)) {
        (**(code **)(*(long *)(param_1 + 0x448) + 0x18))(param_1 + 0x448);
        puVar8 = *(undefined1 **)(param_1 + 0x450);
        if (puVar2 != puVar8) {
          (**(code **)(*(long *)(param_1 + 0x448) + 0x18))(param_1 + 0x448);
          lVar6 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x450) + lVar6) == '\0') goto LAB_0075c700;
            lVar1 = *(long *)(param_1 + 0x450) + lVar6;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_0075c700;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_0075c700;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_0075c700:
          iVar3 = (int)lVar6;
          if (local_e8 <= (int)lVar6) {
            iVar3 = local_e8 + -1;
          }
          memcpy(puVar2,puVar8,(long)iVar3);
          puVar2[iVar3] = 0;
        }
      }
      lVar6 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
      if (lVar6 != 0) {
        uVar5 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
        local_12c = 0;
        FUN_017327f0(uVar5,param_2,&local_12c,&local_128,0xffffffff);
      }
      lVar6 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a8))();
      if (lVar6 == 0) {
        return;
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a8))();
      param_2 = param_1 + 0x47c;
    }
    else {
      if ((param_3 & 1) != 0) {
        FUN_0075bd1c(param_1,param_2);
      }
      local_118 = 0;
      local_128 = 0xffffffff00000000;
      uStack_120 = 0;
      local_114 = 0x3f800000;
      local_f0 = local_e4;
      local_e8 = 0x80;
      local_65 = 0;
      local_e4[0] = 0;
      plVar7 = *(long **)(param_1 + 0x3b0);
      local_f8 = PTR_DAT_04bb2d88 + 0x10;
      local_58 = 0;
      local_5b = 0;
      local_60 = 7;
      local_5c = *(undefined1 *)(param_1 + 0x224);
      local_10c = 0;
      local_104 = 0;
      if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar3 != 0)) {
        *(undefined ***)PTR_DAT_04bb37c0 = &PTR_LAB_04908e00;
        __cxa_guard_release(PTR_DAT_04bb37c8);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37c0), puVar2 = local_f0,
         (uVar4 & 1) != 0)) {
        (**(code **)(*(long *)(param_1 + 0x448) + 0x18))(param_1 + 0x448);
        puVar8 = *(undefined1 **)(param_1 + 0x450);
        if (puVar2 != puVar8) {
          (**(code **)(*(long *)(param_1 + 0x448) + 0x18))(param_1 + 0x448);
          lVar6 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x450) + lVar6) == '\0') goto LAB_0075c690;
            lVar1 = *(long *)(param_1 + 0x450) + lVar6;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_0075c690;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_0075c690;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_0075c690:
          iVar3 = (int)lVar6;
          if (local_e8 <= (int)lVar6) {
            iVar3 = local_e8 + -1;
          }
          memcpy(puVar2,puVar8,(long)iVar3);
          puVar2[iVar3] = 0;
        }
      }
      lVar6 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
      if (lVar6 == 0) {
        return;
      }
      uVar5 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
    }
    local_12c = 0;
    FUN_017327f0(uVar5,param_2,&local_12c,&local_128,0xffffffff);
  }
  return;
}


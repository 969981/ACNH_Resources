
void FUN_016f84f0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined *local_60;
  undefined8 local_58;
  
  FUN_016f86f0(param_1,0);
  local_58 = (char *)((ulong)local_58._4_4_ << 0x20);
  local_60 = (undefined *)0x3f80000000000000;
  FUN_016f8870(param_1,&local_60,param_2);
  (**(code **)(*param_1 + 0x298))(param_1,1);
  puVar3 = PTR_DAT_04bb30c8;
  puVar2 = PTR_DAT_04bb30c0;
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar8 = (long)*(int *)((long)param_1 + 0xbc);
    plVar7 = (long *)(param_1[0x16] - lVar8);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      if ((plVar7 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2), (uVar6 & 1) != 0)) {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        local_58 = "Havok_Bag";
        if (((plVar7[0x51] != 0) && (uVar4 = FUN_03efff10(plVar7[0x51],&local_60), -1 < (int)uVar4))
           && (lVar8 = plVar7[0x51], lVar8 != 0)) {
          if (*(uint *)(lVar8 + 0x10) <= uVar4) {
            uVar4 = 0;
          }
          lVar8 = *(long *)(lVar8 + 0x18) + (ulong)uVar4 * 0x48;
          *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) | 8;
        }
        break;
      }
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)((long)(param_1 + 0x15) - lVar8));
  }
  plVar7 = (long *)param_1[0xc];
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37b0);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*plVar7 + 0x4d8))(plVar7,0);
      (**(code **)(*plVar7 + 0x4a0))(plVar7,1);
    }
  }
  return;
}


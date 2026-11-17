
/* WARNING: Removing unreachable block (ram,0x02bc7440) */

void FUN_02bc7260(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  undefined1 *puStack_58;
  byte local_50;
  undefined8 local_48;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x210) + 0x590);
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0x1c1cc) = 0xffffffff;
    lVar5 = param_1 + 0x1c1b8;
    FUN_02bc30b0(lVar5,lVar6);
    *(undefined4 *)(param_1 + 0x1c1d0) = 0xffffffff;
    FUN_02bc30b0(lVar5,lVar6);
    *(undefined4 *)(param_1 + 0x1c1d4) = 0xffffffff;
    FUN_02bc30b0(lVar5,lVar6);
    uVar2 = *(uint *)(lVar6 + 0x2f8);
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        if (((long)uVar4 < (long)(int)*(uint *)(lVar6 + 0x208) && uVar4 < *(uint *)(lVar6 + 0x208))
           && (lVar5 = *(long *)(*(long *)(lVar6 + 0x210) + uVar4 * 8), lVar5 != 0)) {
          bVar1 = *(byte *)(lVar5 + 0x2c2) | 1;
          if ((*(byte *)(lVar5 + 0x2c3) & 1) != 0) {
            bVar1 = *(byte *)(lVar5 + 0x2c2) & 0xfd;
          }
          *(byte *)(lVar5 + 0x2c2) = bVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x1c210) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c218) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c200) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c208) = 0xffffffffffffffff;
  plVar7 = *(long **)(*(long *)(param_1 + 0x210) + 0x578);
  if (plVar7 == (long *)0x0) {
    return;
  }
  local_50 = *(byte *)(param_1 + 0x1f8);
  local_48 = 0;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_50) {
    local_50 = 0xff;
  }
  pcStack_68 = "AddresseeSelMulti";
  puStack_58 = &DAT_040a04a3;
  local_60 = local_70;
  if (((*PTR_DAT_04bc4f40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4f40), iVar3 != 0))
  {
    *(undefined ***)PTR_DAT_04bc4f38 = &PTR_LAB_04aa88f0;
    __cxa_guard_release(PTR_DAT_04bc4f40);
  }
  uVar4 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bc4f38);
  if ((uVar4 & 1) != 0) {
    FUN_030ded60(plVar7,&local_70);
  }
  (**(code **)(*plVar7 + 0x140))(plVar7,0,0);
                    /* WARNING: Could not recover jumptable at 0x02bc73fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_02bc7400 + (ulong)DAT_0417fc06 * 4))();
  return;
}


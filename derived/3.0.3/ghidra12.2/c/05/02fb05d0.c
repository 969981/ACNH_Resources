
/* WARNING: Removing unreachable block (ram,0x02fb06bc) */

void FUN_02fb05d0(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_30;
  char *pcStack_28;
  
  if ((*(uint *)(param_2 + 8) < 2) && (*(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4) == '\0')) {
    if (*(int *)(param_1 + 0x244) != 4) {
      *(bool *)(param_1 + 0x239) = *(uint *)(param_2 + 8) == 1;
      *(undefined1 *)(param_1 + 0x238) = 1;
      return;
    }
    if (*(int *)(param_1 + 0x244) == 3) {
      pcStack_28 = "Evfl_TreasureHuntState";
    }
    else {
      if (1 < *(int *)(param_1 + 0x244) - 1U) {
        return;
      }
      if (*(char *)(param_1 + 0x240) == '\0') {
        return;
      }
      pcStack_28 = "Evfl_InsectFesState";
    }
    local_30 = PTR_DAT_04bb2020 + 0x10;
    FUN_02a0d6e0(*(long *)PTR_DAT_04bb26a8 + 0xa7660,&local_30,0);
    return;
  }
  if (*(int *)(param_1 + 0x244) == 3) {
    pcStack_28 = "Evfl_TreasureHuntState";
  }
  else {
    if ((1 < *(int *)(param_1 + 0x244) - 1U) || (*(char *)(param_1 + 0x240) == '\0'))
    goto LAB_02fb0678;
    pcStack_28 = "Evfl_InsectFesState";
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  FUN_02a0d6e0(*(long *)PTR_DAT_04bb26a8 + 0xa7660,&local_30,0);
LAB_02fb0678:
  *(undefined1 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 1;
  }
  local_30 = (undefined *)CONCAT44(local_30._4_4_,0xd);
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) &&
      (lVar3 = puVar4[0x48],
      *(uint *)(lVar3 + 0xa8) < 7 && (1 << (ulong)(*(uint *)(lVar3 + 0xa8) & 0x1f) & 0x58U) != 0))
     && (*(char *)(lVar3 + 0x230) == '\0')) {
    *(undefined1 *)(lVar3 + 0x239) = 0;
    *(undefined2 *)(lVar3 + 0x231) = 0x101;
  }
  return;
}



void FUN_035913fc(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte bVar6;
  long *plVar7;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  byte local_40;
  undefined8 local_38;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x210) + 0x578);
  if (plVar7 == (long *)0x0) {
    return;
  }
  uVar5 = 0;
  if ((param_2 & 1) == 0) {
    uVar5 = 2;
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar5);
  switch(uVar5) {
  case 0:
    bVar6 = *(byte *)(plVar7 + 0x58) & 0xf8 | 2;
    break;
  case 2:
    bVar6 = *(byte *)(plVar7 + 0x58) & 0xf8 | 1;
    break;
  default:
    goto switchD_03591454_default;
  }
  *(byte *)(plVar7 + 0x58) = bVar6;
switchD_03591454_default:
  *(undefined4 *)(plVar7 + 0x56) = uVar5;
  (**(code **)(*plVar7 + 0x140))(plVar7,param_2 & 1,0);
  if (((*PTR_DAT_04bc4f40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4f40), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4f38 = PTR_DAT_04bc4f48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4f40);
  }
  uVar4 = (**(code **)*plVar7)(plVar7,PTR_DAT_04bc4f38);
  if ((uVar4 & 1) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x210);
    local_40 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_40) {
      local_40 = 0xff;
    }
    puVar1 = &DAT_05772628;
    if ((param_2 & 1) == 0) {
      puVar1 = &DAT_05772638;
    }
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "WorkBenchRemakeSelect";
    puVar2 = &DAT_05772648;
    if (*(int *)(param_1 + 0x248) != 2) {
      puVar2 = puVar1;
    }
    uStack_48 = puVar2[1];
    local_50 = local_60;
    FUN_030ded60(plVar7,&local_60);
  }
  return;
}



void FUN_02bd7bf8(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte bVar5;
  long *plVar6;
  undefined *local_60;
  char *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  byte local_40;
  undefined8 local_38;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x218) + 0x570);
  if (plVar6 == (long *)0x0) {
    return;
  }
  uVar4 = 0;
  if ((param_2 & 1) == 0) {
    uVar4 = 2;
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar4);
  switch(uVar4) {
  case 0:
    bVar5 = *(byte *)(plVar6 + 0x58) & 0xf8 | 2;
    break;
  case 2:
    bVar5 = *(byte *)(plVar6 + 0x58) & 0xf8 | 1;
    break;
  default:
    goto switchD_02bd7c50_default;
  }
  *(byte *)(plVar6 + 0x58) = bVar5;
switchD_02bd7c50_default:
  *(undefined4 *)(plVar6 + 0x56) = uVar4;
  (**(code **)(*plVar6 + 0x140))(plVar6,param_2 & 1,0);
  if (((*PTR_DAT_04bc4f40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4f40), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4f38 = PTR_DAT_04bc4f48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4f40);
  }
  uVar3 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bc4f38);
  if ((uVar3 & 1) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x218);
    local_40 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_40) {
      local_40 = 0xff;
    }
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = "WorkBenchRemakeSelectAlp";
    lVar1 = 0x10;
    if ((param_2 & 1) == 0) {
      lVar1 = 0x20;
    }
    local_48 = *(undefined8 *)((long)&DAT_05646840 + lVar1);
    puStack_50 = local_60;
    FUN_030ded60(plVar6,&local_60);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x02eb89bc) */

void FUN_02eb8854(long param_1,uint param_2)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined *puStack_48;
  byte local_40;
  undefined8 local_38;
  
  puVar1 = &DAT_04100084;
  if (param_2 != 0) {
    puVar1 = &DAT_04097e6c;
  }
  lVar5 = *(long *)(param_1 + 0x12d8);
  if ((int)param_2 < 2) {
    plVar2 = (long *)(lVar5 + 0x580) + param_2;
    if (1 < param_2) {
      plVar2 = (long *)(lVar5 + 0x580);
    }
    puVar6 = (undefined8 *)*plVar2;
  }
  else if (param_2 < 10) {
    puVar6 = *(undefined8 **)(lVar5 + (ulong)(param_2 - 2) * 8 + 0x590);
  }
  else {
    if (param_2 != 10) {
      return;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0x5d0);
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bc4f40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4f40), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4f38 = PTR_DAT_04bc4f48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4f40);
  }
  uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4f38);
  if ((uVar4 & 1) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x12d8);
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "Report";
    local_40 = *(byte *)(param_1 + 0x1f8);
    if (7 < local_40) {
      local_40 = 0xff;
    }
    local_50 = local_60;
    puStack_48 = puVar1;
    FUN_030ded60(puVar6,&local_60);
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x02eb8978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_02eb897c + (ulong)DAT_04180e51 * 4))();
  return;
}


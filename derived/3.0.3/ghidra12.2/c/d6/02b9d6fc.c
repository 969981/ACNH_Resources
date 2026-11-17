
void FUN_02b9d6fc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 local_28 [2];
  undefined4 local_24;
  undefined2 local_8;
  int local_4;
  
  if (*(char *)(param_1 + 0xee8) == '\0') {
    puVar3 = (undefined8 *)FUN_00a8c18c(*(undefined8 *)PTR_DAT_04bb30a0);
    uVar4 = *puVar3;
    *(undefined8 *)(param_1 + 0xec8) = uVar4;
    *(char *)(param_1 + 0xed4) = (char)((ulong)uVar4 >> 0x20);
    *(char *)(param_1 + 0xed5) = (char)((ulong)uVar4 >> 0x28);
    uVar2 = nn::time::GetDayOfWeek((int)(short)uVar4,((int)uVar4 << 8) >> 0x18,(int)uVar4 >> 0x18);
    *(undefined4 *)(param_1 + 0xed0) = uVar2;
    local_8 = 0;
    local_4 = 0;
    local_28[0] = 0;
    local_24 = 0;
    FUN_02b9d8f4(param_1,&local_8,local_28);
    if ((((*(int *)(param_1 + 0xedc) != local_4) || (*(char *)(param_1 + 0xed8) != (char)local_8))
        || (*(char *)(param_1 + 0xed9) != local_8._1_1_)) || (*(char *)(param_1 + 0xee8) == '\0')) {
      *(int *)(param_1 + 0xedc) = local_4;
      *(undefined2 *)(param_1 + 0xee0) = local_28[0];
      *(undefined2 *)(param_1 + 0xed8) = local_8;
      *(undefined4 *)(param_1 + 0xee4) = local_24;
    }
    *(undefined1 *)(param_1 + 0xee8) = 1;
    return;
  }
  puVar3 = (undefined8 *)FUN_00a8c18c(DAT_04da7238);
  uVar4 = *puVar3;
  *(undefined8 *)(param_1 + 0xec8) = uVar4;
  iVar1 = nn::time::GetDayOfWeek((int)(short)uVar4,((int)uVar4 << 8) >> 0x18,(int)uVar4 >> 0x18);
  if (((*(char *)(param_1 + 0xed4) != *(char *)(param_1 + 0xecc)) ||
      (*(char *)(param_1 + 0xed5) != *(char *)(param_1 + 0xecd))) ||
     (*(int *)(param_1 + 0xed0) != iVar1)) {
    *(char *)(param_1 + 0xed4) = *(char *)(param_1 + 0xecc);
    *(char *)(param_1 + 0xed5) = *(char *)(param_1 + 0xecd);
    *(int *)(param_1 + 0xed0) = iVar1;
    local_8 = 0;
    local_4 = 0;
    local_28[0] = 0;
    local_24 = 0;
    FUN_02b9d8f4(param_1,&local_8,local_28);
    if (((*(int *)(param_1 + 0xedc) != local_4) || (*(char *)(param_1 + 0xed8) != (char)local_8)) ||
       ((*(char *)(param_1 + 0xed9) != local_8._1_1_ || (*(char *)(param_1 + 0xee8) == '\0')))) {
      *(int *)(param_1 + 0xedc) = local_4;
      *(undefined2 *)(param_1 + 0xee0) = local_28[0];
      *(undefined2 *)(param_1 + 0xed8) = local_8;
      *(undefined4 *)(param_1 + 0xee4) = local_24;
    }
  }
  return;
}



void FUN_02ac53d4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  
  plVar6 = *(long **)(param_1 + 0x288);
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (((*PTR_DAT_04bc44f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc44f0), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc44e8 = PTR_DAT_04bc44f8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc44f0);
  }
  uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bc44e8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x174);
  local_24 = 0;
  uVar3 = FUN_02b586d0(&local_3c,uVar1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  puVar5 = &DAT_0417f04c;
  lVar4 = 0;
  switch(uVar1 & 0xffff) {
  case 9:
    lVar4 = 4;
    break;
  case 10:
    lVar4 = 5;
    break;
  case 0xb:
    lVar4 = 6;
    break;
  case 0xc:
    lVar4 = 7;
    break;
  case 0xd:
    lVar4 = 8;
    break;
  case 0xe:
    lVar4 = 9;
    break;
  case 0xf:
    lVar4 = 10;
    break;
  case 0x10:
    lVar4 = 0xb;
    break;
  case 0x11:
    lVar4 = 0xc;
    break;
  case 0x12:
    lVar4 = 0xd;
    break;
  default:
    goto switchD_02ac5464_caseD_13;
  case 0x19:
    break;
  case 0x1b:
    lVar4 = 1;
    break;
  case 0x1c:
    lVar4 = 2;
    break;
  case 0x2f:
    lVar4 = 3;
    break;
  case 0x30:
    lVar4 = 0xe;
  }
  puVar5 = &DAT_0417ef60 + lVar4 * 2;
switchD_02ac5464_caseD_13:
  local_58 = *(undefined4 *)(puVar5 + 1);
  local_60 = *puVar5;
  local_54 = local_3c;
  local_4c = local_34;
  local_64 = local_24 ^ 0x80000000;
  local_48 = local_30;
  local_40 = local_28;
  FUN_02a70ea8(plVar6,&local_64);
  return;
}


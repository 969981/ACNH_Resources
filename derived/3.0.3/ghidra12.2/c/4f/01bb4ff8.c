
undefined8 FUN_01bb4ff8(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  uint local_84 [3];
  long local_78 [3];
  undefined8 local_60;
  long local_58;
  byte *local_50;
  byte *pbStack_48;
  uint local_28;
  undefined4 local_24;
  
  local_50 = *(byte **)(param_3 + 0x18);
  pbStack_48 = local_50 + *(ushort *)(param_3 + 0x10);
  if ((ulong)*(ushort *)(param_3 + 0x10) == 0) {
    bVar6 = 0;
    local_60 = local_50;
  }
  else {
    bVar6 = *local_50;
    local_60 = local_50 + 1;
  }
  if (pbStack_48 < local_60 + 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*local_60;
    local_60 = local_60 + 1;
  }
  local_58 = param_3;
  FUN_006f4120(&local_60,local_78,local_84,3);
  switch(bVar6) {
  default:
    local_24 = 0;
    break;
  case 1:
    local_24 = 0x1e;
    break;
  case 2:
    local_24 = 0x1f;
    break;
  case 3:
    local_24 = 0x20;
    break;
  case 4:
    local_24 = 0x25;
    break;
  case 5:
    local_24 = 0x26;
  }
  if (param_4 == 0) {
    return 0;
  }
  local_58 = CONCAT44(local_58._4_4_,uVar5);
  local_60 = (byte *)CONCAT44(local_24,0x5a);
  puVar2 = (undefined8 *)FUN_01bc06e0(param_4,&local_60,1);
  if (((*PTR_DAT_04bc0ab0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0ab0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc0aa8 = PTR_DAT_04bc0ab8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc0ab0);
  }
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc0aa8);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_28 = 1;
  if (*(int *)(puVar2 + 0x23) != 1) {
    if (*(int *)(puVar2 + 0x23) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = 2;
    }
  }
  uVar3 = (ulong)local_28;
  if (2 < local_28) {
    uVar3 = 0;
  }
  lVar4 = local_78[uVar3];
  *param_1 = lVar4;
  uVar3 = (ulong)local_28;
  if (2 < local_28) {
    uVar3 = 0;
  }
  *param_2 = lVar4 + (ulong)local_84[uVar3] * 2;
  return 1;
}


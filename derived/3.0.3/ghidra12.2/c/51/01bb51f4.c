
undefined8 FUN_01bb51f4(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
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
    bVar7 = 0;
    local_60 = local_50;
  }
  else {
    bVar7 = *local_50;
    local_60 = local_50 + 1;
  }
  if (pbStack_48 < local_60 + 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)*local_60;
    local_60 = local_60 + 1;
  }
  local_58 = param_3;
  FUN_006f4120(&local_60,local_78,local_84,3);
  switch(bVar7) {
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
  if (param_4 != 0) {
    local_58 = CONCAT44(local_58._4_4_,uVar6);
    local_60 = (byte *)CONCAT44(local_24,0x5a);
    puVar3 = (undefined8 *)FUN_01bc06e0(param_4,&local_60,1);
    if (((*PTR_DAT_04bc0ab0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0ab0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc0aa8 = PTR_DAT_04bc0ab8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc0ab0);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc0aa8), (uVar4 & 1) != 0)) {
      iVar2 = *(int *)(puVar3 + 0x23) % 10;
      iVar1 = *(int *)(puVar3 + 0x23) % 100;
      if ((iVar2 == 1) && (iVar1 != 0xb)) {
        local_28 = 0;
      }
      else if ((((iVar2 == 2) && (iVar1 != 0xc)) || ((iVar2 == 3 && (iVar1 != 0xd)))) ||
              ((iVar2 == 4 && (iVar1 != 0xe)))) {
        local_28 = 1;
      }
      else {
        local_28 = 2;
      }
      uVar4 = (ulong)local_28;
      if (2 < local_28) {
        uVar4 = 0;
      }
      lVar5 = local_78[uVar4];
      *param_1 = lVar5;
      uVar4 = (ulong)local_28;
      if (2 < local_28) {
        uVar4 = 0;
      }
      *param_2 = lVar5 + (ulong)local_84[uVar4] * 2;
      return 1;
    }
  }
  return 0;
}


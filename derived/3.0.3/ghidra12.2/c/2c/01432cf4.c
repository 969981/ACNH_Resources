
/* WARNING: Removing unreachable block (ram,0x01432e14) */
/* WARNING: Removing unreachable block (ram,0x01432e28) */

bool FUN_01432cf4(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 0x2f0) == 0) {
    return false;
  }
  uVar3 = FUN_0073da08();
  if ((uVar3 & 1) == 0) {
    return false;
  }
  if (((*(byte *)(*(long *)(param_1 + 0x2f8) + 0x2a8) & 1) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x2f8) + 0x2b0), lVar5 == 0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar5 + 0x18);
    if ((*(byte *)(lVar5 + 8) & 10) != 2) {
      puVar6 = (undefined8 *)0x0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x280);
  if (((*PTR_DAT_04bb3de8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3de8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3de0 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3de8);
  }
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb3de0), (uVar3 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (uint)((*(byte *)(puVar6 + 0x30) & 2) == 0);
  }
  if ((uVar1 & 0xfffffffe) != 2) {
    if (uVar1 == 1) {
      if ((uVar4 | *(uint *)(param_1 + 0x2c0) >> 2 & 1) != 1) {
        return false;
      }
    }
    else if ((uVar1 == 0) && (uVar4 == 0 && (*(uint *)(param_1 + 0x2c0) >> 1 & 1) == 0)) {
      return false;
    }
  }
  return *(int *)(param_1 + 0x284) != 0;
}


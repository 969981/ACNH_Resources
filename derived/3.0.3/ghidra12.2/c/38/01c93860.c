
/* WARNING: Removing unreachable block (ram,0x01c938e8) */
/* WARNING: Removing unreachable block (ram,0x01c93950) */

void FUN_01c93860(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  puVar1 = PTR_DAT_04bb21d8;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  puVar2 = PTR_DAT_04bc1448;
  puVar5 = *(undefined8 **)(*(long *)puVar1 + 0x3d0);
  if (((*PTR_DAT_04bc1448 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc1448);
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc1440);
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
  }
  *param_1 = puVar5[3];
  puVar5 = *(undefined8 **)(*(long *)puVar1 + 0x3d0);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc1448), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bc1440 = PTR_DAT_04bc1450 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc1448);
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc1440);
    if ((uVar4 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
  }
  param_1[1] = puVar5[4];
  return;
}


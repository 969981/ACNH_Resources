
/* WARNING: Removing unreachable block (ram,0x02ef3bb0) */

undefined8 * FUN_02ef3b00(int param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte local_2c [4];
  int local_28;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb2230;
  local_2c[0] = *param_2;
  if (7 < local_2c[0]) {
    local_2c[0] = 0xff;
  }
  local_28 = param_1;
  puVar3 = (undefined8 *)
           FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),param_1,local_2c);
  if (((*PTR_DAT_04bb7c40 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb7c40), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb7c38 = PTR_DAT_04bb7c48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb7c40);
  }
  if ((puVar3 == (undefined8 *)0x0) ||
     (uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bb7c38), (uVar4 & 1) == 0)) {
    if (local_28 == 0x92) {
      local_24 = 0x15;
      puVar3 = *(undefined8 **)(*(long *)puVar1 + 0x188);
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bc6000 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc6000), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc5ff8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6000);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc5ff8);
    if ((uVar4 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}


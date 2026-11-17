
/* WARNING: Removing unreachable block (ram,0x031704b8) */

void FUN_03170480(uint param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *local_30;
  undefined4 local_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,0x10);
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xc0);
  if (((*PTR_DAT_04bc85b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc85b0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc85a8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc85b0);
  }
  if (((puVar3 != (undefined8 *)0x0) &&
      (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc85a8), (uVar2 & 1) != 0)) &&
     (puVar3[0x42] != 0)) {
    puVar3 = (undefined8 *)**(undefined8 **)(puVar3[0x42] + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if (((puVar3 != (undefined8 *)0x0) &&
        (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) &&
       (plVar4 = (long *)puVar3[0x3a], plVar4 != (long *)0x0)) {
      local_30 = PTR_DAT_04bc0cb8 + 0x10;
      local_28 = 7;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
      (**(code **)(plVar4[3] + 0x88))(plVar4[1],param_1 & 1);
    }
  }
  return;
}


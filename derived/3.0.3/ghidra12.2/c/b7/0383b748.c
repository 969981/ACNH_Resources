
void FUN_0383b748(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  FUN_03f45838(param_1 + 0x1568);
  FUN_03f45838(param_1 + 0x1508);
  FUN_03f45838(param_1 + 0x1428);
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 10) != 2) {
    puVar4 = (undefined8 *)0x0;
  }
  if (((*PTR_DAT_04bb3e40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3e40), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3e38 = PTR_DAT_04bb3e48 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3e40);
  }
  if ((puVar4 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb3e38), (uVar2 & 1) == 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 10) != 2) {
      puVar4 = (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bb3e20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3e20), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb3e18 = PTR_DAT_04bb3bb8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3e20);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb3e18), (uVar2 & 1) != 0)) goto LAB_0383b8dc;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 10) != 2) {
      puVar4 = (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bcad80 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcad80), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bcad78 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcad80);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bcad78), (uVar2 & 1) != 0)) goto LAB_0383b8dc;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 10) != 2) {
      puVar4 = (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bcae80 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcae80), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bcae78 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcae80);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bcae78), (uVar2 & 1) != 0)) goto LAB_0383b8dc;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 10) != 2) {
      puVar4 = (undefined8 *)0x0;
    }
    if (((*PTR_DAT_04bcaf68 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bcaf68), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bcaf60 = PTR_DAT_04bcad98 + 0x10;
      __cxa_guard_release(PTR_DAT_04bcaf68);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bcaf60), (uVar2 & 1) != 0)) goto LAB_0383b8dc;
  }
  else {
LAB_0383b8dc:
    if (*(long *)(param_1 + 0x14a8) != 0) {
      FUN_03bf3850();
    }
    if (*(long *)(param_1 + 0x1550) != 0) {
      FUN_03bf3850();
    }
  }
  FUN_03833d80(param_1 + 0x1530);
  FUN_0383dc80(param_1 + 0x1488);
  FUN_03f45838(param_1 + 0x1428);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 3) {
    if (*(int *)(param_1 + 0x1430) == 3) {
      iVar1 = 2;
LAB_0383b9ac:
      *(int *)(param_1 + 0xc) = iVar1;
      plVar3 = *(long **)(param_1 + 0x18);
      goto joined_r0x0383b988;
    }
    if (*(int *)(param_1 + 0x1430) == 2) goto LAB_0383b970;
  }
  else if (iVar1 == 6) {
    iVar1 = *(int *)(param_1 + 0x1430);
    if (iVar1 == 3) {
LAB_0383b970:
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
    }
    else if (iVar1 == 2) goto LAB_0383b9ac;
  }
  else if (iVar1 == 5) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x1a8))();
    iVar1 = 4;
    goto LAB_0383b9ac;
  }
  plVar3 = *(long **)(param_1 + 0x18);
joined_r0x0383b988:
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0383b9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x180))();
  return;
}



undefined4 FUN_03c5b5c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bd3a10;
  if (((*PTR_DAT_04bd3a18 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3a18), puVar2 = PTR_DAT_04bd3a20, iVar3 != 0)) {
    if (((*PTR_DAT_04bd3a28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3a28), iVar3 != 0)) {
      *(undefined ***)puVar2 = &PTR_LAB_04b81970;
      *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b819a0;
      *(undefined ***)(puVar2 + 0x28) = &PTR_LAB_04b819c8;
      *(undefined ***)(puVar2 + 0x48) = &PTR_LAB_04b819f0;
      __cxa_guard_release(PTR_DAT_04bd3a28);
    }
    puVar4 = *(undefined8 **)(puVar2 + 8);
    *(undefined4 *)puVar1 = 0;
    (*(code *)*puVar4)(puVar2 + 8,puVar1);
    __cxa_guard_release(PTR_DAT_04bd3a18);
  }
  return *(undefined4 *)puVar1;
}


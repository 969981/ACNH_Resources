
undefined8
FUN_03d4e4d0(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((*(char *)(*(long *)(param_1 + 0x10) + 0x3d) == '\0') &&
     (puVar4 = (undefined8 *)FUN_03b11670(*(undefined8 *)(param_1 + 8)), puVar1 = PTR_DAT_04bc0888,
     puVar4 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_04bc0890 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc0890), puVar2 = PTR_DAT_04bc0898, iVar3 != 0)) {
      if (((*PTR_DAT_04bc08a0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc08a0), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc08a0);
      }
      *(undefined **)puVar1 = puVar2;
      __cxa_guard_release(PTR_DAT_04bc0890);
    }
    puVar5 = (undefined8 *)(**(code **)*puVar4)(puVar4);
    if (puVar5 == (undefined8 *)puVar1) {
      if (param_4 != 0) goto LAB_03d4e580;
    }
    else {
      do {
        puVar5 = (undefined8 *)*puVar5;
      } while (puVar5 != (undefined8 *)puVar1 && puVar5 != (undefined8 *)0x0);
      if ((param_4 != 0) && (puVar5 != (undefined8 *)0x0)) {
LAB_03d4e580:
        uVar6 = FUN_03b0e4b0(*(undefined8 *)(param_1 + 0x10),param_3,param_4,puVar4,param_5,0);
        return uVar6;
      }
    }
  }
  return 0;
}


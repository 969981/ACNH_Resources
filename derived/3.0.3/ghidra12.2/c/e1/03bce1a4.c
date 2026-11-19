
undefined8
FUN_03bce1a4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar3 = PTR_DAT_04bd2340;
  puVar2 = PTR_DAT_04bd2308;
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  puVar1 = PTR_DAT_04bd2300;
  uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bd2300);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (*(char *)(puVar7 + 0x33) != '\0') {
    puVar7 = *(undefined8 **)(*(long *)puVar3 + 8);
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar4 != 0)) {
      *(undefined **)puVar1 = PTR_DAT_04bd2310 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd2308);
    }
    uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bd2300);
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if ((*(char *)(puVar7 + 0x33) != '\0') &&
       ((param_5 != 0 || (param_5 = *(long *)(param_1 + 0x250), param_5 != 0)))) {
      uVar5 = FUN_003d0c1c(param_1 + 0x18);
      if ((uVar5 & 1) != 0) {
        uVar6 = FUN_003d15c4(param_1 + 0x18,param_2,param_5,param_3,param_4);
        return uVar6;
      }
    }
  }
  return 0;
}


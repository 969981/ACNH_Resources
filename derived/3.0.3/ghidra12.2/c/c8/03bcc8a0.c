
void FUN_03bcc8a0(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bd2340 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bd2300);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if ((*(char *)(puVar4 + 0x33) != '\0') && (iVar1 = *(int *)(param_1 + 0x48), iVar1 != 0)) {
    iVar5 = 0x4000000;
    do {
      uVar3 = FUN_003baf0c(param_1 + 8,iVar5);
      FUN_003ce170(uVar3,0,param_2);
      iVar1 = iVar1 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar1 != 0);
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  return;
}


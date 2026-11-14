
int FUN_01626700(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_04bb2fb0;
  puVar2 = PTR_DAT_04bb2fa8;
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 == (long *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    puVar1 = PTR_DAT_04bb2fb8 + 0x10;
    do {
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
        *(undefined **)puVar2 = puVar1;
        __cxa_guard_release(puVar3);
      }
      uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar2);
      if ((uVar5 & 1) == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_01626700(plVar7);
      }
      plVar7 = (long *)plVar7[2];
      iVar6 = iVar4 + iVar6;
    } while (plVar7 != (long *)0x0);
  }
  return iVar6;
}


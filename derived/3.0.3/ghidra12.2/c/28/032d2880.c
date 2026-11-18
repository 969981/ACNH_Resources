
undefined * FUN_032d2880(undefined *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_18;
  
  lVar4 = *param_2;
  puVar2 = param_1;
  if ((*(byte *)(lVar4 + 0x58) & 1) != 0) {
    puVar2 = (undefined *)FUN_032d4940(lVar4);
    if (((*(byte *)(lVar4 + 0x58) & 1) != 0) &&
       (((*(byte *)(lVar4 + 0x58) >> 1 & 1) == 0 || (*(char *)(lVar4 + 0x59) != '\0')))) {
      for (lVar5 = *(long *)(lVar4 + 0x28); lVar5 != lVar4 + 0x20; lVar5 = *(long *)(lVar5 + 8)) {
        local_18 = lVar5 + -8;
        plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x20);
        if (plVar3 == (long *)0x0) {
          FUN_032d2700();
          if (((*PTR_DAT_04bc9558 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc9558), iVar1 != 0)) {
            *(undefined8 *)PTR_DAT_04bc9550 = 0;
            __cxa_guard_release(PTR_DAT_04bc9558);
          }
          return PTR_DAT_04bc9550;
        }
        puVar2 = (undefined *)(**(code **)(*plVar3 + 0x30))(plVar3,&local_18);
      }
    }
  }
  return puVar2;
}


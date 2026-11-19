
void FUN_03b1ad40(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  
  FUN_03b139b0(param_2,param_1);
  puVar4 = PTR_DAT_04bc9008;
  puVar3 = PTR_DAT_04bc9000;
  puVar2 = PTR_DAT_04bc8f38;
  puVar1 = PTR_DAT_04bc8f30;
  for (lVar8 = *(long *)(param_2 + 0x28); lVar8 != param_2 + 0x20; lVar8 = *(long *)(lVar8 + 8)) {
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
      if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
        *(undefined8 *)puVar1 = 0;
        __cxa_guard_release(puVar2);
      }
      *(undefined **)puVar3 = puVar1;
      __cxa_guard_release(puVar4);
    }
    plVar7 = (long *)(lVar8 + -8);
    puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
    if (puVar6 != (undefined8 *)puVar3) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_03b1ad40(param_1,plVar7);
      }
    }
  }
  return;
}


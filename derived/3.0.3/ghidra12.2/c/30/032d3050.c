
long * FUN_032d3050(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined *local_70;
  long lStack_68;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  iVar5 = strcmp((char *)(param_2 + 0x16),(char *)param_3[1]);
  puVar4 = PTR_DAT_04bc9008;
  puVar3 = PTR_DAT_04bc9000;
  puVar2 = PTR_DAT_04bc8f38;
  if (iVar5 != 0) {
    plVar8 = (long *)param_2[5];
    if (plVar8 != param_2 + 4) {
      puVar1 = PTR_DAT_04bc8e68 + 0x10;
      do {
        if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
          if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
            *(undefined8 *)PTR_DAT_04bc8f30 = 0;
            __cxa_guard_release(puVar2);
          }
          *(undefined **)puVar3 = PTR_DAT_04bc8f30;
          __cxa_guard_release(puVar4);
        }
        plVar7 = plVar8 + -1;
        puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
        if (puVar6 == (undefined8 *)puVar3) {
LAB_032d30e0:
          (**(code **)(*param_3 + 0x18))(param_3);
          iVar5 = strcmp((char *)(plVar8 + 0x15),(char *)param_3[1]);
          if (iVar5 == 0) {
            return plVar7;
          }
        }
        else {
          do {
            puVar6 = (undefined8 *)*puVar6;
          } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
          if (puVar6 != (undefined8 *)0x0) goto LAB_032d30e0;
          lStack_68 = param_3[1];
          local_70 = puVar1;
          plVar7 = (long *)FUN_032d3050(param_1,plVar7,&local_70);
          if (plVar7 != (long *)0x0) {
            return plVar7;
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != param_2 + 4);
    }
    param_2 = (long *)0x0;
  }
  return param_2;
}


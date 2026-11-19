
void FUN_03b7ce90(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if ((*(char *)(param_1 + 8) != '\0' || *(char *)(param_1 + 9) != '\0') &&
     (lVar4 = *(long *)PTR_DAT_04bc3ee8, lVar4 != 0 && DAT_05aebc00 == '\0')) {
    if ((*(long *)(lVar4 + 0x140) == 0) ||
       (puVar2 = *(undefined8 **)(*(long *)(lVar4 + 0x140) + 0x18), puVar2 == (undefined8 *)0x0)) {
      uVar3 = *(ulong *)(lVar4 + 0x60);
    }
    else {
      if (((*PTR_DAT_04bd1e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bd1e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bd1e38 = PTR_DAT_04bd1e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd1e40);
      }
      uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bd1e38);
      uVar3 = uVar3 & 1;
    }
    if (uVar3 != 0) {
      plVar5 = *(long **)(param_1 + 0x28);
      plVar7 = (long *)plVar5[1];
      if (plVar7 != plVar5) {
        plVar6 = plVar7 + -2;
        do {
          plVar8 = (long *)plVar7[1];
          if (*(char *)((long)plVar6 + 0xd) == '\0') {
            *(undefined8 *)((long)plVar6 + 6) = 0;
            *plVar6 = 0;
            lVar4 = *(long *)(param_1 + 0x28);
            if (*plVar7 != 0) {
              *(long *)(*plVar7 + 8) = plVar7[1];
            }
            if ((long *)plVar7[1] != (long *)0x0) {
              *(long *)plVar7[1] = *plVar7;
            }
            *plVar7 = 0;
            plVar7[1] = 0;
            *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
            *plVar6 = *(long *)(lVar4 + 0x18);
            *(long **)(lVar4 + 0x18) = plVar6;
          }
          else {
            *(undefined1 *)((long)plVar6 + 0xd) = 0;
          }
          plVar6 = plVar8 + -2;
          plVar7 = plVar8;
        } while (plVar6 != plVar5 + -2);
      }
      if (0 < *(int *)(param_1 + 0x230)) {
        *(undefined4 *)(param_1 + 0x230) = 0;
      }
    }
  }
  return;
}


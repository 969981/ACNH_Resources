
/* WARNING: Removing unreachable block (ram,0x01620f18) */

void FUN_01620ee0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0x130);
  if ((((plVar5 != (long *)0x0) && ((int)plVar5[0x120] == 0)) && (*(long *)(param_1 + 0x40) != 0))
     && (*(char *)(*(long *)(param_1 + 0x40) + 0x30) == '\0')) {
    FUN_030b2370();
    if (*(char *)(param_1 + 0x48) == '\0') {
      lVar2 = *(long *)(param_1 + 0x38);
      plVar1 = (long *)(lVar2 + 0xafca0);
      while (0 < *(int *)(lVar2 + 0xafcc8)) {
        plVar3 = *(long **)(lVar2 + 0xafcc0);
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(lVar2 + 0xafcc8) = *(int *)(lVar2 + 0xafcc8) + -1;
        if ((plVar3 == (long *)0x0) ||
           (lVar4 = (long)plVar3 - (long)*(int *)(lVar2 + 0xafccc), lVar4 == 0)) break;
        *(undefined1 *)(lVar4 + 0x14) = 0;
        plVar3 = (long *)(lVar4 + *(int *)(lVar2 + 0xafcb4));
        lVar4 = *plVar1;
        *plVar1 = (long)plVar3;
        *plVar3 = lVar4;
        plVar3[1] = (long)plVar1;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 8) = plVar3;
        }
        *(int *)(lVar2 + 0xafcb0) = *(int *)(lVar2 + 0xafcb0) + 1;
      }
      *(undefined8 *)(lVar2 + 0xafcd0) = 0;
      *(undefined8 *)(lVar2 + 0x14) = 0;
      *(undefined4 *)(lVar2 + 0xafcd8) = 0;
      lVar2 = *(long *)(param_1 + 0x40);
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 0;
      lVar2 = *(long *)(param_1 + 0x40);
    }
    if (lVar2 != 0) {
      plVar5[0x11f] = lVar2 + 0x20;
    }
    if ((char)plVar5[7] == '\0') {
      *(undefined1 *)(plVar5 + 7) = 1;
                    /* WARNING: Could not recover jumptable at 0x01620f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0xb8))(plVar5,1);
      return;
    }
  }
  return;
}


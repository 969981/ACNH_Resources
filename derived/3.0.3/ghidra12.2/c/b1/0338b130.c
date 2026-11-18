
/* WARNING: Removing unreachable block (ram,0x0338b220) */

void FUN_0338b130(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_58 [3];
  
  if ((param_2 != 0) && (plVar4 = *(long **)(param_1 + 0x10), plVar4 != (long *)(param_1 + 8))) {
    plVar5 = plVar4 + -8;
    do {
      if (plVar5[5] == param_2) {
        if ((char)plVar5[7] != '\0') {
          lVar2 = *(long *)(*(long *)(param_2 + 0x210) + 0x48);
          if (lVar2 == 0) {
            return;
          }
          if (*(char *)(param_1 + 0x1c8) != '\0') {
            if (*(long *)(DAT_05739190 + 0xd0) != 0) {
              *(undefined1 *)(*(long *)(DAT_05739190 + 0xd0) + 0x26c) = 1;
              lVar2 = *(long *)(*(long *)(param_2 + 0x210) + 0x48);
            }
            if (((*(int *)(lVar2 + 0x18) != 0) && (lVar2 = **(long **)(lVar2 + 0x20), lVar2 != 0))
               && (lVar3 = *(long *)(lVar2 + 0x10), lVar3 != 0)) {
              *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(lVar3 + 0x14a0);
              *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar3 + 0x14a4);
              local_58[2] = 0;
              local_58[1] = 0;
              local_58[0] = lVar3;
              (*(code *)**(undefined8 **)(lVar3 + 0x40))((undefined8 *)(lVar3 + 0x40),1,local_58);
              *(undefined8 *)(lVar2 + 0x10) = 0;
            }
          }
        }
        lVar2 = *(long *)(param_1 + 0x10);
        if (*(int *)(param_1 + 0x18) < 1) {
          lVar2 = 0;
        }
        plVar1 = (long *)0x0;
        if (lVar2 != 0) {
          plVar1 = (long *)(lVar2 + -0x40);
        }
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        *plVar5 = *(long *)(param_1 + 0x20);
        *(long **)(param_1 + 0x20) = plVar5;
        if (plVar1 != plVar5) {
          return;
        }
        lVar2 = *(long *)(param_1 + 0x10);
        if (*(int *)(param_1 + 0x18) < 1) {
          lVar2 = 0;
        }
        if (lVar2 == 0) {
          return;
        }
        if (lVar2 == 0x40) {
          return;
        }
        if (*(char *)(lVar2 + -8) == '\0') {
          return;
        }
        if ((param_3 & 1) == 0) {
          return;
        }
        if (*(long *)(*(long *)(*(long *)(lVar2 + -0x18) + 0x210) + 0x48) == 0) {
          return;
        }
        FUN_03201990(*(long *)(lVar2 + -0x18),lVar2 + -0x10,0);
        return;
      }
      plVar4 = (long *)plVar4[1];
      plVar5 = plVar4 + -8;
    } while (plVar5 != (long *)(param_1 + -0x38));
  }
  return;
}


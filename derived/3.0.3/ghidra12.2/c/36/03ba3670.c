
void FUN_03ba3670(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x10) = 2;
    FUN_03ba71d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x30));
    lVar2 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar2 + 8) != lVar2) {
      lVar5 = (long)*(int *)(lVar2 + 0x14);
      lVar4 = *(long *)(lVar2 + 8) - lVar5;
      lVar3 = lVar4 + lVar5;
      do {
        lVar6 = *(long *)(param_1 + 0x30);
        lVar3 = *(long *)(lVar3 + 8);
        plVar7 = (long *)(lVar4 + *(int *)(lVar6 + 0x14));
        if (*plVar7 != 0) {
          *(long *)(*plVar7 + 8) = plVar7[1];
        }
        if ((long *)plVar7[1] != (long *)0x0) {
          *(long *)plVar7[1] = *plVar7;
        }
        *plVar7 = 0;
        plVar7[1] = 0;
        *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
        if (*(int *)(lVar4 + 0xc) != 7) {
          plVar7 = *(long **)(param_1 + 0x40);
          if ((plVar7 == (long *)0x0) ||
             ((*(byte *)(lVar4 + 0x16) >>
               (ulong)(*(uint *)(*(long *)(param_1 + 0x18) + 0x10) & 0x1f) & 1) != 0)) {
            lVar6 = *(long *)(lVar4 + 0x108);
            if (lVar6 == 0) goto LAB_03ba36e0;
            plVar7 = (long *)(*(int *)(lVar6 + 0x1bc) + lVar4);
            lVar4 = *(long *)(lVar6 + 0x1a8);
            *(long **)(lVar6 + 0x1a8) = plVar7;
            *plVar7 = lVar4;
            plVar7[1] = lVar6 + 0x1a8;
            if (lVar4 != 0) {
              *(long **)(lVar4 + 8) = plVar7;
            }
            plVar7 = (long *)(lVar6 + 0x1b8);
          }
          else {
            plVar1 = (long *)(lVar4 + *(int *)((long)plVar7 + 0x14));
            lVar4 = *plVar7;
            *plVar7 = (long)plVar1;
            *plVar1 = lVar4;
            plVar1[1] = (long)plVar7;
            if (lVar4 != 0) {
              *(long **)(lVar4 + 8) = plVar1;
            }
            plVar7 = plVar7 + 2;
          }
          *(int *)plVar7 = (int)*plVar7 + 1;
        }
LAB_03ba36e0:
        lVar4 = lVar3 - lVar5;
      } while (lVar4 != lVar2 - lVar5);
    }
  }
  return;
}


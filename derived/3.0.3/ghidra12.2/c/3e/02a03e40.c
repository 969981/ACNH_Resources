
/* WARNING: Removing unreachable block (ram,0x02a03e74) */
/* WARNING: Removing unreachable block (ram,0x02a03e80) */
/* WARNING: Removing unreachable block (ram,0x02a03e8c) */
/* WARNING: Removing unreachable block (ram,0x02a03ea0) */
/* WARNING: Removing unreachable block (ram,0x02a03ecc) */
/* WARNING: Removing unreachable block (ram,0x02a03f94) */
/* WARNING: Removing unreachable block (ram,0x02a03fac) */
/* WARNING: Removing unreachable block (ram,0x02a03fbc) */
/* WARNING: Removing unreachable block (ram,0x02a03fd0) */
/* WARNING: Removing unreachable block (ram,0x02a03fa0) */

void FUN_02a03e40(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 8) + -8;
  if (*(long *)(param_1 + 0x10) == lVar3) {
    plVar2 = *(long **)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x18);
    if (plVar2 == *(long **)(param_1 + 0x30)) {
      do {
        iVar4 = iVar4 + 1;
        if (iVar4 - *(int *)(param_1 + 0x28) == 1) {
          *(undefined8 *)(param_1 + 8) = 0;
          return;
        }
        *(int *)(param_1 + 0x18) = iVar4;
        lVar6 = lVar3;
        if (iVar4 != *(int *)(param_1 + 0x28)) {
          iVar1 = 0;
          if ((int)plVar2[1] <= iVar4 + *(int *)((long)plVar2 + 0xc)) {
            iVar1 = (int)plVar2[1];
          }
          lVar3 = *(long *)(*plVar2 + (long)(iVar4 + (*(int *)((long)plVar2 + 0xc) - iVar1)) * 8);
          *(long *)(param_1 + 8) = lVar3;
          lVar6 = lVar3 + -8;
          lVar3 = *(long *)(lVar3 + 8) + -8;
          *(long *)(param_1 + 0x10) = lVar3;
        }
      } while (lVar3 == lVar6);
    }
    else {
      lVar3 = (long)(iVar4 + 1);
      do {
        *(int *)(param_1 + 0x18) = (int)lVar3;
        iVar4 = 0;
        if ((int)plVar2[1] <= (int)lVar3 + *(int *)((long)plVar2 + 0xc)) {
          iVar4 = (int)plVar2[1];
        }
        lVar6 = lVar3 - iVar4;
        lVar3 = lVar3 + 1;
        lVar6 = *(long *)(*plVar2 + (lVar6 + *(int *)((long)plVar2 + 0xc)) * 8);
        *(long *)(param_1 + 8) = lVar6;
        lVar5 = *(long *)(lVar6 + 8);
        *(long *)(param_1 + 0x10) = lVar5 + -8;
      } while (lVar5 == lVar6);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0043cfa4) */

void FUN_0043cf30(long *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = *(int *)((long)param_1 + 0xc);
  if (-1 < iVar3) {
    uVar1 = iVar3 + 1;
    if (iVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar5 = 0;
      lVar4 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar5) = 0xffffffffffffffff;
        lVar4 = lVar4 + 2;
        lVar2 = *param_1 + lVar5;
        lVar5 = lVar5 + 0x20;
        *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar4);
      if ((uVar1 & 1) == 0) goto LAB_0043cf8c;
    }
    *(undefined8 *)(*param_1 + lVar4 * 0x10) = 0xffffffffffffffff;
  }
LAB_0043cf8c:
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0x80000000;
  return;
}


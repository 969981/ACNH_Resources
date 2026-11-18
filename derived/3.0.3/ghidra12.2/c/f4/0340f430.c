
/* WARNING: Removing unreachable block (ram,0x0340f4bc) */

void FUN_0340f430(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 != 0) {
    lVar4 = param_1[2];
    uVar5 = 0;
    do {
      piVar7 = (int *)(lVar4 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 0xc);
      if (*piVar7 == 2) {
        *piVar7 = 3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
  }
  lVar4 = *param_1;
  if ((((lVar4 != 0) &&
       (plVar2 = *(long **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0x130),
       (int)plVar2[0x120] == 0)) &&
      (((char)plVar2[7] == '\0' || (uVar3 = (**(code **)(*plVar2 + 0xc0))(), (uVar3 & 1) == 0)))) &&
     ((iVar1 = FUN_030af5e4(lVar4), iVar1 != -1 && (*(uint *)(param_1 + 1) != 0)))) {
    uVar6 = 0;
    do {
      if (iVar1 == *(int *)(param_1[2] + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8)) {
        *(undefined4 *)(param_1[2] + (long)(int)uVar6 * 0x10 + 0xc) = 2;
        return;
      }
      uVar6 = uVar6 + 1;
    } while (*(uint *)(param_1 + 1) != uVar6);
  }
  return;
}


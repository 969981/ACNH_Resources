
void FUN_026d67c0(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    return;
  }
  lVar2 = *param_1;
  if ((lVar2 == 0) || (lVar2 != lVar4)) {
    uVar6 = 0;
    do {
      uVar5 = uVar6 + 1;
      uVar1 = (uint)uVar5;
      if (uVar1 == 100) goto LAB_026d68a4;
      lVar7 = *(long *)((long)param_1 +
                       (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | uVar5 * 8 & 0x7fffffff8));
      uVar6 = uVar5 & 0xffffffff;
    } while (lVar7 == 0 || lVar7 != lVar4);
    if (-1 < (int)uVar1) {
      if (uVar1 < 99) goto LAB_026d67f0;
      goto LAB_026d681c;
    }
LAB_026d68a4:
    uVar6 = 0;
    if (lVar2 == 0) goto LAB_026d691c;
    uVar5 = 0;
    do {
      uVar6 = uVar5 + 1;
      if (*(long *)((long)param_1 +
                   (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | uVar6 * 8 & 0x7fffffff8)) == 0) {
        iVar3 = (int)uVar6;
        break;
      }
      uVar6 = (uVar6 & 0xffffffff) + 1;
      iVar3 = (int)uVar6;
      if (iVar3 == 100) goto LAB_026d6904;
      uVar5 = uVar6 & 0xffffffff;
    } while (*(long *)((long)param_1 +
                      (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | uVar6 * 8 & 0x7fffffff8)) != 0);
    uVar6 = uVar6 & 0xffffffff;
    if (iVar3 < 0) {
LAB_026d6904:
      memmove(param_1,param_1 + 1,0x318);
      uVar6 = 99;
      param_1[99] = 0;
      goto LAB_026d691c;
    }
  }
  else {
    uVar5 = 0;
LAB_026d67f0:
    uVar5 = uVar5 & 0xffffffff;
    do {
      uVar6 = uVar5 & 0xffffffff;
      uVar1 = (uint)uVar5;
      if (99 < uVar1) {
        uVar6 = 0;
      }
      lVar4 = uVar5 + 1;
      uVar5 = uVar5 + 1;
      param_1[uVar6] = param_1[lVar4];
    } while (uVar1 != 0x62);
    lVar2 = *param_1;
LAB_026d681c:
    param_1[99] = 0;
    uVar6 = 0;
    if (lVar2 == 0) goto LAB_026d691c;
    uVar5 = 0;
    do {
      uVar6 = uVar5 + 1;
      if (*(long *)((long)param_1 +
                   (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | uVar6 * 8 & 0x7fffffff8)) == 0)
      break;
      uVar6 = (uVar6 & 0xffffffff) + 1;
      if ((int)uVar6 == 100) {
        return;
      }
      uVar5 = uVar6 & 0xffffffff;
    } while (*(long *)((long)param_1 +
                      (-(uVar6 >> 0x1f & 1) & 0xfffffff800000000 | uVar6 * 8 & 0x7fffffff8)) != 0);
  }
  if (99 < (uint)uVar6) {
    return;
  }
LAB_026d691c:
  param_1[uVar6 & 0xffffffff] = *param_2;
  return;
}


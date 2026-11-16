
void FUN_028e35b0(long *param_1,long *param_2,uint param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    return;
  }
  lVar4 = *param_1;
  if ((lVar4 == 0) || (lVar4 != lVar6)) {
    uVar5 = 0;
    do {
      uVar8 = uVar5 + 1;
      uVar3 = (uint)uVar8;
      if (uVar3 == 100) goto LAB_028e3678;
      lVar9 = *(long *)((long)param_1 +
                       (-(uVar8 >> 0x1f & 1) & 0xfffffff000000000 | uVar8 * 0x10 & 0xffffffff0));
      uVar5 = uVar8 & 0xffffffff;
    } while (lVar9 == 0 || lVar9 != lVar6);
    if (-1 < (int)uVar3) {
      if (uVar3 < 99) goto LAB_028e35cc;
      goto LAB_028e360c;
    }
LAB_028e3678:
    uVar5 = 0;
    if (lVar4 == 0) goto LAB_028e36e0;
    uVar5 = 0;
    do {
      uVar8 = uVar5 + 1;
      if ((int)uVar8 == 100) goto LAB_028e36b0;
      uVar5 = uVar8 & 0xffffffff;
    } while (*(long *)((long)param_1 +
                      (-(uVar8 >> 0x1f & 1) & 0xfffffff000000000 | uVar8 * 0x10 & 0xffffffff0)) != 0
            );
    uVar5 = uVar8 & 0xffffffff;
    if ((int)uVar8 < 0) {
LAB_028e36b0:
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)((long)param_1 + lVar6);
        lVar6 = lVar6 + 0x10;
        *puVar1 = puVar1[2];
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar1 + 3);
      } while (lVar6 != 0x630);
      param_1[0xc6] = 0;
      uVar5 = 99;
      *(undefined1 *)(param_1 + 199) = 0;
      goto LAB_028e36e0;
    }
  }
  else {
    uVar8 = 0;
LAB_028e35cc:
    uVar5 = uVar8 & 0xffffffff;
    plVar7 = param_1 + (uVar8 & 0xffffffff) * 2 + 3;
    do {
      uVar3 = (uint)uVar5;
      plVar2 = param_1 + (uVar5 & 0xffffffff) * 2;
      if (99 < uVar3) {
        plVar2 = param_1;
      }
      uVar5 = uVar5 + 1;
      *plVar2 = plVar7[-1];
      *(char *)(plVar2 + 1) = (char)*plVar7;
      plVar7 = plVar7 + 2;
    } while (uVar3 != 0x62);
    lVar4 = *param_1;
LAB_028e360c:
    param_1[0xc6] = 0;
    *(undefined1 *)(param_1 + 199) = 0;
    uVar5 = 0;
    if (lVar4 == 0) goto LAB_028e36e0;
    uVar8 = 0;
    do {
      uVar5 = uVar8 + 1;
      if ((int)uVar5 == 100) {
        return;
      }
      uVar8 = uVar5 & 0xffffffff;
    } while (*(long *)((long)param_1 +
                      (-(uVar5 >> 0x1f & 1) & 0xfffffff000000000 | uVar5 * 0x10 & 0xffffffff0)) != 0
            );
  }
  if (99 < (uint)uVar5) {
    return;
  }
LAB_028e36e0:
  param_1[(uVar5 & 0xffffffff) * 2] = *param_2;
  if ((param_3 & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + (uVar5 & 0xffffffff) * 2 + 1) =
       *(byte *)(param_1 + (uVar5 & 0xffffffff) * 2 + 1) | 1;
  return;
}


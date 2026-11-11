
/* WARNING: Removing unreachable block (ram,0x0044bbbc) */

undefined8 FUN_0044bb30(long *param_1,long *param_2,uint param_3)

{
  long *__src;
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  if ((int)param_3 < 9) {
    param_3 = 8;
  }
  lVar11 = *param_1;
  lVar3 = param_1[1];
  iVar1 = *(int *)((long)param_1 + 0xc);
  puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,(long)(int)(param_3 << 4),0);
  if (puVar4 == (undefined8 *)0x0) {
    return 0x80040200;
  }
  *param_1 = (long)puVar4;
  if ((0 < (int)param_3) && (*puVar4 = 0xffffffffffffffff, param_3 != 1)) {
    if (param_3 == 2) {
      lVar8 = 1;
    }
    else {
      lVar10 = 0;
      lVar8 = 1;
      do {
        *(undefined8 *)(*param_1 + lVar10 + 0x10) = 0xffffffffffffffff;
        lVar8 = lVar8 + 2;
        lVar9 = *param_1 + lVar10;
        lVar10 = lVar10 + 0x20;
        *(undefined8 *)(lVar9 + 0x20) = 0xffffffffffffffff;
      } while ((ulong)param_3 - (ulong)(~param_3 & 1) != lVar8);
      if ((~param_3 & 1) == 0) goto LAB_0044bc08;
    }
    *(undefined8 *)(*param_1 + lVar8 * 0x10) = 0xffffffffffffffff;
  }
LAB_0044bc08:
  *(undefined4 *)(param_1 + 1) = 0;
  *(uint *)((long)param_1 + 0xc) = param_3 - 1;
  if (-1 < iVar1) {
    uVar12 = 0;
    do {
      __src = (long *)(lVar11 + uVar12 * 0x10);
      lVar8 = *__src;
      if (lVar8 != -1) {
        uVar5 = *(uint *)((long)param_1 + 0xc);
        if ((int)uVar5 < (int)param_1[1] * 2) {
          FUN_0044bb30(param_1,param_2,uVar5 * 2 + 2);
          uVar5 = *(uint *)((long)param_1 + 0xc);
          lVar8 = *__src;
        }
        uVar6 = (int)lVar8 * -0x61c8864f;
        uVar2 = (int)((ulong)lVar8 >> 0x20) * -0x61c8864f;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        lVar9 = *param_1;
        uVar6 = (uVar6 + (uVar6 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2) & uVar5;
        uVar7 = (ulong)uVar6;
        lVar10 = *(long *)(lVar9 + uVar7 * 0x10);
        while (lVar10 != -1) {
          uVar6 = (uint)uVar7;
          if (lVar10 == lVar8) goto LAB_0044bccc;
          uVar6 = uVar6 + 1 & uVar5;
          uVar7 = (ulong)uVar6;
          lVar10 = *(long *)(lVar9 + uVar7 * 0x10);
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
LAB_0044bccc:
        memcpy((void *)(lVar9 + (long)(int)uVar6 * 0x10),__src,0x10);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != iVar1 + 1);
  }
  if (-1 < (int)lVar3) {
    (**(code **)(*param_2 + 0x18))(param_2,lVar11,(long)(iVar1 * 0x10 + 0x10));
  }
  return 0;
}


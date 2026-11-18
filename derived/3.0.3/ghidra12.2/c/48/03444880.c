
void FUN_03444880(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *__src;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  void *__dest;
  long lVar13;
  long lVar14;
  byte local_64 [4];
  
  local_64[0] = *param_2;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_64,1);
  if (lVar6 != 0) {
    lVar9 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar9 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar9 + 0x2c600) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x2c600), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    lVar14 = 0;
    lVar6 = param_1 + 0x18;
    do {
      if ((*(long **)(lVar9 + 0x2c600) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x2c600), puVar7 == (undefined8 *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        uVar8 = uVar8 & 0xffffffff;
      }
      lVar3 = *(long *)(lVar9 + 0x2c5e8) + *(long *)(lVar9 + 0x2c5e0);
      if ((lVar3 == 0) || (uVar1 = (uint)*(ushort *)(lVar3 + 800) + ~(uint)lVar14, 99 < uVar1)) {
        if (((uVar8 & 1) != 0) &&
           ((*(long *)(lVar9 + 0x2c600) != 0 &&
            (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2c600) + 8), puVar7 != (undefined8 *)0x0)
            ))) {
          (**(code **)*puVar7)();
        }
        break;
      }
      lVar13 = lVar6 + lVar14 * 0x38;
      *(undefined2 *)(lVar13 + 0x30) = *(undefined2 *)(lVar3 + (ulong)uVar1 * 8 + 2);
      __src = (void *)FUN_01b1ebb0();
      if ((__src != (void *)0x0) &&
         (__dest = *(void **)(lVar6 + lVar14 * 0x38 + 0x10), __dest != __src)) {
        lVar10 = 0;
        do {
          if (*(char *)((long)__src + lVar10) == '\0') goto LAB_03444a08;
          if (*(char *)((long)__src + lVar10 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_03444a08;
          }
          if (*(char *)((long)__src + lVar10 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_03444a08;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_03444a08:
        iVar4 = *(int *)(lVar6 + lVar14 * 0x38 + 0x18);
        iVar11 = (int)lVar10;
        if (iVar4 <= (int)lVar10) {
          iVar11 = iVar4 + -1;
        }
        memcpy(__dest,__src,(long)iVar11);
        *(undefined1 *)((long)__dest + (long)iVar11) = 0;
      }
      *(byte *)(lVar6 + lVar14 * 0x38 + 0x32) = *(byte *)(lVar3 + (ulong)uVar1 * 8) & 1;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = lVar13;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x2c600) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2c600) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 100);
    uVar1 = *(uint *)(param_1 + 8);
    if (1 < (int)uVar1) {
      lVar6 = 0;
      iVar11 = -1;
      do {
        lVar14 = *(long *)(param_1 + 0x10);
        uVar2 = iVar11 + *(int *)(param_1 + 8);
        iVar11 = iVar11 + -1;
        uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
        uVar12 = *(undefined8 *)(lVar14 + uVar8);
        *(undefined8 *)(lVar14 + uVar8) = *(undefined8 *)(lVar14 + lVar6);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar6) = uVar12;
        lVar6 = lVar6 + 8;
      } while (((ulong)uVar1 & 0xfffffffe) * 4 != lVar6);
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar9 + 0x2c600) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x2c600) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}


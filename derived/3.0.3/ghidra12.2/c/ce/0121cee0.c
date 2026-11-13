
void FUN_0121cee0(ulong param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  
  lVar14 = 0;
  param_2 = param_2 + 8;
  do {
    if ((param_1 & 0xffffffff) * 4 != lVar14) {
      if (DAT_05574040 == 0) {
LAB_0121cfa0:
        lVar9 = 0;
      }
      else {
        puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
        if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar12 + 0x38))();
          lVar9 = 0;
          if (lVar8 != 0) {
            lVar9 = lVar8 + 0x70;
          }
        }
        else {
          if (puVar12 == (undefined8 *)0x0) goto LAB_0121cfa0;
          lVar9 = 0;
          if ((long *)puVar12[0x26] != (long *)0x0) {
            lVar9 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
          }
        }
      }
      if (*(long **)(lVar9 + 0x1c24e8) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar9 + 0x1c24e8);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      uVar5 = *(uint *)(*(long *)(lVar9 + 0x1c24d0) + *(long *)(lVar9 + 0x1c24c8) + lVar14 + 0x904);
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x1c24e8) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0x1c24e8) + 8), puVar12 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar12)();
      }
      uVar7 = uVar5 >> 0x14 & 7;
      if (uVar7 < 8 && (1 << (ulong)uVar7 & 0x86U) != 0) {
        uVar13 = uVar5 >> 10 & 0x3ff;
        uVar11 = (uint)((ulong)uVar5 & 0x3ff);
        uVar7 = uVar11 - 2;
        iVar6 = uVar13 - 2;
        iVar1 = (int)uVar7 >> 1;
        if (((DAT_05233970 <= (int)uVar7 && (int)uVar7 <= DAT_05233980) && (DAT_05233974 <= iVar6))
           && ((iVar6 <= DAT_05233984 &&
               (uVar2 = (iVar6 * 0x80 & 0xffffff00U) + iVar1, uVar2 >> 0xf == 0)))) {
          lVar9 = (ulong)(uVar2 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar7 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        if (((DAT_05233970 <= (int)uVar11) && ((int)uVar11 <= DAT_05233980)) &&
           ((DAT_05233974 <= iVar6 &&
            ((iVar6 <= DAT_05233984 &&
             (uVar2 = (iVar6 * 0x80 & 0xffffff00U) + (uVar11 >> 1), uVar2 >> 0xf == 0)))))) {
          lVar9 = (ulong)(uVar2 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        uVar2 = uVar11 + 2;
        if ((((DAT_05233970 <= (int)uVar2) && ((int)uVar2 <= DAT_05233980)) &&
            (DAT_05233974 <= iVar6)) &&
           ((iVar6 <= DAT_05233984 &&
            (uVar3 = (iVar6 * 0x80 & 0xffffff00U) + (uVar2 >> 1), uVar3 >> 0xf == 0)))) {
          lVar9 = (ulong)(uVar3 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar2 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        uVar3 = uVar5 >> 10;
        if (((DAT_05233970 <= (int)uVar7) && ((int)uVar7 <= DAT_05233980)) &&
           ((DAT_05233974 <= (int)uVar13 &&
            (((int)uVar13 <= DAT_05233984 &&
             (uVar4 = (uVar3 & 0x3fe) * 0x80 + iVar1, uVar4 >> 0xf == 0)))))) {
          lVar9 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar7 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        if ((((DAT_05233970 <= (int)uVar11) && ((int)uVar11 <= DAT_05233980)) &&
            (DAT_05233974 <= (int)uVar13)) &&
           (((int)uVar13 <= DAT_05233984 &&
            (uVar10 = ((ulong)(uVar3 << 7) & 0x1ff00) + (((ulong)uVar5 & 0x3ff) >> 1),
            uVar10 >> 0xf == 0)))) {
          uVar10 = uVar10 >> 3 & 0x7ffc;
          *(uint *)(param_2 + uVar10) =
               *(uint *)(param_2 + uVar10) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        if (((DAT_05233970 <= (int)uVar2) && ((int)uVar2 <= DAT_05233980)) &&
           ((DAT_05233974 <= (int)uVar13 &&
            (((int)uVar13 <= DAT_05233984 &&
             (uVar5 = (uVar3 & 0x3fe) * 0x80 + (uVar2 >> 1), uVar5 >> 0xf == 0)))))) {
          lVar9 = (ulong)(uVar5 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar2 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        iVar6 = uVar13 + 2;
        if ((((DAT_05233970 <= (int)uVar7) && ((int)uVar7 <= DAT_05233980)) &&
            (DAT_05233974 <= iVar6)) &&
           ((iVar6 <= DAT_05233984 && (uVar5 = (iVar6 * 0x80 & 0x3ff00U) + iVar1, uVar5 >> 0xf == 0)
            ))) {
          lVar9 = (ulong)(uVar5 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar7 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        if (((DAT_05233970 <= (int)uVar11) && ((int)uVar11 <= DAT_05233980)) &&
           ((DAT_05233974 <= iVar6 &&
            ((iVar6 <= DAT_05233984 &&
             (uVar5 = (iVar6 * 0x80 & 0x3ff00U) + (uVar11 >> 1), uVar5 >> 0xf == 0)))))) {
          lVar9 = (ulong)(uVar5 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        if ((((DAT_05233970 <= (int)uVar2) && ((int)uVar2 <= DAT_05233980)) &&
            (DAT_05233974 <= iVar6)) &&
           ((iVar6 <= DAT_05233984 &&
            (uVar5 = (iVar6 * 0x80 & 0x3ff00U) + (uVar2 >> 1), uVar5 >> 0xf == 0)))) {
          lVar9 = (ulong)(uVar5 >> 5) * 4;
          *(uint *)(param_2 + lVar9) =
               *(uint *)(param_2 + lVar9) & (1 << (ulong)(uVar2 >> 1 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    lVar14 = lVar14 + 4;
    if (lVar14 == 0x20) {
      return;
    }
  } while( true );
}


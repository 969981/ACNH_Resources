
undefined8 FUN_016d50fc(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  
  puVar3 = PTR_DAT_04bb46b0;
  uVar10 = 0xffffffff;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return 0xffffffff;
  }
  lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
  if (lVar4 == 0) {
LAB_016d51f8:
    if (*(long *)puVar3 == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_026eec4c(*(long *)puVar3,1);
    if (lVar4 != 0) {
      if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
        uVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar5)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
      if (*piVar1 == *param_1) {
        uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar7 == uVar8) {
          uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          if (uVar7 != uVar8) goto LAB_016d52a4;
          uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
          uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
          uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if (uVar7 != uVar8) goto LAB_016d52a4;
          iVar9 = 0;
        }
        else {
LAB_016d52a4:
          iVar9 = 1;
          if (uVar7 < uVar8) {
            iVar9 = -1;
          }
        }
        if (iVar9 == 0) {
          lVar4 = lVar4 + 0x17000;
          uVar10 = 1;
          goto LAB_016d582c;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (*(long *)puVar3 == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_026eec4c(*(long *)puVar3,2);
    if (lVar4 != 0) {
      if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
        uVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar5)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
      if (*piVar1 == *param_1) {
        uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar7 == uVar8) {
          uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          if (uVar7 != uVar8) goto LAB_016d5388;
          uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
          uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
          uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if (uVar7 != uVar8) goto LAB_016d5388;
          iVar9 = 0;
        }
        else {
LAB_016d5388:
          iVar9 = 1;
          if (uVar7 < uVar8) {
            iVar9 = -1;
          }
        }
        if (iVar9 == 0) {
          lVar4 = lVar4 + 0x17000;
          uVar10 = 2;
          goto LAB_016d582c;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (*(long *)puVar3 == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_026eec4c(*(long *)puVar3,3);
    if (lVar4 != 0) {
      if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
        uVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar5)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
      if (*piVar1 == *param_1) {
        uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar7 == uVar8) {
          uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          if (uVar7 != uVar8) goto LAB_016d546c;
          uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
          uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
          uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if (uVar7 != uVar8) goto LAB_016d546c;
          iVar9 = 0;
        }
        else {
LAB_016d546c:
          iVar9 = 1;
          if (uVar7 < uVar8) {
            iVar9 = -1;
          }
        }
        if (iVar9 == 0) {
          lVar4 = lVar4 + 0x17000;
          uVar10 = 3;
          goto LAB_016d582c;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (*(long *)puVar3 == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_026eec4c(*(long *)puVar3,4);
    if (lVar4 != 0) {
      if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
        uVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar5)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
      if (*piVar1 == *param_1) {
        uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar7 == uVar8) {
          uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          if (uVar7 != uVar8) goto LAB_016d5550;
          uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
          uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
          uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if (uVar7 != uVar8) goto LAB_016d5550;
          iVar9 = 0;
        }
        else {
LAB_016d5550:
          iVar9 = 1;
          if (uVar7 < uVar8) {
            iVar9 = -1;
          }
        }
        if (iVar9 == 0) {
          lVar4 = lVar4 + 0x17000;
          uVar10 = 4;
          goto LAB_016d582c;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (*(long *)puVar3 == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_026eec4c(*(long *)puVar3,5);
    if (lVar4 != 0) {
      if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
        uVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar5)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
      if (*piVar1 == *param_1) {
        uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar7 == uVar8) {
          uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          if (uVar7 != uVar8) goto LAB_016d5634;
          uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
          uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
          uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if (uVar7 != uVar8) goto LAB_016d5634;
          iVar9 = 0;
        }
        else {
LAB_016d5634:
          iVar9 = 1;
          if (uVar7 < uVar8) {
            iVar9 = -1;
          }
        }
        if (iVar9 == 0) {
          lVar4 = lVar4 + 0x17000;
          uVar10 = 5;
          goto LAB_016d582c;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (*(long *)puVar3 == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_026eec4c(*(long *)puVar3,6);
    if (lVar4 != 0) {
      if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
        uVar6 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar5)();
        }
      }
      piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
      if (*piVar1 == *param_1) {
        uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar7 == uVar8) {
          uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                  (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          if (uVar7 != uVar8) goto LAB_016d5718;
          uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
          uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
          uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
          if (uVar7 != uVar8) goto LAB_016d5718;
          iVar9 = 0;
        }
        else {
LAB_016d5718:
          iVar9 = 1;
          if (uVar7 < uVar8) {
            iVar9 = -1;
          }
        }
        if (iVar9 == 0) {
          lVar4 = lVar4 + 0x17000;
          uVar10 = 6;
          goto LAB_016d582c;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
    if (*(long *)puVar3 == 0) {
      return 0xffffffff;
    }
    lVar4 = FUN_026eec4c(*(long *)puVar3,7);
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
      uVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar5)();
      }
    }
    piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
    if (*piVar1 == *param_1) {
      uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      if (uVar7 == uVar8) {
        uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        if (uVar7 != uVar8) goto LAB_016d57fc;
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar7 != uVar8) goto LAB_016d57fc;
        iVar9 = 0;
      }
      else {
LAB_016d57fc:
        iVar9 = 1;
        if (uVar7 < uVar8) {
          iVar9 = -1;
        }
      }
      if (iVar9 == 0) {
        lVar4 = lVar4 + 0x17000;
        uVar10 = 7;
        goto LAB_016d582c;
      }
    }
    if ((uVar6 & 1) == 0) {
      return 0xffffffff;
    }
    lVar4 = *(long *)(lVar4 + 0x17f68);
  }
  else {
    if (*(long **)(lVar4 + 0x17f68) == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)**(long **)(lVar4 + 0x17f68);
      uVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar6 = (**(code **)*puVar5)();
      }
    }
    piVar1 = (int *)(*(long *)(lVar4 + 0x17f50) + *(long *)(lVar4 + 0x17f48));
    if (*piVar1 != *param_1) {
LAB_016d51d8:
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      goto LAB_016d51f8;
    }
    uVar8 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar8 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    if (uVar7 == uVar8) {
      uVar8 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar8 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      if (uVar7 != uVar8) goto LAB_016d51cc;
      uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
      uVar7 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
      uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      if (uVar7 != uVar8) goto LAB_016d51cc;
      iVar9 = 0;
    }
    else {
LAB_016d51cc:
      iVar9 = 1;
      if (uVar7 < uVar8) {
        iVar9 = -1;
      }
    }
    if (iVar9 != 0) goto LAB_016d51d8;
    lVar4 = lVar4 + 0x17000;
    uVar10 = 0;
LAB_016d582c:
    if ((uVar6 & 1) == 0) {
      return uVar10;
    }
    lVar4 = *(long *)(lVar4 + 0xf68);
  }
  if ((lVar4 != 0) && (*(undefined8 **)(lVar4 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar4 + 8))();
  }
  return uVar10;
}


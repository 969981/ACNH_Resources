
undefined8 FUN_0265fdb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar3 = PTR_DAT_04bb46b0;
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return 0xffffffff;
  }
  lVar4 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,0);
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
    if (*param_1 == *piVar1) {
      uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if (uVar8 == uVar9) {
        uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if (uVar8 != uVar9) goto LAB_0265fe98;
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar8 != uVar9) goto LAB_0265fe98;
        iVar7 = 0;
      }
      else {
LAB_0265fe98:
        iVar7 = 1;
        if (uVar8 < uVar9) {
          iVar7 = -1;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar7 == 0) {
        return 0;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
      (**(code **)*puVar5)();
    }
  }
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
    if (*param_1 == *piVar1) {
      uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if (uVar8 == uVar9) {
        uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if (uVar8 != uVar9) goto LAB_0265ff94;
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar8 != uVar9) goto LAB_0265ff94;
        iVar7 = 0;
      }
      else {
LAB_0265ff94:
        iVar7 = 1;
        if (uVar8 < uVar9) {
          iVar7 = -1;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar7 == 0) {
        return 1;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
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
    if (*param_1 == *piVar1) {
      uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if (uVar8 == uVar9) {
        uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if (uVar8 != uVar9) goto LAB_02660098;
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar8 != uVar9) goto LAB_02660098;
        iVar7 = 0;
      }
      else {
LAB_02660098:
        iVar7 = 1;
        if (uVar8 < uVar9) {
          iVar7 = -1;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar7 == 0) {
        return 2;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
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
    if (*param_1 == *piVar1) {
      uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if (uVar8 == uVar9) {
        uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if (uVar8 != uVar9) goto LAB_0266019c;
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar8 != uVar9) goto LAB_0266019c;
        iVar7 = 0;
      }
      else {
LAB_0266019c:
        iVar7 = 1;
        if (uVar8 < uVar9) {
          iVar7 = -1;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar7 == 0) {
        return 3;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
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
    if (*param_1 == *piVar1) {
      uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if (uVar8 == uVar9) {
        uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if (uVar8 != uVar9) goto LAB_026602a0;
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar8 != uVar9) goto LAB_026602a0;
        iVar7 = 0;
      }
      else {
LAB_026602a0:
        iVar7 = 1;
        if (uVar8 < uVar9) {
          iVar7 = -1;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar7 == 0) {
        return 4;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
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
    if (*param_1 == *piVar1) {
      uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if (uVar8 == uVar9) {
        uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if (uVar8 != uVar9) goto LAB_026603a4;
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar8 != uVar9) goto LAB_026603a4;
        iVar7 = 0;
      }
      else {
LAB_026603a4:
        iVar7 = 1;
        if (uVar8 < uVar9) {
          iVar7 = -1;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar7 == 0) {
        return 5;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
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
    if (*param_1 == *piVar1) {
      uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
              (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      if (uVar8 == uVar9) {
        uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
                (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        if (uVar8 != uVar9) goto LAB_026604a8;
        uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
        uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
        uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
        if (uVar8 != uVar9) goto LAB_026604a8;
        iVar7 = 0;
      }
      else {
LAB_026604a8:
        iVar7 = 1;
        if (uVar8 < uVar9) {
          iVar7 = -1;
        }
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (iVar7 == 0) {
        return 6;
      }
    }
    else if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
            (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)
            ) {
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
  if (*param_1 != *piVar1) {
    if ((uVar6 & 1) == 0) {
      return 0xffffffff;
    }
    if (*(long *)(lVar4 + 0x17f68) == 0) {
      return 0xffffffff;
    }
    puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8);
    if (puVar5 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    (**(code **)*puVar5)();
    return 0xffffffff;
  }
  uVar9 = (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(piVar1 + 1) & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
  uVar9 = (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 1) & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
  if (uVar8 == uVar9) {
    uVar9 = (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(piVar1 + 3) & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar9 = (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 3) & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    if (uVar8 == uVar9) {
      uVar2 = (piVar1[5] & 0xff00ff00U) >> 8 | (piVar1[5] & 0xff00ffU) << 8;
      uVar8 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      uVar2 = (param_1[5] & 0xff00ff00U) >> 8 | (param_1[5] & 0xff00ffU) << 8;
      uVar9 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
      if (uVar8 == uVar9) {
        iVar7 = 0;
        goto LAB_026605b8;
      }
    }
  }
  iVar7 = 1;
  if (uVar8 < uVar9) {
    iVar7 = -1;
  }
LAB_026605b8:
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar4 + 0x17f68) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x17f68) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if (iVar7 == 0) {
    return 7;
  }
  return 0xffffffff;
}


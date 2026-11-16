
void FUN_0286b420(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  int iVar19;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  char *local_70;
  undefined8 uStack_68;
  
  lVar16 = *param_2;
  if (0 < lVar16) {
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "CompleteCommuneExpandEvent";
    uVar10 = FUN_0273f0a0(&local_78);
    if ((uVar10 & 1) != 0) {
      local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
      lVar16 = 0;
      if (DAT_05574040 != 0) {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar16 = 0;
        if (lVar11 != 0) {
          lVar16 = lVar11 + 0x276cb0;
        }
      }
      if (*(long **)(lVar16 + 0x8a68) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8a68);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      iVar8 = 0;
      puVar13 = (uint *)(*(long *)(lVar16 + 0x8a50) + *(long *)(lVar16 + 0x8a48));
      uVar9 = *puVar13;
      if ((*(byte *)((long)puVar13 + 7) != 0 ||
           (((ulong)uVar9 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
         ((uint)*(byte *)((long)puVar13 + 7) ==
          ((uVar9 + (uVar9 >> 0x10) + (uVar9 >> 0x18) + (uVar9 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar9 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
        iVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                (int)((ulong)lVar11 >> 0x20);
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8a68) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8a68) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if (iVar8 < 100000) {
        uVar9 = 1 << (ulong)((uint)local_78 & 0x1f);
      }
      else {
        uVar9 = 0;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      lVar16 = 0;
      if (DAT_05574040 != 0) {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar16 = 0;
        if (lVar11 != 0) {
          lVar16 = lVar11 + 0x276cb0;
        }
      }
      if (*(long **)(lVar16 + 0x8aa0) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8aa0);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      iVar8 = 0;
      puVar13 = (uint *)(*(long *)(lVar16 + 0x8a88) + *(long *)(lVar16 + 0x8a80));
      uVar18 = *puVar13;
      if ((*(byte *)((long)puVar13 + 7) != 0 ||
           (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0))
         && ((uint)*(byte *)((long)puVar13 + 7) ==
             ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
        iVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                (int)((ulong)lVar11 >> 0x20);
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8aa0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8aa0) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if (iVar8 < 100000) {
        uVar9 = 1 << (ulong)((uint)local_78 & 0x1f) | uVar9;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
      lVar16 = 0;
      if (DAT_05574040 != 0) {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar16 = 0;
        if (lVar11 != 0) {
          lVar16 = lVar11 + 0x276cb0;
        }
      }
      if (*(long **)(lVar16 + 0x8ad8) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8ad8);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      iVar8 = 0;
      puVar13 = (uint *)(*(long *)(lVar16 + 0x8ac0) + *(long *)(lVar16 + 0x8ab8));
      uVar18 = *puVar13;
      if ((*(byte *)((long)puVar13 + 7) != 0 ||
           (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0))
         && ((uint)*(byte *)((long)puVar13 + 7) ==
             ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
        iVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                (int)((ulong)lVar11 >> 0x20);
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8ad8) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8ad8) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if (iVar8 < 100000) {
        uVar9 = 1 << (ulong)((uint)local_78 & 0x1f) | uVar9;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      lVar16 = 0;
      if (DAT_05574040 != 0) {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar16 = 0;
        if (lVar11 != 0) {
          lVar16 = lVar11 + 0x276cb0;
        }
      }
      if (*(long **)(lVar16 + 0x8b10) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b10);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      iVar8 = 0;
      puVar13 = (uint *)(*(long *)(lVar16 + 0x8af8) + *(long *)(lVar16 + 0x8af0));
      uVar18 = *puVar13;
      if ((*(byte *)((long)puVar13 + 7) != 0 ||
           (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0))
         && ((uint)*(byte *)((long)puVar13 + 7) ==
             ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
        iVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                (int)((ulong)lVar11 >> 0x20);
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b10) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b10) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if (iVar8 < 100000) {
        uVar9 = 1 << (ulong)((uint)local_78 & 0x1f) | uVar9;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,4);
      lVar16 = 0;
      if (DAT_05574040 != 0) {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar16 = 0;
        if (lVar11 != 0) {
          lVar16 = lVar11 + 0x276cb0;
        }
      }
      if (*(long **)(lVar16 + 0x8b48) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b48);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      iVar8 = 0;
      puVar13 = (uint *)(*(long *)(lVar16 + 0x8b30) + *(long *)(lVar16 + 0x8b28));
      uVar18 = *puVar13;
      if ((*(byte *)((long)puVar13 + 7) != 0 ||
           (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0))
         && ((uint)*(byte *)((long)puVar13 + 7) ==
             ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
        iVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                (int)((ulong)lVar11 >> 0x20);
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b48) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b48) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if (iVar8 < 100000) {
        uVar9 = 1 << (ulong)((uint)local_78 & 0x1f) | uVar9;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,5);
      lVar16 = 0;
      if (DAT_05574040 != 0) {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar16 = 0;
        if (lVar11 != 0) {
          lVar16 = lVar11 + 0x276cb0;
        }
      }
      if (*(long **)(lVar16 + 0x8b80) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b80);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      iVar8 = 0;
      puVar13 = (uint *)(*(long *)(lVar16 + 0x8b68) + *(long *)(lVar16 + 0x8b60));
      uVar18 = *puVar13;
      if ((*(byte *)((long)puVar13 + 7) != 0 ||
           (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0))
         && ((uint)*(byte *)((long)puVar13 + 7) ==
             ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
        iVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                (int)((ulong)lVar11 >> 0x20);
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b80) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b80) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if (iVar8 < 100000) {
        uVar9 = 1 << (ulong)((uint)local_78 & 0x1f) | uVar9;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,6);
      lVar16 = 0;
      if (DAT_05574040 != 0) {
        lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
        lVar16 = 0;
        if (lVar11 != 0) {
          lVar16 = lVar11 + 0x276cb0;
        }
      }
      if (*(long **)(lVar16 + 0x8bb8) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8bb8);
        uVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar12)();
        }
      }
      iVar8 = 0;
      puVar13 = (uint *)(*(long *)(lVar16 + 0x8ba0) + *(long *)(lVar16 + 0x8b98));
      uVar18 = *puVar13;
      if ((*(byte *)((long)puVar13 + 7) != 0 ||
           (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0))
         && ((uint)*(byte *)((long)puVar13 + 7) ==
             ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
        iVar8 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                (int)((ulong)lVar11 >> 0x20);
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8bb8) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8bb8) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if (iVar8 < 100000) {
        uVar9 = 1 << (ulong)((uint)local_78 & 0x1f) | uVar9;
      }
      uVar18 = uVar9 - (uVar9 >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
      uVar18 = uVar18 + (uVar18 >> 8);
      uVar18 = uVar18 + (uVar18 >> 0x10) & 0x3f;
      if (uVar18 < 5) {
        if (uVar18 < 3) {
          uVar18 = (uint)(uVar18 != 0);
        }
        else {
          puVar13 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          uVar18 = *puVar13 ^ *puVar13 << 0xb;
          uVar15 = puVar13[3];
          *puVar13 = puVar13[1];
          puVar13[1] = puVar13[2];
          uVar18 = uVar18 >> 8 ^ uVar15 >> 0x13 ^ uVar18 ^ uVar15;
          puVar13[2] = uVar15;
          puVar13[3] = uVar18;
          uVar18 = 1 - ((int)uVar18 >> 0x1f);
        }
      }
      else {
        puVar13 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar18 = *puVar13 ^ *puVar13 << 0xb;
        uVar15 = puVar13[3];
        *puVar13 = puVar13[1];
        puVar13[1] = puVar13[2];
        uVar18 = uVar18 >> 8 ^ uVar15 >> 0x13 ^ uVar18 ^ uVar15;
        puVar13[2] = uVar15;
        puVar13[3] = uVar18;
        uVar18 = (int)((ulong)uVar18 + (ulong)uVar18 * 2 >> 0x20) + 1;
      }
      while (uVar15 = uVar9 - (uVar9 >> 1 & 0x55555555),
            uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333),
            uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f, uVar15 = uVar15 + (uVar15 >> 8),
            uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f, uVar18 < uVar15) {
        puVar13 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar3 = *puVar13 ^ *puVar13 << 0xb;
        uVar4 = puVar13[3];
        *puVar13 = puVar13[1];
        puVar13[1] = puVar13[2];
        uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
        puVar13[2] = uVar4;
        puVar13[3] = uVar3;
        if (uVar9 != 0) {
          iVar8 = (int)((ulong)uVar3 * (ulong)uVar15 >> 0x20) + 2;
          uVar15 = uVar9;
          do {
            iVar8 = iVar8 + -1;
            if (iVar8 < 2) {
              uVar15 = uVar15 - 1 & (uVar15 ^ 0xffffffff);
              uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
              uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
              uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
              uVar15 = uVar15 + (uVar15 >> 8);
              uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f;
              goto LAB_0286bcb8;
            }
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        uVar15 = 0xffffffff;
LAB_0286bcb8:
        uVar9 = uVar9 & (1 << (ulong)(uVar15 & 0x1f) ^ 0xffffffffU);
      }
LAB_0286bd90:
      do {
        uVar18 = uVar9 - (uVar9 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        if ((uVar18 + (uVar18 >> 0x10) & 0x3f) == 0) break;
        if (uVar9 == 0) {
          uVar18 = 0xffffffff;
        }
        else {
          uVar18 = uVar9 - 1 & (uVar9 ^ 0xffffffff);
          uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
          uVar18 = uVar18 + (uVar18 >> 8);
          uVar18 = uVar18 + (uVar18 >> 0x10) & 0x3f;
        }
        uVar9 = uVar9 & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
        puVar13 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar3 = puVar13[3];
        uVar15 = *puVar13 ^ *puVar13 << 0xb;
        *puVar13 = puVar13[1];
        puVar13[1] = puVar13[2];
        uVar15 = uVar15 >> 8 ^ uVar3 >> 0x13 ^ uVar15 ^ uVar3;
        puVar13[2] = uVar3;
        puVar13[3] = uVar15;
        if (uVar18 < 7) {
          iVar8 = (int)((ulong)uVar15 * 0x65 >> 0x20) * 10 + 500;
          switch(uVar18) {
          case 0:
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            if (*(long **)(lVar16 + 0x8a68) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8a68);
              uVar10 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar12)();
              }
            }
            iVar19 = 0;
            puVar13 = (uint *)(*(long *)(lVar16 + 0x8a50) + *(long *)(lVar16 + 0x8a48));
            uVar18 = *puVar13;
            if ((*(byte *)((long)puVar13 + 7) != 0 ||
                 (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) ||
                 *(byte *)((long)puVar13 + 6) != 0)) &&
               ((uint)*(byte *)((long)puVar13 + 7) ==
                ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
              lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
              iVar19 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar11 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8a68) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8a68) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (99999 < (uint)(iVar19 + iVar8)) goto LAB_0286bd90;
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            plVar17 = (long *)(lVar16 + 0x8a48);
            lVar11 = *(long *)(lVar16 + 0x8a68);
            if (lVar11 == 0) {
              FUN_0285dc20(*(long *)(lVar16 + 0x8a50) + *plVar17,iVar8,100000);
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar14 = *(long **)(lVar11 + 0x20);
joined_r0x0286cd10:
                if (plVar14 != (long *)0x0) {
                  local_78 = (undefined *)*plVar17;
                  local_70 = *(char **)(lVar16 + 0x8a50);
                  uStack_68 = 8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar16 + 0x8a68) != 0) {
                  plVar14 = *(long **)(*(long *)(lVar16 + 0x8a68) + 0x20);
                  goto joined_r0x0286cd10;
                }
              }
              FUN_0285dc20(*(long *)(lVar16 + 0x8a50) + *plVar17,iVar8,100000);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8a68) != 0)) &&
                 (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8a68) + 0x18),
                 puVar12 != (undefined8 *)0x0)) {
                (**(code **)*puVar12)();
              }
            }
            lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
            bVar7 = lVar16 == 0;
            lVar16 = lVar16 + 0x276cb0;
            lVar11 = 0x8a68;
            break;
          case 1:
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            if (*(long **)(lVar16 + 0x8aa0) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8aa0);
              uVar10 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar12)();
              }
            }
            iVar19 = 0;
            puVar13 = (uint *)(*(long *)(lVar16 + 0x8a88) + *(long *)(lVar16 + 0x8a80));
            uVar18 = *puVar13;
            if ((*(byte *)((long)puVar13 + 7) != 0 ||
                 (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) ||
                 *(byte *)((long)puVar13 + 6) != 0)) &&
               ((uint)*(byte *)((long)puVar13 + 7) ==
                ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
              lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
              iVar19 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar11 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8aa0) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8aa0) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (99999 < (uint)(iVar19 + iVar8)) goto LAB_0286bd90;
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            plVar17 = (long *)(lVar16 + 0x8a80);
            lVar11 = *(long *)(lVar16 + 0x8aa0);
            if (lVar11 == 0) {
              FUN_0285dc20(*(long *)(lVar16 + 0x8a88) + *plVar17,iVar8,100000);
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar14 = *(long **)(lVar11 + 0x20);
joined_r0x0286cd20:
                if (plVar14 != (long *)0x0) {
                  local_78 = (undefined *)*plVar17;
                  local_70 = *(char **)(lVar16 + 0x8a88);
                  uStack_68 = 8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar16 + 0x8aa0) != 0) {
                  plVar14 = *(long **)(*(long *)(lVar16 + 0x8aa0) + 0x20);
                  goto joined_r0x0286cd20;
                }
              }
              FUN_0285dc20(*(long *)(lVar16 + 0x8a88) + *plVar17,iVar8,100000);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8aa0) != 0)) &&
                 (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8aa0) + 0x18),
                 puVar12 != (undefined8 *)0x0)) {
                (**(code **)*puVar12)();
              }
            }
            lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
            bVar7 = lVar16 == 0;
            lVar16 = lVar16 + 0x276cb0;
            lVar11 = 0x8aa0;
            break;
          case 2:
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            if (*(long **)(lVar16 + 0x8ad8) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8ad8);
              uVar10 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar12)();
              }
            }
            iVar19 = 0;
            puVar13 = (uint *)(*(long *)(lVar16 + 0x8ac0) + *(long *)(lVar16 + 0x8ab8));
            uVar18 = *puVar13;
            if ((*(byte *)((long)puVar13 + 7) != 0 ||
                 (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) ||
                 *(byte *)((long)puVar13 + 6) != 0)) &&
               ((uint)*(byte *)((long)puVar13 + 7) ==
                ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
              lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
              iVar19 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar11 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8ad8) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8ad8) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (99999 < (uint)(iVar19 + iVar8)) goto LAB_0286bd90;
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            plVar17 = (long *)(lVar16 + 0x8ab8);
            lVar11 = *(long *)(lVar16 + 0x8ad8);
            if (lVar11 == 0) {
              FUN_0285dc20(*(long *)(lVar16 + 0x8ac0) + *plVar17,iVar8,100000);
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar14 = *(long **)(lVar11 + 0x20);
joined_r0x0286cd30:
                if (plVar14 != (long *)0x0) {
                  local_78 = (undefined *)*plVar17;
                  local_70 = *(char **)(lVar16 + 0x8ac0);
                  uStack_68 = 8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar16 + 0x8ad8) != 0) {
                  plVar14 = *(long **)(*(long *)(lVar16 + 0x8ad8) + 0x20);
                  goto joined_r0x0286cd30;
                }
              }
              FUN_0285dc20(*(long *)(lVar16 + 0x8ac0) + *plVar17,iVar8,100000);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8ad8) != 0)) &&
                 (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8ad8) + 0x18),
                 puVar12 != (undefined8 *)0x0)) {
                (**(code **)*puVar12)();
              }
            }
            lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
            bVar7 = lVar16 == 0;
            lVar16 = lVar16 + 0x276cb0;
            lVar11 = 0x8ad8;
            break;
          case 3:
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            if (*(long **)(lVar16 + 0x8b10) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b10);
              uVar10 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar12)();
              }
            }
            iVar19 = 0;
            puVar13 = (uint *)(*(long *)(lVar16 + 0x8af8) + *(long *)(lVar16 + 0x8af0));
            uVar18 = *puVar13;
            if ((*(byte *)((long)puVar13 + 7) != 0 ||
                 (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) ||
                 *(byte *)((long)puVar13 + 6) != 0)) &&
               ((uint)*(byte *)((long)puVar13 + 7) ==
                ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
              lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
              iVar19 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar11 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b10) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b10) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (99999 < (uint)(iVar19 + iVar8)) goto LAB_0286bd90;
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            plVar17 = (long *)(lVar16 + 0x8af0);
            lVar11 = *(long *)(lVar16 + 0x8b10);
            if (lVar11 == 0) {
              FUN_0285dc20(*(long *)(lVar16 + 0x8af8) + *plVar17,iVar8,100000);
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar14 = *(long **)(lVar11 + 0x20);
joined_r0x0286cd40:
                if (plVar14 != (long *)0x0) {
                  local_78 = (undefined *)*plVar17;
                  local_70 = *(char **)(lVar16 + 0x8af8);
                  uStack_68 = 8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar16 + 0x8b10) != 0) {
                  plVar14 = *(long **)(*(long *)(lVar16 + 0x8b10) + 0x20);
                  goto joined_r0x0286cd40;
                }
              }
              FUN_0285dc20(*(long *)(lVar16 + 0x8af8) + *plVar17,iVar8,100000);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b10) != 0)) &&
                 (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b10) + 0x18),
                 puVar12 != (undefined8 *)0x0)) {
                (**(code **)*puVar12)();
              }
            }
            lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
            bVar7 = lVar16 == 0;
            lVar16 = lVar16 + 0x276cb0;
            lVar11 = 0x8b10;
            break;
          case 4:
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            if (*(long **)(lVar16 + 0x8b48) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b48);
              uVar10 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar12)();
              }
            }
            iVar19 = 0;
            puVar13 = (uint *)(*(long *)(lVar16 + 0x8b30) + *(long *)(lVar16 + 0x8b28));
            uVar18 = *puVar13;
            if ((*(byte *)((long)puVar13 + 7) != 0 ||
                 (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) ||
                 *(byte *)((long)puVar13 + 6) != 0)) &&
               ((uint)*(byte *)((long)puVar13 + 7) ==
                ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
              lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
              iVar19 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar11 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b48) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b48) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (99999 < (uint)(iVar19 + iVar8)) goto LAB_0286bd90;
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            plVar17 = (long *)(lVar16 + 0x8b28);
            lVar11 = *(long *)(lVar16 + 0x8b48);
            if (lVar11 == 0) {
              FUN_0285dc20(*(long *)(lVar16 + 0x8b30) + *plVar17,iVar8,100000);
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar14 = *(long **)(lVar11 + 0x20);
joined_r0x0286cd50:
                if (plVar14 != (long *)0x0) {
                  local_78 = (undefined *)*plVar17;
                  local_70 = *(char **)(lVar16 + 0x8b30);
                  uStack_68 = 8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar16 + 0x8b48) != 0) {
                  plVar14 = *(long **)(*(long *)(lVar16 + 0x8b48) + 0x20);
                  goto joined_r0x0286cd50;
                }
              }
              FUN_0285dc20(*(long *)(lVar16 + 0x8b30) + *plVar17,iVar8,100000);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b48) != 0)) &&
                 (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b48) + 0x18),
                 puVar12 != (undefined8 *)0x0)) {
                (**(code **)*puVar12)();
              }
            }
            lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
            bVar7 = lVar16 == 0;
            lVar16 = lVar16 + 0x276cb0;
            lVar11 = 0x8b48;
            break;
          case 5:
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            if (*(long **)(lVar16 + 0x8b80) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b80);
              uVar10 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar12)();
              }
            }
            iVar19 = 0;
            puVar13 = (uint *)(*(long *)(lVar16 + 0x8b68) + *(long *)(lVar16 + 0x8b60));
            uVar18 = *puVar13;
            if ((*(byte *)((long)puVar13 + 7) != 0 ||
                 (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) ||
                 *(byte *)((long)puVar13 + 6) != 0)) &&
               ((uint)*(byte *)((long)puVar13 + 7) ==
                ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
              lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
              iVar19 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar11 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b80) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b80) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (99999 < (uint)(iVar19 + iVar8)) goto LAB_0286bd90;
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            plVar17 = (long *)(lVar16 + 0x8b60);
            lVar11 = *(long *)(lVar16 + 0x8b80);
            if (lVar11 == 0) {
              FUN_0285dc20(*(long *)(lVar16 + 0x8b68) + *plVar17,iVar8,100000);
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar14 = *(long **)(lVar11 + 0x20);
joined_r0x0286cd60:
                if (plVar14 != (long *)0x0) {
                  local_78 = (undefined *)*plVar17;
                  local_70 = *(char **)(lVar16 + 0x8b68);
                  uStack_68 = 8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar16 + 0x8b80) != 0) {
                  plVar14 = *(long **)(*(long *)(lVar16 + 0x8b80) + 0x20);
                  goto joined_r0x0286cd60;
                }
              }
              FUN_0285dc20(*(long *)(lVar16 + 0x8b68) + *plVar17,iVar8,100000);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b80) != 0)) &&
                 (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b80) + 0x18),
                 puVar12 != (undefined8 *)0x0)) {
                (**(code **)*puVar12)();
              }
            }
            lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
            bVar7 = lVar16 == 0;
            lVar16 = lVar16 + 0x276cb0;
            lVar11 = 0x8b80;
            break;
          case 6:
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            if (*(long **)(lVar16 + 0x8bb8) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8bb8);
              uVar10 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar12)();
              }
            }
            iVar19 = 0;
            puVar13 = (uint *)(*(long *)(lVar16 + 0x8ba0) + *(long *)(lVar16 + 0x8b98));
            uVar18 = *puVar13;
            if ((*(byte *)((long)puVar13 + 7) != 0 ||
                 (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) ||
                 *(byte *)((long)puVar13 + 6) != 0)) &&
               ((uint)*(byte *)((long)puVar13 + 7) ==
                ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
              lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
              iVar19 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar11 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8bb8) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8bb8) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            if (99999 < (uint)(iVar19 + iVar8)) goto LAB_0286bd90;
            lVar16 = 0;
            if (DAT_05574040 != 0) {
              lVar11 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
              lVar16 = 0;
              if (lVar11 != 0) {
                lVar16 = lVar11 + 0x276cb0;
              }
            }
            plVar17 = (long *)(lVar16 + 0x8b98);
            lVar11 = *(long *)(lVar16 + 0x8bb8);
            if (lVar11 == 0) {
              FUN_0285dc20(*(long *)(lVar16 + 0x8ba0) + *plVar17,iVar8,100000);
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar14 = *(long **)(lVar11 + 0x20);
joined_r0x0286cd70:
                if (plVar14 != (long *)0x0) {
                  local_78 = (undefined *)*plVar17;
                  local_70 = *(char **)(lVar16 + 0x8ba0);
                  uStack_68 = 8;
                  (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar16 + 0x8bb8) != 0) {
                  plVar14 = *(long **)(*(long *)(lVar16 + 0x8bb8) + 0x20);
                  goto joined_r0x0286cd70;
                }
              }
              FUN_0285dc20(*(long *)(lVar16 + 0x8ba0) + *plVar17,iVar8,100000);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8bb8) != 0)) &&
                 (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8bb8) + 0x18),
                 puVar12 != (undefined8 *)0x0)) {
                (**(code **)*puVar12)();
              }
            }
            lVar16 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))();
            bVar7 = lVar16 == 0;
            lVar16 = lVar16 + 0x276cb0;
            lVar11 = 0x8bb8;
          }
          lVar2 = 0;
          if (!bVar7) {
            lVar2 = lVar16;
          }
          plVar17 = *(long **)(lVar2 + lVar11);
          if (((plVar17 != (long *)0x0) &&
              (puVar12 = (undefined8 *)*plVar17, puVar12 != (undefined8 *)0x0)) &&
             ((uVar10 = (**(code **)*puVar12)(), (uVar10 & 1) != 0 &&
              ((lVar16 = *(long *)(lVar2 + lVar11), lVar16 != 0 &&
               (puVar12 = *(undefined8 **)(lVar16 + 8), puVar12 != (undefined8 *)0x0)))))) {
            (**(code **)*puVar12)();
          }
        }
      } while( true );
    }
    lVar16 = *param_2;
  }
  puVar6 = PTR_DAT_04bb46b0;
  puVar5 = PTR_DAT_04bb2020;
  if (lVar16 == 0) goto LAB_0286d894;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = PTR_DAT_04bb2120;
  lVar16 = 0;
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
    lVar16 = 0;
    if (lVar11 != 0) {
      lVar16 = lVar11 + 0x276cb0;
    }
  }
  if (*(long **)(lVar16 + 0x8a68) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8a68);
    uVar10 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar12)();
    }
  }
  uVar9 = 0;
  puVar13 = (uint *)(*(long *)(lVar16 + 0x8a50) + *(long *)(lVar16 + 0x8a48));
  uVar18 = *puVar13;
  if ((*(byte *)((long)puVar13 + 7) != 0 ||
       (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar13 + 7) ==
      ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
    lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
    uVar9 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8a68) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8a68) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (uVar9 < 100000) {
    bVar7 = false;
    lVar11 = *(long *)puVar6;
    lVar16 = 0;
    if (lVar11 != 0) goto LAB_0286cf0c;
  }
  else {
    puVar1 = puVar5 + 0x10;
    local_70 = "CommuneSloDonation";
    local_78 = puVar1;
    iVar8 = FUN_0273ea30(&local_78);
    bVar7 = iVar8 == 1;
    if (bVar7) {
      local_80 = "ReserveCommuneSloOpenEvent";
      local_70 = "CommuneSloOpenToday";
      local_78 = puVar1;
      FUN_0273f3c4(&local_78,1);
    }
    local_70 = "CommuneSloDonation";
    local_78 = puVar1;
    FUN_0273f3c4(&local_78,2);
    lVar11 = *(long *)puVar6;
    if (lVar11 == 0) {
      lVar16 = 0;
    }
    else {
LAB_0286cf0c:
      lVar11 = (**(code **)(*(long *)**(undefined8 **)(lVar11 + 0x10) + 0x38))();
      lVar16 = 0;
      if (lVar11 != 0) {
        lVar16 = lVar11 + 0x276cb0;
      }
    }
  }
  if (*(long **)(lVar16 + 0x8aa0) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8aa0);
    uVar10 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar12)();
    }
  }
  uVar9 = 0;
  puVar13 = (uint *)(*(long *)(lVar16 + 0x8a88) + *(long *)(lVar16 + 0x8a80));
  uVar18 = *puVar13;
  if ((*(byte *)((long)puVar13 + 7) != 0 ||
       (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar13 + 7) ==
      ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
    lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
    uVar9 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8aa0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8aa0) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (99999 < uVar9) {
    local_70 = "CommuneCmlDonation";
    local_78 = puVar5 + 0x10;
    iVar8 = FUN_0273ea30(&local_78);
    if (iVar8 == 1) {
      local_80 = "ReserveCommuneCmlOpenEvent";
      bVar7 = true;
    }
    local_70 = "CommuneCmlDonation";
    local_78 = puVar5 + 0x10;
    FUN_0273f3c4(&local_78,2);
  }
  lVar16 = 0;
  if (*(long *)puVar6 != 0) {
    lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar6 + 0x10) + 0x38))();
    lVar16 = 0;
    if (lVar11 != 0) {
      lVar16 = lVar11 + 0x276cb0;
    }
  }
  if (*(long **)(lVar16 + 0x8ad8) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8ad8);
    uVar10 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar12)();
    }
  }
  uVar9 = 0;
  puVar13 = (uint *)(*(long *)(lVar16 + 0x8ac0) + *(long *)(lVar16 + 0x8ab8));
  uVar18 = *puVar13;
  if ((*(byte *)((long)puVar13 + 7) != 0 ||
       (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar13 + 7) ==
      ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
    lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
    uVar9 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8ad8) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8ad8) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (99999 < uVar9) {
    local_70 = "CommuneFoxDonation";
    local_78 = puVar5 + 0x10;
    iVar8 = FUN_0273ea30(&local_78);
    if (iVar8 == 1) {
      local_80 = "ReserveCommuneFoxOpenEvent";
      bVar7 = true;
    }
    local_70 = "CommuneFoxDonation";
    local_78 = puVar5 + 0x10;
    FUN_0273f3c4(&local_78,2);
  }
  lVar16 = 0;
  if (*(long *)puVar6 != 0) {
    lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar6 + 0x10) + 0x38))();
    lVar16 = 0;
    if (lVar11 != 0) {
      lVar16 = lVar11 + 0x276cb0;
    }
  }
  if (*(long **)(lVar16 + 0x8b10) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b10);
    uVar10 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar12)();
    }
  }
  uVar9 = 0;
  puVar13 = (uint *)(*(long *)(lVar16 + 0x8af8) + *(long *)(lVar16 + 0x8af0));
  uVar18 = *puVar13;
  if ((*(byte *)((long)puVar13 + 7) != 0 ||
       (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar13 + 7) ==
      ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
    lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
    uVar9 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b10) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b10) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (99999 < uVar9) {
    local_70 = "CommuneBptDonation";
    local_78 = puVar5 + 0x10;
    iVar8 = FUN_0273ea30(&local_78);
    if (iVar8 == 1) {
      local_80 = "ReserveCommuneBptOpenEvent";
      bVar7 = true;
    }
    local_70 = "CommuneBptDonation";
    local_78 = puVar5 + 0x10;
    FUN_0273f3c4(&local_78,2);
  }
  lVar16 = 0;
  if (*(long *)puVar6 != 0) {
    lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar6 + 0x10) + 0x38))();
    lVar16 = 0;
    if (lVar11 != 0) {
      lVar16 = lVar11 + 0x276cb0;
    }
  }
  if (*(long **)(lVar16 + 0x8b48) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b48);
    uVar10 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar12)();
    }
  }
  uVar9 = 0;
  puVar13 = (uint *)(*(long *)(lVar16 + 0x8b30) + *(long *)(lVar16 + 0x8b28));
  uVar18 = *puVar13;
  if ((*(byte *)((long)puVar13 + 7) != 0 ||
       (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar13 + 7) ==
      ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
    lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
    uVar9 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b48) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b48) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (99999 < uVar9) {
    local_70 = "CommuneSkkDonation";
    local_78 = puVar5 + 0x10;
    iVar8 = FUN_0273ea30(&local_78);
    if (iVar8 == 1) {
      local_80 = "ReserveCommuneSkkOpenEvent";
      bVar7 = true;
    }
    local_70 = "CommuneSkkDonation";
    local_78 = puVar5 + 0x10;
    FUN_0273f3c4(&local_78,2);
  }
  lVar16 = 0;
  if (*(long *)puVar6 != 0) {
    lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar6 + 0x10) + 0x38))();
    lVar16 = 0;
    if (lVar11 != 0) {
      lVar16 = lVar11 + 0x276cb0;
    }
  }
  if (*(long **)(lVar16 + 0x8b80) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8b80);
    uVar10 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar12)();
    }
  }
  uVar9 = 0;
  puVar13 = (uint *)(*(long *)(lVar16 + 0x8b68) + *(long *)(lVar16 + 0x8b60));
  uVar18 = *puVar13;
  if ((*(byte *)((long)puVar13 + 7) != 0 ||
       (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar13 + 7) ==
      ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
    lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
    uVar9 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8b80) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8b80) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (99999 < uVar9) {
    local_70 = "CommuneAlpDonation";
    local_78 = puVar5 + 0x10;
    iVar8 = FUN_0273ea30(&local_78);
    if (iVar8 == 1) {
      local_80 = "ReserveCommuneAlpOpenEvent";
      bVar7 = true;
    }
    local_70 = "CommuneAlpDonation";
    local_78 = puVar5 + 0x10;
    FUN_0273f3c4(&local_78,2);
  }
  lVar16 = 0;
  if (*(long *)puVar6 != 0) {
    lVar11 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar6 + 0x10) + 0x38))();
    lVar16 = 0;
    if (lVar11 != 0) {
      lVar16 = lVar11 + 0x276cb0;
    }
  }
  if (*(long **)(lVar16 + 0x8bb8) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar16 + 0x8bb8);
    uVar10 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar12)();
    }
  }
  uVar9 = 0;
  puVar13 = (uint *)(*(long *)(lVar16 + 0x8ba0) + *(long *)(lVar16 + 0x8b98));
  uVar18 = *puVar13;
  if ((*(byte *)((long)puVar13 + 7) != 0 ||
       (((ulong)uVar18 != 0 || (ushort)puVar13[1] != 0) || *(byte *)((long)puVar13 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar13 + 7) ==
      ((uVar18 + (uVar18 >> 0x10) + (uVar18 >> 0x18) + (uVar18 >> 8)) - 0x2d & 0xff))) {
    lVar11 = (ulong)uVar18 << ((ulong)(0x1d - *(byte *)((long)puVar13 + 6)) & 0x3f);
    uVar9 = ((int)lVar11 - (uint)(ushort)puVar13[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20);
  }
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x8bb8) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x8bb8) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (uVar9 < 100000) {
joined_r0x0286d5c4:
    if (!bVar7) goto LAB_0286d894;
  }
  else {
    puVar1 = puVar5 + 0x10;
    local_70 = "CommuneTtlDonation";
    local_78 = puVar1;
    iVar8 = FUN_0273ea30(&local_78);
    if (iVar8 != 1) {
      local_70 = "CommuneTtlDonation";
      local_78 = puVar1;
      FUN_0273f3c4(&local_78,2);
      goto joined_r0x0286d5c4;
    }
    local_80 = "ReserveCommuneTtlOpenEvent";
    local_70 = "CommuneTtlDonation";
    local_78 = puVar1;
    FUN_0273f3c4(&local_78,2);
  }
  puVar1 = puVar5 + 0x10;
  local_70 = "ReserveCommuneAlpOpenEvent";
  local_78 = puVar1;
  FUN_0273f3c4(&local_78,0);
  local_70 = "ReserveCommuneSloOpenEvent";
  local_78 = puVar1;
  FUN_0273f3c4(&local_78,0);
  local_70 = "ReserveCommuneSkkOpenEvent";
  local_78 = puVar1;
  FUN_0273f3c4(&local_78,0);
  local_70 = "ReserveCommuneCmlOpenEvent";
  local_78 = puVar1;
  FUN_0273f3c4(&local_78,0);
  local_70 = "ReserveCommuneFoxOpenEvent";
  local_78 = puVar1;
  FUN_0273f3c4(&local_78,0);
  local_70 = "ReserveCommuneBptOpenEvent";
  local_78 = puVar1;
  FUN_0273f3c4(&local_78,0);
  local_70 = "ReserveCommuneTtlOpenEvent";
  local_78 = puVar1;
  FUN_0273f3c4(&local_78,0);
  FUN_0273f3c4(&local_88,1);
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
LAB_0286d6e8:
    lVar16 = 0;
  }
  else {
    puVar12 = *(undefined8 **)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar16 = 0;
      if (lVar11 != 0) {
        lVar16 = lVar11 + 0x70;
      }
    }
    else {
      if (puVar12 == (undefined8 *)0x0) goto LAB_0286d6e8;
      lVar16 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar16 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
    }
  }
  plVar17 = (long *)(lVar16 + 0x1bf240);
  if ((*(long *)(lVar16 + 0x1bf260) == 0) ||
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x1bf260) + 0x10), puVar12 == (undefined8 *)0x0)
     ) {
    uVar9 = 1;
  }
  else {
    uVar9 = (**(code **)*puVar12)();
    uVar9 = uVar9 ^ 1;
  }
  local_70 = "ReserveCommuneSloOpenEvent";
  local_78 = puVar5 + 0x10;
  uVar10 = FUN_0273f0a0(&local_78);
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(lVar16 + 0x1bf260) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar16 + 0x1bf260) + 0x20), plVar14 != (long *)0x0)) {
      local_78 = (undefined *)*plVar17;
      local_70 = *(char **)(lVar16 + 0x1bf248);
      uStack_68 = 0x94;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
    }
    FUN_028d7904(*(long *)(lVar16 + 0x1bf248) + *plVar17,9);
  }
  local_70 = "ReserveCommuneSkkOpenEvent";
  local_78 = puVar5 + 0x10;
  uVar10 = FUN_0273f0a0(&local_78);
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(lVar16 + 0x1bf260) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar16 + 0x1bf260) + 0x20), plVar14 != (long *)0x0)) {
      local_78 = (undefined *)*plVar17;
      local_70 = *(char **)(lVar16 + 0x1bf248);
      uStack_68 = 0x94;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
    }
    FUN_028d7904(*(long *)(lVar16 + 0x1bf248) + *plVar17,8);
  }
  local_70 = "ReserveCommuneCmlOpenEvent";
  local_78 = puVar5 + 0x10;
  uVar10 = FUN_0273f0a0(&local_78);
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(lVar16 + 0x1bf260) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar16 + 0x1bf260) + 0x20), plVar14 != (long *)0x0)) {
      local_78 = (undefined *)*plVar17;
      local_70 = *(char **)(lVar16 + 0x1bf248);
      uStack_68 = 0x94;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
    }
    FUN_028d7904(*(long *)(lVar16 + 0x1bf248) + *plVar17,3);
  }
  local_70 = "ReserveCommuneFoxOpenEvent";
  local_78 = puVar5 + 0x10;
  uVar10 = FUN_0273f0a0(&local_78);
  if ((uVar10 & 1) != 0) {
    if ((*(long *)(lVar16 + 0x1bf260) != 0) &&
       (plVar14 = *(long **)(*(long *)(lVar16 + 0x1bf260) + 0x20), plVar14 != (long *)0x0)) {
      local_78 = (undefined *)*plVar17;
      local_70 = *(char **)(lVar16 + 0x1bf248);
      uStack_68 = 0x94;
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_78);
    }
    FUN_028d7904(*(long *)(lVar16 + 0x1bf248) + *plVar17,10);
  }
  if ((((uVar9 & 1) == 0) && (*(long *)(lVar16 + 0x1bf260) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar16 + 0x1bf260) + 0x18), puVar12 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar12)();
  }
LAB_0286d894:
  FUN_02864514(param_1,param_2);
  FUN_0288c99c(param_1 + 0x100,param_2);
  FUN_0287bd10(param_1 + 0x200,param_2);
  FUN_02873b14(param_1 + 0x300,param_2);
  return;
}


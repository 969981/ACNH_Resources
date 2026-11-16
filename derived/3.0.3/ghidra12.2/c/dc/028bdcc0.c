
/* WARNING: Type propagation algorithm not settling */

bool FUN_028bdcc0(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  int local_80;
  uint local_7c;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_05574040 == 0) ||
     (lVar6 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar6 == 0))
  {
    return false;
  }
  if ((*(long *)(lVar6 + 0xe71b0) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe71b0) + 0x10), puVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
    lVar4 = DAT_05574040;
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    uVar8 = uVar8 & 0xffffffff;
    lVar4 = DAT_05574040;
  }
  DAT_05574040 = lVar4;
  if (lVar4 == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FUN_02705554(&local_80,1,1);
    uVar17 = local_7c;
    while (uVar17 != 8) {
      uVar1 = uVar17;
      if (7 < uVar17) {
        uVar1 = 0xffffffff;
      }
      lVar9 = FUN_026eed64(lVar4,uVar1);
      bVar5 = lVar9 != 0;
      if (lVar9 == 0) {
        bVar5 = false;
        break;
      }
      if ((*(long **)(lVar9 + 0x17bb0) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)*puVar7)();
        uVar10 = uVar10 & 0xffffffff;
      }
      puVar7 = (undefined8 *)(*(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90));
      if (*(int *)((long)puVar7 + 0x1c) == 0) {
LAB_028bdec0:
        if (uVar17 < 8) goto LAB_028bdec8;
      }
      else {
        if ((*(long *)(lVar6 + 0xe71b0) != 0) &&
           (plVar11 = *(long **)(*(long *)(lVar6 + 0xe71b0) + 0x20), plVar11 != (long *)0x0)) {
          local_78 = *(long *)(lVar6 + 0xe7190);
          local_70 = *(undefined8 *)(lVar6 + 0xe7198);
          uStack_68 = 0x240;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
          puVar7 = (undefined8 *)(*(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90));
        }
        if ((7 < uVar17) || (*(int *)((long)puVar7 + 0x1c) == 0)) goto LAB_028bdec0;
        lVar12 = *(long *)(lVar6 + 0xe7198) + *(long *)(lVar6 + 0xe7190);
        plVar11 = (long *)(lVar12 + (ulong)uVar1 * 0x48);
        if (*plVar11 != 0 || plVar11[1] != 0) {
          lVar15 = lVar12 + (ulong)uVar1 * 0x48;
          if ((*(int *)(lVar15 + 0x2c) == 0) || (*(int *)(lVar15 + 0x10) == 0)) {
            uVar2 = *puVar7;
            uVar14 = puVar7[1];
            uVar16 = puVar7[2];
            *(undefined1 *)(lVar15 + 0x28) = *(undefined1 *)(puVar7 + 3);
            *(undefined8 *)(lVar15 + 0x10) = uVar2;
            *(undefined8 *)(lVar15 + 0x18) = uVar14;
            *(undefined8 *)(lVar15 + 0x20) = uVar16;
            uVar2 = *(undefined8 *)((long)puVar7 + 0x1c);
            uVar14 = *(undefined8 *)((long)puVar7 + 0x2c);
            *(undefined8 *)(lVar15 + 0x34) = *(undefined8 *)((long)puVar7 + 0x24);
            *(undefined8 *)(lVar15 + 0x3c) = uVar14;
            *(undefined8 *)(lVar15 + 0x2c) = uVar2;
            uVar3 = *(uint *)((long)puVar7 + 0x34);
            if (1 < uVar3) {
              uVar3 = 0;
            }
            *(uint *)(lVar12 + (ulong)uVar1 * 0x48 + 0x44) = uVar3;
          }
        }
LAB_028bdec8:
        lVar12 = DAT_05574040;
        if (DAT_05574040 != 0) {
          (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))();
          if ((local_80 == 0) && ((*(byte *)(lVar12 + 0x453) & 1) != 0)) {
            lVar12 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x10) + 0x130) + 0x18))();
          }
          else {
            lVar12 = (**(code **)(*(long *)**(undefined8 **)(lVar12 + 0x10) + 0x18))();
            lVar12 = lVar12 + 0x110;
          }
          if (uVar17 != 7) {
            uVar13 = (ulong)uVar17;
            plVar11 = (long *)(lVar12 + (ulong)uVar17 * 0x48 + 0x1e3400);
            do {
              if ((uVar13 < 7) && (plVar11[-1] != 0 || *plVar11 != 0)) {
                uVar17 = (int)uVar13 + 1;
                goto joined_r0x028bdf98;
              }
              uVar13 = uVar13 + 1;
              plVar11 = plVar11 + 9;
            } while (uVar13 != 7);
          }
        }
        uVar17 = 8;
      }
joined_r0x028bdf98:
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x17bb0) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
    }
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0xe71b0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe71b0) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return bVar5;
}


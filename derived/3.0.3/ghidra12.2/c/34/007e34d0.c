
void FUN_007e34d0(undefined4 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  
  if ((((param_2 != 0) && (DAT_05574040 != 0)) && (*(long *)(DAT_05574040 + 0x4c0) != 0)) &&
     ((plVar5 = *(long **)(*(long *)(DAT_05574040 + 0x10) + 0x180), plVar5 != (long *)0x0 &&
      (lVar6 = (**(code **)(*plVar5 + 0x38))(), lVar6 != 0)))) {
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    cVar2 = *(char *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x74070);
    uVar14 = 0;
    do {
      lVar1 = param_2 + 0x1df8 + (ulong)uVar14 * 0x2488;
      if (5 < uVar14) {
        lVar1 = param_2 + 0x1df8;
      }
      lVar12 = *(long *)(lVar1 + 0x1e90);
      if (lVar12 == 0) {
        uVar8 = 0;
LAB_007e3678:
        lVar9 = *(long *)(lVar1 + 0x1e70);
        lVar11 = *(long *)(lVar1 + 0x1e78);
        lVar10 = lVar11 + lVar9;
        if (cVar2 != *(char *)(lVar10 + 2)) goto LAB_007e36e4;
LAB_007e3740:
        *(char *)(lVar10 + 2) = (char)*param_1;
      }
      else {
        if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
          uVar8 = 0;
          plVar5 = *(long **)(lVar12 + 0x20);
          if (plVar5 != (long *)0x0) goto LAB_007e35e8;
LAB_007e36b0:
          lVar11 = *(long *)(lVar1 + 0x1e78);
          lVar9 = *(long *)(lVar1 + 0x1e70);
          lVar10 = lVar11 + lVar9;
          bVar3 = cVar2 == *(char *)(lVar10 + 2);
          plVar5 = *(long **)(lVar12 + 0x20);
joined_r0x007e36dc:
          if (plVar5 != (long *)0x0) {
            local_68 = 4;
            local_78 = lVar9;
            lStack_70 = lVar11;
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
            lVar9 = *(long *)(lVar1 + 0x1e70);
            lVar11 = *(long *)(lVar1 + 0x1e78);
            lVar10 = lVar11 + lVar9;
            if (!bVar3) goto LAB_007e36e4;
            goto LAB_007e3740;
          }
        }
        else {
          uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          lVar12 = *(long *)(lVar1 + 0x1e90);
          uVar8 = uVar8 & 0xffffffff;
          if (lVar12 == 0) goto LAB_007e3678;
          plVar5 = *(long **)(lVar12 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_007e36b0;
LAB_007e35e8:
          local_78 = *(long *)(lVar1 + 0x1e70);
          lStack_70 = *(long *)(lVar1 + 0x1e78);
          local_68 = 4;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
          lVar9 = *(long *)(lVar1 + 0x1e70);
          lVar11 = *(long *)(lVar1 + 0x1e78);
          lVar10 = lVar11 + lVar9;
          bVar3 = cVar2 == *(char *)(lVar10 + 2);
          if (*(long *)(lVar1 + 0x1e90) != 0) {
            plVar5 = *(long **)(*(long *)(lVar1 + 0x1e90) + 0x20);
            goto joined_r0x007e36dc;
          }
        }
        if (bVar3) goto LAB_007e3740;
LAB_007e36e4:
        if (*(char *)(lVar10 + 2) != -1) {
          if ((*(long *)(lVar1 + 0x1e90) == 0) ||
             (plVar5 = *(long **)(*(long *)(lVar1 + 0x1e90) + 0x20), plVar5 == (long *)0x0))
          goto LAB_007e3740;
          local_68 = 4;
          local_78 = lVar9;
          lStack_70 = lVar11;
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
          *(char *)(*(long *)(lVar1 + 0x1e78) + *(long *)(lVar1 + 0x1e70) + 2) = (char)*param_1;
        }
      }
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar1 + 0x1e90) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar1 + 0x1e90) + 0x18), puVar7 != (undefined8 *)0x0))
      {
        (**(code **)*puVar7)();
      }
      uVar13 = 6;
      if ((int)uVar14 < 6) {
        uVar13 = uVar14 + 1;
      }
      uVar14 = uVar13;
    } while (uVar13 != 6);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}


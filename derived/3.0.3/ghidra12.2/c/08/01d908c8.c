
uint FUN_01d908c8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  void *__src;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  size_t __n;
  undefined8 *local_48;
  
  uVar3 = 0;
  *(undefined2 *)(param_1 + 0x260) = 0;
  if (*(long *)(param_1 + 0x50) == 0 || *(int *)(param_1 + 0x10) != 0) goto LAB_01d909a8;
  if (((*(int *)(DAT_05358908 + 0x78) == 0) || (*(int *)(DAT_05358908 + 0xc4) - 1U < 2)) ||
     (DAT_05574040 == 0)) {
LAB_01d909a4:
    uVar3 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar4 == 0) goto LAB_01d909a4;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar6 == (undefined8 *)0x0) || ((long *)puVar6[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar4 == 0)) goto LAB_01d909a4;
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar6 == (undefined8 *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)*puVar6)();
      uVar5 = uVar5 & 0xffffffff;
    }
    lVar7 = *(long *)(&LAB_00578438 + *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8));
    *(long *)(param_1 + 0xc0) = lVar7;
    if (lVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_01d90b80(param_1,&local_48);
      if ((uVar3 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x98);
        puVar8 = (undefined8 *)DAT_0536bac8[2];
        puVar6 = DAT_0536bac8 + 1;
        if (puVar8 == puVar6) {
          __src = (void *)0x0;
          __n = 0;
        }
        else {
          puVar1 = (undefined8 *)((long)local_48 + (long)*(int *)((long)DAT_0536bac8 + 0x1c));
          puVar10 = puVar8;
          do {
            if (puVar10 == puVar1) {
              __src = (void *)*local_48;
              goto LAB_01d90a60;
            }
            puVar10 = (undefined8 *)puVar10[1];
          } while (puVar10 != puVar6);
          __src = (void *)0x0;
LAB_01d90a60:
          do {
            if (puVar8 == puVar1) {
              __n = local_48[1];
              goto LAB_01d90a80;
            }
            puVar8 = (undefined8 *)puVar8[1];
          } while (puVar8 != puVar6);
          __n = 0;
        }
LAB_01d90a80:
        __dest = *(void **)(lVar7 + 0x10);
        puVar6 = DAT_0536bac8;
        if (__dest != (void *)0x0) {
          if (*(uint *)(lVar7 + 8) < __n) {
            memcpy(__dest,__src,(ulong)*(uint *)(lVar7 + 8));
            __n = (size_t)*(uint *)(lVar7 + 8);
          }
          else {
            memcpy(__dest,__src,__n);
          }
          puVar6 = DAT_0536bac8;
          *(size_t *)(lVar7 + 0x18) = __n;
        }
        if (local_48 != (undefined8 *)0x0) {
          plVar9 = (long *)puVar6[2];
          if (plVar9 != puVar6 + 1) {
            plVar2 = (long *)((long)local_48 + (long)*(int *)((long)puVar6 + 0x1c));
            do {
              if (plVar9 == plVar2) {
                if (*plVar2 != 0) {
                  *(long *)(*plVar2 + 8) = plVar2[1];
                }
                if ((long *)plVar2[1] != (long *)0x0) {
                  *(long *)plVar2[1] = *plVar2;
                }
                *plVar2 = 0;
                plVar2[1] = 0;
                *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + -1;
                if (*(char *)(local_48 + 2) == '\0') {
                  (**(code **)(*(long *)*puVar6 + 0x38))((long *)*puVar6,*local_48);
                }
                (**(code **)(*(long *)*puVar6 + 0x38))((long *)*puVar6,local_48);
                break;
              }
              plVar9 = (long *)plVar9[1];
            } while (plVar9 != puVar6 + 1);
          }
        }
        FUN_03ebb160(param_1 + 8,2);
      }
    }
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
LAB_01d909a8:
  return uVar3 & 1;
}



void FUN_0281c5e0(int *param_1)

{
  void *__s;
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint local_88;
  uint local_84;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar10 = 0;
      if (lVar3 != 0) {
        lVar10 = lVar3 + 0x70;
      }
    }
    else if ((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    }
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar3 = 0;
      if (lVar4 != 0) {
        lVar3 = lVar4 + 0x276cb0;
      }
      if ((lVar10 != 0) && (lVar4 != 0)) {
        lVar4 = *(long *)(&LAB_00205768 + lVar10);
        if ((lVar4 == 0) || (puVar7 = *(undefined8 **)(lVar4 + 0x10), puVar7 == (undefined8 *)0x0))
        {
          local_84 = 0;
        }
        else {
          local_84 = (**(code **)*puVar7)();
        }
        lVar4 = *(long *)(lVar3 + 0xef08);
        if ((lVar4 == 0) || (puVar7 = *(undefined8 **)(lVar4 + 0x10), puVar7 == (undefined8 *)0x0))
        {
          local_88 = 0;
          iVar1 = *param_1;
        }
        else {
          local_88 = (**(code **)*puVar7)();
          iVar1 = *param_1;
        }
        if (iVar1 != 0) {
          lVar4 = *(long *)(param_1 + 2);
          iVar13 = 0;
          do {
            puVar11 = (uint *)(lVar4 + (long)iVar13 * 0x3c + 0x38);
            uVar5 = FUN_016c6f10(*puVar11);
            if ((uVar5 & 1) != 0) {
              lVar9 = lVar10 + 0x211c20 + (ulong)*puVar11 * 0xcb0;
              if (7 < *puVar11) {
                lVar9 = lVar10 + 0x211c20;
              }
              lVar8 = *(long *)(lVar9 + 0x28);
              if (lVar8 == 0) {
                uVar5 = 0;
              }
              else {
                if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
                  uVar5 = 0;
                  plVar6 = *(long **)(lVar8 + 0x20);
                }
                else {
                  uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
                  uVar5 = uVar5 & 0xffffffff;
                  if (*(long *)(lVar9 + 0x28) == 0) goto LAB_0281c7fc;
                  plVar6 = *(long **)(*(long *)(lVar9 + 0x28) + 0x20);
                }
                if (plVar6 != (long *)0x0) {
                  local_78 = *(undefined8 *)(lVar9 + 8);
                  local_70 = *(undefined8 *)(lVar9 + 0x10);
                  local_68 = 0x1594;
                  (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
                }
              }
LAB_0281c7fc:
              __s = (void *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
              memset(__s,0,0x1594);
              *(undefined2 *)((long)__s + 2) = 0xffff;
              FUN_028f8bb0((long)__s + 4);
              *(undefined4 *)((long)__s + 0x1560) = 0;
              *(undefined8 *)((long)__s + 0x1568) = 0;
              *(undefined1 *)((long)__s + 0x1564) = 0;
              *(undefined4 *)((long)__s + 0x1586) = 0x101;
              *(undefined8 *)((long)__s + 0x1570) = 0;
              *(undefined8 *)((long)__s + 0x1578) = 0;
              *(undefined8 *)((long)__s + 0x157e) = 0;
              *(undefined1 *)((long)__s + 0x158a) = 0;
              *(undefined4 *)((long)__s + 0x158c) = 0;
              *(undefined1 *)((long)__s + 0x1590) = 0;
              if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
                 (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18),
                 puVar7 != (undefined8 *)0x0)) {
                (**(code **)*puVar7)();
              }
              iVar12 = 0;
              do {
                lVar8 = lVar3 + 0xef50 + (long)iVar12 * 0x70;
                lVar9 = *(long *)(lVar8 + 0x28);
                if (lVar9 == 0) {
                  uVar5 = 0;
                }
                else {
                  if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
                    uVar5 = 0;
                    plVar6 = *(long **)(lVar9 + 0x20);
                  }
                  else {
                    uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
                    uVar5 = uVar5 & 0xffffffff;
                    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0281c91c;
                    plVar6 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
                  }
                  if (plVar6 != (long *)0x0) {
                    local_78 = *(undefined8 *)(lVar8 + 8);
                    local_70 = *(undefined8 *)(lVar8 + 0x10);
                    local_68 = 1;
                    (**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
                  }
                }
LAB_0281c91c:
                uVar2 = *puVar11;
                if (uVar2 != 0xffffffff) {
                  local_78 = CONCAT44(local_78._4_4_,uVar2);
                  *(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8)) =
                       *(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8)) &
                       ((byte)(1 << (ulong)(uVar2 & 0x1f)) ^ 0xff);
                }
                if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
                   (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18),
                   puVar7 != (undefined8 *)0x0)) {
                  (**(code **)*puVar7)();
                }
                iVar12 = iVar12 + 1;
              } while (iVar12 != 0x1a4);
              FUN_016c8c9c(*puVar11);
            }
            iVar13 = iVar13 + 1;
          } while (iVar1 != iVar13);
        }
        if ((((local_88 & 1) != 0) && (lVar3 = *(long *)(lVar3 + 0xef08), lVar3 != 0)) &&
           (puVar7 = *(undefined8 **)(lVar3 + 0x18), puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)();
        }
        if ((((local_84 & 1) != 0) && (lVar10 = *(long *)(&LAB_00205768 + lVar10), lVar10 != 0)) &&
           (puVar7 = *(undefined8 **)(lVar10 + 0x18), puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)();
        }
      }
    }
  }
  return;
}


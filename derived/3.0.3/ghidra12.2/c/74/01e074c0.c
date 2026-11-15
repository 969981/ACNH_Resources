
undefined8 FUN_01e074c0(long param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  size_t __n;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ushort *puVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bc1530;
  lVar11 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x6d0);
  lVar7 = *(long *)(lVar11 + 0x28);
  if (lVar7 == 0) {
    lVar12 = *(long *)(lVar11 + 8);
    lVar13 = *(long *)(lVar11 + 0x10);
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar7 + 0x20);
      if (plVar4 != (long *)0x0) goto LAB_01e07528;
LAB_01e0756c:
      lVar12 = *(long *)(lVar11 + 8);
      lVar13 = *(long *)(lVar11 + 0x10);
      if ((uVar3 & 1) == 0) goto LAB_01e0758c;
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      lVar7 = *(long *)(lVar11 + 0x28);
      uVar3 = uVar3 & 0xffffffff;
      if ((lVar7 == 0) || (plVar4 = *(long **)(lVar7 + 0x20), plVar4 == (long *)0x0))
      goto LAB_01e0756c;
LAB_01e07528:
      local_78 = *(undefined8 *)(lVar11 + 8);
      uStack_70 = *(undefined8 *)(lVar11 + 0x10);
      local_68 = 0x1fc8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
      lVar12 = *(long *)(lVar11 + 8);
      lVar13 = *(long *)(lVar11 + 0x10);
      if ((uVar3 & 1) == 0) goto LAB_01e0758c;
      lVar7 = *(long *)(lVar11 + 0x28);
    }
    if ((lVar7 != 0) && (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    }
  }
LAB_01e0758c:
  if (*(int *)(param_1 + 0x38) != 0x1fc8) goto LAB_01e07dfc;
  memcpy((void *)(lVar13 + lVar12),*(void **)(param_1 + 0x40),0x1fc8);
  lVar7 = *(long *)(*(long *)puVar2 + 0x6e0);
  if ((*(long *)(lVar7 + 0x28) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x10), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 & 0xffffffff;
  }
  if (*(int *)(param_1 + 0x48) == 0x754) {
    if ((*(long *)(lVar7 + 0x28) == 0) ||
       (plVar4 = *(long **)(*(long *)(lVar7 + 0x28) + 0x20), plVar4 == (long *)0x0)) {
      __n = 0x754;
    }
    else {
      local_78 = *(undefined8 *)(lVar7 + 8);
      uStack_70 = *(undefined8 *)(lVar7 + 0x10);
      local_68 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
      __n = (size_t)*(uint *)(param_1 + 0x48);
    }
    memcpy((void *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)),*(void **)(param_1 + 0x50),__n);
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (*(int *)(param_1 + 0x1a0) == 0x2a8) {
      if (0 < *(int *)(param_1 + 0x198)) {
        uVar3 = 0;
        puVar14 = (ushort *)(param_1 + 0xd0);
        do {
          puVar1 = puVar14;
          if (99 < uVar3) {
            puVar1 = (ushort *)(param_1 + 0xd0);
          }
          plVar4 = (long *)(*(long *)puVar2 + 0x88) + *puVar1;
          if (99 < *puVar1) {
            plVar4 = (long *)(*(long *)puVar2 + 0x88);
          }
          lVar11 = *plVar4;
          lVar7 = *(long *)(lVar11 + 0x2d0);
          if (lVar7 == 0) {
            pvVar10 = (void *)(*(long *)(lVar11 + 0x2b8) + *(long *)(lVar11 + 0x2b0));
          }
          else {
            if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
              uVar6 = 0;
              plVar4 = *(long **)(lVar7 + 0x20);
              if (plVar4 != (long *)0x0) goto LAB_01e07730;
LAB_01e0777c:
              pvVar10 = (void *)(*(long *)(lVar11 + 0x2b8) + *(long *)(lVar11 + 0x2b0));
              if ((uVar6 & 1) == 0) goto LAB_01e076b0;
            }
            else {
              uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
              lVar7 = *(long *)(lVar11 + 0x2d0);
              uVar6 = uVar6 & 0xffffffff;
              if ((lVar7 == 0) || (plVar4 = *(long **)(lVar7 + 0x20), plVar4 == (long *)0x0))
              goto LAB_01e0777c;
LAB_01e07730:
              local_78 = *(undefined8 *)(lVar11 + 0x2b0);
              local_68 = 0x2a8;
              uStack_70 = *(undefined8 *)(lVar11 + 0x2b8);
              (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
              pvVar10 = (void *)(*(long *)(lVar11 + 0x2b8) + *(long *)(lVar11 + 0x2b0));
              if ((uVar6 & 1) == 0) goto LAB_01e076b0;
              lVar7 = *(long *)(lVar11 + 0x2d0);
            }
            if ((lVar7 != 0) && (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0)) {
              (**(code **)**(undefined8 **)(lVar7 + 0x18))();
            }
          }
LAB_01e076b0:
          memcpy(pvVar10,(void *)((ulong)(*(uint *)(param_1 + 0x1a0) * (int)uVar3) +
                                 *(long *)(param_1 + 0x1a8)),(ulong)*(uint *)(param_1 + 0x1a0));
          uVar3 = uVar3 + 1;
          puVar14 = puVar14 + 1;
        } while ((long)uVar3 < (long)*(int *)(param_1 + 0x198));
      }
      if (*(int *)(param_1 + 0x280) == 0x8a8) {
        if (0 < *(int *)(param_1 + 0x278)) {
          uVar3 = 0;
          puVar14 = (ushort *)(param_1 + 0x1b0);
          do {
            puVar1 = puVar14;
            if (99 < uVar3) {
              puVar1 = (ushort *)(param_1 + 0x1b0);
            }
            plVar4 = (long *)(*(long *)puVar2 + 0x3a8) + *puVar1;
            if (99 < *puVar1) {
              plVar4 = (long *)(*(long *)puVar2 + 0x3a8);
            }
            lVar11 = *plVar4;
            lVar7 = *(long *)(lVar11 + 0x8d0);
            if (lVar7 == 0) {
              pvVar10 = (void *)(*(long *)(lVar11 + 0x8b8) + *(long *)(lVar11 + 0x8b0));
            }
            else {
              if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
                uVar6 = 0;
                plVar4 = *(long **)(lVar7 + 0x20);
                if (plVar4 != (long *)0x0) goto LAB_01e07860;
LAB_01e078ac:
                pvVar10 = (void *)(*(long *)(lVar11 + 0x8b8) + *(long *)(lVar11 + 0x8b0));
                if ((uVar6 & 1) == 0) goto LAB_01e077e0;
              }
              else {
                uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
                lVar7 = *(long *)(lVar11 + 0x8d0);
                uVar6 = uVar6 & 0xffffffff;
                if ((lVar7 == 0) || (plVar4 = *(long **)(lVar7 + 0x20), plVar4 == (long *)0x0))
                goto LAB_01e078ac;
LAB_01e07860:
                local_78 = *(undefined8 *)(lVar11 + 0x8b0);
                local_68 = 0x8a8;
                uStack_70 = *(undefined8 *)(lVar11 + 0x8b8);
                (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
                pvVar10 = (void *)(*(long *)(lVar11 + 0x8b8) + *(long *)(lVar11 + 0x8b0));
                if ((uVar6 & 1) == 0) goto LAB_01e077e0;
                lVar7 = *(long *)(lVar11 + 0x8d0);
              }
              if ((lVar7 != 0) && (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0)) {
                (**(code **)**(undefined8 **)(lVar7 + 0x18))();
              }
            }
LAB_01e077e0:
            memcpy(pvVar10,(void *)((ulong)(*(uint *)(param_1 + 0x280) * (int)uVar3) +
                                   *(long *)(param_1 + 0x288)),(ulong)*(uint *)(param_1 + 0x280));
            uVar3 = uVar3 + 1;
            puVar14 = puVar14 + 1;
          } while ((long)uVar3 < (long)*(int *)(param_1 + 0x278));
        }
        lVar11 = *(long *)(*(long *)puVar2 + 8);
        lVar7 = *(long *)(lVar11 + 0x28);
        if (lVar7 == 0) {
          lVar7 = *(long *)(lVar11 + 8);
          lVar12 = *(long *)(lVar11 + 0x10);
        }
        else {
          if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
            uVar3 = 0;
LAB_01e0791c:
            plVar4 = *(long **)(lVar7 + 0x20);
            if (plVar4 != (long *)0x0) {
              local_78 = *(undefined8 *)(lVar11 + 8);
              uStack_70 = *(undefined8 *)(lVar11 + 0x10);
              local_68 = 0x5a80;
              (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
            }
          }
          else {
            uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
            lVar7 = *(long *)(lVar11 + 0x28);
            uVar3 = uVar3 & 0xffffffff;
            if (lVar7 != 0) goto LAB_01e0791c;
          }
          lVar7 = *(long *)(lVar11 + 8);
          lVar12 = *(long *)(lVar11 + 0x10);
          if ((((uVar3 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
             (puVar5 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 0x18),
             puVar5 != (undefined8 *)0x0)) {
            (**(code **)*puVar5)();
          }
        }
        if (*(int *)(param_1 + 0x58) == 0x5a80) {
          memcpy((void *)(lVar12 + lVar7),*(void **)(param_1 + 0x60),0x5a80);
          lVar7 = *(long *)(*(long *)puVar2 + 0x10);
          lVar11 = *(long *)(lVar7 + 0x11b0);
          if (lVar11 == 0) {
            uVar3 = 0;
          }
          else {
            if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
              uVar3 = 0;
            }
            else {
              uVar3 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
              lVar11 = *(long *)(lVar7 + 0x11b0);
              uVar3 = uVar3 & 0xffffffff;
              if (lVar11 == 0) goto LAB_01e079f0;
            }
            plVar4 = *(long **)(lVar11 + 0x20);
            if (plVar4 != (long *)0x0) {
              local_78 = *(undefined8 *)(lVar7 + 0x1190);
              uStack_70 = *(undefined8 *)(lVar7 + 0x1198);
              local_68 = 0x1188;
              (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
            }
          }
LAB_01e079f0:
          pvVar10 = (void *)(*(long *)(lVar7 + 0x1198) + *(long *)(lVar7 + 0x1190));
          if (*(int *)(param_1 + 0x68) < 1) {
            memset(pvVar10,0,0x1188);
            *(undefined8 *)((long)pvVar10 + 6) = 0;
            *(undefined4 *)((long)pvVar10 + 2) = 0xffffffff;
            *(undefined8 *)((long)pvVar10 + 0xe) = 0;
            *(undefined2 *)((long)pvVar10 + 0x1c) = 0xfffe;
            *(undefined1 *)((long)pvVar10 + 0x1f) = 0;
            FUN_0277d4ac();
            *(undefined8 *)((long)pvVar10 + 0x24) = 0xfffe;
            FUN_0277d4ac();
            *(undefined8 *)((long)pvVar10 + 0x2c) = 0xfffe;
            FUN_0277d4ac((undefined8 *)((long)pvVar10 + 0x2c));
            *(undefined8 *)((long)pvVar10 + 0x38) = 0;
            FUN_027c0ee4((long)pvVar10 + 0x40);
            memset((void *)((long)pvVar10 + 0xb0),0,0x830);
            *(byte *)((long)pvVar10 + 0xa8) = *(byte *)((long)pvVar10 + 0xa8) | 1;
            *(undefined8 *)((long)pvVar10 + 0x8e0) = 0;
            FUN_027c0ee4((long)pvVar10 + 0x8e8);
            memset((void *)((long)pvVar10 + 0x958),0,0x830);
            *(byte *)((long)pvVar10 + 0x950) = *(byte *)((long)pvVar10 + 0x950) | 1;
LAB_01e07ad8:
            if ((((uVar3 & 1) != 0) && (*(long *)(lVar7 + 0x11b0) != 0)) &&
               (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x11b0) + 0x18),
               puVar5 != (undefined8 *)0x0)) {
              (**(code **)*puVar5)();
            }
            lVar7 = *(long *)(*(long *)puVar2 + 0x18);
            lVar11 = *(long *)(lVar7 + 0x11b0);
            if (lVar11 == 0) {
              uVar3 = 0;
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar3 = 0;
              }
              else {
                uVar3 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                lVar11 = *(long *)(lVar7 + 0x11b0);
                uVar3 = uVar3 & 0xffffffff;
                if (lVar11 == 0) goto LAB_01e07b64;
              }
              plVar4 = *(long **)(lVar11 + 0x20);
              if (plVar4 != (long *)0x0) {
                local_78 = *(undefined8 *)(lVar7 + 0x1190);
                uStack_70 = *(undefined8 *)(lVar7 + 0x1198);
                local_68 = 0x1188;
                (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
              }
            }
LAB_01e07b64:
            pvVar10 = (void *)(*(long *)(lVar7 + 0x1198) + *(long *)(lVar7 + 0x1190));
            if (*(int *)(param_1 + 0x68) < 2) {
              memset(pvVar10,0,0x1188);
              *(undefined8 *)((long)pvVar10 + 6) = 0;
              *(undefined4 *)((long)pvVar10 + 2) = 0xffffffff;
              *(undefined8 *)((long)pvVar10 + 0xe) = 0;
              *(undefined2 *)((long)pvVar10 + 0x1c) = 0xfffe;
              *(undefined1 *)((long)pvVar10 + 0x1f) = 0;
              FUN_0277d4ac();
              *(undefined8 *)((long)pvVar10 + 0x24) = 0xfffe;
              FUN_0277d4ac();
              *(undefined8 *)((long)pvVar10 + 0x2c) = 0xfffe;
              FUN_0277d4ac((undefined8 *)((long)pvVar10 + 0x2c));
              *(undefined8 *)((long)pvVar10 + 0x38) = 0;
              FUN_027c0ee4((long)pvVar10 + 0x40);
              memset((void *)((long)pvVar10 + 0xb0),0,0x830);
              *(byte *)((long)pvVar10 + 0xa8) = *(byte *)((long)pvVar10 + 0xa8) | 1;
              *(undefined8 *)((long)pvVar10 + 0x8e0) = 0;
              FUN_027c0ee4((long)pvVar10 + 0x8e8);
              memset((void *)((long)pvVar10 + 0x958),0,0x830);
              *(byte *)((long)pvVar10 + 0x950) = *(byte *)((long)pvVar10 + 0x950) | 1;
            }
            else {
              piVar8 = *(int **)(*(long *)(param_1 + 0x70) + 8);
              if (*piVar8 != 0x1188) goto LAB_01e07df0;
              memcpy(pvVar10,*(void **)(piVar8 + 2),0x1188);
            }
            if ((((uVar3 & 1) != 0) && (*(long *)(lVar7 + 0x11b0) != 0)) &&
               (puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x11b0) + 0x18),
               puVar5 != (undefined8 *)0x0)) {
              (**(code **)*puVar5)();
            }
            lVar7 = *(long *)(*(long *)puVar2 + 0x20);
            lVar11 = *(long *)(lVar7 + 0x11b0);
            if (lVar11 == 0) {
              uVar3 = 0;
            }
            else {
              if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
                uVar3 = 0;
              }
              else {
                uVar3 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
                lVar11 = *(long *)(lVar7 + 0x11b0);
                uVar3 = uVar3 & 0xffffffff;
                if (lVar11 == 0) goto LAB_01e07ce0;
              }
              plVar4 = *(long **)(lVar11 + 0x20);
              if (plVar4 != (long *)0x0) {
                local_78 = *(undefined8 *)(lVar7 + 0x1190);
                uStack_70 = *(undefined8 *)(lVar7 + 0x1198);
                local_68 = 0x1188;
                (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
              }
            }
LAB_01e07ce0:
            pvVar10 = (void *)(*(long *)(lVar7 + 0x1198) + *(long *)(lVar7 + 0x1190));
            if (*(int *)(param_1 + 0x68) < 3) {
              memset(pvVar10,0,0x1188);
              *(undefined8 *)((long)pvVar10 + 6) = 0;
              *(undefined4 *)((long)pvVar10 + 2) = 0xffffffff;
              *(undefined8 *)((long)pvVar10 + 0xe) = 0;
              *(undefined2 *)((long)pvVar10 + 0x1c) = 0xfffe;
              *(undefined1 *)((long)pvVar10 + 0x1f) = 0;
              FUN_0277d4ac();
              *(undefined8 *)((long)pvVar10 + 0x24) = 0xfffe;
              FUN_0277d4ac();
              *(undefined8 *)((long)pvVar10 + 0x2c) = 0xfffe;
              FUN_0277d4ac((undefined8 *)((long)pvVar10 + 0x2c));
              *(undefined8 *)((long)pvVar10 + 0x38) = 0;
              FUN_027c0ee4((long)pvVar10 + 0x40);
              memset((void *)((long)pvVar10 + 0xb0),0,0x830);
              *(byte *)((long)pvVar10 + 0xa8) = *(byte *)((long)pvVar10 + 0xa8) | 1;
              *(undefined8 *)((long)pvVar10 + 0x8e0) = 0;
              FUN_027c0ee4((long)pvVar10 + 0x8e8);
              memset((void *)((long)pvVar10 + 0x958),0,0x830);
              *(byte *)((long)pvVar10 + 0x950) = *(byte *)((long)pvVar10 + 0x950) | 1;
            }
            else {
              piVar8 = *(int **)(*(long *)(param_1 + 0x70) + 0x10);
              if (*piVar8 != 0x1188) goto LAB_01e07df0;
              memcpy(pvVar10,*(void **)(piVar8 + 2),0x1188);
            }
            if (((uVar3 & 1) == 0) || (*(long *)(lVar7 + 0x11b0) == 0)) {
              return 1;
            }
            puVar5 = *(undefined8 **)(*(long *)(lVar7 + 0x11b0) + 0x18);
            uVar9 = 1;
            goto joined_r0x01e07ddc;
          }
          if (*(int *)**(undefined8 **)(param_1 + 0x70) == 0x1188) {
            memcpy(pvVar10,*(void **)((int *)**(undefined8 **)(param_1 + 0x70) + 2),0x1188);
            goto LAB_01e07ad8;
          }
LAB_01e07df0:
          if (((uVar3 & 1) != 0) && (lVar7 = *(long *)(lVar7 + 0x11b0), lVar7 != 0))
          goto LAB_01e07628;
        }
      }
    }
LAB_01e07dfc:
    uVar9 = 0;
  }
  else {
    if (((uVar3 & 1) == 0) || (lVar7 = *(long *)(lVar7 + 0x28), lVar7 == 0)) goto LAB_01e07dfc;
LAB_01e07628:
    puVar5 = *(undefined8 **)(lVar7 + 0x18);
    uVar9 = 0;
joined_r0x01e07ddc:
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)();
    }
  }
  return uVar9;
}


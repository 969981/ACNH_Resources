
undefined8 FUN_01e07e30(long param_1)

{
  undefined4 *puVar1;
  ushort *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  size_t __n;
  long lVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  long lVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bc1530;
  lVar10 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x6d0);
  lVar8 = *(long *)(lVar10 + 0x28);
  if (lVar8 == 0) {
    lVar13 = *(long *)(lVar10 + 8);
    lVar11 = *(long *)(lVar10 + 0x10);
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar8 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_01e07edc;
LAB_01e07e98:
      local_78 = *(undefined8 *)(lVar10 + 8);
      uStack_70 = *(undefined8 *)(lVar10 + 0x10);
      local_68 = 0x1fc8;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
      lVar13 = *(long *)(lVar10 + 8);
      lVar11 = *(long *)(lVar10 + 0x10);
      if ((uVar4 & 1) == 0) goto LAB_01e07efc;
      lVar8 = *(long *)(lVar10 + 0x28);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar10 + 0x28);
      uVar4 = uVar4 & 0xffffffff;
      if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0x20), plVar5 != (long *)0x0))
      goto LAB_01e07e98;
LAB_01e07edc:
      lVar13 = *(long *)(lVar10 + 8);
      lVar11 = *(long *)(lVar10 + 0x10);
      if ((uVar4 & 1) == 0) goto LAB_01e07efc;
    }
    if ((lVar8 != 0) && (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar8 + 0x18))();
    }
  }
LAB_01e07efc:
  if (*(int *)(param_1 + 0x38) != 0x1fc8) {
    return 0;
  }
  memcpy((void *)(lVar11 + lVar13),*(void **)(param_1 + 0x40),0x1fc8);
  lVar8 = *(long *)(*(long *)puVar3 + 0x6e0);
  if ((*(long *)(lVar8 + 0x28) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x10), puVar6 == (undefined8 *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)*puVar6)();
    uVar4 = uVar4 & 0xffffffff;
  }
  if (*(int *)(param_1 + 0x48) != 0x754) {
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar8 + 0x28) == 0) {
      return 0;
    }
    puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18);
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    (**(code **)*puVar6)();
    return 0;
  }
  if ((*(long *)(lVar8 + 0x28) == 0) ||
     (plVar5 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar5 == (long *)0x0)) {
    __n = 0x754;
  }
  else {
    local_78 = *(undefined8 *)(lVar8 + 8);
    uStack_70 = *(undefined8 *)(lVar8 + 0x10);
    local_68 = 0x754;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
    __n = (size_t)*(uint *)(param_1 + 0x48);
  }
  memcpy((void *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8)),*(void **)(param_1 + 0x50),__n);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (*(int *)(param_1 + 0x148) != 0x2a8) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x140)) {
    uVar4 = 0;
    puVar12 = (ushort *)(param_1 + 0x78);
    do {
      puVar2 = puVar12;
      if (99 < uVar4) {
        puVar2 = (ushort *)(param_1 + 0x78);
      }
      plVar5 = (long *)(*(long *)puVar3 + 0x88) + *puVar2;
      if (99 < *puVar2) {
        plVar5 = (long *)(*(long *)puVar3 + 0x88);
      }
      lVar10 = *plVar5;
      lVar8 = *(long *)(lVar10 + 0x2d0);
      if (lVar8 == 0) {
        pvVar9 = (void *)(*(long *)(lVar10 + 0x2b8) + *(long *)(lVar10 + 0x2b0));
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar5 = *(long **)(lVar8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_01e080e0;
LAB_01e0809c:
          local_78 = *(undefined8 *)(lVar10 + 0x2b0);
          local_68 = 0x2a8;
          uStack_70 = *(undefined8 *)(lVar10 + 0x2b8);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
          pvVar9 = (void *)(*(long *)(lVar10 + 0x2b8) + *(long *)(lVar10 + 0x2b0));
          if ((uVar7 & 1) == 0) goto LAB_01e0801c;
          lVar8 = *(long *)(lVar10 + 0x2d0);
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          lVar8 = *(long *)(lVar10 + 0x2d0);
          uVar7 = uVar7 & 0xffffffff;
          if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0x20), plVar5 != (long *)0x0))
          goto LAB_01e0809c;
LAB_01e080e0:
          pvVar9 = (void *)(*(long *)(lVar10 + 0x2b8) + *(long *)(lVar10 + 0x2b0));
          if ((uVar7 & 1) == 0) goto LAB_01e0801c;
        }
        if ((lVar8 != 0) && (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        }
      }
LAB_01e0801c:
      memcpy(pvVar9,(void *)((ulong)(*(uint *)(param_1 + 0x148) * (int)uVar4) +
                            *(long *)(param_1 + 0x150)),(ulong)*(uint *)(param_1 + 0x148));
      uVar4 = uVar4 + 1;
      puVar12 = puVar12 + 1;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x140));
  }
  if (*(int *)(param_1 + 0x228) != 0x8a8) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x220)) {
    uVar4 = 0;
    puVar12 = (ushort *)(param_1 + 0x158);
    do {
      puVar2 = puVar12;
      if (99 < uVar4) {
        puVar2 = (ushort *)(param_1 + 0x158);
      }
      plVar5 = (long *)(*(long *)puVar3 + 0x3a8) + *puVar2;
      if (99 < *puVar2) {
        plVar5 = (long *)(*(long *)puVar3 + 0x3a8);
      }
      lVar10 = *plVar5;
      lVar8 = *(long *)(lVar10 + 0x8d0);
      if (lVar8 == 0) {
        pvVar9 = (void *)(*(long *)(lVar10 + 0x8b8) + *(long *)(lVar10 + 0x8b0));
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar7 = 0;
          plVar5 = *(long **)(lVar8 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_01e08210;
LAB_01e081cc:
          local_78 = *(undefined8 *)(lVar10 + 0x8b0);
          local_68 = 0x8a8;
          uStack_70 = *(undefined8 *)(lVar10 + 0x8b8);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
          pvVar9 = (void *)(*(long *)(lVar10 + 0x8b8) + *(long *)(lVar10 + 0x8b0));
          if ((uVar7 & 1) == 0) goto LAB_01e0814c;
          lVar8 = *(long *)(lVar10 + 0x8d0);
        }
        else {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          lVar8 = *(long *)(lVar10 + 0x8d0);
          uVar7 = uVar7 & 0xffffffff;
          if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0x20), plVar5 != (long *)0x0))
          goto LAB_01e081cc;
LAB_01e08210:
          pvVar9 = (void *)(*(long *)(lVar10 + 0x8b8) + *(long *)(lVar10 + 0x8b0));
          if ((uVar7 & 1) == 0) goto LAB_01e0814c;
        }
        if ((lVar8 != 0) && (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0)) {
          (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        }
      }
LAB_01e0814c:
      memcpy(pvVar9,(void *)((ulong)(*(uint *)(param_1 + 0x228) * (int)uVar4) +
                            *(long *)(param_1 + 0x230)),(ulong)*(uint *)(param_1 + 0x228));
      uVar4 = uVar4 + 1;
      puVar12 = puVar12 + 1;
    } while ((long)uVar4 < (long)*(int *)(param_1 + 0x220));
  }
  lVar10 = *(long *)(*(long *)puVar3 + 0x30);
  lVar8 = *(long *)(lVar10 + 0x28);
  if (lVar8 == 0) {
    lVar8 = *(long *)(lVar10 + 8);
    lVar13 = *(long *)(lVar10 + 0x10);
    goto LAB_01e082cc;
  }
  if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
LAB_01e08280:
    plVar5 = *(long **)(lVar8 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar10 + 8);
      uStack_70 = *(undefined8 *)(lVar10 + 0x10);
      local_68 = 0x408c;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
    }
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
    lVar8 = *(long *)(lVar10 + 0x28);
    uVar4 = uVar4 & 0xffffffff;
    if (lVar8 != 0) goto LAB_01e08280;
  }
  lVar8 = *(long *)(lVar10 + 8);
  lVar13 = *(long *)(lVar10 + 0x10);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
LAB_01e082cc:
  if ((*(int *)(param_1 + 0x58) != 0x408c) ||
     (memcpy((void *)(lVar13 + lVar8),*(void **)(param_1 + 0x60),0x408c),
     *(int *)(param_1 + 0x68) != 0x1178)) {
    return 0;
  }
  lVar8 = 0;
  do {
    lVar13 = *(long *)(*(long *)puVar3 + lVar8 * 8 + 0x38);
    lVar10 = *(long *)(lVar13 + 0x11a0);
    if (lVar8 < *(int *)(param_1 + 0x20)) {
      if (lVar10 == 0) {
        pvVar9 = (void *)(*(long *)(lVar13 + 0x1188) + *(long *)(lVar13 + 0x1180));
      }
      else {
        if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar10 + 0x20);
joined_r0x01e08440:
          if (plVar5 != (long *)0x0) {
            local_78 = *(undefined8 *)(lVar13 + 0x1180);
            local_68 = 0x1178;
            uStack_70 = *(undefined8 *)(lVar13 + 0x1188);
            (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
          }
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar13 + 0x11a0) != 0) {
            plVar5 = *(long **)(*(long *)(lVar13 + 0x11a0) + 0x20);
            goto joined_r0x01e08440;
          }
        }
        pvVar9 = (void *)(*(long *)(lVar13 + 0x1188) + *(long *)(lVar13 + 0x1180));
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar13 + 0x11a0) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x11a0) + 0x18),
           puVar6 != (undefined8 *)0x0)) {
          (**(code **)*puVar6)();
        }
      }
      memcpy(pvVar9,(void *)((ulong)(*(uint *)(param_1 + 0x68) * (int)lVar8) +
                            *(long *)(param_1 + 0x70)),(ulong)*(uint *)(param_1 + 0x68));
    }
    else {
      if (lVar10 == 0) {
        uVar4 = 0;
      }
      else {
        if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
          uVar4 = 0;
          plVar5 = *(long **)(lVar10 + 0x20);
        }
        else {
          uVar4 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          uVar4 = uVar4 & 0xffffffff;
          if (*(long *)(lVar13 + 0x11a0) == 0) goto LAB_01e08474;
          plVar5 = *(long **)(*(long *)(lVar13 + 0x11a0) + 0x20);
        }
        if (plVar5 != (long *)0x0) {
          local_78 = *(undefined8 *)(lVar13 + 0x1180);
          local_68 = 0x1178;
          uStack_70 = *(undefined8 *)(lVar13 + 0x1188);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
        }
      }
LAB_01e08474:
      puVar1 = (undefined4 *)(*(long *)(lVar13 + 0x1188) + *(long *)(lVar13 + 0x1180));
      *puVar1 = 0x5ffff;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined2 *)((long)puVar1 + 6) = 0;
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar13 + 0x11a0) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x11a0) + 0x18), puVar6 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar6)();
      }
    }
    lVar8 = lVar8 + 1;
    if (lVar8 == 10) {
      return 1;
    }
  } while( true );
}


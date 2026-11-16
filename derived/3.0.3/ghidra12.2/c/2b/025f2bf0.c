
void FUN_025f2bf0(undefined8 *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined **local_68;
  undefined *puStack_60;
  int local_54;
  
  puStack_60 = (&PTR_s_wherearen_editend_npc_04a86a38)[param_2];
  local_68 = &PTR_LAB_048f9770;
  local_54 = param_2;
  FUN_0260140c(param_1,&local_68);
  *param_1 = &PTR_FUN_04a86a58;
  plVar10 = param_1 + 6;
  *plVar10 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(int *)(param_1 + 5) = local_54;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar4 = PTR_DAT_04bb2268;
  lVar5 = *(long *)PTR_DAT_04bb2268;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if (*(char *)(lVar5 + 0xb1) != '\0') {
    return;
  }
  plVar1 = param_1 + 0xc;
  plVar2 = param_1 + 8;
  plVar3 = param_1 + 10;
  if ((param_1[1] != 0) && (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x10,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar9 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar9 == 0) {
          *plVar9 = lVar6;
          lVar5 = *(long *)puVar4;
          *plVar10 = lVar6;
          if (lVar5 != 0) goto LAB_025f2cf0;
          param_1[7] = 0;
          goto LAB_025f30b0;
        }
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
    *plVar10 = 0;
  }
LAB_025f2cf0:
  if (((*(char *)(lVar5 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x10,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar10 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar10 == 0) {
          *plVar10 = lVar6;
          lVar5 = *(long *)puVar4;
          param_1[7] = lVar6;
          if (lVar5 == 0) goto LAB_025f30b0;
          goto LAB_025f2cfc;
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
  }
  param_1[7] = 0;
LAB_025f2cfc:
  if (((*(char *)(lVar5 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar10 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar10 == 0) {
          *plVar10 = lVar6;
          lVar5 = *(long *)puVar4;
          *plVar2 = lVar6;
          if (lVar5 != 0) goto LAB_025f2d08;
          param_1[9] = 0;
          goto LAB_025f30e0;
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
  }
  *plVar2 = 0;
LAB_025f2d08:
  if (((*(char *)(lVar5 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x80,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar10 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar10 == 0) {
          *plVar10 = lVar6;
          lVar5 = *(long *)puVar4;
          param_1[9] = lVar6;
          if (lVar5 == 0) goto LAB_025f30e0;
          goto LAB_025f2d14;
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
  }
  param_1[9] = 0;
LAB_025f2d14:
  if (((*(char *)(lVar5 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x100,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar10 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar10 == 0) {
          *plVar10 = lVar6;
          lVar5 = *(long *)puVar4;
          *plVar3 = lVar6;
          if (lVar5 != 0) goto LAB_025f2d20;
          param_1[0xb] = 0;
          goto LAB_025f30e4;
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
  }
  *plVar3 = 0;
LAB_025f2d20:
  if (((*(char *)(lVar5 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x180,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar10 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar10 == 0) {
          *plVar10 = lVar6;
          lVar5 = *(long *)puVar4;
          param_1[0xb] = lVar6;
          if (lVar5 != 0) goto LAB_025f2d2c;
          goto LAB_025f30e4;
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
  }
  param_1[0xb] = 0;
LAB_025f2d2c:
  if (((*(char *)(lVar5 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x180,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar10 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar10 == 0) {
          *plVar10 = lVar6;
          lVar5 = *(long *)puVar4;
          *plVar1 = lVar6;
          if (lVar5 != 0) goto LAB_025f2d38;
          param_1[0xd] = 0;
          uVar7 = 0;
          goto LAB_025f3068;
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
  }
  *plVar1 = 0;
LAB_025f2d38:
  if (((*(char *)(lVar5 + 0xb1) == '\0') && (param_1[1] != 0)) &&
     (lVar11 = *(long *)(param_1[1] + 8), lVar11 != 0)) {
    lVar6 = FUN_03f2a10c(0x180,**(undefined8 **)PTR_DAT_04bc3578,1);
    if ((lVar6 != 0) && (uVar8 = (ulong)*(uint *)(lVar11 + 0x20), 0 < (int)*(uint *)(lVar11 + 0x20))
       ) {
      plVar10 = *(long **)(lVar11 + 0x28);
      do {
        if (*plVar10 == 0) {
          *plVar10 = lVar6;
          lVar5 = *(long *)puVar4;
          param_1[0xd] = lVar6;
          if (lVar5 != 0) goto LAB_025f2d44;
          uVar7 = 0;
          goto LAB_025f3068;
        }
        plVar10 = plVar10 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    lVar5 = *(long *)puVar4;
    *(undefined1 *)(lVar5 + 0xb1) = 1;
  }
  param_1[0xd] = 0;
LAB_025f2d44:
  if (*(char *)(lVar5 + 0xb1) == '\0') {
    uVar7 = FUN_0260d664(lVar5,param_1[1]);
  }
  else {
    uVar7 = 0;
  }
LAB_025f3068:
  param_1[0xe] = uVar7;
  return;
LAB_025f30b0:
  *plVar2 = 0;
  param_1[9] = 0;
LAB_025f30e0:
  *plVar3 = 0;
  param_1[0xb] = 0;
LAB_025f30e4:
  uVar7 = 0;
  *plVar1 = 0;
  param_1[0xd] = 0;
  goto LAB_025f3068;
}



/* WARNING: Removing unreachable block (ram,0x03766430) */
/* WARNING: Removing unreachable block (ram,0x0376631c) */
/* WARNING: Removing unreachable block (ram,0x03766a30) */

void FUN_037662d0(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  short sVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined **local_78;
  short local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  
  if (DAT_05574040 == 0) {
    return;
  }
  uVar8 = *(ushort *)(param_1 + 8);
  local_68 = CONCAT44(local_68._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar10 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (499 < uVar8) {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  lVar10 = lVar10 + (ulong)uVar8 * 0x2d48;
  lVar18 = *(long *)(lVar10 + 0x4cc70);
  if (lVar18 == 0) {
    uVar11 = 0;
  }
  else {
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      lVar18 = *(long *)(lVar10 + 0x4cc70);
      uVar11 = uVar11 & 0xffffffff;
      if (lVar18 == 0) goto LAB_037663c0;
    }
    plVar12 = *(long **)(lVar18 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_68 = *(long *)(lVar10 + 0x4cc50);
      local_60 = *(long *)(lVar10 + 0x4cc58);
      local_58 = 0x1188;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    }
  }
LAB_037663c0:
  lVar18 = *(long *)(lVar10 + 0x4cc58) + *(long *)(lVar10 + 0x4cc50);
  if (*(short *)(lVar18 + 4) == -1) {
    lVar18 = *(long *)(lVar10 + 0x4e368);
    if (lVar18 == 0) {
      uVar14 = 0;
    }
    else {
      if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        lVar18 = *(long *)(lVar10 + 0x4e368);
        uVar14 = uVar14 & 0xffffffff;
        if (lVar18 == 0) goto LAB_03766550;
      }
      plVar12 = *(long **)(lVar18 + 0x20);
      if (plVar12 != (long *)0x0) {
        local_68 = *(long *)(lVar10 + 0x4e348);
        local_60 = *(long *)(lVar10 + 0x4e350);
        local_58 = 0x40;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      }
    }
LAB_03766550:
    puVar13 = (undefined8 *)(*(long *)(lVar10 + 0x4e350) + *(long *)(lVar10 + 0x4e348));
    puVar13[6] = 0;
    puVar13[7] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    *(undefined2 *)((long)puVar13 + 0x36) = 0x101;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *(undefined1 *)((long)puVar13 + 0x39) = 0;
    *(undefined8 *)((long)puVar13 + 4) = 0;
    *(undefined8 *)((long)puVar13 + 0xc) = 0;
    *(undefined8 *)((long)puVar13 + 0x14) = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    *(undefined8 *)((long)puVar13 + 0x1c) = 0;
    *(undefined8 *)((long)puVar13 + 0x24) = 0;
    *(undefined8 *)((long)puVar13 + 0x2a) = 0;
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar10 + 0x4e368) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x4e368) + 0x18), puVar13 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar13)();
    }
    lVar18 = *(long *)(lVar10 + 0x4e3a0);
    if (lVar18 == 0) {
      pvVar4 = (void *)(*(long *)(lVar10 + 0x4e388) + *(long *)(lVar10 + 0x4e380));
      memset(pvVar4,0,0x48b0);
      FUN_028f50f0((long)pvVar4 + 8);
      goto LAB_03766b68;
    }
    if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
      uVar14 = 0;
LAB_03766608:
      plVar12 = *(long **)(lVar18 + 0x20);
      if (plVar12 != (long *)0x0) {
        local_68 = *(long *)(lVar10 + 0x4e380);
        local_60 = *(long *)(lVar10 + 0x4e388);
        local_58 = 0x48b0;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      }
    }
    else {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      lVar18 = *(long *)(lVar10 + 0x4e3a0);
      uVar14 = uVar14 & 0xffffffff;
      if (lVar18 != 0) goto LAB_03766608;
    }
    pvVar4 = (void *)(*(long *)(lVar10 + 0x4e388) + *(long *)(lVar10 + 0x4e380));
    memset(pvVar4,0,0x48b0);
    FUN_028f50f0((long)pvVar4 + 8);
    if ((uVar14 & 1) == 0) goto LAB_03766b68;
    lVar18 = *(long *)(lVar10 + 0x4e3a0);
  }
  else {
    if ((*(long *)(lVar10 + 0x4cc70) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar10 + 0x4cc70) + 0x20), plVar12 != (long *)0x0)) {
      local_58 = 0x1188;
      local_68 = *(long *)(lVar10 + 0x4cc50);
      local_60 = *(long *)(lVar10 + 0x4cc58);
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      lVar18 = *(long *)(lVar10 + 0x4cc58) + *(long *)(lVar10 + 0x4cc50);
    }
    if (DAT_05574040 == 0) goto LAB_03766b68;
    uVar8 = *(ushort *)(lVar18 + 4);
    local_68 = CONCAT44(local_68._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) ||
       (lVar18 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       499 < uVar8 || lVar18 == 0)) goto LAB_03766b68;
    if ((*(long *)(lVar10 + 0x4cc70) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar10 + 0x4cc70) + 0x20), plVar12 != (long *)0x0)) {
      local_68 = *(long *)(lVar10 + 0x4cc50);
      local_60 = *(long *)(lVar10 + 0x4cc58);
      local_58 = 0x1188;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    }
    puVar2 = (ushort *)(*(long *)(lVar10 + 0x4cc58) + *(long *)(lVar10 + 0x4cc50));
    if (puVar2[2] == 0xffff || (*puVar2 & 1) != 0) {
      lVar18 = lVar18 + (ulong)uVar8 * 0x2d48;
      if ((*(long *)(lVar18 + 0x4e368) == 0) ||
         (puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x4e368) + 0x10),
         puVar13 == (undefined8 *)0x0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)*puVar13)();
        uVar14 = uVar14 & 0xffffffff;
      }
      if ((*(long **)(lVar10 + 0x4e368) == (long *)0x0) ||
         (puVar13 = (undefined8 *)**(long **)(lVar10 + 0x4e368), puVar13 == (undefined8 *)0x0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (**(code **)*puVar13)();
        uVar15 = uVar15 & 0xffffffff;
      }
      if ((*(long *)(lVar18 + 0x4e368) != 0) &&
         (plVar12 = *(long **)(*(long *)(lVar18 + 0x4e368) + 0x20), plVar12 != (long *)0x0)) {
        local_68 = *(long *)(lVar18 + 0x4e348);
        local_60 = *(long *)(lVar18 + 0x4e350);
        local_58 = 0x40;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      }
      puVar13 = (undefined8 *)(*(long *)(lVar10 + 0x4e350) + *(long *)(lVar10 + 0x4e348));
      puVar3 = (undefined8 *)(*(long *)(lVar18 + 0x4e350) + *(long *)(lVar18 + 0x4e348));
      uVar6 = puVar13[7];
      uVar5 = puVar13[4];
      uVar7 = puVar13[5];
      puVar3[6] = puVar13[6];
      puVar3[7] = uVar6;
      puVar3[4] = uVar5;
      puVar3[5] = uVar7;
      uVar5 = *puVar13;
      uVar6 = puVar13[1];
      uVar7 = puVar13[3];
      puVar3[2] = puVar13[2];
      puVar3[3] = uVar7;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      if ((((uVar15 & 1) != 0) && (*(long *)(lVar10 + 0x4e368) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x4e368) + 8), puVar13 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar13)();
      }
      if ((*(long *)(lVar18 + 0x4e3a0) == 0) ||
         (puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x4e3a0) + 0x10),
         puVar13 == (undefined8 *)0x0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (**(code **)*puVar13)();
        uVar15 = uVar15 & 0xffffffff;
      }
      if ((*(long **)(lVar10 + 0x4e3a0) == (long *)0x0) ||
         (puVar13 = (undefined8 *)**(long **)(lVar10 + 0x4e3a0), puVar13 == (undefined8 *)0x0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = (**(code **)*puVar13)();
        uVar16 = uVar16 & 0xffffffff;
      }
      if ((*(long *)(lVar18 + 0x4e3a0) != 0) &&
         (plVar12 = *(long **)(*(long *)(lVar18 + 0x4e3a0) + 0x20), plVar12 != (long *)0x0)) {
        local_68 = *(long *)(lVar18 + 0x4e380);
        local_60 = *(long *)(lVar18 + 0x4e388);
        local_58 = 0x48b0;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      }
      memcpy((void *)(*(long *)(lVar18 + 0x4e388) + *(long *)(lVar18 + 0x4e380)),
             (void *)(*(long *)(lVar10 + 0x4e388) + *(long *)(lVar10 + 0x4e380)),0x48b0);
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar10 + 0x4e3a0) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x4e3a0) + 8), puVar13 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar13)();
      }
      if ((((uVar15 & 1) != 0) && (*(long *)(lVar18 + 0x4e3a0) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x4e3a0) + 0x18),
         puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar18 + 0x4e368) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar18 + 0x4e368) + 0x18),
         puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      lVar18 = *(long *)(lVar10 + 0x4e368);
      if (lVar18 == 0) {
        uVar14 = 0;
      }
      else {
        if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
          lVar18 = *(long *)(lVar10 + 0x4e368);
          uVar14 = uVar14 & 0xffffffff;
          if (lVar18 == 0) goto LAB_03766888;
        }
        plVar12 = *(long **)(lVar18 + 0x20);
        if (plVar12 != (long *)0x0) {
          local_68 = *(long *)(lVar10 + 0x4e348);
          local_60 = *(long *)(lVar10 + 0x4e350);
          local_58 = 0x40;
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
        }
      }
LAB_03766888:
      puVar13 = (undefined8 *)(*(long *)(lVar10 + 0x4e350) + *(long *)(lVar10 + 0x4e348));
      puVar13[6] = 0;
      puVar13[7] = 0;
      *puVar13 = 0;
      puVar13[1] = 0;
      *(undefined2 *)((long)puVar13 + 0x36) = 0x101;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *(undefined1 *)((long)puVar13 + 0x39) = 0;
      *(undefined8 *)((long)puVar13 + 4) = 0;
      *(undefined8 *)((long)puVar13 + 0xc) = 0;
      *(undefined8 *)((long)puVar13 + 0x14) = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      *(undefined8 *)((long)puVar13 + 0x1c) = 0;
      *(undefined8 *)((long)puVar13 + 0x24) = 0;
      *(undefined8 *)((long)puVar13 + 0x2a) = 0;
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar10 + 0x4e368) != 0)) &&
         (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x4e368) + 0x18),
         puVar13 != (undefined8 *)0x0)) {
        (**(code **)*puVar13)();
      }
      lVar18 = *(long *)(lVar10 + 0x4e3a0);
      if (lVar18 == 0) {
        pvVar4 = (void *)(*(long *)(lVar10 + 0x4e388) + *(long *)(lVar10 + 0x4e380));
        memset(pvVar4,0,0x48b0);
        FUN_028f50f0((long)pvVar4 + 8);
      }
      else {
        if (*(undefined8 **)(lVar18 + 0x10) == (undefined8 *)0x0) {
          uVar14 = 0;
LAB_03766940:
          plVar12 = *(long **)(lVar18 + 0x20);
          if (plVar12 != (long *)0x0) {
            local_68 = *(long *)(lVar10 + 0x4e380);
            local_60 = *(long *)(lVar10 + 0x4e388);
            local_58 = 0x48b0;
            (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
          }
        }
        else {
          uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
          lVar18 = *(long *)(lVar10 + 0x4e3a0);
          uVar14 = uVar14 & 0xffffffff;
          if (lVar18 != 0) goto LAB_03766940;
        }
        pvVar4 = (void *)(*(long *)(lVar10 + 0x4e388) + *(long *)(lVar10 + 0x4e380));
        memset(pvVar4,0,0x48b0);
        FUN_028f50f0((long)pvVar4 + 8);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar10 + 0x4e3a0) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x4e3a0) + 0x18),
           puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)();
        }
      }
    }
    local_78 = &PTR_LAB_04942240;
    if ((*(long *)(lVar10 + 0x4cc70) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar10 + 0x4cc70) + 0x20), plVar12 != (long *)0x0)) {
      local_68 = *(long *)(lVar10 + 0x4cc50);
      local_60 = *(long *)(lVar10 + 0x4cc58);
      local_58 = 0x1188;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    }
    sVar9 = *(short *)(*(long *)(lVar10 + 0x4cc58) + *(long *)(lVar10 + 0x4cc50) + 2);
    local_70 = sVar9;
    FUN_037650e0(&local_78);
    lVar18 = 0;
    if (DAT_05574040 != 0) {
      local_68 = CONCAT44(local_68._4_4_,1);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar17 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar17 = 0;
      }
      lVar18 = 0;
      if (lVar17 != 0) {
        lVar18 = lVar17 + 0xa8;
      }
    }
    lVar17 = *(long *)(lVar18 + 0x36540);
    if (lVar17 == 0) {
      uVar14 = 0;
    }
    else {
      if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        lVar17 = *(long *)(lVar18 + 0x36540);
        uVar14 = uVar14 & 0xffffffff;
        if (lVar17 == 0) goto LAB_03766ad4;
      }
      plVar12 = *(long **)(lVar17 + 0x20);
      if (plVar12 != (long *)0x0) {
        local_68 = *(long *)(lVar18 + 0x36520);
        local_60 = *(long *)(lVar18 + 0x36528);
        local_58 = 0x408;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      }
    }
LAB_03766ad4:
    lVar17 = *(long *)(lVar18 + 0x36528) + *(long *)(lVar18 + 0x36520);
    if ((*(long *)(lVar10 + 0x4cc70) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar10 + 0x4cc70) + 0x20), plVar12 != (long *)0x0)) {
      local_68 = *(long *)(lVar10 + 0x4cc50);
      local_60 = *(long *)(lVar10 + 0x4cc58);
      local_58 = 0x1188;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
    }
    uVar15 = 0;
    do {
      if (*(short *)(lVar17 + (-(uVar15 >> 0x1f) & 0xfffffffe00000000 | uVar15 << 1)) == sVar9) {
        *(undefined2 *)(lVar17 + (long)(int)uVar15 * 2) =
             *(undefined2 *)(*(long *)(lVar10 + 0x4cc58) + *(long *)(lVar10 + 0x4cc50) + 4);
        break;
      }
      uVar1 = (int)uVar15 + 1;
      uVar15 = (ulong)uVar1;
    } while (uVar1 != 0x1fb);
    if ((uVar14 & 1) == 0) goto LAB_03766b68;
    lVar18 = *(long *)(lVar18 + 0x36540);
  }
  if ((lVar18 != 0) && (*(undefined8 **)(lVar18 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar18 + 0x18))();
  }
LAB_03766b68:
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x4cc70) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x4cc70) + 0x18), puVar13 != (undefined8 *)0x0))
  {
    (**(code **)*puVar13)();
  }
  return;
}


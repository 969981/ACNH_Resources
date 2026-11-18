
/* WARNING: Removing unreachable block (ram,0x037600f0) */
/* WARNING: Removing unreachable block (ram,0x03760144) */

void FUN_0375ff70(uint param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ushort *puVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  undefined8 local_278;
  undefined1 *puStack_270;
  undefined4 local_268;
  undefined1 local_264 [7];
  undefined1 local_25d;
  ulong local_258;
  undefined8 local_250;
  undefined8 local_248;
  int local_228;
  long local_220;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  
  puVar2 = PTR_DAT_04bb3768;
  if (*(long *)PTR_DAT_04bb27f8 != 0) {
    local_55 = 0;
    local_60 = 8;
    puStack_68 = local_5c;
    local_5c[0] = 0;
    local_70 = PTR_DAT_04bb3768 + 0x10;
    if ((((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) ||
       (lVar16 = *(long *)(DAT_05ab7608 + 8), lVar16 == 0)) {
      uVar4 = *(undefined2 *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
    }
    else if ((*(long **)(lVar16 + 0x60) == (long *)0x0) ||
            (puVar6 = (undefined8 *)**(long **)(lVar16 + 0x60), puVar6 == (undefined8 *)0x0)) {
      uVar4 = *(undefined2 *)(*(long *)(lVar16 + 0x48) + *(long *)(lVar16 + 0x40) + 2);
    }
    else {
      uVar7 = (**(code **)*puVar6)();
      uVar4 = *(undefined2 *)(*(long *)(lVar16 + 0x48) + *(long *)(lVar16 + 0x40) + 2);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar16 + 0x60) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar16 + 0x60) + 8), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
    FUN_0376b510(&local_70,uVar4);
    FUN_0220fe90(&local_258);
    local_278 = puVar2 + 0x10;
    local_25d = 0;
    local_268 = 8;
    puStack_270 = local_264;
    local_264[0] = 0;
    FUN_02213cf0(&local_258,&local_70,&local_70,&local_278);
    if (0 < local_228) {
      lVar16 = 0;
      do {
        (**(code **)**(undefined8 **)(local_220 + lVar16 * 8))();
        lVar16 = lVar16 + 1;
      } while (lVar16 < local_228);
    }
  }
  if (DAT_05574040 == 0) {
    return;
  }
  local_258._0_4_ = 1;
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
    lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    lVar16 = 0;
    if (lVar8 != 0) {
      lVar16 = lVar8 + 0xa8;
    }
    if (DAT_05574040 == 0) {
      return;
    }
  }
  else {
    lVar16 = 0;
  }
  local_258 = CONCAT44(local_258._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar8 == 0) {
    return;
  }
  puVar1 = (ulong *)(lVar8 + 0x36638);
  lVar11 = *(long *)(lVar16 + 0x450);
  if (lVar11 == 0) {
    uVar7 = 0;
    local_278 = (undefined *)((ulong)local_278._4_4_ << 0x20);
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      local_278 = (undefined *)((ulong)local_278._4_4_ << 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar16 + 0x450);
      uVar7 = uVar7 & 0xffffffff;
      local_278 = (undefined *)((ulong)local_278 & 0xffffffff00000000);
      if (lVar11 == 0) goto LAB_037601f8;
    }
    plVar10 = *(long **)(lVar11 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_258 = *(ulong *)(lVar16 + 0x430);
      local_250 = *(undefined8 *)(lVar16 + 0x438);
      local_248 = 0x297e8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_258);
    }
  }
LAB_037601f8:
  uVar5 = 0;
  iVar17 = 0;
  iVar13 = 0;
  lVar11 = lVar16 + 0x498;
  local_258 = local_258 & 0xffffffff00000000;
  do {
    puVar14 = (ushort *)
              (*(long *)(lVar16 + 0x438) + *(long *)(lVar16 + 0x430) + (long)iVar13 * 0x1178);
    uVar15 = (uint)puVar14[3];
    if (0x14 < uVar15) {
      uVar15 = 0;
    }
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar15);
    if ((uint)local_258 == uVar15) {
      iVar17 = iVar17 + 1;
      uVar15 = (uint)local_258;
    }
    else {
      iVar17 = 0;
      local_258 = CONCAT44(local_258._4_4_,uVar15);
    }
    if ((uint)*puVar14 == (param_1 & 0xffff)) {
      local_278 = (undefined *)CONCAT44(local_278._4_4_,uVar15);
      if (0x25 < uVar5) {
        lVar11 = lVar16 + 0x498;
      }
      lVar12 = *(long *)(lVar11 + 0x28);
      if (lVar12 != 0) {
        if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
          uVar9 = 0;
LAB_037602ec:
          plVar10 = *(long **)(lVar12 + 0x20);
          if (plVar10 != (long *)0x0) {
            local_258 = *(ulong *)(lVar11 + 8);
            local_250 = *(undefined8 *)(lVar11 + 0x10);
            local_248 = 0x1178;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_258);
            lVar12 = *(long *)(lVar11 + 0x28);
          }
        }
        else {
          uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          lVar12 = *(long *)(lVar11 + 0x28);
          uVar9 = uVar9 & 0xffffffff;
          if (lVar12 != 0) goto LAB_037602ec;
        }
        if ((uVar9 & 1) == 0) {
LAB_03760338:
          if (lVar12 != 0) {
LAB_0376033c:
            if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
              uVar5 = 1;
LAB_037603b8:
              plVar10 = *(long **)(lVar12 + 0x20);
              if (plVar10 != (long *)0x0) {
                local_258 = *(ulong *)(lVar11 + 8);
                local_250 = *(undefined8 *)(lVar11 + 0x10);
                local_248 = 0x1178;
                (**(code **)(*plVar10 + 0x20))(plVar10,&local_258);
              }
            }
            else {
              uVar5 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
              lVar12 = *(long *)(lVar11 + 0x28);
              uVar5 = uVar5 ^ 1;
              if (lVar12 != 0) goto LAB_037603b8;
            }
            if ((((uVar5 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
               (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 0x18),
               puVar6 != (undefined8 *)0x0)) {
              (**(code **)*puVar6)();
            }
          }
        }
        else if (lVar12 != 0) {
          if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar12 + 0x18))();
            lVar12 = *(long *)(lVar11 + 0x28);
            goto LAB_03760338;
          }
          goto LAB_0376033c;
        }
      }
      if ((*(long *)(lVar16 + 0x450) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar16 + 0x450) + 0x20), plVar10 != (long *)0x0)) {
        local_258 = *(ulong *)(lVar16 + 0x430);
        local_250 = *(undefined8 *)(lVar16 + 0x438);
        local_248 = 0x297e8;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_258);
      }
      uVar4 = FUN_028eb350(*(long *)(lVar16 + 0x438) + *(long *)(lVar16 + 0x430),param_1,0xffff,0);
      uVar3 = (undefined4)local_278;
      lVar11 = *(long *)(lVar8 + 0x36658);
      if (lVar11 == 0) {
        uVar9 = 0;
      }
      else {
        if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          lVar11 = *(long *)(lVar8 + 0x36658);
          uVar9 = uVar9 & 0xffffffff;
          if (lVar11 == 0) goto LAB_037604c0;
        }
        plVar10 = *(long **)(lVar11 + 0x20);
        if (plVar10 != (long *)0x0) {
          local_258 = *puVar1;
          local_250 = *(undefined8 *)(lVar8 + 0x36640);
          local_248 = 0x490c;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_258);
        }
      }
LAB_037604c0:
      lVar11 = *(long *)(lVar8 + 0x36640) + *puVar1;
      *(undefined2 *)(lVar11 + 0x4904) = uVar4;
      *(undefined4 *)(lVar11 + 0x48fc) = uVar3;
      *(int *)(lVar11 + 0x4900) = iVar17;
      goto joined_r0x037604e0;
    }
    uVar5 = uVar5 + 1;
    iVar13 = iVar13 + 1;
    lVar11 = lVar11 + 0x16c0;
  } while (uVar5 != 0x26);
  lVar11 = *(long *)(lVar8 + 0x36658);
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      lVar11 = *(long *)(lVar8 + 0x36658);
      uVar9 = uVar9 & 0xffffffff;
      if (lVar11 == 0) goto LAB_03760390;
    }
    plVar10 = *(long **)(lVar11 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_258 = *puVar1;
      local_250 = *(undefined8 *)(lVar8 + 0x36640);
      local_248 = 0x490c;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_258);
    }
  }
LAB_03760390:
  lVar11 = *(long *)(lVar8 + 0x36640) + *puVar1;
  *(undefined2 *)(lVar11 + 0x4904) = 0xffff;
  *(undefined8 *)(lVar11 + 0x48fc) = 0;
joined_r0x037604e0:
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x36658) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x36658) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar16 + 0x450) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar16 + 0x450) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}


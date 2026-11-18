
/* WARNING: Removing unreachable block (ram,0x03768b24) */
/* WARNING: Removing unreachable block (ram,0x0376883c) */
/* WARNING: Removing unreachable block (ram,0x0376857c) */
/* WARNING: Removing unreachable block (ram,0x0376869c) */
/* WARNING: Removing unreachable block (ram,0x037688c0) */
/* WARNING: Removing unreachable block (ram,0x03768dfc) */

void FUN_03768530(undefined1 *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  short sVar16;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_48;
  uint local_44;
  
  if (DAT_05574040 == 0) {
    return;
  }
  local_78 = CONCAT44(local_78._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar3 == 0) {
    return;
  }
  if (*(long **)(lVar3 + 0x36620) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar3 + 0x36620);
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)();
    }
  }
  iVar12 = (int)*(char *)(*(long *)(lVar3 + 0x36608) + *(long *)(lVar3 + 0x36600));
  local_78 = CONCAT44(local_78._4_4_,iVar12);
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x36620) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x36620) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if (iVar12 != 2) {
    return;
  }
  if (*(long **)(lVar3 + 0x37ca8) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar3 + 0x37ca8);
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)();
    }
  }
  uVar13 = (uint)*(ushort *)(*(long *)(lVar3 + 0x37c90) + *(long *)(lVar3 + 0x37c88) + 0x408c);
  local_48 = uVar13;
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x37ca8) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x37ca8) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if (uVar13 == 5) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  local_78 = CONCAT44(local_78._4_4_,1);
  if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  local_44 = uVar13;
  lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
  if (lVar6 == 0) {
    return;
  }
  switch(local_44) {
  case 0:
    lVar6 = lVar6 + 0x390a0;
    break;
  case 1:
    lVar6 = lVar6 + 0x3a488;
    break;
  case 2:
    lVar6 = lVar6 + 0x3b870;
    break;
  case 3:
    lVar6 = lVar6 + 0x3cc58;
    break;
  case 4:
    lVar6 = lVar6 + 0x3e040;
    break;
  default:
    goto switchD_037686e4_default;
  }
  if ((*(long **)(lVar3 + 0x37ce0) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x37ce0), puVar4 == (undefined8 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)*puVar4)();
    uVar5 = uVar5 & 0xffffffff;
  }
  lVar14 = *(long *)(lVar6 + 0x28);
  if (lVar14 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar6 + 0x28);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar14 == 0) goto LAB_037687a8;
    }
    plVar11 = *(long **)(lVar14 + 0x20);
    if (plVar11 != (long *)0x0) {
      local_78 = *(undefined8 *)(lVar6 + 8);
      local_70 = *(undefined8 *)(lVar6 + 0x10);
      local_68 = 0x408c;
      (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
    }
  }
LAB_037687a8:
  memcpy((void *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8)),
         (void *)(*(long *)(lVar3 + 0x37cc8) + *(long *)(lVar3 + 0x37cc0)),0x408c);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x37ce0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x37ce0) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if (local_48 - 1 < 3) {
    local_44 = local_48;
    if (DAT_05574040 == 0) {
      lVar14 = 0;
    }
    else {
      local_78 = CONCAT44(local_78._4_4_,1);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar8 = 0;
      }
      lVar14 = 0;
      if (lVar8 != 0) {
        lVar14 = lVar8 + 0xa8;
      }
    }
    uVar13 = local_44;
    local_44 = 0;
    lVar8 = lVar14 + 0x49d78 + (ulong)uVar13 * 0xb60;
    if (3 < uVar13) {
      lVar8 = lVar14 + 0x49d78;
    }
    lVar14 = 0;
    if (DAT_05574040 != 0) {
      local_78 = CONCAT44(local_78._4_4_,1);
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar9 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar9 = 0;
      }
      lVar14 = 0;
      if (lVar9 != 0) {
        lVar14 = lVar9 + 0xa8;
      }
    }
    lVar9 = lVar14 + 0x49d78 + (ulong)local_44 * 0xb60;
    if (3 < local_44) {
      lVar9 = lVar14 + 0x49d78;
    }
    if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      uVar5 = uVar5 & 0xffffffff;
    }
    lVar14 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
    lVar15 = *(long *)(lVar8 + 0x28);
    if (lVar15 == 0) {
      FUN_027c1640(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8),lVar14);
    }
    else {
      if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
LAB_03768988:
        plVar11 = *(long **)(lVar15 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_78 = *(undefined8 *)(lVar8 + 8);
          local_70 = *(undefined8 *)(lVar8 + 0x10);
          local_68 = 0x2a8;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        lVar15 = *(long *)(lVar8 + 0x28);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar15 != 0) goto LAB_03768988;
      }
      FUN_027c1640(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8),lVar14);
      if ((((uVar7 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    lVar14 = *(long *)(lVar9 + 0x28);
    if ((uVar5 & 1) == 0) {
LAB_03768a04:
      if (lVar14 == 0) {
LAB_03768a2c:
        FUN_027c1830(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
        goto LAB_03768a94;
      }
    }
    else {
      if (lVar14 == 0) goto LAB_03768a2c;
      if (*(undefined8 **)(lVar14 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar14 + 8))();
        lVar14 = *(long *)(lVar9 + 0x28);
        goto LAB_03768a04;
      }
    }
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
LAB_03768a40:
      plVar11 = *(long **)(lVar14 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_78 = *(undefined8 *)(lVar9 + 8);
        local_70 = *(undefined8 *)(lVar9 + 0x10);
        local_68 = 0x2a8;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
      }
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar9 + 0x28);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar14 != 0) goto LAB_03768a40;
    }
    FUN_027c1830(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
LAB_03768a94:
  if (*(long **)(lVar3 + 0x39058) == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar4 = (undefined8 *)**(long **)(lVar3 + 0x39058);
    uVar5 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = (**(code **)*puVar4)();
    }
  }
  local_78 = CONCAT44(local_78._4_4_,
                      (uint)*(ushort *)
                             (*(long *)(lVar3 + 0x39040) + *(long *)(lVar3 + 0x39038) + 100)) &
             0xffffffff0000000f;
  uVar2 = (undefined4)local_78;
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x39058) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x39058) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if ((local_48 == 4) && (DAT_05574040 != 0)) {
    local_78 = CONCAT44(local_78._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar14 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       lVar14 != 0)) {
      lVar8 = *(long *)(lVar14 + 0x5d4598);
      if (lVar8 == 0) {
        uVar5 = 0;
      }
      else {
        if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
          lVar8 = *(long *)(lVar14 + 0x5d4598);
          uVar5 = uVar5 & 0xffffffff;
          if (lVar8 == 0) goto LAB_03768bb8;
        }
        plVar11 = *(long **)(lVar8 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_78 = *(ulong *)(lVar14 + 0x5d4578);
          local_70 = *(undefined8 *)(lVar14 + 0x5d4580);
          local_68 = 0x300;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
      }
LAB_03768bb8:
      uVar7 = *(ulong *)(lVar14 + 0x5d4578);
      lVar8 = *(long *)(lVar14 + 0x5d4580);
      if (*(long **)(lVar3 + 0x37ca8) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar4 = (undefined8 *)**(long **)(lVar3 + 0x37ca8);
        uVar10 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar4)();
        }
      }
      uVar13 = (uint)*(byte *)(*(long *)(lVar3 + 0x37c90) + *(long *)(lVar3 + 0x37c88) + 0x4094);
      if (5 < uVar13) {
        uVar13 = 0;
      }
      local_78 = CONCAT44(local_78._4_4_,uVar13);
      *(char *)(lVar8 + uVar7 + 0x200) = (char)uVar13;
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar3 + 0x37ca8) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x37ca8) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar14 + 0x5d4598) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar14 + 0x5d4598) + 0x18),
         puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
      local_78 = CONCAT44(local_78._4_4_,uVar2);
    }
  }
  lVar14 = *(long *)(lVar3 + 0x39058);
  if (lVar14 == 0) {
    sVar16 = *(short *)(*(long *)(lVar3 + 0x39040) + *(long *)(lVar3 + 0x39038) + 0x5c);
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
LAB_03768c9c:
      plVar11 = *(long **)(lVar14 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_78 = *(ulong *)(lVar3 + 0x39038);
        local_70 = *(undefined8 *)(lVar3 + 0x39040);
        local_68 = 0x6c;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
      }
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar3 + 0x39058);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar14 != 0) goto LAB_03768c9c;
    }
    sVar16 = *(short *)(*(long *)(lVar3 + 0x39040) + *(long *)(lVar3 + 0x39038) + 0x5c);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x39058) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x39058) + 0x18), puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)();
    }
  }
  if (sVar16 == 0) {
    lVar3 = *(long *)(lVar6 + 0x13a0);
    if (lVar3 == 0) {
      *(undefined8 *)(*(long *)(lVar6 + 5000) + *(long *)(lVar6 + 0x1380) + 0x5c) =
           *(undefined8 *)(DAT_04da6480 + 0x4060);
    }
    else {
      if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
        uVar5 = 0;
LAB_03768f34:
        plVar11 = *(long **)(lVar3 + 0x20);
        if (plVar11 != (long *)0x0) {
          local_78 = *(ulong *)(lVar6 + 0x1380);
          local_70 = *(undefined8 *)(lVar6 + 5000);
          local_68 = 0x6c;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
        }
      }
      else {
        uVar5 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
        lVar3 = *(long *)(lVar6 + 0x13a0);
        uVar5 = uVar5 & 0xffffffff;
        if (lVar3 != 0) goto LAB_03768f34;
      }
      *(undefined8 *)(*(long *)(lVar6 + 5000) + *(long *)(lVar6 + 0x1380) + 0x5c) =
           *(undefined8 *)(DAT_04da6480 + 0x4060);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x13a0) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x13a0) + 0x18), puVar4 != (undefined8 *)0x0))
      {
        (**(code **)*puVar4)();
      }
    }
  }
  lVar3 = DAT_05ab5ea8;
  if (DAT_05ab5ea8 != 0) {
    lVar14 = *(long *)(lVar6 + 0x13a0);
    if (lVar14 == 0) {
      uVar5 = 0;
    }
    else {
      if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        lVar14 = *(long *)(lVar6 + 0x13a0);
        uVar5 = uVar5 & 0xffffffff;
        if (lVar14 == 0) goto LAB_03768d9c;
      }
      plVar11 = *(long **)(lVar14 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_78 = *(ulong *)(lVar6 + 0x1380);
        local_70 = *(undefined8 *)(lVar6 + 5000);
        local_68 = 0x6c;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
      }
    }
LAB_03768d9c:
    lVar14 = *(long *)(lVar6 + 5000) + *(long *)(lVar6 + 0x1380);
    *(int *)(lVar14 + 0x68) = *(int *)(lVar14 + 0x68) + *(int *)(lVar3 + 0x3a0);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x13a0) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x13a0) + 0x18), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  lVar3 = 0;
  if (DAT_05574040 != 0) {
    local_78 = CONCAT44(local_78._4_4_,1);
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar6 = 0;
    }
    lVar3 = 0;
    if (lVar6 != 0) {
      lVar3 = lVar6 + 0xa8;
    }
  }
  puVar1 = (ulong *)(lVar3 + 0x36520);
  lVar6 = *(long *)(lVar3 + 0x36540);
  if (lVar6 == 0) {
    FUN_028f6d80(*(long *)(lVar3 + 0x36528) + *puVar1,&local_48);
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
LAB_03768e80:
      plVar11 = *(long **)(lVar6 + 0x20);
      if (plVar11 != (long *)0x0) {
        local_78 = *puVar1;
        local_70 = *(undefined8 *)(lVar3 + 0x36528);
        local_68 = 0x408;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
      }
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      lVar6 = *(long *)(lVar3 + 0x36540);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar6 != 0) goto LAB_03768e80;
    }
    FUN_028f6d80(*(long *)(lVar3 + 0x36528) + *puVar1,&local_48);
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x36540) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x36540) + 0x18), puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)();
    }
  }
  local_78 = CONCAT71(local_78._1_7_,*param_1);
  FUN_037653b0(&local_78);
switchD_037686e4_default:
  return;
}


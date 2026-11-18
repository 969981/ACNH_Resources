
/* WARNING: Removing unreachable block (ram,0x03746a74) */
/* WARNING: Removing unreachable block (ram,0x03746b44) */

void FUN_03746970(long *param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined2 uVar15;
  long lVar16;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04bb7648;
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffc;
  puVar5 = PTR_DAT_04bc3a48;
  puVar3 = PTR_DAT_04bb27f8;
  local_68 = puVar4 + 0x10;
  lVar13 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar16 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar16 == 0)) {
    puVar2 = (undefined2 *)(lVar13 + 0x2c);
    if ((*(ushort *)(lVar13 + 0x28) & 0x40) != 0) {
      puVar2 = (undefined2 *)(lVar13 + 0x2a);
    }
    uVar15 = *puVar2;
  }
  else if ((*(long **)(lVar16 + 0x60) == (long *)0x0) ||
          (puVar10 = (undefined8 *)**(long **)(lVar16 + 0x60), puVar10 == (undefined8 *)0x0)) {
    uVar15 = *(undefined2 *)(*(long *)(lVar16 + 0x48) + *(long *)(lVar16 + 0x40) + 2);
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar15 = *(undefined2 *)(*(long *)(lVar16 + 0x48) + *(long *)(lVar16 + 0x40) + 2);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar16 + 0x60) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0x60) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  local_60 = CONCAT62(local_60._2_6_,uVar15);
  lVar13 = FUN_03775a30(&local_68);
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = lVar13 + 0x380;
  }
  local_68 = puVar4 + 0x10;
  lVar16 = *(long *)puVar3;
  if ((((*(ushort **)puVar5 == (ushort *)0x0) || ((**(ushort **)puVar5 & 1) == 0)) ||
      (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar14 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar14 == 0)) {
    puVar2 = (undefined2 *)(lVar16 + 0x2c);
    if ((*(ushort *)(lVar16 + 0x28) & 0x40) != 0) {
      puVar2 = (undefined2 *)(lVar16 + 0x2a);
    }
    uVar15 = *puVar2;
  }
  else if ((*(long **)(lVar14 + 0x60) == (long *)0x0) ||
          (puVar10 = (undefined8 *)**(long **)(lVar14 + 0x60), puVar10 == (undefined8 *)0x0)) {
    uVar15 = *(undefined2 *)(*(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40) + 2);
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar15 = *(undefined2 *)(*(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40) + 2);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar14 + 0x60) != 0)) &&
       (puVar10 = *(undefined8 **)(*(long *)(lVar14 + 0x60) + 8), puVar10 != (undefined8 *)0x0)) {
      (**(code **)*puVar10)();
    }
  }
  local_60 = CONCAT62(local_60._2_6_,uVar15);
  lVar16 = FUN_03775a30(&local_68);
  if (lVar16 == 0) {
    return;
  }
  if (lVar13 == 0) {
    return;
  }
  if (*(long **)(lVar13 + 0x28) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar13 + 0x28);
    uVar11 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar10)();
    }
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  uVar6 = *(ushort *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x153c);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if (*(long **)(lVar16 + 0xa00) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar16 + 0xa00);
    uVar11 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar10)();
    }
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  uVar7 = *(ushort *)(*(long *)(lVar16 + 0x9e8) + *(long *)(lVar16 + 0x9e0) + 0x153c);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar16 + 0xa00) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar16 + 0xa00) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  uVar6 = uVar6 >> 2 & 1;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar9 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar10 + 7) == -0x3e092032) {
    uVar7 = (**(code **)(*param_1 + 0x18))(param_1,3);
    *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffe | uVar7 & 1;
    lVar13 = *(long *)(lVar16 + 0xa00);
    if (lVar13 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        lVar13 = *(long *)(lVar16 + 0xa00);
        uVar11 = uVar11 & 0xffffffff;
        if (lVar13 == 0) goto LAB_03746e2c;
      }
      plVar12 = *(long **)(lVar13 + 0x20);
      if (plVar12 != (long *)0x0) {
        local_68 = *(undefined **)(lVar16 + 0x9e0);
        local_60 = *(undefined8 *)(lVar16 + 0x9e8);
        local_58 = 0x155c;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      }
    }
LAB_03746e2c:
    lVar13 = *(long *)(lVar16 + 0x9e8) + *(long *)(lVar16 + 0x9e0);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
    if ((uVar7 & 1) == 0) {
      *(ushort *)(lVar13 + 0x153c) = *(ushort *)(lVar13 + 0x153c) & 0xfffb;
    }
    else {
      *(ushort *)(lVar13 + 0x153c) = *(ushort *)(lVar13 + 0x153c) | 4;
    }
    if ((uVar11 & 1) == 0) goto LAB_03746e8c;
    lVar13 = *(long *)(lVar16 + 0xa00);
  }
  else {
    uVar7 = uVar7 >> 2 & 1;
    if (*(int *)(puVar10 + 7) != -0x7975b8e8) {
      *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 1;
      goto LAB_03746e8c;
    }
    uVar6 = (**(code **)(*param_1 + 0x18))(param_1,3);
    *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) & 0xfffe | uVar6 & 1;
    lVar16 = *(long *)(lVar13 + 0x28);
    if (lVar16 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
        lVar16 = *(long *)(lVar13 + 0x28);
        uVar11 = uVar11 & 0xffffffff;
        if (lVar16 == 0) goto LAB_03746db0;
      }
      plVar12 = *(long **)(lVar16 + 0x20);
      if (plVar12 != (long *)0x0) {
        local_68 = *(undefined **)(lVar13 + 8);
        local_60 = *(undefined8 *)(lVar13 + 0x10);
        local_58 = 0x155c;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_68);
      }
    }
LAB_03746db0:
    lVar16 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
    if ((uVar6 & 1) == 0) {
      *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) & 0xfffb;
    }
    else {
      *(ushort *)(lVar16 + 0x153c) = *(ushort *)(lVar16 + 0x153c) | 4;
    }
    if ((uVar11 & 1) == 0) goto LAB_03746e8c;
    lVar13 = *(long *)(lVar13 + 0x28);
  }
  if ((lVar13 != 0) && (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar13 + 0x18))();
  }
LAB_03746e8c:
  uVar8 = FUN_03772b50();
  uVar1 = 2;
  if ((uVar6 & (uVar7 | uVar8 ^ 0xffff) & 1) == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 1) = uVar1 | *(ushort *)(param_1 + 1) & 0xfffd;
  return;
}


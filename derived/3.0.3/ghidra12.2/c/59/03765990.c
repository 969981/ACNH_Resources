
/* WARNING: Removing unreachable block (ram,0x037659fc) */
/* WARNING: Removing unreachable block (ram,0x03765c3c) */

void FUN_03765990(int param_1)

{
  ushort *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  byte bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_64 [7];
  undefined1 local_5d;
  undefined *local_58;
  ushort local_50;
  int local_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bb46b0;
  puVar3 = PTR_DAT_04bb27f8;
  if (param_1 == 0) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
    return;
  }
  lVar13 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x140);
  lVar14 = *(long *)PTR_DAT_04bb27f8;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  local_48 = param_1;
  if (((*(byte *)(lVar11 + 0x50d) ^ 0xff) & 6) == 0) {
    lVar11 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x10) + 0x188) + 0x30))();
  }
  else {
    lVar11 = 0;
  }
  lVar2 = 0;
  if (lVar11 != 0) {
    lVar2 = lVar11 + 0x365f8;
  }
  if ((lVar13 == 0 || lVar14 == 0) || lVar11 == 0) {
    return;
  }
  local_58 = PTR_DAT_04bb7648 + 0x10;
  lVar11 = *(long *)puVar3;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar14 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar14 == 0)) {
    puVar1 = (ushort *)(lVar11 + 0x2c);
    if ((*(ushort *)(lVar11 + 0x28) & 0x40) != 0) {
      puVar1 = (ushort *)(lVar11 + 0x2a);
    }
    local_50 = *puVar1;
  }
  else if ((*(long **)(lVar14 + 0x60) == (long *)0x0) ||
          (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x60), puVar7 == (undefined8 *)0x0)) {
    local_50 = *(ushort *)(*(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40) + 2);
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    local_50 = *(ushort *)(*(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40) + 2);
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x60) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x60) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    uVar8 = uVar8 & 0xffffffff;
  }
  uVar9 = FUN_029066e0(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8),&local_58);
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((*(long **)(lVar2 + 0x60) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar2 + 0x60), puVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
    plVar12 = *(long **)(lVar2 + 0x1678);
    if (plVar12 != (long *)0x0) goto LAB_03765b8c;
LAB_03765ba8:
    uVar9 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    uVar8 = uVar8 & 0xffffffff;
    plVar12 = *(long **)(lVar2 + 0x1678);
    if (plVar12 == (long *)0x0) goto LAB_03765ba8;
LAB_03765b8c:
    if ((undefined8 *)*plVar12 == (undefined8 *)0x0) goto LAB_03765ba8;
    uVar9 = (*(code *)**(undefined8 **)*plVar12)();
    uVar9 = uVar9 & 0xffffffff;
  }
  local_44 = (uint)local_44._2_2_ << 0x10;
  FUN_0374a300(&local_44,
               *(undefined1 *)(*(long *)(lVar2 + 0x1660) + *(long *)(lVar2 + 0x1658) + 0x32));
  uVar15 = local_44 >> 4 & 0xf;
  local_78 = (undefined *)(CONCAT44(local_78._4_4_,local_44) & 0xffffffff0000000f);
  if ((int)local_78 != 1) {
    uVar15 = 0;
  }
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar15);
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar2 + 0x1678) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar2 + 0x1678) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  uVar5 = local_50;
  if (uVar15 == 2) {
    lVar11 = *(long *)puVar4;
    if (lVar11 == 0) {
      uVar15 = 0x1ff8;
    }
    else {
      uVar9 = (ulong)local_50;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      if (((((*(byte *)(lVar11 + 0x50d) ^ 0xff) & 6) == 0) &&
          (lVar11 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x10) + 0x188) + 0x38))(),
          uVar5 < 500)) && (lVar11 != 0)) {
        lVar11 = lVar11 + uVar9 * 0x2d48;
        local_68 = CONCAT31(local_68._1_3_,1);
        local_70 = (undefined1 *)(lVar11 + 0x4cc48);
        if (*(long **)(lVar11 + 0x4cc70) == (long *)0x0) {
          bVar6 = 0;
        }
        else {
          puVar7 = (undefined8 *)**(long **)(lVar11 + 0x4cc70);
          bVar6 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            bVar6 = (**(code **)*puVar7)();
          }
        }
        local_68 = CONCAT22(local_68._2_2_,CONCAT11(bVar6,(undefined1)local_68)) & 0xffff01ff;
        local_78 = PTR_DAT_04bb7688 + 0x10;
        puVar1 = (ushort *)(*(long *)(lVar11 + 0x4cc58) + *(long *)(lVar11 + 0x4cc50));
        uVar15 = (uint)puVar1[2];
        if ((uVar15 == 0xffff) || ((*puVar1 & 1) == 0)) {
          if (((bVar6 & 1) != 0) &&
             ((*(long *)(lVar11 + 0x4cc70) != 0 &&
              (puVar7 = *(undefined8 **)(*(long *)(lVar11 + 0x4cc70) + 8),
              puVar7 != (undefined8 *)0x0)))) {
            (**(code **)*puVar7)();
          }
          goto LAB_03765e00;
        }
        FUN_02640184(&local_78);
        uVar15 = (uVar15 & 0x3ff) << 3;
      }
      else {
        uVar15 = 0x1ff8;
      }
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar2 + 0x60) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar2 + 0x60) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if (local_48 == 1) {
      local_5d = 0;
      local_68 = 8;
      local_70 = local_64;
      local_64[0] = 0;
      local_78 = PTR_DAT_04bb3768 + 0x10;
      uVar8 = FUN_0376b510(&local_78,local_50);
      if ((uVar8 & 1) == 0) {
        return;
      }
      local_7c = 0xffffffff;
      FUN_00830c08(&local_7c,&local_78);
      local_44 = 0;
      puVar10 = &local_7c;
      puVar7 = (undefined8 *)&local_44;
    }
    else {
      if (local_48 != 2) {
        return;
      }
      local_44 = 0xffffffff;
      FUN_0082f17c(&local_44);
      puVar10 = &local_44;
      puVar7 = &local_78;
      local_44 = local_44 & 0x70000 | uVar15;
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    }
    FUN_015d5520(lVar13,puVar10,puVar7,0);
  }
  else {
LAB_03765e00:
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar2 + 0x60) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar2 + 0x60) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}


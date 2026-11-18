
void FUN_03765e50(void)

{
  undefined2 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  long lVar7;
  undefined2 uVar8;
  long lVar9;
  undefined4 local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 ****local_98;
  undefined8 ****ppppuStack_90;
  undefined8 ***local_88;
  undefined8 **local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [4];
  uint local_48 [2];
  
  lVar2 = DAT_05ab5ea8;
  lVar7 = *(long *)(DAT_05231900 + 0x140);
  if (DAT_05ab5ea8 == 0 || lVar7 == 0) {
    return;
  }
  local_48[0] = 0xffffffff;
  local_48[1] = 0xffffffff;
  FUN_00830084(local_48 + 1,0);
  if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
    if (*(int *)(lVar2 + 0x10) == 1) {
LAB_03765ec8:
      puVar1 = (undefined2 *)(lVar2 + 0x2c);
      if ((*(ushort *)(lVar2 + 0x28) & 0x40) != 0) {
        puVar1 = (undefined2 *)(lVar2 + 0x2a);
      }
      uVar8 = *puVar1;
      goto LAB_03765ee0;
    }
LAB_03765fcc:
    FUN_0082f17c(local_48);
    local_48[0] = local_48[0] & 0x70000 | (*(uint *)(lVar2 + 0xc) & 0x3ff) << 3 | 0x2000;
  }
  else {
    if (((*DAT_05ab8198 ^ 0xffff) & 3) != 0) goto LAB_03765fcc;
    if ((DAT_05ab7608 == 0) || (lVar9 = *(long *)(DAT_05ab7608 + 8), lVar9 == 0)) goto LAB_03765ec8;
    if ((*(long **)(lVar9 + 0x60) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar9 + 0x60), puVar5 == (undefined8 *)0x0)) {
      uVar8 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
    }
    else {
      uVar4 = (**(code **)*puVar5)();
      uVar8 = *(undefined2 *)(*(long *)(lVar9 + 0x48) + *(long *)(lVar9 + 0x40) + 2);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x60) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x60) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
LAB_03765ee0:
    local_ac = CONCAT22(local_ac._2_2_,uVar8);
    local_88 = &local_80;
    local_80 = &local_78;
    local_98 = &local_88;
    local_78 = &local_70;
    local_a8 = 0;
    local_a0 = (undefined8 *)0x0;
    local_70 = 0;
    if (local_68 != (undefined8 *)0x0) {
      local_a8 = 0x400000000;
      local_a0 = local_68;
    }
    ppppuStack_90 = local_98;
    uVar4 = FUN_03770770(&local_ac,&local_a8);
    if ((uVar4 & 1) != 0) {
      local_ac = CONCAT22(local_ac._2_2_,*(undefined2 *)*local_a0);
    }
    FUN_0082f17c(local_48);
    local_48[0] = local_48[0] & 0x70000 | (local_ac & 0x3ff) << 3;
  }
  if (*(int *)(lVar2 + 0x18) == 1) {
    *(undefined8 *)(lVar2 + 0x1ad0) = 0xffffffffffffffff;
    uVar4 = FUN_037818a0(local_48 + 1);
    if ((uVar4 & 1) == 0) {
      local_a8 = CONCAT44(local_a8._4_4_,(uint)*(ushort *)(lVar2 + 0xc0)) & 0xffffffff0000000f;
      if ((((int)local_a8 != 1) && (local_ac = *(ushort *)(lVar2 + 0xdc) & 0xf, local_ac != 1)) &&
         (uVar4 = FUN_037818a0(local_48), (uVar4 & 1) != 0)) {
        FUN_03781e80(local_48 + 1,1);
        local_a8 = local_a8 & 0xffffffff00000000;
        uVar4 = FUN_015d5520(lVar7,local_48,&local_a8,1);
        if ((uVar4 & 1) != 0) goto LAB_03766068;
      }
    }
    else {
      local_a8 = (ulong)local_a8._4_4_ << 0x20;
      FUN_015d5520(lVar7,local_48 + 1,&local_a8,1);
      local_a8._0_4_ = 1;
      FUN_015d5520(lVar7,local_48,&local_a8,1);
      local_a8 = CONCAT44(local_a8._4_4_,2);
      FUN_015d5520(lVar7,local_48 + 1,&local_a8,1);
      FUN_03781e80(local_48 + 1,1);
LAB_03766068:
      *(undefined4 *)(lVar2 + 0x1ad0) = *(undefined4 *)(lVar7 + 0xb78);
    }
    if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
      if (*(int *)(lVar2 + 0x10) != 1) goto LAB_037661f4;
    }
    else if (((*DAT_05ab8198 ^ 0xffff) & 3) != 0) goto LAB_037661f4;
    local_a8 = CONCAT44(local_a8._4_4_,(uint)*(ushort *)(lVar2 + 0xc0)) & 0xffffffff0000000f;
    if ((int)local_a8 != 2) goto LAB_037661f4;
    local_ac = 0xffffffff;
    FUN_0082f17c(&local_ac);
    if (((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) || (DAT_05ab7608 == 0)) {
      uVar3 = (uint)*(ushort *)(lVar2 + 0x2c);
      if ((*(ushort *)(lVar2 + 0x28) & 0x80) != 0) {
        uVar3 = 0xffffffff;
      }
    }
    else {
      lVar9 = *(long *)(DAT_05ab7608 + 0x10);
      if ((*(long **)(lVar9 + 0x11b0) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar9 + 0x11b0), puVar5 == (undefined8 *)0x0)) {
        uVar3 = (uint)*(ushort *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
      }
      else {
        uVar4 = (**(code **)*puVar5)();
        uVar3 = (uint)*(ushort *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar9 + 0x11b0) != 0)) &&
           (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x11b0) + 8), puVar5 != (undefined8 *)0x0))
        {
          (**(code **)*puVar5)();
        }
      }
    }
    puVar6 = &local_ac;
    local_ac = local_ac & 0x70000 | (uVar3 & 0x3ff) << 3;
  }
  else {
    if (*(int *)(lVar2 + 0x18) != 2) goto LAB_037661f4;
    puVar6 = local_48 + 1;
  }
  local_a8 = CONCAT44(local_a8._4_4_,2);
  FUN_015d5520(lVar7,puVar6,&local_a8,1);
LAB_037661f4:
  if ((DAT_05ab8198 == (ushort *)0x0) || ((*DAT_05ab8198 & 1) == 0)) {
    if (*(int *)(lVar2 + 0x10) != 2) {
      return;
    }
  }
  else if (((*DAT_05ab8198 ^ 0xffff) & 5) != 0) {
    return;
  }
  local_ac = local_48[0] & 0x7fff8 | 1;
  local_b0 = 0xffffffff;
  uVar3 = 1;
  FUN_00830084(&local_b0,1);
  uVar4 = FUN_037818a0(&local_ac);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_037818a0(&local_b0);
  }
  FUN_03781e80(&local_b0,uVar3 & 1);
  local_a8 = local_a8 & 0xffffffff00000000;
  uVar4 = FUN_015d5520(lVar7,&local_ac,&local_a8,1);
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x1ad4) = *(undefined4 *)(lVar7 + 0xb78);
  }
  return;
}


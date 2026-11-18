
/* WARNING: Removing unreachable block (ram,0x03734098) */

void FUN_03733c40(long param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_34;
  
  uVar3 = *param_2;
  if (uVar3 == 0xffffffff) {
    return;
  }
  puVar1 = param_2 + 2;
  if (uVar3 < *(uint *)(param_1 + 0xe0)) {
    lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 8);
  }
  else {
    lVar12 = 0;
  }
  (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
  (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar1);
  lVar13 = *(long *)(param_2 + 4);
  (**(code **)(*(long *)(lVar12 + 0x10) + 0x18))((long *)(lVar12 + 0x10));
  if (lVar13 == *(long *)(lVar12 + 0x18)) goto LAB_03733f1c;
  uVar11 = 0;
  bVar4 = true;
  do {
    if (*(char *)(*(long *)(param_2 + 4) + uVar11) != *(char *)(*(long *)(lVar12 + 0x18) + uVar11))
    break;
    if (*(char *)(*(long *)(param_2 + 4) + uVar11) == '\0') {
      if (bVar4) goto LAB_03733f1c;
      break;
    }
    bVar4 = uVar11 < 0x80000;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x80001);
  if (DAT_05aed670 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  iVar5 = *(int *)(puVar14 + 7);
  if (((((DAT_05ac0a90 != iVar5) && (DAT_05ac0aa0 != iVar5)) && (DAT_05ac0ab0 != iVar5)) &&
      (((DAT_05ac0ac0 != iVar5 && (DAT_05ac0ad0 != iVar5)) &&
       ((DAT_05ac0ae0 != iVar5 && ((DAT_05ac0af0 != iVar5 && (DAT_05ac0b00 != iVar5)))))))) &&
     ((DAT_05ac0b10 != iVar5 && (DAT_05ac0b20 != iVar5)))) goto LAB_03733f1c;
  if (DAT_05aed670 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  iVar5 = *(int *)(puVar14 + 7);
  if (((((((DAT_05ac0a90 != iVar5) && (DAT_05ac0aa0 != iVar5)) && (DAT_05ac0ab0 != iVar5)) &&
        ((DAT_05ac0ac0 != iVar5 && (DAT_05ac0ad0 != iVar5)))) &&
       ((DAT_05ac0ae0 != iVar5 && ((DAT_05ac0af0 != iVar5 && (DAT_05ac0b00 != iVar5)))))) &&
      (DAT_05ac0b10 != iVar5)) && (DAT_05ac0b20 != iVar5)) goto LAB_03733f1c;
  if (*param_2 < *(uint *)(param_1 + 0xe0)) {
    lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)*param_2 * 8);
  }
  else {
    lVar12 = 0;
  }
  FUN_03718b50(lVar12,puVar1,0);
  if ((char)param_2[0x30] != '\0') goto LAB_03733f1c;
  if (DAT_05574040 == 0) {
    lVar13 = 0;
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,1);
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar7 = 0;
    }
    lVar13 = 0;
    if (lVar7 != 0) {
      lVar13 = lVar7 + 0xa8;
    }
  }
  if (*(long **)(lVar13 + 0x450) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar14 = (undefined8 *)**(long **)(lVar13 + 0x450);
    uVar11 = 0;
    if (puVar14 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar14)();
    }
  }
  uVar6 = 0;
  iVar9 = 0;
  iVar5 = 0;
  local_68 = CONCAT44(local_68._4_4_,*(uint *)(lVar12 + 0xd8));
  do {
    local_34 = (uint)*(ushort *)
                      (*(long *)(lVar13 + 0x438) + *(long *)(lVar13 + 0x430) + (long)iVar5 * 0x1178
                      + 6);
    if (0x14 < local_34) {
      local_34 = 0;
    }
    if (*(uint *)(lVar12 + 0xd8) == local_34) {
      if (iVar9 == *(int *)(lVar12 + 0xdc)) goto LAB_03734178;
      iVar9 = iVar9 + 1;
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 1;
  } while (uVar6 != 0x26);
  uVar6 = 0xffffffff;
LAB_03734178:
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar13 + 0x450) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x450) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if (uVar6 == 0xffffffff) goto LAB_03733f1c;
  lVar7 = lVar13 + 0x498 + (ulong)uVar6 * 0x16c0;
  if (0x25 < uVar6) {
    lVar7 = lVar13 + 0x498;
  }
  lVar13 = *(long *)(lVar7 + 0x28);
  if (lVar13 == 0) {
    *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) = *(undefined2 *)(lVar12 + 0x38)
    ;
    goto LAB_03733f1c;
  }
  if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 1;
LAB_037341f4:
    plVar8 = *(long **)(lVar13 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_68 = *(undefined8 *)(lVar7 + 8);
      uStack_60 = *(undefined8 *)(lVar7 + 0x10);
      local_58 = 0x1178;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_68);
    }
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    lVar13 = *(long *)(lVar7 + 0x28);
    uVar6 = uVar6 ^ 1;
    if (lVar13 != 0) goto LAB_037341f4;
  }
  *(undefined2 *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8)) = *(undefined2 *)(lVar12 + 0x38);
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 0x18), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
LAB_03733f1c:
  if (*param_2 < *(uint *)(param_1 + 0xe0)) {
    lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)*param_2 * 8);
  }
  else {
    lVar12 = 0;
  }
  FUN_03719b70(&local_68,lVar12 + 0x10,1);
  if (*param_2 < *(uint *)(param_1 + 0xe0)) {
    lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)*param_2 * 8);
  }
  else {
    lVar12 = 0;
  }
  FUN_03719b70(&local_34,lVar12 + 0x10,0);
  puVar2 = param_2 + 0x1e;
  FUN_02128ca0(&local_68,param_2 + 0x24);
  FUN_02128ca0(&local_34,puVar2);
  FUN_0373424c(param_1,param_2 + 0xc,uVar3);
  FUN_03734854(param_1,puVar2,uVar3);
  uVar11 = FUN_037242d0(param_1,puVar1);
  lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 8);
  if ((uVar11 & 1) == 0) {
    *(ushort *)(lVar12 + 0x114) =
         *(ushort *)(lVar12 + 0x114) & 0xff7f | (ushort)(byte)param_2[0x30] << 7;
  }
  else {
    *(ushort *)(lVar12 + 0x114) = *(ushort *)(lVar12 + 0x114) & 0xff7f;
    uVar3 = *(uint *)(param_1 + 0x123c8);
    if (uVar3 == 0xffffffff) {
      puVar10 = &DAT_04c9a0c8;
    }
    else {
      if (uVar3 < *(uint *)(param_1 + 0xe0)) {
        lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar3 * 8);
      }
      else {
        lVar12 = 0;
      }
      puVar10 = (undefined4 *)(lVar12 + 8);
    }
    local_68 = CONCAT44(local_68._4_4_,*puVar10);
    FUN_037327a0(param_1,&local_68,puVar2,0);
  }
  return;
}


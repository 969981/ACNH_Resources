
/* WARNING: Removing unreachable block (ram,0x03735428) */

void FUN_03735340(long param_1,undefined8 param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined2 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    uVar9 = 0xffff;
  }
  else {
    plVar10 = *(long **)(param_1 + 0xe8);
    uVar3 = 0x80;
    if ((param_5 & 1) == 0) {
      uVar3 = 0;
    }
    lVar11 = (long)*(int *)(param_1 + 0xe0) << 3;
    uVar9 = 0xffff;
    do {
      lVar8 = *plVar10;
      if ((param_3 == *(uint *)(lVar8 + 0xd8)) && (*(int *)(lVar8 + 0xdc) == param_4)) {
        FUN_03718b50(lVar8,param_2,0);
        uVar9 = *(undefined2 *)(lVar8 + 0x38);
        *(ushort *)(lVar8 + 0x114) = *(ushort *)(lVar8 + 0x114) & 0xff7f | uVar3;
      }
      plVar10 = plVar10 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  if ((param_5 & 1) != 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    lVar11 = 0;
    plVar10 = plRam0000000000000450;
    if (plRam0000000000000450 != (long *)0x0) goto LAB_03735478;
LAB_03735494:
    uVar1 = 1;
  }
  else {
    local_78 = CONCAT44(local_78._4_4_,1);
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar8 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar8 = 0;
    }
    lVar11 = 0;
    if (lVar8 != 0) {
      lVar11 = lVar8 + 0xa8;
    }
    plVar10 = *(long **)(lVar11 + 0x450);
    if (*(long **)(lVar11 + 0x450) == (long *)0x0) goto LAB_03735494;
LAB_03735478:
    if ((undefined8 *)*plVar10 == (undefined8 *)0x0) goto LAB_03735494;
    uVar1 = (*(code *)**(undefined8 **)*plVar10)();
    uVar1 = uVar1 ^ 1;
  }
  uVar7 = 0;
  iVar4 = 0;
  iVar5 = 0;
  local_78 = CONCAT44(local_78._4_4_,param_3);
  do {
    uVar6 = (uint)*(ushort *)
                   (*(long *)(lVar11 + 0x438) + *(long *)(lVar11 + 0x430) + (long)iVar5 * 0x1178 + 6
                   );
    if (0x14 < uVar6) {
      uVar6 = 0;
    }
    if (param_3 == uVar6) {
      if (iVar4 == param_4) goto LAB_03735508;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 + 1;
    iVar5 = iVar5 + 1;
  } while (uVar7 != 0x26);
  uVar7 = 0xffffffff;
LAB_03735508:
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar11 + 0x450) != 0)) &&
     (puVar2 = *(undefined8 **)(*(long *)(lVar11 + 0x450) + 8), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)();
  }
  if (uVar7 == 0xffffffff) {
    return;
  }
  lVar8 = lVar11 + 0x498 + (ulong)uVar7 * 0x16c0;
  if (0x25 < uVar7) {
    lVar8 = lVar11 + 0x498;
  }
  lVar11 = *(long *)(lVar8 + 0x28);
  if (lVar11 == 0) {
    *(undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8)) = uVar9;
    return;
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar1 = 1;
    plVar10 = *(long **)(lVar11 + 0x20);
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    uVar1 = uVar1 ^ 1;
    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_03735594;
    plVar10 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
  }
  if (plVar10 != (long *)0x0) {
    local_78 = *(undefined8 *)(lVar8 + 8);
    uStack_70 = *(undefined8 *)(lVar8 + 0x10);
    local_68 = 0x1178;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
  }
LAB_03735594:
  *(undefined2 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8)) = uVar9;
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)();
  }
  return;
}


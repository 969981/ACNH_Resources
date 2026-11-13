
/* WARNING: Removing unreachable block (ram,0x013662a0) */

void FUN_013661b0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **local_68;
  long *plStack_60;
  undefined1 *local_58;
  long local_48;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  if (param_1 == 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb2720;
  local_48 = param_1;
  if (lVar5 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_28[0] = *(int *)(puVar6 + 7) == -0x17df00c3;
  plStack_60 = &local_48;
  local_68 = &PTR_FUN_04993460;
  local_58 = local_28;
  if ((param_2 & 1) == 0) {
    if (*(int *)(puVar6 + 7) == -0x17df00c3) {
      FUN_037772c0(&local_68);
      return;
    }
    lVar5 = FUN_03776f00();
    if (lVar5 == 0) {
      return;
    }
    if ((*(long **)(lVar5 + 0x60) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x60), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(lVar5 + 0x40);
    lVar2 = *(long *)(lVar5 + 0x48);
    iVar3 = 0;
    do {
      if (*(short *)(lVar2 + lVar1 + (long)iVar3 * 0xc) == -2) break;
      (*(code *)*local_68)(&local_68);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 300);
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x60);
  }
  else {
    if (DAT_05574040 == 0) {
      return;
    }
    local_24 = 1;
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) {
      return;
    }
    lVar5 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
    if (lVar5 == 0) {
      return;
    }
    if ((*(long **)(&LAB_005d3f40 + lVar5) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(&LAB_005d3f40 + lVar5), puVar6 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar4 = uVar4 ^ 1;
    }
    lVar1 = *(long *)(&LAB_005d3f20 + lVar5);
    lVar2 = *(long *)(&LAB_005d3f28 + lVar5);
    iVar3 = 0;
    do {
      if (*(short *)(lVar2 + lVar1 + (long)iVar3 * 0xc) == -2) break;
      (*(code *)*local_68)(&local_68);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 300);
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar5 = *(long *)(&LAB_005d3f40 + lVar5);
  }
  if ((lVar5 != 0) && (*(undefined8 **)(lVar5 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar5 + 8))();
  }
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_012ed620(undefined8 param_1,long param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *local_d8;
  int local_d0;
  int local_cc;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined *local_78;
  long local_70;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_04bb27a8;
  if (param_3 == 0) {
    return 1;
  }
  if (param_3 == 2) {
    iVar8 = *(int *)(param_2 + 0xc);
    iVar2 = *(int *)(param_2 + 8) + -1;
    local_a8 = *(int *)(param_2 + 8) + 1;
    local_cc = iVar8 + -1;
    local_c8 = PTR_DAT_04bbc5d8 + 0x10;
    local_d8 = PTR_DAT_04bb2018 + 0x10;
    local_b8 = CONCAT44(local_cc,iVar2);
    iStack_a4 = iVar8 + 1;
    puVar1 = PTR_DAT_04bbc220 + 0x10;
    local_d0 = iVar2;
    puStack_c0 = local_d8;
    local_b0 = local_d8;
    do {
      lVar9 = *(long *)puVar3;
      local_68 = 5;
      uVar10 = *(undefined8 *)(param_2 + 0x18);
      local_a0._0_4_ = 5;
      if ((int)*(uint *)(lVar9 + 0x5d0) < 1) {
        if ((((*(long *)(lVar9 + 0x4c0) == 0) ||
             (puVar6 = *(uint **)(*(long *)(lVar9 + 0x4c0) + 8), puVar6 == (uint *)0x0)) ||
            ((5 < *(uint *)(lVar9 + 0x4d8) && (*(char *)(*(long *)(lVar9 + 0x4e0) + 5) == '\0'))))
           || (((*puVar6 < 6 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0)))) goto LAB_012ed7f0;
        iVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        local_70 = (ulong)(puVar6[1] * 5 + (uint)(ushort)puVar6[2] * 8 + iVar7) + (long)puVar6;
      }
      else if (*(uint *)(lVar9 + 0x5d0) < 6) {
LAB_012ed7f0:
        local_70 = 0;
      }
      else {
        if (*(uint *)(lVar9 + 0x5c0) < 6) {
          local_a0._0_4_ = 0;
        }
        local_70 = *(long *)(*(long *)(lVar9 + 0x5c8) + (ulong)(uint)local_a0 * 8);
      }
      local_a0 = (undefined *)0x500000000;
      local_84 = 0;
      local_80 = 0;
      local_88 = 0;
      local_98 = 0;
      local_90 = 0;
      local_78 = puVar1;
      uVar4 = FUN_012efe10(&local_78,&local_a0);
      uVar5 = FUN_012ed95c(uVar4,uVar10,&local_a0,&local_d8);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if (local_d0 < (int)local_a8) {
        local_d0 = local_d0 + 1;
      }
      else {
        local_cc = local_cc + 1;
        local_d0 = (int)local_b8;
      }
      if ((iVar2 == local_d0) && (iVar8 + 2 == local_cc)) {
        return 1;
      }
    } while( true );
  }
  if (param_3 != 1) {
    return 1;
  }
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  local_90 = CONCAT44(local_90._4_4_,5);
  local_a0 = PTR_DAT_04bbc220 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb27a8;
  local_c8._0_4_ = 5;
  if ((int)*(uint *)(lVar9 + 0x5d0) < 1) {
    if ((((*(long *)(lVar9 + 0x4c0) != 0) &&
         (puVar6 = *(uint **)(*(long *)(lVar9 + 0x4c0) + 8), puVar6 != (uint *)0x0)) &&
        ((*(uint *)(lVar9 + 0x4d8) < 6 || (*(char *)(*(long *)(lVar9 + 0x4e0) + 5) != '\0')))) &&
       (((5 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      local_98 = (ulong)(puVar6[1] * 5 + (uint)(ushort)puVar6[2] * 8 + iVar8) + (long)puVar6;
      goto LAB_012ed8f4;
    }
  }
  else if (5 < *(uint *)(lVar9 + 0x5d0)) {
    if (*(uint *)(lVar9 + 0x5c0) < 6) {
      local_c8._0_4_ = 0;
    }
    local_98 = *(long *)(*(long *)(lVar9 + 0x5c8) + (ulong)(uint)local_c8 * 8);
    goto LAB_012ed8f4;
  }
  local_98 = 0;
LAB_012ed8f4:
  local_b0._2_6_ = (uint6)((ulong)local_b0 >> 0x10) & 0xffff;
  local_a8 = local_a8 & 0xffffff00;
  local_b8 = 0;
  local_b0 = (undefined *)((ulong)local_b0._2_6_ << 0x10);
  local_c8 = (undefined *)0x500000000;
  puStack_c0 = (undefined *)0x0;
  uVar4 = FUN_012efe10(&local_a0,&local_c8);
  uVar5 = FUN_012ed95c(uVar4,uVar10,&local_c8,param_2);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  return 1;
}


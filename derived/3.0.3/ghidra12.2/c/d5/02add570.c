
/* WARNING: Removing unreachable block (ram,0x02addea8) */
/* WARNING: Removing unreachable block (ram,0x02addc88) */
/* WARNING: Removing unreachable block (ram,0x02adda68) */
/* WARNING: Removing unreachable block (ram,0x02add848) */
/* WARNING: Removing unreachable block (ram,0x02add620) */
/* WARNING: Removing unreachable block (ram,0x02add5bc) */
/* WARNING: Removing unreachable block (ram,0x02add5c4) */
/* WARNING: Removing unreachable block (ram,0x02add738) */
/* WARNING: Removing unreachable block (ram,0x02add958) */
/* WARNING: Removing unreachable block (ram,0x02addb78) */
/* WARNING: Removing unreachable block (ram,0x02addd98) */
/* WARNING: Removing unreachable block (ram,0x02addfb8) */

void FUN_02add570(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  int iVar12;
  undefined *local_e0;
  undefined1 local_d8;
  int local_d4;
  undefined *local_d0;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined *local_b8;
  int local_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined1 *local_98;
  undefined4 local_88 [10];
  
  puVar5 = PTR_DAT_04bc4608;
  puVar4 = PTR_DAT_04bc43f8;
  puVar3 = PTR_DAT_04bbc570;
  puVar2 = PTR_DAT_04bb2010;
  local_88[0] = 0;
  local_b8 = PTR_DAT_04bc43f8 + 0x10;
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  local_e0 = PTR_DAT_04bc4608 + 0x10;
  local_b0 = DAT_05636e30;
  local_d0 = PTR_DAT_04bb2010 + 0x10;
  local_d8 = PTR_DAT_04bbc570[8];
  local_d4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
  local_c8 = *(uint *)(PTR_DAT_04bbc570 + 0x18);
  local_c4 = *(uint *)(PTR_DAT_04bbc570 + 0x1c);
  local_c0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
  local_bc = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
  if (DAT_05636e30 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 1;
  local_b0 = DAT_05636e34;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e34 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 2;
  local_b0 = DAT_05636e38;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e38 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 3;
  local_b0 = DAT_05636e3c;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e3c != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 4;
  local_b0 = DAT_05636e40;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e40 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 5;
  local_b0 = DAT_05636e44;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e44 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 6;
  local_b0 = DAT_05636e48;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e48 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 7;
  local_b0 = DAT_05636e4c;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e4c != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 8;
  local_b0 = DAT_05636e50;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e50 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  local_b8 = puVar4 + 0x10;
  local_88[0] = 9;
  local_b0 = DAT_05636e54;
  local_e0 = puVar5 + 0x10;
  local_d0 = puVar2 + 0x10;
  local_d8 = puVar3[8];
  local_c8 = *(uint *)(puVar3 + 0x18);
  local_c4 = *(uint *)(puVar3 + 0x1c);
  local_d4 = *(int *)(puVar3 + 0xc);
  local_c0 = *(undefined4 *)(puVar3 + 0x20);
  local_bc = *(undefined2 *)(puVar3 + 0x24);
  if (DAT_05636e54 != 0) {
    ppuStack_a0 = &local_b8;
    local_a8 = &PTR_FUN_04a9b150;
    local_98 = (undefined1 *)&local_e0;
    if (puVar1[1] != 0) {
      local_98 = (undefined1 *)&local_e0;
      plVar8 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
      iVar7 = (**(code **)(*plVar8 + 0x18))();
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          FUN_01360490(local_88,puVar1[1],iVar12);
          uVar9 = (*(code *)*local_a8)(&local_a8,local_88);
          if ((uVar9 & 1) != 0) break;
          bVar6 = iVar7 + -1 != iVar12;
          iVar12 = iVar12 + 1;
        } while (bVar6);
      }
    }
  }
  if ((local_d4 != 0) && (lVar10 = puVar1[1], lVar10 != 0)) {
    uVar11 = 0xffffffff;
    if ((local_c8 < 0x120) && (local_c4 < 0x100)) {
      uVar11 = *(undefined4 *)(lVar10 + (ulong)local_c8 * 0x400 + (ulong)local_c4 * 4 + 0x30);
    }
    FUN_013620a0(lVar10,uVar11);
  }
  return;
}


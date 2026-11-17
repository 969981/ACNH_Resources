
/* WARNING: Removing unreachable block (ram,0x02a8ca08) */
/* WARNING: Removing unreachable block (ram,0x02a8ca4c) */
/* WARNING: Removing unreachable block (ram,0x02a8ca54) */
/* WARNING: Removing unreachable block (ram,0x02a8caa8) */

void FUN_02a8c990(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined *local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  undefined4 local_68 [10];
  
  puVar3 = PTR_DAT_04bc4608;
  puVar2 = PTR_DAT_04bb2010;
  if (*(long *)PTR_DAT_04bb3728 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 1) {
      if (param_2 - 4U < 2) {
        if (*(char *)(param_1 + 0x1a0) == '\0') {
          return;
        }
        local_68[0] = 0x32;
        puVar1 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
          puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
        }
        lVar6 = puVar1[1];
        if (lVar6 == 0) {
          return;
        }
        uVar9 = 0xffffffff;
        if ((*(uint *)(param_1 + 0x198) < 0x120) && (*(uint *)(param_1 + 0x19c) < 0x100)) {
          uVar9 = *(undefined4 *)
                   (lVar6 + (ulong)*(uint *)(param_1 + 0x198) * 0x400 +
                    (ulong)*(uint *)(param_1 + 0x19c) * 4 + 0x30);
        }
        FUN_01361f00(lVar6,uVar9);
      }
      else if (param_2 == 1) {
        if (*(char *)(param_1 + 0x188) == '\0') {
          return;
        }
        local_68[0] = 0x32;
        puVar1 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
          puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
        }
        if (puVar1[1] == 0) {
          return;
        }
        local_90 = 0x26;
        local_98 = PTR_DAT_04bc43f8 + 0x10;
        local_c0 = PTR_DAT_04bc4608 + 0x10;
        local_b8 = PTR_DAT_04bbc570[8];
        local_b4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
        local_a8 = *(ulong *)(PTR_DAT_04bbc570 + 0x18);
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        ppuStack_80 = &local_98;
        local_88 = &PTR_FUN_04a9b150;
        local_78 = (undefined1 *)&local_c0;
        if (puVar1[1] != 0) {
          local_78 = (undefined1 *)&local_c0;
          plVar7 = (long *)(*(code *)**(undefined8 **)(puVar1[1] + 0x10))();
          iVar5 = (**(code **)(*plVar7 + 0x18))();
          if (0 < iVar5) {
            iVar10 = 0;
            do {
              FUN_01360490(local_68,puVar1[1],iVar10);
              uVar8 = (*(code *)*local_88)(&local_88,local_68);
              if ((uVar8 & 1) != 0) break;
              bVar4 = iVar5 + -1 != iVar10;
              iVar10 = iVar10 + 1;
            } while (bVar4);
          }
        }
        lVar6 = puVar1[1];
        if (lVar6 != 0) {
          uVar9 = 0xffffffff;
          if ((uint)local_a8 < 0x120) {
            if (local_a8._4_4_ < 0x100) {
              uVar9 = *(undefined4 *)
                       (lVar6 + (local_a8 & 0xffffffff) * 0x400 + (ulong)local_a8._4_4_ * 4 + 0x30);
            }
          }
          FUN_01361f00(lVar6,uVar9);
        }
        if (*(char *)(param_1 + 0x188) == '\0') {
          *(undefined1 *)(param_1 + 0x168) = 0;
          *(undefined4 *)(param_1 + 0x16c) = 0;
          *(undefined **)(param_1 + 0x160) = puVar3 + 0x10;
          *(undefined4 *)(param_1 + 0x180) = 0;
          *(undefined2 *)(param_1 + 0x184) = 0;
          *(undefined **)(param_1 + 0x170) = puVar2 + 0x10;
          *(undefined8 *)(param_1 + 0x178) = 0;
        }
        FUN_02a59250(puVar1,param_1 + 0x160);
      }
      FUN_02b11630(*(long *)PTR_DAT_04bb5008 + 0x22d8);
      FUN_012e81b0(param_1 + 800);
      FUN_01384d80();
      *(ushort *)(param_1 + 0x280) = *(ushort *)(param_1 + 0x280) & 0xff7f;
    }
  }
  return;
}


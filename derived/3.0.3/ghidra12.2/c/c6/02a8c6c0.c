
/* WARNING: Removing unreachable block (ram,0x02a8c724) */
/* WARNING: Removing unreachable block (ram,0x02a8c7bc) */

void FUN_02a8c6c0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
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
  
  puVar7 = PTR_DAT_04bc4608;
  puVar6 = PTR_DAT_04bb2010;
  iVar9 = *(int *)(param_1 + 0x58);
  if (iVar9 == 5) {
    if (*(char *)(param_1 + 0x130) == '\0') goto LAB_02a8c92c;
    iVar9 = *(int *)(param_1 + 0x100);
    iVar3 = *(int *)(param_1 + 0x104);
    iVar12 = *(int *)(param_1 + 0x110);
    iVar4 = *(int *)(param_1 + 0x114);
    cVar5 = *(char *)(param_1 + 0x1a0);
  }
  else {
    if (iVar9 != 4) {
      if (iVar9 == 1) {
        local_68[0] = 0x32;
        puVar2 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
          puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
        }
        if (puVar2[1] == 0) {
          return;
        }
        local_90 = 0x26;
        local_98 = PTR_DAT_04bc43f8 + 0x10;
        local_c0 = PTR_DAT_04bc4608 + 0x10;
        local_b8 = PTR_DAT_04bbc570[8];
        local_b4 = *(undefined4 *)(PTR_DAT_04bbc570 + 0xc);
        local_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        ppuStack_80 = &local_98;
        local_88 = &PTR_FUN_04a9b150;
        local_78 = (undefined1 *)&local_c0;
        if (puVar2[1] != 0) {
          local_78 = (undefined1 *)&local_c0;
          plVar10 = (long *)(*(code *)**(undefined8 **)(puVar2[1] + 0x10))();
          iVar9 = (**(code **)(*plVar10 + 0x18))();
          if (0 < iVar9) {
            iVar12 = 0;
            do {
              FUN_01360490(local_68,puVar2[1],iVar12);
              uVar11 = (*(code *)*local_88)(&local_88,local_68);
              if ((uVar11 & 1) != 0) break;
              bVar8 = iVar9 + -1 != iVar12;
              iVar12 = iVar12 + 1;
            } while (bVar8);
          }
        }
        if (*(char *)(param_1 + 0x188) == '\0') {
          *(undefined **)(param_1 + 0x160) = puVar7 + 0x10;
          *(undefined **)(param_1 + 0x170) = puVar6 + 0x10;
          *(undefined1 *)(param_1 + 0x168) = local_b8;
          *(undefined4 *)(param_1 + 0x16c) = local_b4;
          *(undefined1 *)(param_1 + 0x188) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x168) = local_b8;
          *(undefined4 *)(param_1 + 0x16c) = local_b4;
        }
        *(undefined4 *)(param_1 + 0x178) = (undefined4)local_a8;
        *(undefined4 *)(param_1 + 0x17c) = local_a8._4_4_;
        *(undefined4 *)(param_1 + 0x180) = local_a0;
        *(undefined2 *)(param_1 + 0x184) = local_9c;
      }
      goto LAB_02a8c92c;
    }
    if (*(char *)(param_1 + 0xe8) == '\0') goto LAB_02a8c92c;
    iVar9 = *(int *)(param_1 + 0xc0);
    iVar3 = *(int *)(param_1 + 0xc4);
    iVar12 = *(int *)(param_1 + 0xd0);
    iVar4 = *(int *)(param_1 + 0xd4);
    cVar5 = *(char *)(param_1 + 0x1a0);
  }
  if (cVar5 == '\0') {
    *(undefined **)(param_1 + 400) = PTR_DAT_04bb2010 + 0x10;
    *(undefined1 *)(param_1 + 0x1a0) = 1;
  }
  iVar12 = iVar12 - iVar9;
  iVar4 = iVar4 - iVar3;
  iVar1 = iVar12 + 2;
  if (-1 < iVar12 + 1) {
    iVar1 = iVar12 + 1;
  }
  iVar12 = iVar4 + 2;
  *(int *)(param_1 + 0x198) = iVar9 + (iVar1 >> 1);
  if (-1 < iVar4 + 1) {
    iVar12 = iVar4 + 1;
  }
  *(int *)(param_1 + 0x19c) = iVar3 + (iVar12 >> 1);
LAB_02a8c92c:
  FUN_02b11360(*(long *)PTR_DAT_04bb5008 + 0x22d8,param_1 + 0x50);
  FUN_012e7bc0(param_1 + 800,param_1 + 600);
  *(ushort *)(param_1 + 0x280) = *(ushort *)(param_1 + 0x280) | 0x80;
  return;
}



uint FUN_02a59660(long param_1,long param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined **local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined *local_98;
  uint local_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined1 *local_78;
  uint local_68 [3];
  int local_5c;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return 0;
  }
  uVar4 = FUN_013614c0(*(undefined8 *)(param_1 + 8));
  if ((uVar4 & 1) == 0) {
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      local_b8 = &local_88;
      local_88 = (undefined **)((ulong)local_88 & 0xffffffffffffff00);
      local_c0 = &PTR_FUN_04a9b178;
      if (*(long *)(param_1 + 8) != 0) {
        plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
        iVar2 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar2) {
          iVar6 = 0;
          do {
            FUN_01360490(local_68,*(undefined8 *)(param_1 + 8),iVar6);
            uVar4 = (*(code *)*local_c0)(&local_c0,local_68);
            if ((uVar4 & 1) != 0) break;
            bVar1 = iVar2 + -1 != iVar6;
            iVar6 = iVar6 + 1;
          } while (bVar1);
        }
      }
      if ((char)local_88 != '\0') goto LAB_02a59a7c;
    }
    uVar4 = FUN_02a8e370(param_2);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_02a8e598(param_2);
      if ((uVar4 & 1) != 0) {
        local_68[0] = 0;
        uVar4 = FUN_02b67620(local_68,*(undefined4 *)(param_2 + 0xc));
        if ((uVar4 & 1) == 0) {
          local_68[0] = 0;
        }
        local_98 = PTR_DAT_04bc43f8 + 0x10;
        local_c0 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        uVar3 = local_68[0];
        if (9 < local_68[0]) {
          uVar3 = 0;
        }
        local_90 = (&DAT_05636e30)[(int)uVar3];
        local_b8 = (undefined ***)CONCAT71(local_b8._1_7_,PTR_DAT_04bbc570[8]);
        local_b8 = (undefined ***)
                   CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_b8);
        local_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        if (local_90 != 0) {
          ppuStack_80 = &local_98;
          local_88 = &PTR_FUN_04a9b150;
          local_78 = (undefined1 *)&local_c0;
          if (*(long *)(param_1 + 8) != 0) {
            local_78 = (undefined1 *)&local_c0;
            plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
            iVar2 = (**(code **)(*plVar5 + 0x18))();
            if (0 < iVar2) {
              iVar6 = 0;
              do {
                FUN_01360490(local_68,*(undefined8 *)(param_1 + 8),iVar6);
                uVar4 = (*(code *)*local_88)(&local_88,local_68);
                if ((uVar4 & 1) != 0) break;
                bVar1 = iVar2 + -1 != iVar6;
                iVar6 = iVar6 + 1;
              } while (bVar1);
            }
          }
        }
        goto LAB_02a59a74;
      }
      uVar4 = FUN_02a8e9e8(param_2);
      if ((uVar4 & 1) != 0) {
        local_90 = *(uint *)(param_2 + 0xc);
        local_98 = PTR_DAT_04bc43f8 + 0x10;
        local_c0 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
        local_b8 = (undefined ***)CONCAT71(local_b8._1_7_,PTR_DAT_04bbc570[8]);
        local_b8 = (undefined ***)
                   CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_b8);
        local_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        if (local_90 != 0) {
          ppuStack_80 = &local_98;
          local_88 = &PTR_FUN_04a9b150;
          local_78 = (undefined1 *)&local_c0;
          if (*(long *)(param_1 + 8) != 0) {
            local_78 = (undefined1 *)&local_c0;
            plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
            iVar2 = (**(code **)(*plVar5 + 0x18))();
            if (0 < iVar2) {
              iVar6 = 0;
              do {
                FUN_01360490(local_68,*(undefined8 *)(param_1 + 8),iVar6);
                uVar4 = (*(code *)*local_88)(&local_88,local_68);
                if ((uVar4 & 1) != 0) break;
                bVar1 = iVar2 + -1 != iVar6;
                iVar6 = iVar6 + 1;
              } while (bVar1);
            }
          }
        }
        goto LAB_02a59a74;
      }
      uVar4 = FUN_02a8ec10(param_2);
      if ((uVar4 & 1) != 0) {
        local_68[0] = 0;
        uVar4 = FUN_02b677c0(local_68,*(undefined4 *)(param_2 + 0xc));
        if ((uVar4 & 1) == 0) {
          local_68[0] = 0;
        }
        local_c0 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
        uVar3 = local_68[0];
        if (0xf < local_68[0]) {
          uVar3 = 0;
        }
        local_b8 = (undefined ***)CONCAT44(local_b8._4_4_,(&DAT_05636e58)[(int)uVar3]);
        FUN_02a59040(local_68,param_1,&local_c0);
        uVar3 = 0;
        if (local_5c != 0) goto LAB_02a59a80;
      }
    }
    else {
      local_68[0] = 0;
      uVar4 = FUN_02b673a0(local_68,*(undefined4 *)(param_2 + 0xc));
      uVar3 = local_68[0];
      local_90 = 0;
      local_68[0] = 0;
      local_98 = PTR_DAT_04bc43f8 + 0x10;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      uVar4 = FUN_02b674f0(local_68,uVar3);
      if ((uVar4 & 1) != 0) {
        local_90 = local_68[0];
      }
      local_c0 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
      local_b8 = (undefined ***)CONCAT71(local_b8._1_7_,PTR_DAT_04bbc570[8]);
      local_b8 = (undefined ***)
                 CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_b8);
      local_a8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_b0 = PTR_DAT_04bb2010 + 0x10;
      local_a0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_9c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_90 != 0) {
        ppuStack_80 = &local_98;
        local_88 = &PTR_FUN_04a9b150;
        local_78 = (undefined1 *)&local_c0;
        if (*(long *)(param_1 + 8) != 0) {
          local_78 = (undefined1 *)&local_c0;
          plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
          iVar2 = (**(code **)(*plVar5 + 0x18))();
          if (0 < iVar2) {
            iVar6 = 0;
            do {
              FUN_01360490(local_68,*(undefined8 *)(param_1 + 8),iVar6);
              uVar4 = (*(code *)*local_88)(&local_88,local_68);
              if ((uVar4 & 1) != 0) break;
              bVar1 = iVar2 + -1 != iVar6;
              iVar6 = iVar6 + 1;
            } while (bVar1);
          }
        }
      }
LAB_02a59a74:
      if (local_b8._4_4_ != 0) goto LAB_02a59a7c;
    }
    uVar3 = FUN_013618c0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  }
  else {
LAB_02a59a7c:
    uVar3 = 0;
  }
LAB_02a59a80:
  return uVar3 & 1;
}


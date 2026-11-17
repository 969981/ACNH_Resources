
uint FUN_02a59250(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  undefined **local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined *local_88;
  uint local_80;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined1 *local_68;
  uint local_58 [3];
  int local_4c;
  
  uVar3 = 0;
  if (*(long *)(param_1 + 8) == 0) goto LAB_02a595c8;
  if ((*(int *)(param_2 + 0xc) == 0) ||
     (uVar4 = FUN_013614c0(*(long *)(param_1 + 8),param_2), (uVar4 & 1) != 0)) {
LAB_02a595c4:
    uVar3 = 0;
  }
  else {
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      local_a8 = &local_78;
      local_78 = (undefined **)((ulong)local_78 & 0xffffffffffffff00);
      local_b0 = &PTR_FUN_04a9b178;
      if (*(long *)(param_1 + 8) != 0) {
        plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
        iVar2 = (**(code **)(*plVar5 + 0x18))();
        if (0 < iVar2) {
          iVar6 = 0;
          do {
            FUN_01360490(local_58,*(undefined8 *)(param_1 + 8),iVar6);
            uVar4 = (*(code *)*local_b0)(&local_b0,local_58);
            if ((uVar4 & 1) != 0) break;
            bVar1 = iVar2 + -1 != iVar6;
            iVar6 = iVar6 + 1;
          } while (bVar1);
        }
      }
      if ((char)local_78 != '\0') goto LAB_02a595c4;
    }
    uVar4 = FUN_02a8e370(param_2);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_02a8e598(param_2);
      if ((uVar4 & 1) != 0) {
        local_58[0] = 0;
        uVar4 = FUN_02b67620(local_58,*(undefined4 *)(param_2 + 0xc));
        if ((uVar4 & 1) == 0) {
          local_58[0] = 0;
        }
        local_88 = PTR_DAT_04bc43f8 + 0x10;
        local_b0 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
        local_a0 = PTR_DAT_04bb2010 + 0x10;
        uVar3 = local_58[0];
        if (9 < local_58[0]) {
          uVar3 = 0;
        }
        local_80 = (&DAT_05636e30)[(int)uVar3];
        local_a8 = (undefined ***)CONCAT71(local_a8._1_7_,PTR_DAT_04bbc570[8]);
        local_a8 = (undefined ***)
                   CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a8);
        local_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        if (local_80 != 0) {
          ppuStack_70 = &local_88;
          local_78 = &PTR_FUN_04a9b150;
          local_68 = (undefined1 *)&local_b0;
          if (*(long *)(param_1 + 8) != 0) {
            local_68 = (undefined1 *)&local_b0;
            plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
            iVar2 = (**(code **)(*plVar5 + 0x18))();
            if (0 < iVar2) {
              iVar6 = 0;
              do {
                FUN_01360490(local_58,*(undefined8 *)(param_1 + 8),iVar6);
                uVar4 = (*(code *)*local_78)(&local_78,local_58);
                if ((uVar4 & 1) != 0) break;
                bVar1 = iVar2 + -1 != iVar6;
                iVar6 = iVar6 + 1;
              } while (bVar1);
            }
          }
        }
        goto LAB_02a59564;
      }
      uVar4 = FUN_02a8e7c0(param_2);
      if (((uVar4 & 1) != 0) || (uVar4 = FUN_02a8e9e8(param_2), (uVar4 & 1) != 0)) {
        local_b0 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
        local_a8 = (undefined ***)CONCAT44(local_a8._4_4_,*(undefined4 *)(param_2 + 0xc));
        FUN_02a59040(local_58,param_1,&local_b0);
        goto joined_r0x02a595c0;
      }
      uVar4 = FUN_02a8ec10(param_2);
      if ((uVar4 & 1) != 0) {
        local_58[0] = 0;
        uVar4 = FUN_02b677c0(local_58,*(undefined4 *)(param_2 + 0xc));
        if ((uVar4 & 1) == 0) {
          local_58[0] = 0;
        }
        local_b0 = (undefined **)(PTR_DAT_04bc43f8 + 0x10);
        uVar3 = local_58[0];
        if (0xf < local_58[0]) {
          uVar3 = 0;
        }
        local_a8 = (undefined ***)CONCAT44(local_a8._4_4_,(&DAT_05636e58)[(int)uVar3]);
        FUN_02a59040(local_58,param_1,&local_b0);
        uVar3 = 0;
        if (local_4c != 0) goto LAB_02a595c8;
      }
    }
    else {
      local_58[0] = 0;
      uVar4 = FUN_02b673a0(local_58,*(undefined4 *)(param_2 + 0xc));
      uVar3 = local_58[0];
      local_80 = 0;
      local_58[0] = 0;
      local_88 = PTR_DAT_04bc43f8 + 0x10;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
      }
      uVar4 = FUN_02b674f0(local_58,uVar3);
      if ((uVar4 & 1) != 0) {
        local_80 = local_58[0];
      }
      local_b0 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
      local_a8 = (undefined ***)CONCAT71(local_a8._1_7_,PTR_DAT_04bbc570[8]);
      local_a8 = (undefined ***)
                 CONCAT44(*(undefined4 *)(PTR_DAT_04bbc570 + 0xc),(undefined4)local_a8);
      local_98 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      local_90 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_8c = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_80 != 0) {
        ppuStack_70 = &local_88;
        local_78 = &PTR_FUN_04a9b150;
        local_68 = (undefined1 *)&local_b0;
        if (*(long *)(param_1 + 8) != 0) {
          local_68 = (undefined1 *)&local_b0;
          plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10))();
          iVar2 = (**(code **)(*plVar5 + 0x18))();
          if (0 < iVar2) {
            iVar6 = 0;
            do {
              FUN_01360490(local_58,*(undefined8 *)(param_1 + 8),iVar6);
              uVar4 = (*(code *)*local_78)(&local_78,local_58);
              if ((uVar4 & 1) != 0) break;
              bVar1 = iVar2 + -1 != iVar6;
              iVar6 = iVar6 + 1;
            } while (bVar1);
          }
        }
      }
LAB_02a59564:
      local_4c = local_a8._4_4_;
joined_r0x02a595c0:
      if (local_4c != 0) goto LAB_02a595c4;
    }
    uVar3 = FUN_01360e00(*(undefined8 *)(param_1 + 8),param_2);
  }
LAB_02a595c8:
  return uVar3 & 1;
}


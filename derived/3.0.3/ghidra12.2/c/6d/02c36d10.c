
void FUN_02c36d10(long param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined **local_b8;
  char *pcStack_b0;
  undefined4 *local_a8;
  char local_98 [4];
  undefined4 local_94;
  undefined **local_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  if (param_1 != 0) {
    plVar6 = (long *)param_3[2];
    if (plVar6 != (long *)0x0) {
      uVar4 = (**(code **)(*param_2 + 0x50))(param_2);
      if ((uVar4 & 1) == 0) {
        local_90 = &PTR_LAB_04aa7fe0;
        local_88 = (undefined *)CONCAT44(local_88._4_4_,0x14);
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
        uVar9 = 0x3f800000;
      }
      else {
        local_90 = &PTR_LAB_04aa7fe0;
        local_88 = (undefined *)CONCAT44(local_88._4_4_,0x14);
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
        uVar9 = 0;
      }
      (**(code **)(plVar6[3] + 0x158))(uVar9,plVar6[1]);
    }
    plVar6 = (long *)param_3[3];
    if (plVar6 != (long *)0x0) {
      local_90 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
      (**(code **)(plVar6[3] + 0x1b8))(plVar6[1]);
    }
    plVar6 = (long *)param_3[1];
    if (plVar6 != (long *)0x0) {
      local_98[0] = '\0';
      local_94 = 0x183d0dbe;
      pcStack_b0 = local_98;
      lVar7 = *(long *)PTR_DAT_04bb5c90;
      local_b8 = &PTR_FUN_04983b68;
      local_a8 = &local_94;
      uVar3 = *(uint *)(lVar7 + 0x50);
      if ((int)uVar3 < 1) {
        uVar9 = 0;
      }
      else {
        uVar4 = 0;
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        do {
          lVar5 = *(long *)(lVar7 + 0x58);
          if (**(int **)(lVar5 + uVar4 * 8) != 0x7e3d1e46) {
            puStack_80 = &DAT_048f9750;
            local_70 = &DAT_048f9750;
            local_90 = (undefined **)CONCAT44(**(undefined4 **)(lVar5 + uVar4 * 8),(int)uVar4);
            lVar5 = *(long *)(lVar5 + uVar4 * 8);
            local_78 = *(undefined8 *)(lVar5 + 0x18);
            local_68 = *(undefined8 *)(lVar5 + 0x28);
            local_88 = puVar1;
            (*(code *)*local_b8)(&local_b8,&local_90);
          }
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
        uVar9 = 0x3f800000;
        if (local_98[0] == '\0') {
          uVar9 = 0;
        }
      }
      local_90 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x14);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
      (**(code **)(plVar6[3] + 0x158))(uVar9,plVar6[1]);
    }
    plVar6 = (long *)*param_3;
    if (plVar6 != (long *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0x68))(param_2);
      uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
      uVar2 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
      local_90 = &PTR_LAB_04aa7fe0;
      local_88._0_4_ = 9;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
      fVar8 = (float)(**(code **)(plVar6[3] + 0xb0))(plVar6[1]);
      uVar3 = uVar3 ^ uVar3 * 0x800;
      local_90 = &PTR_LAB_04aa7fe0;
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x14);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
      (**(code **)(plVar6[3] + 0x158))
                ((float)((ulong)(uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2) *
                         (ulong)(uint)(int)fVar8 >> 0x20),plVar6[1]);
    }
  }
  return;
}


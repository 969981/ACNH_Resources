
undefined8 FUN_028c871c(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long *local_78;
  long *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  long *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  lVar8 = *param_1;
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0 && lVar8 != 0) {
    uVar1 = (undefined4)param_1[2];
    uVar2 = *(undefined4 *)((long)param_1 + 0x14);
    local_78 = (long *)0x0;
    if (*(long *)(lVar8 + 0x60) == 0) {
      plStack_70 = plVar3;
      local_68 = uVar1;
      uStack_64 = uVar2;
      if (DAT_05ae7600 == 0) {
        puVar4 = malloc(0x30);
      }
      else {
        puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
      }
      puVar4[4] = 0;
      puVar4[5] = 0;
      local_50 = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined8 **)(lVar8 + 0x60) = puVar4;
      local_58 = plVar3;
      uStack_4c = uVar1;
      local_48 = uVar2;
      FUN_027b6c14(puVar4,&local_58);
      if (*(int *)(*(long *)(lVar8 + 0x60) + 0x2c) != 1) {
        return 0;
      }
      lVar8 = *param_1;
      if (*(long *)(lVar8 + 0x68) == 0) {
        if (DAT_05ae7600 == 0) {
          puVar4 = malloc(0x30);
        }
        else {
          puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
        }
        puVar4[4] = 0;
        puVar4[5] = 0;
        local_50 = 1;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined8 **)(lVar8 + 0x68) = puVar4;
        local_58 = plVar3;
        uStack_4c = uVar1;
        local_48 = uVar2;
        FUN_027b6c14(puVar4,&local_58);
        if ((*(int *)(*(long *)(lVar8 + 0x68) + 0x2c) == 1) &&
           (lVar8 = *param_1, *(long *)(lVar8 + 0x70) == 0)) {
          if (DAT_05ae7600 == 0) {
            puVar4 = malloc(0x30);
          }
          else {
            puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
          }
          puVar4[4] = 0;
          puVar4[5] = 0;
          local_50 = 2;
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined8 **)(lVar8 + 0x70) = puVar4;
          local_58 = plVar3;
          uStack_4c = uVar1;
          local_48 = uVar2;
          FUN_027b6c14(puVar4,&local_58);
          if (*(int *)(*(long *)(lVar8 + 0x70) + 0x2c) == 1) {
            local_60 = 3;
            plVar9 = (long *)(*param_1 + 0x78);
            if (*plVar9 == 0) {
              local_78 = plVar9;
              if (DAT_05ae7600 == 0) {
                puVar4 = malloc(0x30);
              }
              else {
                puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
              }
              puVar4[4] = 0;
              puVar4[5] = 0;
              local_50 = 3;
              puVar4[2] = 0;
              puVar4[3] = 0;
              *puVar4 = 0;
              puVar4[1] = 0;
              *plVar9 = (long)puVar4;
              local_58 = plVar3;
              uStack_4c = uVar1;
              local_48 = uVar2;
              FUN_027b6c14(puVar4,&local_58);
              if ((*(int *)(*plVar9 + 0x2c) == 1) &&
                 (lVar8 = *param_1, *(long *)(lVar8 + 0x80) == 0)) {
                if (DAT_05ae7600 == 0) {
                  puVar4 = malloc(0x30);
                }
                else {
                  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
                }
                puVar4[4] = 0;
                puVar4[5] = 0;
                local_50 = 4;
                puVar4[2] = 0;
                puVar4[3] = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                *(undefined8 **)(lVar8 + 0x80) = puVar4;
                local_58 = plVar3;
                uStack_4c = uVar1;
                local_48 = uVar2;
                FUN_027b6c14(puVar4,&local_58);
                if (*(int *)(*(long *)(lVar8 + 0x80) + 0x2c) == 1) {
                  uVar7 = *(uint *)(param_1 + 2);
                  uVar6 = *(uint *)((long)param_1 + 0x14);
                  if ((0x70005 < uVar7) && (0x70000 < uVar6)) {
                    local_60 = 5;
                    local_78 = (long *)(*param_1 + 0x90);
                    uVar5 = FUN_028c8ba0(&local_78);
                    if ((uVar5 & 1) == 0) {
                      return 0;
                    }
                    uVar7 = *(uint *)(param_1 + 2);
                    uVar6 = *(uint *)((long)param_1 + 0x14);
                  }
                  if ((0x80084 < uVar7) && (0x80008 < uVar6)) {
                    local_60 = 6;
                    local_78 = (long *)(*param_1 + 0x88);
                    uVar5 = FUN_028c8ba0(&local_78);
                    if ((uVar5 & 1) == 0) {
                      return 0;
                    }
                  }
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



void FUN_01b9ca48(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined6 uStack_38;
  undefined2 local_32;
  undefined6 uStack_30;
  undefined8 local_28;
  
  iVar2 = *(int *)(param_1 + 0xa88);
  if (0 < iVar2) {
    iVar3 = *(int *)(param_2 + 2);
    if (*(int *)(param_1 + 0x170) == iVar3) {
      puVar5 = (undefined4 *)(param_1 + 8);
    }
    else {
      if (iVar2 == 1) {
        return;
      }
      if (*(int *)(param_1 + 0x2f0) == iVar3) {
        puVar5 = (undefined4 *)(param_1 + 0x188);
      }
      else {
        if (iVar2 == 2) {
          return;
        }
        if (*(int *)(param_1 + 0x470) == iVar3) {
          puVar5 = (undefined4 *)(param_1 + 0x308);
        }
        else {
          if (iVar2 == 3) {
            return;
          }
          if (*(int *)(param_1 + 0x5f0) == iVar3) {
            puVar5 = (undefined4 *)(param_1 + 0x488);
          }
          else {
            if (iVar2 == 4) {
              return;
            }
            if (*(int *)(param_1 + 0x770) == iVar3) {
              puVar5 = (undefined4 *)(param_1 + 0x608);
            }
            else {
              if (iVar2 == 5) {
                return;
              }
              if (*(int *)(param_1 + 0x8f0) == iVar3) {
                puVar5 = (undefined4 *)(param_1 + 0x788);
              }
              else {
                if (iVar2 == 6) {
                  return;
                }
                if (*(int *)(param_1 + 0xa70) != iVar3) {
                  return;
                }
                puVar5 = (undefined4 *)(param_1 + 0x908);
              }
            }
          }
        }
      }
    }
    *puVar5 = 0xffffffff;
    (**(code **)(*(long *)(puVar5 + 2) + 0x38))();
    *(undefined8 *)(puVar5 + 0x5a) = 0;
    puVar5[0x5d] = 0;
    uVar4 = *(undefined4 *)(param_2 + 2);
    uVar1 = *(undefined4 *)((long)param_2 + 0x14);
    *puVar5 = *(undefined4 *)(param_2 + 3);
    puVar5[0x5a] = uVar4;
    puVar5[0x5b] = uVar1;
    FUN_01b9be60(puVar5,param_2);
    local_28 = 0;
    uStack_48 = *param_2;
    uStack_58 = param_2[1];
    local_40 = 0;
    uStack_38 = 0;
    local_32 = 0;
    uStack_30 = 0;
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_50 = local_60;
    FUN_01b970f0(&local_40,&local_50);
    FUN_01b9735c(&local_40,&local_50,&local_60);
    uVar4 = FUN_01b97400(&local_40);
    puVar5[0x5c] = uVar4;
  }
  return;
}


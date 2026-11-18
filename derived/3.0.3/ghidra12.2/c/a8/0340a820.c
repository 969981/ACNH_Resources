
undefined8 FUN_0340a820(uint *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  byte local_70 [8];
  undefined **local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 *local_50;
  uint *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  byte local_14 [4];
  
  uVar5 = param_1[6];
  if ((int)uVar5 < 1) {
    return 1;
  }
  if ((*(int *)(DAT_05690d38 + 0x1f0) == -1 && *(int *)(DAT_05690d38 + 500) == -1) &&
      *(uint *)(DAT_05690d38 + 0x1b0) < 2) {
    uVar6 = *param_1;
    if ((int)uVar6 < 1) {
      do {
        if (uVar6 < uVar5) {
          uVar5 = 0;
          if ((int)param_1[4] <= (int)(param_1[5] + uVar6)) {
            uVar5 = param_1[4];
          }
          lVar3 = *(long *)(param_1 + 2) + (long)(int)((param_1[5] + uVar6) - uVar5) * 0x80;
        }
        else {
          lVar3 = 0;
        }
        uVar4 = (*(code *)**(undefined8 **)(lVar3 + 0x40))();
        uVar6 = *param_1;
        if ((uVar4 & 1) != 0) {
          if (uVar6 < param_1[6]) {
            uVar5 = 0;
            if ((int)param_1[4] <= (int)(param_1[5] + uVar6)) {
              uVar5 = param_1[4];
            }
            if (*(long *)(param_1 + 2) != 0) {
              puVar1 = param_1 + 0x208;
              lVar3 = *(long *)(param_1 + 2) + (long)(int)((param_1[5] + uVar6) - uVar5) * 0x80;
              local_68 = &PTR_LAB_048f9770;
              local_58 = &PTR_LAB_048f9770;
              local_3c = 0;
              local_50 = &DAT_0419b684;
              local_40 = 0x10101;
              uVar4 = (**(code **)(*(long *)(param_1 + 0x208) + 8))(puVar1);
              if ((uVar4 & 1) == 0) {
                FUN_025196e4(local_14);
              }
              else {
                (*(code *)**(undefined8 **)puVar1)(local_14,puVar1);
              }
              if (7 < local_14[0]) {
                local_14[0] = 0xff;
              }
              local_60 = *(undefined8 *)(lVar3 + 8);
              local_38 = *(undefined4 *)(lVar3 + 0x38);
              local_3b = (undefined1)param_1[0x222];
              local_70[0] = local_14[0];
              (*(code *)**(undefined8 **)(lVar3 + 0x60))((undefined8 *)(lVar3 + 0x60));
              uVar5 = param_1[0x210] + 1 & 1;
              uVar6 = -uVar5;
              if (-2 < (int)param_1[0x210]) {
                uVar6 = uVar5;
              }
              param_1[0x210] = uVar6;
              local_48 = param_1 + 0x212 + (ulong)uVar6 * 8;
              if (1 < uVar6) {
                local_48 = param_1 + 0x212;
              }
              *(undefined ***)local_48 = &PTR_LAB_04b29a40;
              *(uint **)(local_48 + 2) = param_1;
              FUN_02dfa0f8(local_70);
              goto LAB_0340a868;
            }
          }
          break;
        }
        uVar6 = uVar6 + 1;
        uVar5 = param_1[6];
        *param_1 = uVar6;
      } while ((int)uVar6 < (int)uVar5);
    }
    uVar2 = 1;
  }
  else {
LAB_0340a868:
    uVar2 = 0;
  }
  return uVar2;
}


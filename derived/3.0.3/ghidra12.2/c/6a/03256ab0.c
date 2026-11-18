
uint FUN_03256ab0(long *param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  pcVar2 = (char *)param_1[1];
  if (pcVar2 != "AttendFishingConvention") {
    if (*pcVar2 == 'A') {
      uVar3 = 0;
      do {
        uVar1 = uVar3;
        if ((uVar1 == 0x80000) || (pcVar2[uVar1 + 1] != "AttendFishingConvention"[uVar1 + 1]))
        goto LAB_03256b34;
        uVar3 = uVar1 + 1;
      } while (pcVar2[uVar1 + 1] != '\0');
      if (uVar1 < 0x80000) {
        return 1;
      }
    }
LAB_03256b34:
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    pcVar2 = (char *)param_1[1];
    if (pcVar2 != "AttendInsectConvention") {
      if (*pcVar2 == 'A') {
        uVar3 = 0;
        do {
          uVar1 = uVar3;
          if ((uVar1 == 0x80000) || (pcVar2[uVar1 + 1] != "AttendInsectConvention"[uVar1 + 1]))
          goto LAB_03256bb0;
          uVar3 = uVar1 + 1;
        } while (pcVar2[uVar1 + 1] != '\0');
        if (uVar1 < 0x80000) {
          return 1;
        }
      }
LAB_03256bb0:
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pcVar2 = (char *)param_1[1];
      if (pcVar2 != "PlantFruit") {
        if (*pcVar2 == 'P') {
          uVar3 = 0;
          do {
            uVar1 = uVar3;
            if ((uVar1 == 0x80000) || (pcVar2[uVar1 + 1] != "PlantFruit"[uVar1 + 1]))
            goto LAB_03256c30;
            uVar3 = uVar1 + 1;
          } while (pcVar2[uVar1 + 1] != '\0');
          if (uVar1 < 0x80000) {
            return 1;
          }
        }
LAB_03256c30:
        (**(code **)(*param_1 + 0x18))(param_1);
        (**(code **)(*param_1 + 0x18))(param_1);
        pcVar2 = (char *)param_1[1];
        if (pcVar2 != "CollectGoldTool") {
          if (*pcVar2 == 'C') {
            uVar3 = 0;
            do {
              uVar1 = uVar3;
              if ((uVar1 == 0x80000) || (pcVar2[uVar1 + 1] != "CollectGoldTool"[uVar1 + 1]))
              goto LAB_03256cb0;
              uVar3 = uVar1 + 1;
            } while (pcVar2[uVar1 + 1] != '\0');
            if (uVar1 < 0x80000) {
              return 1;
            }
          }
LAB_03256cb0:
          (**(code **)(*param_1 + 0x18))(param_1);
          (**(code **)(*param_1 + 0x18))(param_1);
          pcVar2 = (char *)param_1[1];
          if (pcVar2 != "ChangeSymbol") {
            if (*pcVar2 == 'C') {
              uVar3 = 0;
              do {
                uVar1 = uVar3;
                if ((uVar1 == 0x80000) || (pcVar2[uVar1 + 1] != "ChangeSymbol"[uVar1 + 1]))
                goto LAB_03256d30;
                uVar3 = uVar1 + 1;
              } while (pcVar2[uVar1 + 1] != '\0');
              if (uVar1 < 0x80000) {
                return 1;
              }
            }
LAB_03256d30:
            (**(code **)(*param_1 + 0x18))(param_1);
            (**(code **)(*param_1 + 0x18))(param_1);
            pcVar2 = (char *)param_1[1];
            if (pcVar2 != "ModifyIsland") {
              if (*pcVar2 != 'M') {
                return 0;
              }
              uVar3 = 0;
              do {
                uVar1 = uVar3;
                uVar3 = uVar1;
                if (uVar1 == 0x80000) goto LAB_03256dcc;
                if (pcVar2[uVar1 + 1] != "ModifyIsland"[uVar1 + 1]) {
                  uVar3 = 0;
                  goto LAB_03256dcc;
                }
                uVar3 = uVar1 + 1;
              } while (pcVar2[uVar1 + 1] != '\0');
              uVar3 = 1;
LAB_03256dcc:
              return (uint)(uVar1 < 0x80000) & (uint)uVar3;
            }
          }
        }
      }
    }
  }
  return 1;
}


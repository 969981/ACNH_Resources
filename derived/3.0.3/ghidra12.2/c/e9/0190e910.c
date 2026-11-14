
uint FUN_0190e910(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  
  uVar5 = FUN_03eaa1d8(param_2,&local_48);
  puVar2 = PTR_DAT_04bbf758;
  puVar1 = PTR_DAT_04bb2020;
  if ((uVar5 & 1) != 0) {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = local_48;
    if (local_48 == PTR_DAT_04bbf758) {
LAB_0190e9b0:
      uVar8 = 0;
    }
    else {
      uVar7 = 0;
      bVar4 = true;
      do {
        if (local_48[uVar7] != PTR_DAT_04bbf758[uVar7]) break;
        if (local_48[uVar7] == '\0') {
          if (bVar4) goto LAB_0190e9b0;
          break;
        }
        bVar4 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      if (local_48 == PTR_DAT_04bbf758 + 5) {
LAB_0190ea04:
        uVar8 = 1;
      }
      else {
        uVar7 = 0;
        bVar4 = true;
        do {
          if (local_48[uVar7] != PTR_DAT_04bbf758[uVar7 + 5]) break;
          if (local_48[uVar7] == '\0') {
            if (bVar4) goto LAB_0190ea04;
            break;
          }
          bVar4 = uVar7 < 0x80000;
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x80001);
        if (local_48 == PTR_DAT_04bbf758 + 10) {
LAB_0190ea54:
          uVar8 = 2;
        }
        else {
          uVar7 = 0;
          bVar4 = true;
          do {
            if (local_48[uVar7] != PTR_DAT_04bbf758[uVar7 + 10]) break;
            if (local_48[uVar7] == '\0') {
              if (bVar4) goto LAB_0190ea54;
              break;
            }
            bVar4 = uVar7 < 0x80000;
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x80001);
          local_68 = PTR_DAT_04bb2020 + 0x10;
          local_60 = PTR_DAT_04bbf758 + 0x12;
          FUN_006bd3a4(&local_58);
          (**(code **)(local_58 + 0x18))(&local_58);
          puVar3 = local_50;
          FUN_006bd3a4(&local_68);
          if (puVar3 == local_60) {
LAB_0190ead4:
            uVar8 = 3;
          }
          else {
            uVar7 = 0;
            bVar4 = true;
            do {
              if (local_50[uVar7] != local_60[uVar7]) break;
              if (local_50[uVar7] == '\0') {
                if (bVar4) goto LAB_0190ead4;
                break;
              }
              bVar4 = uVar7 < 0x80000;
              uVar7 = uVar7 + 1;
            } while (uVar7 != 0x80001);
            local_68 = puVar1 + 0x10;
            local_60 = puVar2 + 0x20;
            (**(code **)(local_58 + 0x18))(&local_58);
            (**(code **)(local_58 + 0x18))(&local_58);
            puVar3 = local_50;
            (**(code **)(local_68 + 0x18))(&local_68);
            if (puVar3 == local_60) {
LAB_0190eb64:
              uVar8 = 4;
            }
            else {
              uVar7 = 0;
              bVar4 = true;
              do {
                if (local_50[uVar7] != local_60[uVar7]) break;
                if (local_50[uVar7] == '\0') {
                  if (bVar4) goto LAB_0190eb64;
                  break;
                }
                bVar4 = uVar7 < 0x80000;
                uVar7 = uVar7 + 1;
              } while (uVar7 != 0x80001);
              local_68 = puVar1 + 0x10;
              local_60 = puVar2 + 0x34;
              (**(code **)(local_58 + 0x18))(&local_58);
              (**(code **)(local_58 + 0x18))(&local_58);
              puVar3 = local_50;
              (**(code **)(local_68 + 0x18))(&local_68);
              if (puVar3 == local_60) {
LAB_0190ebf4:
                uVar8 = 5;
              }
              else {
                uVar7 = 0;
                bVar4 = true;
                do {
                  if (local_50[uVar7] != local_60[uVar7]) break;
                  if (local_50[uVar7] == '\0') {
                    if (bVar4) goto LAB_0190ebf4;
                    break;
                  }
                  bVar4 = uVar7 < 0x80000;
                  uVar7 = uVar7 + 1;
                } while (uVar7 != 0x80001);
                local_68 = puVar1 + 0x10;
                local_60 = puVar2 + 0x3c;
                (**(code **)(local_58 + 0x18))(&local_58);
                (**(code **)(local_58 + 0x18))(&local_58);
                puVar1 = local_50;
                (**(code **)(local_68 + 0x18))(&local_68);
                if (puVar1 != local_60) {
                  uVar7 = 0;
                  bVar4 = true;
                  do {
                    if (local_50[uVar7] != local_60[uVar7]) break;
                    if (local_50[uVar7] == '\0') {
                      if (bVar4) goto LAB_0190ec84;
                      break;
                    }
                    bVar4 = uVar7 < 0x80000;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 != 0x80001);
                  goto LAB_0190ec9c;
                }
LAB_0190ec84:
                uVar8 = 6;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
    *puVar6 = uVar8;
  }
LAB_0190ec9c:
  return uVar5 & 1;
}


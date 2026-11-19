
uint FUN_03c488d0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_28;
  
  uVar4 = FUN_03eaa1d8(param_2,&local_28);
  puVar2 = PTR_DAT_04bd2ed8;
  puVar1 = PTR_DAT_04bb2020;
  if ((uVar4 & 1) != 0) {
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = local_28;
    if (local_28 == PTR_DAT_04bd2ed8) {
LAB_03c48970:
      uVar7 = 0;
    }
    else {
      uVar6 = 0;
      bVar3 = true;
      do {
        if (local_28[uVar6] != PTR_DAT_04bd2ed8[uVar6]) break;
        if (local_28[uVar6] == '\0') {
          if (bVar3) goto LAB_03c48970;
          break;
        }
        bVar3 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      if (local_28 == PTR_DAT_04bd2ed8 + 5) {
LAB_03c489c4:
        uVar7 = 1;
      }
      else {
        uVar6 = 0;
        bVar3 = true;
        do {
          if (local_28[uVar6] != PTR_DAT_04bd2ed8[uVar6 + 5]) break;
          if (local_28[uVar6] == '\0') {
            if (bVar3) goto LAB_03c489c4;
            break;
          }
          bVar3 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        if (local_28 == PTR_DAT_04bd2ed8 + 0xc) {
LAB_03c48a14:
          uVar7 = 2;
        }
        else {
          uVar6 = 0;
          bVar3 = true;
          do {
            if (local_28[uVar6] != PTR_DAT_04bd2ed8[uVar6 + 0xc]) break;
            if (local_28[uVar6] == '\0') {
              if (bVar3) goto LAB_03c48a14;
              break;
            }
            bVar3 = uVar6 < 0x80000;
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x80001);
          FUN_006bd3a4(&local_50);
          if (local_48 == puVar2 + 0x12) {
LAB_03c48a74:
            uVar7 = 3;
          }
          else {
            uVar6 = 0;
            bVar3 = true;
            do {
              if (local_48[uVar6] != puVar2[uVar6 + 0x12]) break;
              if (local_48[uVar6] == '\0') {
                if (bVar3) goto LAB_03c48a74;
                break;
              }
              bVar3 = uVar6 < 0x80000;
              uVar6 = uVar6 + 1;
            } while (uVar6 != 0x80001);
            (**(code **)(local_50 + 0x18))(&local_50);
            (**(code **)(local_50 + 0x18))(&local_50);
            if (local_48 == puVar2 + 0x18) {
LAB_03c48ae8:
              uVar7 = 4;
            }
            else {
              uVar6 = 0;
              bVar3 = true;
              do {
                if (local_48[uVar6] != puVar2[uVar6 + 0x18]) break;
                if (local_48[uVar6] == '\0') {
                  if (bVar3) goto LAB_03c48ae8;
                  break;
                }
                bVar3 = uVar6 < 0x80000;
                uVar6 = uVar6 + 1;
              } while (uVar6 != 0x80001);
              local_60 = puVar1 + 0x10;
              local_58 = puVar2 + 0x1f;
              (**(code **)(local_50 + 0x18))(&local_50);
              (**(code **)(local_50 + 0x18))(&local_50);
              puVar1 = local_48;
              FUN_006bd3a4(&local_60);
              if (puVar1 != local_58) {
                uVar6 = 0;
                bVar3 = true;
                do {
                  if (local_48[uVar6] != local_58[uVar6]) break;
                  if (local_48[uVar6] == '\0') {
                    if (bVar3) goto LAB_03c48b70;
                    break;
                  }
                  bVar3 = uVar6 < 0x80000;
                  uVar6 = uVar6 + 1;
                } while (uVar6 != 0x80001);
                goto LAB_03c48b88;
              }
LAB_03c48b70:
              uVar7 = 5;
            }
          }
        }
      }
    }
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
    *puVar5 = uVar7;
  }
LAB_03c48b88:
  return uVar4 & 1;
}


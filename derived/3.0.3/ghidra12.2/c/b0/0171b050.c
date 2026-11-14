
uint FUN_0171b050(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  
  uVar3 = FUN_03eaa1d8(param_2,&local_38);
  puVar1 = PTR_s_cSmall_04bbdfe0;
  if ((uVar3 & 1) != 0) {
    local_48 = PTR_DAT_04bb2020 + 0x10;
    local_40 = local_38;
    if (local_38 == PTR_s_cSmall_04bbdfe0) {
LAB_0171b0e4:
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      bVar2 = true;
      do {
        if (local_38[uVar5] != PTR_s_cSmall_04bbdfe0[uVar5]) break;
        if (local_38[uVar5] == '\0') {
          if (bVar2) goto LAB_0171b0e4;
          break;
        }
        bVar2 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      if (local_38 == PTR_s_cSmall_04bbdfe0 + 9) {
LAB_0171b134:
        uVar6 = 1;
      }
      else {
        uVar5 = 0;
        bVar2 = true;
        do {
          if (local_38[uVar5] != PTR_s_cSmall_04bbdfe0[uVar5 + 9]) break;
          if (local_38[uVar5] == '\0') {
            if (bVar2) goto LAB_0171b134;
            break;
          }
          bVar2 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x80001);
        if (local_38 == PTR_s_cSmall_04bbdfe0 + 0x13) {
LAB_0171b184:
          uVar6 = 2;
        }
        else {
          uVar5 = 0;
          bVar2 = true;
          do {
            if (local_38[uVar5] != PTR_s_cSmall_04bbdfe0[uVar5 + 0x13]) break;
            if (local_38[uVar5] == '\0') {
              if (bVar2) goto LAB_0171b184;
              break;
            }
            bVar2 = uVar5 < 0x80000;
            uVar5 = uVar5 + 1;
          } while (uVar5 != 0x80001);
          if (local_38 == PTR_s_cSmall_04bbdfe0 + 0x1c) {
LAB_0171b1d4:
            uVar6 = 3;
          }
          else {
            uVar5 = 0;
            bVar2 = true;
            do {
              if (local_38[uVar5] != PTR_s_cSmall_04bbdfe0[uVar5 + 0x1c]) break;
              if (local_38[uVar5] == '\0') {
                if (bVar2) goto LAB_0171b1d4;
                break;
              }
              bVar2 = uVar5 < 0x80000;
              uVar5 = uVar5 + 1;
            } while (uVar5 != 0x80001);
            FUN_006bd3a4(&local_48);
            (**(code **)(local_48 + 0x18))(&local_48);
            if (local_40 != puVar1 + 0x2a) {
              uVar5 = 0;
              bVar2 = true;
              do {
                if (local_40[uVar5] != puVar1[uVar5 + 0x2a]) break;
                if (local_40[uVar5] == '\0') {
                  if (bVar2) goto LAB_0171b244;
                  break;
                }
                bVar2 = uVar5 < 0x80000;
                uVar5 = uVar5 + 1;
              } while (uVar5 != 0x80001);
              goto LAB_0171b25c;
            }
LAB_0171b244:
            uVar6 = 4;
          }
        }
      }
    }
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0xf0))(param_1);
    *puVar4 = uVar6;
  }
LAB_0171b25c:
  return uVar3 & 1;
}


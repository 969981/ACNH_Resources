
void FUN_03b2a980(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_60;
  char *local_58;
  undefined *local_50;
  char *local_48;
  
  FUN_03b21830();
  lVar3 = FUN_0037e610(*(undefined8 *)(param_3 + 0x18),"UniteButtonType");
  if ((lVar3 != 0) || (lVar3 = FUN_00364ec0(param_2,"UniteButtonType"), lVar3 != 0)) {
    puVar1 = PTR_DAT_04bb2020;
    local_48 = (char *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
    local_50 = PTR_DAT_04bb2020 + 0x10;
    if (local_48 == s_CheckButton_04b74c50) {
LAB_03b2aa40:
      iVar5 = 0;
    }
    else {
      uVar6 = 0;
      bVar2 = true;
      do {
        if (local_48[uVar6] != s_CheckButton_04b74c50[uVar6]) break;
        if (local_48[uVar6] == '\0') {
          if (bVar2) goto LAB_03b2aa40;
          break;
        }
        bVar2 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      if (local_48 == s_CheckKeepButton_04b74c5d) {
LAB_03b2aa94:
        iVar5 = 1;
      }
      else {
        uVar6 = 0;
        bVar2 = true;
        do {
          if (local_48[uVar6] != s_CheckKeepButton_04b74c5d[uVar6]) break;
          if (local_48[uVar6] == '\0') {
            if (bVar2) goto LAB_03b2aa94;
            break;
          }
          bVar2 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        if (local_48 == s_DecisionButton_04b74c6e) {
LAB_03b2aae8:
          iVar5 = 2;
        }
        else {
          uVar6 = 0;
          bVar2 = true;
          do {
            if (local_48[uVar6] != s_DecisionButton_04b74c6e[uVar6]) break;
            if (local_48[uVar6] == '\0') {
              if (bVar2) goto LAB_03b2aae8;
              break;
            }
            bVar2 = uVar6 < 0x80000;
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x80001);
          local_60 = PTR_DAT_04bb2020 + 0x10;
          local_58 = s_DragButton_04b74c7e;
          FUN_006bd3a4(&local_50);
          (**(code **)(local_50 + 0x18))(&local_50);
          pcVar4 = local_48;
          (**(code **)(local_60 + 0x18))(&local_60);
          if (pcVar4 == local_58) {
LAB_03b2ab74:
            iVar5 = 3;
          }
          else {
            uVar6 = 0;
            bVar2 = true;
            do {
              if (local_48[uVar6] != local_58[uVar6]) break;
              if (local_48[uVar6] == '\0') {
                if (bVar2) goto LAB_03b2ab74;
                break;
              }
              bVar2 = uVar6 < 0x80000;
              uVar6 = uVar6 + 1;
            } while (uVar6 != 0x80001);
            local_60 = puVar1 + 0x10;
            local_58 = s_NormalButton_04b74c8a;
            (**(code **)(local_50 + 0x18))(&local_50);
            (**(code **)(local_50 + 0x18))(&local_50);
            pcVar4 = local_48;
            (**(code **)(local_60 + 0x18))(&local_60);
            if (pcVar4 == local_58) {
LAB_03b2ac10:
              iVar5 = 4;
            }
            else {
              uVar6 = 0;
              bVar2 = true;
              do {
                if (local_48[uVar6] != local_58[uVar6]) break;
                if (local_48[uVar6] == '\0') {
                  if (bVar2) goto LAB_03b2ac10;
                  break;
                }
                bVar2 = uVar6 < 0x80000;
                uVar6 = uVar6 + 1;
              } while (uVar6 != 0x80001);
              local_60 = puVar1 + 0x10;
              local_58 = s_SelectButton_04b74c98;
              (**(code **)(local_50 + 0x18))(&local_50);
              (**(code **)(local_50 + 0x18))(&local_50);
              pcVar4 = local_48;
              (**(code **)(local_60 + 0x18))(&local_60);
              if (pcVar4 != local_58) {
                uVar6 = 0;
                bVar2 = true;
                do {
                  if (local_48[uVar6] != local_58[uVar6]) break;
                  if (local_48[uVar6] == '\0') {
                    if (bVar2) goto LAB_03b2aca4;
                    break;
                  }
                  bVar2 = uVar6 < 0x80000;
                  uVar6 = uVar6 + 1;
                } while (uVar6 != 0x80001);
                goto LAB_03b2ace0;
              }
LAB_03b2aca4:
              iVar5 = 5;
            }
          }
        }
      }
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar5);
    *(char *)(param_1 + 0x88) = (char)iVar5;
    *(uint *)(param_1 + 0x40) =
         (uint)(iVar5 == 2) << 5 | (uint)(iVar5 == 3) << 10 | *(uint *)(param_1 + 0x40) & 0xfffffbdf
    ;
  }
LAB_03b2ace0:
  pcVar4 = (char *)FUN_00364e30(param_2,"Check");
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    lVar3 = FUN_03b185ec(param_3,pcVar4,1);
    *(long *)(param_1 + 0x68) = lVar3;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) | 0x10;
      *(byte *)(*(long *)(param_1 + 0x68) + 0x57) =
           *(byte *)(*(long *)(param_1 + 0x68) + 0x57) & 0xdf;
    }
  }
  pcVar4 = (char *)FUN_00364e30(param_2,"DragOnOff");
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    lVar3 = FUN_03b185ec(param_3,pcVar4,1);
    *(long *)(param_1 + 0x70) = lVar3;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x57) = *(byte *)(lVar3 + 0x57) | 0x10;
      *(byte *)(*(long *)(param_1 + 0x70) + 0x57) =
           *(byte *)(*(long *)(param_1 + 0x70) + 0x57) & 0xdf;
    }
  }
  return;
}


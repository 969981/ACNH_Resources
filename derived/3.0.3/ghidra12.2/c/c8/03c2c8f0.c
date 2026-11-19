
undefined8 FUN_03c2c8f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_58;
  char *local_50;
  undefined4 local_48;
  char local_44 [31];
  undefined1 local_25;
  
  local_25 = 0;
  local_48 = 0x20;
  local_44[0] = '\0';
  local_50 = local_44;
  local_58 = PTR_DAT_04bb2028 + 0x10;
  FUN_038b6c10(&local_58);
  (**(code **)(local_58 + 0x18))(&local_58);
  (**(code **)(local_58 + 0x18))(&local_58);
  if (local_50 != "pack") {
    if (*local_50 == 'p') {
      lVar3 = 0;
      do {
        if ((lVar3 == 0x80000) || (lVar1 = lVar3 + 1, local_50[lVar1] != (&DAT_040fc3d3)[lVar3]))
        goto LAB_03c2c9a8;
        lVar3 = lVar3 + 1;
      } while (local_50[lVar1] != '\0');
    }
    else {
LAB_03c2c9a8:
      (**(code **)(local_58 + 0x18))(&local_58);
      (**(code **)(local_58 + 0x18))(&local_58);
      if (local_50 != "szs") {
        if (*local_50 == 's') {
          lVar3 = 0;
          do {
            if ((lVar3 == 0x80000) || (lVar1 = lVar3 + 1, local_50[lVar1] != (&DAT_040ad2e6)[lVar3])
               ) goto LAB_03c2ca18;
            lVar3 = lVar3 + 1;
          } while (local_50[lVar1] != '\0');
        }
        else {
LAB_03c2ca18:
          (**(code **)(local_58 + 0x18))(&local_58);
          (**(code **)(local_58 + 0x18))(&local_58);
          if (local_50 != "sarc") {
            if (*local_50 == 's') {
              lVar3 = 0;
              do {
                if ((lVar3 == 0x80000) ||
                   (lVar1 = lVar3 + 1, local_50[lVar1] != (&DAT_040ee614)[lVar3]))
                goto LAB_03c2ca88;
                lVar3 = lVar3 + 1;
              } while (local_50[lVar1] != '\0');
            }
            else {
LAB_03c2ca88:
              (**(code **)(local_58 + 0x18))(&local_58);
              (**(code **)(local_58 + 0x18))(&local_58);
              if (local_50 != "zs") {
                if (*local_50 == 'z') {
                  uVar2 = 0;
                  do {
                    uVar4 = uVar2;
                    if (uVar4 == 0x80000) {
                      return 0;
                    }
                    if (local_50[uVar4 + 1] != (&DAT_040a58fb)[uVar4]) {
                      return 0;
                    }
                    uVar2 = uVar4 + 1;
                  } while (local_50[uVar4 + 1] != '\0');
                  if (uVar4 >> 0x13 == 0) goto LAB_03c2cb00;
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_03c2cb00:
  return *(undefined8 *)(param_1 + 0x340);
}


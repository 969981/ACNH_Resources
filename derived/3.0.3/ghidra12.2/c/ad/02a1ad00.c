
void FUN_02a1ad00(undefined4 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined *local_40;
  undefined *puStack_38;
  
  *param_1 = 0xffffffff;
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((undefined1 *)param_2[1] == &DAT_040fffec) {
LAB_02a1ada0:
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    bVar4 = true;
    do {
      cVar3 = ((undefined1 *)param_2[1])[uVar6];
      if (cVar3 != (&DAT_040fffec)[uVar6]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_02a1ada0;
        break;
      }
      bVar4 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((undefined1 *)param_2[1] == &DAT_040f5dc2) {
LAB_02a1ae14:
      uVar5 = 1;
    }
    else {
      uVar6 = 0;
      bVar4 = true;
      do {
        cVar3 = ((undefined1 *)param_2[1])[uVar6];
        if (cVar3 != (&DAT_040f5dc2)[uVar6]) break;
        if (cVar3 == '\0') {
          if (bVar4) goto LAB_02a1ae14;
          break;
        }
        bVar4 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      if ((undefined1 *)param_2[1] == &DAT_040ead79) {
LAB_02a1ae90:
        uVar5 = 2;
      }
      else {
        uVar6 = 0;
        bVar4 = true;
        do {
          cVar3 = ((undefined1 *)param_2[1])[uVar6];
          if (cVar3 != (&DAT_040ead79)[uVar6]) break;
          if (cVar3 == '\0') {
            if (bVar4) goto LAB_02a1ae90;
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        if ((undefined1 *)param_2[1] == &DAT_040e06f6) {
LAB_02a1af04:
          uVar5 = 3;
        }
        else {
          uVar6 = 0;
          bVar4 = true;
          do {
            cVar3 = ((undefined1 *)param_2[1])[uVar6];
            if (cVar3 != (&DAT_040e06f6)[uVar6]) break;
            if (cVar3 == '\0') {
              if (bVar4) goto LAB_02a1af04;
              break;
            }
            bVar4 = uVar6 < 0x80000;
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x80001);
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          if ((undefined1 *)param_2[1] == &DAT_040b1dec) {
LAB_02a1af80:
            uVar5 = 4;
          }
          else {
            uVar6 = 0;
            bVar4 = true;
            do {
              cVar3 = ((undefined1 *)param_2[1])[uVar6];
              if (cVar3 != (&DAT_040b1dec)[uVar6]) break;
              if (cVar3 == '\0') {
                if (bVar4) goto LAB_02a1af80;
                break;
              }
              bVar4 = uVar6 < 0x80000;
              uVar6 = uVar6 + 1;
            } while (uVar6 != 0x80001);
            (**(code **)(*param_2 + 0x18))(param_2);
            (**(code **)(*param_2 + 0x18))(param_2);
            puVar2 = PTR_DAT_04bb2020;
            if ((undefined1 *)param_2[1] == &DAT_0407d62f) {
LAB_02a1aff4:
              uVar5 = 5;
            }
            else {
              uVar6 = 0;
              bVar4 = true;
              do {
                cVar3 = ((undefined1 *)param_2[1])[uVar6];
                if (cVar3 != (&DAT_0407d62f)[uVar6]) break;
                if (cVar3 == '\0') {
                  if (bVar4) goto LAB_02a1aff4;
                  break;
                }
                bVar4 = uVar6 < 0x80000;
                uVar6 = uVar6 + 1;
              } while (uVar6 != 0x80001);
              puVar1 = PTR_DAT_04bb2020 + 0x10;
              puStack_38 = &DAT_040d5fbc;
              local_40 = puVar1;
              uVar6 = FUN_00710cb0(param_2,&local_40);
              if ((uVar6 & 1) == 0) {
                puStack_38 = &DAT_040d5fc1;
                local_40 = puVar1;
                uVar6 = FUN_00710cb0(param_2,&local_40);
                if ((uVar6 & 1) == 0) {
                  puVar1 = puVar2 + 0x10;
                  puStack_38 = &DAT_040e5d0e;
                  local_40 = puVar1;
                  uVar6 = FUN_00710cb0(param_2,&local_40);
                  if ((uVar6 & 1) == 0) {
                    puStack_38 = &DAT_040db435;
                    local_40 = puVar1;
                    uVar6 = FUN_00710cb0(param_2,&local_40);
                    if ((uVar6 & 1) == 0) {
                      puVar2 = puVar2 + 0x10;
                      puStack_38 = &DAT_0409d3f4;
                      local_40 = puVar2;
                      uVar6 = FUN_00710cb0(param_2,&local_40);
                      if ((uVar6 & 1) == 0) {
                        puStack_38 = &DAT_0406363a;
                        local_40 = puVar2;
                        uVar6 = FUN_00710cb0(param_2,&local_40);
                        if ((uVar6 & 1) == 0) {
                          return;
                        }
                        uVar5 = 0xb;
                      }
                      else {
                        uVar5 = 10;
                      }
                    }
                    else {
                      uVar5 = 9;
                    }
                  }
                  else {
                    uVar5 = 8;
                  }
                }
                else {
                  uVar5 = 7;
                }
              }
              else {
                uVar5 = 6;
              }
            }
          }
        }
      }
    }
  }
  *param_1 = uVar5;
  return;
}


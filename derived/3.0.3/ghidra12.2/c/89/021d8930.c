
undefined8 FUN_021d8930(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined1 *local_68;
  int local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  
  local_55 = 0;
  local_60 = 8;
  local_68 = local_5c;
  local_5c[0] = 0;
  local_70 = PTR_DAT_04bb3768 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb4138;
  if (lVar7 != 0) {
    (**(code **)(*param_1 + 0x18))();
    uVar5 = FUN_006bd550(param_1[1],0);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar5);
    lVar7 = FUN_0079e770(lVar7,&local_80);
    puVar3 = local_68;
    if (lVar7 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      if (puVar3 != (undefined1 *)param_1[1]) {
        iVar1 = 3;
        if (local_60 < 4) {
          iVar1 = local_60 + -1;
        }
        memcpy(puVar3,(undefined1 *)param_1[1],(long)iVar1);
        puVar3[iVar1] = 0;
      }
      puVar2 = PTR_DAT_04bb2020;
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_78 = &DAT_040f53a7;
      (**(code **)(local_70 + 0x18))(&local_70);
      (**(code **)(local_70 + 0x18))(&local_70);
      puVar3 = local_68;
      (**(code **)(local_80 + 0x18))(&local_80);
      if (puVar3 != local_78) {
        uVar6 = 0;
        bVar4 = true;
        do {
          if (local_68[uVar6] != local_78[uVar6]) break;
          if (local_68[uVar6] == '\0') {
            if (bVar4) {
              return 0;
            }
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
        local_80 = puVar2 + 0x10;
        local_78 = &DAT_040a6e08;
        (**(code **)(local_70 + 0x18))(&local_70);
        (**(code **)(local_70 + 0x18))(&local_70);
        puVar3 = local_68;
        (**(code **)(local_80 + 0x18))(&local_80);
        if (puVar3 != local_78) {
          uVar6 = 0;
          bVar4 = true;
          do {
            if (local_68[uVar6] != local_78[uVar6]) break;
            if (local_68[uVar6] == '\0') {
              if (bVar4) {
                return 0;
              }
              break;
            }
            bVar4 = uVar6 < 0x80000;
            uVar6 = uVar6 + 1;
          } while (uVar6 != 0x80001);
          local_80 = puVar2 + 0x10;
          local_78 = &DAT_040cabe6;
          (**(code **)(local_70 + 0x18))(&local_70);
          (**(code **)(local_70 + 0x18))(&local_70);
          puVar3 = local_68;
          (**(code **)(local_80 + 0x18))(&local_80);
          if (puVar3 != local_78) {
            uVar6 = 0;
            bVar4 = true;
            do {
              if (local_68[uVar6] != local_78[uVar6]) break;
              if (local_68[uVar6] == '\0') {
                if (bVar4) {
                  return 0;
                }
                break;
              }
              bVar4 = uVar6 < 0x80000;
              uVar6 = uVar6 + 1;
            } while (uVar6 != 0x80001);
            local_80 = puVar2 + 0x10;
            local_78 = &DAT_040b1476;
            (**(code **)(local_70 + 0x18))(&local_70);
            (**(code **)(local_70 + 0x18))(&local_70);
            puVar3 = local_68;
            (**(code **)(local_80 + 0x18))(&local_80);
            if (puVar3 != local_78) {
              uVar6 = 0;
              bVar4 = true;
              do {
                if (local_68[uVar6] != local_78[uVar6]) break;
                if (local_68[uVar6] == '\0') {
                  if (bVar4) {
                    return 0;
                  }
                  break;
                }
                bVar4 = uVar6 < 0x80000;
                uVar6 = uVar6 + 1;
              } while (uVar6 != 0x80001);
              local_80 = puVar2 + 0x10;
              local_78 = &DAT_0406847f;
              (**(code **)(local_70 + 0x18))(&local_70);
              (**(code **)(local_70 + 0x18))(&local_70);
              puVar3 = local_68;
              (**(code **)(local_80 + 0x18))(&local_80);
              if (puVar3 != local_78) {
                uVar6 = 0;
                bVar4 = true;
                do {
                  if (local_68[uVar6] != local_78[uVar6]) break;
                  if (local_68[uVar6] == '\0') {
                    if (bVar4) {
                      return 0;
                    }
                    break;
                  }
                  bVar4 = uVar6 < 0x80000;
                  uVar6 = uVar6 + 1;
                } while (uVar6 != 0x80001);
                local_80 = puVar2 + 0x10;
                local_78 = &DAT_040ea65c;
                (**(code **)(local_70 + 0x18))(&local_70);
                (**(code **)(local_70 + 0x18))(&local_70);
                puVar3 = local_68;
                (**(code **)(local_80 + 0x18))(&local_80);
                if (puVar3 != local_78) {
                  uVar6 = 0;
                  bVar4 = true;
                  do {
                    if (local_68[uVar6] != local_78[uVar6]) break;
                    if (local_68[uVar6] == '\0') {
                      if (bVar4) {
                        return 0;
                      }
                      break;
                    }
                    bVar4 = uVar6 < 0x80000;
                    uVar6 = uVar6 + 1;
                  } while (uVar6 != 0x80001);
                  local_80 = puVar2 + 0x10;
                  local_78 = &DAT_040cabe2;
                  (**(code **)(local_70 + 0x18))(&local_70);
                  (**(code **)(local_70 + 0x18))(&local_70);
                  puVar3 = local_68;
                  (**(code **)(local_80 + 0x18))(&local_80);
                  if (puVar3 != local_78) {
                    uVar6 = 0;
                    bVar4 = true;
                    do {
                      if (local_68[uVar6] != local_78[uVar6]) break;
                      if (local_68[uVar6] == '\0') {
                        if (bVar4) {
                          return 0;
                        }
                        break;
                      }
                      bVar4 = uVar6 < 0x80000;
                      uVar6 = uVar6 + 1;
                    } while (uVar6 != 0x80001);
                    lVar7 = 0;
                    do {
                      local_78 = (&PTR_DAT_04a76bb0)[lVar7];
                      local_80 = puVar2 + 0x10;
                      (**(code **)(local_70 + 0x18))(&local_70);
                      (**(code **)(local_70 + 0x18))(&local_70);
                      puVar3 = local_68;
                      (**(code **)(local_80 + 0x18))(&local_80);
                      if (puVar3 == local_78) {
                        return 1;
                      }
                      uVar6 = 0;
                      bVar4 = true;
                      do {
                        if (local_68[uVar6] != local_78[uVar6]) break;
                        if (local_68[uVar6] == '\0') {
                          if (bVar4) {
                            return 1;
                          }
                          break;
                        }
                        if (local_68[uVar6 + 1] != local_78[uVar6 + 1]) break;
                        if (local_68[uVar6 + 1] == '\0') {
                          return 1;
                        }
                        if (local_68[uVar6 + 2] != local_78[uVar6 + 2]) break;
                        if (local_68[uVar6 + 2] == '\0') {
                          return 1;
                        }
                        bVar4 = uVar6 < 0x7fffe;
                        uVar6 = uVar6 + 3;
                      } while (uVar6 != 0x80001);
                      lVar7 = lVar7 + 1;
                    } while (lVar7 != 0xd);
                    lVar7 = 0;
                    do {
                      local_78 = (&PTR_DAT_04a76c18)[lVar7];
                      local_80 = puVar2 + 0x10;
                      (**(code **)(local_70 + 0x18))(&local_70);
                      (**(code **)(local_70 + 0x18))(&local_70);
                      puVar3 = local_68;
                      (**(code **)(local_80 + 0x18))(&local_80);
                      if (puVar3 == local_78) {
                        return 2;
                      }
                      uVar6 = 0;
                      bVar4 = true;
                      do {
                        if (local_68[uVar6] != local_78[uVar6]) break;
                        if (local_68[uVar6] == '\0') {
                          if (bVar4) {
                            return 2;
                          }
                          break;
                        }
                        if (local_68[uVar6 + 1] != local_78[uVar6 + 1]) break;
                        if (local_68[uVar6 + 1] == '\0') {
                          return 2;
                        }
                        if (local_68[uVar6 + 2] != local_78[uVar6 + 2]) break;
                        if (local_68[uVar6 + 2] == '\0') {
                          return 2;
                        }
                        bVar4 = uVar6 < 0x7fffe;
                        uVar6 = uVar6 + 3;
                      } while (uVar6 != 0x80001);
                      lVar7 = lVar7 + 1;
                      if (lVar7 == 0xf) {
                        return 1;
                      }
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}


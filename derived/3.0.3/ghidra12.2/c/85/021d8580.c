
undefined8 FUN_021d8580(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  int local_60;
  undefined local_5c [7];
  undefined1 local_55;
  
  lVar7 = DAT_053e67f0;
  local_55 = 0;
  local_60 = 8;
  local_68 = local_5c;
  local_5c[0] = 0;
  local_70 = PTR_DAT_04bb3768 + 0x10;
  if (DAT_053e67f0 != 0) {
    (**(code **)(*param_1 + 0x18))();
    uVar6 = FUN_006bd550(param_1[1],0);
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar6);
    lVar7 = FUN_0079e770(lVar7,&local_80);
    puVar1 = local_68;
    if (lVar7 != 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      if (puVar1 != (undefined *)param_1[1]) {
        iVar2 = 3;
        if (local_60 < 4) {
          iVar2 = local_60 + -1;
        }
        memcpy(puVar1,(undefined *)param_1[1],(long)iVar2);
        puVar1[iVar2] = 0;
      }
      puVar3 = PTR_DAT_04bb2020;
      lVar7 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        local_78 = (&PTR_DAT_04a76a98)[lVar7];
        local_80 = puVar1;
        (**(code **)(local_70 + 0x18))(&local_70);
        (**(code **)(local_70 + 0x18))(&local_70);
        puVar4 = local_68;
        (**(code **)(local_80 + 0x18))(&local_80);
        if (puVar4 == local_78) {
          return 0;
        }
        uVar8 = 0;
        bVar5 = true;
        do {
          if (local_68[uVar8] != local_78[uVar8]) break;
          if (local_68[uVar8] == '\0') {
            if (bVar5) {
              return 0;
            }
            break;
          }
          if (local_68[uVar8 + 1] != local_78[uVar8 + 1]) break;
          if (local_68[uVar8 + 1] == '\0') {
            return 0;
          }
          if (local_68[uVar8 + 2] != local_78[uVar8 + 2]) break;
          if (local_68[uVar8 + 2] == '\0') {
            return 0;
          }
          bVar5 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0xb);
      lVar7 = 0;
      while( true ) {
        local_78 = (&PTR_DAT_04a76af0)[lVar7];
        local_80 = puVar3 + 0x10;
        (**(code **)(local_70 + 0x18))(&local_70);
        (**(code **)(local_70 + 0x18))(&local_70);
        puVar1 = local_68;
        (**(code **)(local_80 + 0x18))(&local_80);
        if (puVar1 == local_78) break;
        uVar8 = 0;
        bVar5 = true;
        do {
          if (local_68[uVar8] != local_78[uVar8]) break;
          if (local_68[uVar8] == '\0') {
            if (bVar5) {
              return 1;
            }
            break;
          }
          if (local_68[uVar8 + 1] != local_78[uVar8 + 1]) break;
          if (local_68[uVar8 + 1] == '\0') {
            return 1;
          }
          if (local_68[uVar8 + 2] != local_78[uVar8 + 2]) break;
          if (local_68[uVar8 + 2] == '\0') {
            return 1;
          }
          bVar5 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        lVar7 = lVar7 + 1;
        if (lVar7 == 10) {
          lVar7 = 0;
          do {
            local_78 = (&PTR_DAT_04a76b40)[lVar7];
            local_80 = puVar3 + 0x10;
            (**(code **)(local_70 + 0x18))(&local_70);
            (**(code **)(local_70 + 0x18))(&local_70);
            puVar1 = local_68;
            (**(code **)(local_80 + 0x18))(&local_80);
            if (puVar1 == local_78) {
              return 2;
            }
            uVar8 = 0;
            bVar5 = true;
            do {
              if (local_68[uVar8] != local_78[uVar8]) break;
              if (local_68[uVar8] == '\0') {
                if (bVar5) {
                  return 2;
                }
                break;
              }
              if (local_68[uVar8 + 1] != local_78[uVar8 + 1]) break;
              if (local_68[uVar8 + 1] == '\0') {
                return 2;
              }
              if (local_68[uVar8 + 2] != local_78[uVar8 + 2]) break;
              if (local_68[uVar8 + 2] == '\0') {
                return 2;
              }
              bVar5 = uVar8 < 0x7fffe;
              uVar8 = uVar8 + 3;
            } while (uVar8 != 0x80001);
            lVar7 = lVar7 + 1;
            if (lVar7 == 0xe) {
              return 1;
            }
          } while( true );
        }
      }
    }
  }
  return 1;
}


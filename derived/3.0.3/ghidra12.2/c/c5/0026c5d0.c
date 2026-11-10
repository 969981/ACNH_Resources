
void FUN_0026c5d0(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  PlayHistoryRegistrationKey *pPVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_4e8 [4];
  int local_4d8;
  ErrorResultVariant aEStack_4d4 [28];
  int local_4b8;
  ErrorResultVariant aEStack_4b4 [32];
  bool local_494 [4];
  long local_490;
  long lStack_488;
  int local_480 [4];
  undefined1 auStack_470 [32];
  PlayHistoryRegistrationKey aPStack_450 [256];
  long alStack_350 [56];
  long local_190 [36];
  undefined1 local_70 [48];
  
  FUN_00232ac4(auStack_470);
  FUN_002620b0(local_480,*(undefined8 *)(param_2 + 0x368),auStack_470);
  if (local_480[0] == 0) {
    if (*(char *)(param_2 + 0x348) != '\0') {
      uVar6 = 0;
      lVar4 = param_2 + 0x128;
      plVar8 = alStack_350;
      do {
        (**(code **)(*plVar8 + 0x10))(&local_4b8,plVar8,lVar4);
        puVar1 = (undefined1 *)(lVar4 + 0x70);
        lVar4 = lVar4 + 0x88;
        local_70[uVar6] = *puVar1;
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 0xe;
      } while (uVar6 < *(byte *)(param_2 + 0x348));
      if (*(byte *)(param_2 + 0x348) != 0) {
        uVar6 = 0;
        plVar8 = (long *)(param_2 + 0x1a8);
        pPVar5 = aPStack_450;
        plVar7 = local_190;
        do {
          local_490 = plVar8[-1];
          lStack_488 = *plVar8;
          local_494[0] = false;
          if ((local_490 != 0 || lStack_488 != 0) &&
             (nn::account::GetUserExistence(local_494,(Uid *)&local_490), local_494[0] != false)) {
            iVar2 = nn::account::GetNickname((Nickname *)&local_4b8,(Uid *)&local_490);
            if (iVar2 == 0) {
              FUN_00227930(&local_4d8,&local_4b8);
              (**(code **)(*plVar7 + 0x10))(local_4e8,plVar7,&local_4d8);
            }
            iVar2 = nn::friends::GetPlayHistoryRegistrationKey
                              (pPVar5,(Uid *)&local_490,*(char *)(param_2 + 0xae) == '\0');
            if (iVar2 != 0) {
              local_4e8[0] = 0;
              local_4d8 = 0x10c08;
              nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4d4,(Result *)local_4e8);
              piVar3 = &local_4d8;
              goto LAB_0026c744;
            }
          }
          uVar6 = uVar6 + 1;
          plVar8 = plVar8 + 0x11;
          pPVar5 = pPVar5 + 0x40;
          plVar7 = plVar7 + 9;
        } while (uVar6 < *(byte *)(param_2 + 0x348));
      }
    }
    FUN_00261e1c(*(undefined8 *)(param_2 + 0x368),auStack_470);
    local_4b8 = 0;
    local_4d8 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4b4,(Result *)&local_4d8);
    piVar3 = &local_4b8;
  }
  else {
    piVar3 = local_480;
  }
LAB_0026c744:
  FUN_002296c4(param_1,piVar3);
  return;
}


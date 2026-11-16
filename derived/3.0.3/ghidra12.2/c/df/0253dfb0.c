
bool FUN_0253dfb0(byte *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CanSetPlayerBirthdayCallNpc";
  iVar4 = FUN_02743000(&local_40);
  if (((iVar4 == 0) || (DAT_0540762c < 0)) && ((*(byte *)(DAT_053e0208 + 0xd60) >> 1 & 1) == 0)) {
    if (*param_1 < 8) {
      uVar5 = FUN_02582d8c(param_1,1);
      puVar3 = PTR_DAT_04bb4fb8;
      if (((((uVar5 < 8) &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
           ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0' &&
            ((uVar5 = FUN_02582d8c(param_1,1), uVar5 < 8 &&
             (lVar7 = *(long *)puVar3, *(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0'))))
           )) && (**(char **)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x230) != '\0')) &&
         (**(char **)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x288) != '\0')) goto LAB_0253e1f8;
    }
    if (DAT_05aed670 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar4 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar5 = 0;
      puVar8 = DAT_055c1b60;
      do {
        if (*(int *)(puVar8 + -1) == *(int *)(puVar9 + 7)) {
          if (((uVar5 ^ 0xffffffff) & 0xffff) != 0) goto LAB_0253e178;
          break;
        }
        puVar8 = (undefined8 *)puVar8[1];
        uVar5 = uVar5 + 1;
      } while (puVar8 != &DAT_055c1b58);
    }
    uVar5 = 0;
LAB_0253e178:
    uVar6 = FUN_016e6c20(uVar5);
    if (((uVar6 & 1) == 0) && (DAT_04c487d4 != -1)) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 1 & 1) != 0) {
        local_40 = puVar2 + 0x10;
        pcStack_38 = "StandByGameStartPhoneCall";
        iVar4 = FUN_0274bce0(param_1,&local_40);
        return iVar4 == 1;
      }
    }
  }
LAB_0253e1f8:
  return false;
}


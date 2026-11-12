
void FUN_0095acb0(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if (*(char *)(param_1 + 0xdf0) == '\0') {
    return;
  }
  FUN_00955030();
  if ((param_2 & 1) == 0) {
    if ((*(char *)(DAT_04ca9370 + 8) != '\0') && (DAT_04c487d4 != -1)) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) == 0) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x1c & 1) == 0) goto LAB_0095ad80;
      }
      FUN_0095b030(param_1);
    }
LAB_0095ad80:
    if (DAT_05aed670 == 0) {
      puVar5 = &DAT_055c04a0;
    }
    else {
      puVar5 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar5,0);
        puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar5 = &DAT_055c04a0;
        }
      }
    }
    if (*(int *)(puVar5 + 7) == -0x10e0fba8) {
      FUN_0095b8c0(param_1);
    }
  }
  uVar4 = FUN_0180b7a0();
  if ((uVar4 & 1) == 0) {
    iVar2 = 0;
    if (DAT_05aed670 != 0) {
      if (*(long *)(DAT_05aed670 + 0x330) == 0) {
        iVar2 = 0;
      }
      else {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar5,0);
        iVar2 = 0;
        if ((iVar3 == 0x758f7eaf) && (iVar2 = 0, DAT_05aed670 != 0)) {
          iVar2 = 0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            iVar2 = *(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244);
          }
        }
      }
    }
    if (DAT_052923e8._4_4_ != iVar2) goto LAB_0095ae9c;
  }
  FUN_0095c2d0(param_1);
LAB_0095ae9c:
  if (DAT_04cfae30 != 0) {
    *(undefined1 *)(DAT_04cfae30 + 0x1180) = 1;
  }
  *(undefined1 *)(param_1 + 0xdf0) = 0;
  return;
}


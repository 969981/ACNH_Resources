
void FUN_014b4024(undefined8 param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if (DAT_04c487d0 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d0 * 8);
    if (0xff < (uint)(int)DAT_04c487d0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 >> 1 & 1) != 0)) {
      FUN_014b4dd0(param_1,0x32,0xffffffff,10,10);
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d0 * 8);
    if (0xff < (uint)(int)DAT_04c487d0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 & 1) != 0)) {
      if (DAT_05aed670 == 0) {
        puVar4 = &DAT_055c04a0;
      }
      else {
        puVar4 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar4 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar4,0);
          puVar4 = (undefined8 *)PTR_DAT_04bc3a78;
          if (iVar2 != 0x758f7eaf) {
            puVar4 = &DAT_055c04a0;
          }
        }
      }
      iVar2 = *(int *)(puVar4 + 7);
      iVar3 = 0;
      if (iVar2 < 0x2922957e) {
        if (iVar2 == 0xb6a5301) {
          iVar3 = 4;
        }
        else if (iVar2 == 0x1490248c) {
          iVar3 = 3;
        }
      }
      else if (iVar2 == 0x2922957e) {
        iVar3 = 2;
      }
      else if (iVar2 == 0x7a616e2f) {
        iVar3 = 5;
      }
      else if (iVar2 == 0x51b9e069) {
        iVar3 = 1;
      }
      FUN_014b4dd0(param_1,iVar3 + 0x33,iVar3,3,3);
    }
  }
  return;
}


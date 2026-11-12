
int FUN_00a8ea20(long param_1)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1e & 1) != 0) {
      return 1;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      return 0;
    }
  }
  if (DAT_05aed670 == 0) {
    puVar6 = &DAT_055c04a0;
  }
  else {
    puVar6 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  iVar4 = *(int *)(puVar6 + 7);
  if (((iVar4 == -0x7975b8e8) || (iVar4 == -0x3e092032)) || (iVar4 == -0x17df00c3)) {
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x65470 + lVar5);
      iVar4 = 0;
      if (0x14 < uVar2) {
        uVar2 = 0;
      }
      if (uVar2 - 1 < 0x14) {
        iVar4 = *(int *)(&DAT_04168270 + (long)(int)(uVar2 - 1) * 4);
      }
      if (iVar4 != 0) {
        return iVar4;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x60);
  }
  else {
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x6520c + lVar5);
      iVar4 = 0;
      if (0x14 < uVar2) {
        uVar2 = 0;
      }
      if (uVar2 - 1 < 0x14) {
        iVar4 = *(int *)(&DAT_04168270 + (long)(int)(uVar2 - 1) * 4);
      }
      if (iVar4 != 0) {
        return iVar4;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x60);
  }
  return 0;
}


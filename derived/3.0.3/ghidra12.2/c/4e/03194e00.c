
void FUN_03194e00(long param_1,byte param_2)

{
  byte bVar1;
  long *plVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_50;
  char *pcStack_48;
  
  iVar5 = *(int *)(param_1 + 0x1c500);
  uVar7 = 0;
  lVar8 = 0x590;
  do {
    plVar2 = (long *)(*(long *)(param_1 + 0x210) + lVar8);
    if (0x13 < uVar7) {
      plVar2 = (long *)(*(long *)(param_1 + 0x210) + (ulong)((int)uVar7 - 0x14) * 8 + 0x630);
    }
    if (*plVar2 != 0) {
      FUN_03d5d0e0(*plVar2,0,(long)uVar7 < (long)iVar5 & param_2);
    }
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 8;
  } while (uVar7 != 0x28);
  if (*(int *)(param_1 + 0x1c4fc) == 0) {
    bVar1 = *(char *)(param_1 + 0x1c51c) != '\x01' & param_2;
    sVar4 = *(short *)PTR_DAT_04bb6298;
    bVar6 = bVar1;
    if (sVar4 != -1) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,0x19);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x19 & 1) != 0) {
        local_50 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "OtgGetStartingSalary";
        iVar5 = FUN_02758850(&local_50);
        bVar6 = 0;
        if (iVar5 == 0) {
          bVar6 = bVar1;
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar8 + 0x6e0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar8 + 0x6e0),0,bVar6);
      lVar8 = *(long *)(param_1 + 0x210);
    }
    if (*(long *)(lVar8 + 0x6d0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar8 + 0x6d0),0,*(char *)(param_1 + 0x1c51c) == '\0' & param_2);
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar8 + 0x6e0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar8 + 0x6e0),0,0);
      lVar8 = *(long *)(param_1 + 0x210);
    }
    if (*(long *)(lVar8 + 0x6d0) != 0) {
      FUN_03d5d0e0(*(long *)(lVar8 + 0x6d0),0,0);
      return;
    }
  }
  return;
}


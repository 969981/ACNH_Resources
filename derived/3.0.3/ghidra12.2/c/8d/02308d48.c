
void FUN_02308d48(char *param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  byte local_8 [4];
  undefined4 local_4;
  
  if ((*param_1 != '\0') && (sVar2 = *(short *)PTR_DAT_04bb6298, sVar2 != -1)) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,1);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      local_8[0] = param_1[1];
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "MoveFurnitureFieldCount";
      if (7 < local_8[0]) {
        local_8[0] = 0xff;
      }
      local_4 = FUN_02582fe0(local_8);
      FUN_021294b0(&local_30,1,&local_4);
    }
  }
  puVar3 = PTR_DAT_04bb2720;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  iVar6 = 0;
  if (lVar7 != 0) {
    if (*(long *)(lVar7 + 0x330) == 0) {
      iVar6 = 0;
    }
    else {
      puVar5 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar4 = FUN_006bd550(*puVar5,0);
      iVar6 = 0;
      if (iVar4 == 0x758f7eaf) {
        iVar6 = 0;
        if (*(long *)puVar3 != 0) {
          lVar7 = *(long *)(*(long *)puVar3 + 0x330);
          iVar6 = 0;
          if (lVar7 != 0) {
            iVar6 = *(int *)(lVar7 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar6) {
    *(byte *)(*(long *)PTR_DAT_04bb9a68 + 0x54) = *(byte *)(*(long *)PTR_DAT_04bb9a68 + 0x54) | 2;
  }
  return;
}


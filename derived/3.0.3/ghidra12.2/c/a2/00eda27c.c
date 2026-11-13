
bool FUN_00eda27c(undefined8 param_1,uint *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined6 uStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [15];
  undefined1 local_65;
  
  puVar2 = PTR_DAT_04bb2718;
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),param_1);
  lVar3 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar2 + 0x408),param_1);
  if ((lVar3 == 0) || (iVar1 = *(int *)(lVar3 + 8), iVar1 < 1)) {
    bVar8 = false;
  }
  else {
    iVar7 = 0;
    bVar8 = true;
    do {
      local_78 = 0x10;
      local_65 = 0;
      local_74[0] = 0;
      local_88 = &PTR_LAB_048fb098;
      puStack_80 = local_74;
      uVar4 = FUN_01be94e0(&local_88,param_1,iVar7);
      if ((uVar4 & 1) != 0) {
        uStack_98 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_9a = 0;
        local_90 = 0;
        FUN_01b970f0(&local_a8,param_1);
        FUN_01b9735c(&local_a8,param_1,&local_88);
        pbVar6 = (byte *)((long)&local_a8 + 7);
        if ((int)local_a8 == 1) {
LAB_00eda310:
          uVar5 = 0;
          if (*pbVar6 < 0x2a) {
            uVar5 = (uint)*pbVar6;
          }
        }
        else {
          if ((int)local_a8 == 2) {
            pbVar6 = (byte *)((long)&uStack_a0 + 5);
            goto LAB_00eda310;
          }
          uVar5 = 0;
        }
        if (uVar5 == *param_2) {
          return bVar8;
        }
      }
      iVar7 = iVar7 + 1;
      bVar8 = iVar7 < iVar1;
    } while (iVar1 != iVar7);
  }
  return bVar8;
}


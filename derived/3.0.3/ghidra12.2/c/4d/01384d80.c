
void FUN_01384d80(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_90 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  FUN_00946e10(*(long *)PTR_DAT_04bb27c8 + 0x28,1);
  if (*(int *)(DAT_0519d040 + 0x200) == 0) {
    FUN_011b71a0(DAT_050d57c8 + 0x920);
    FUN_011b78a0(DAT_050d57c8 + 0x920);
    lVar4 = DAT_050d57c8;
    local_90[0] = &PTR_FUN_04986a00;
    uVar2 = *(uint *)(DAT_050d57c8 + 0x50);
    if (0 < (int)uVar2) {
      uVar6 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        lVar5 = *(long *)(lVar4 + 0x58);
        if (**(int **)(lVar5 + uVar6 * 8) != 0x7e3d1e46) {
          puStack_60 = &DAT_048f9750;
          local_70 = (undefined4)uVar6;
          local_50 = &DAT_048f9750;
          local_6c = **(undefined4 **)(lVar5 + uVar6 * 8);
          lVar5 = *(long *)(lVar5 + uVar6 * 8);
          local_58 = *(undefined8 *)(lVar5 + 0x18);
          local_48 = *(undefined8 *)(lVar5 + 0x28);
          local_68 = puVar1;
          (*(code *)*local_90[0])(local_90,&local_70);
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    uVar3 = 0x6622bd46;
  }
  else {
    uVar3 = 0xdb5d97b8;
  }
  FUN_02b3d230(*(long *)PTR_DAT_04bb5008 + 0x26e8,uVar3);
  return;
}


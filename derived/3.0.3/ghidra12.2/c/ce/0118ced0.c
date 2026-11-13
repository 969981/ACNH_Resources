
void FUN_0118ced0(undefined8 param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_90;
  undefined8 uStack_88;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  if (DAT_04c487d4 != -1) {
    local_70 = 3;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      FUN_0118d020();
      lVar4 = DAT_050d57c8;
      local_90 = &PTR_FUN_04983e98;
      uVar3 = *(uint *)(DAT_050d57c8 + 0x50);
      if (0 < (int)uVar3) {
        uVar6 = 0;
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        uStack_88 = param_1;
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
            (*(code *)*local_90)(&local_90,&local_70);
          }
          uVar6 = uVar6 + 1;
        } while (uVar3 != uVar6);
      }
    }
  }
  return;
}


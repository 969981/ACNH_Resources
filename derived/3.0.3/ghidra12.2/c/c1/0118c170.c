
void FUN_0118c170(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **local_90;
  undefined8 uStack_88;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  lVar3 = DAT_050d57c8;
  local_90 = &PTR_FUN_04983c08;
  uVar2 = *(uint *)(DAT_050d57c8 + 0x50);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    uStack_88 = param_1;
    do {
      lVar4 = *(long *)(lVar3 + 0x58);
      if (**(int **)(lVar4 + uVar5 * 8) != 0x7e3d1e46) {
        puStack_60 = &DAT_048f9750;
        local_70 = (undefined4)uVar5;
        local_50 = &DAT_048f9750;
        local_6c = **(undefined4 **)(lVar4 + uVar5 * 8);
        lVar4 = *(long *)(lVar4 + uVar5 * 8);
        local_58 = *(undefined8 *)(lVar4 + 0x18);
        local_48 = *(undefined8 *)(lVar4 + 0x28);
        local_68 = puVar1;
        (*(code *)*local_90)(&local_90,&local_70);
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}


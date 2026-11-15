
void FUN_022ab224(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 int param_5,undefined2 *param_6,long param_7,undefined4 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  puVar2 = (undefined8 *)(param_4 + 0x14);
  *puVar2 = 0xfffe;
  FUN_0277d4ac(puVar2);
  *(undefined8 *)(param_4 + 0x1c) = 0xfffe;
  FUN_0277d4ac((undefined8 *)(param_4 + 0x1c));
  *(undefined8 *)(param_4 + 0x48) = 0;
  *(int *)(param_4 + 0x54) = param_5;
  *(undefined4 *)(param_4 + 0x58) = 0;
  *(undefined4 *)(param_4 + 0x50) = 0;
  *(undefined8 *)(param_4 + 0x2c) = 0;
  *(undefined8 *)(param_4 + 0x34) = 0;
  *(undefined2 *)puVar2 = *param_6;
  *(undefined1 *)(param_4 + 0x16) = *(undefined1 *)(param_6 + 1);
  *(undefined1 *)(param_4 + 0x17) = *(undefined1 *)((long)param_6 + 3);
  *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(param_6 + 2);
  *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_7 + 8);
  *(undefined4 *)(param_4 + 0x4c) = *(undefined4 *)(param_7 + 0xc);
  *(undefined4 *)(param_4 + 0x50) = param_8;
  if ((param_5 == 0x16) || (param_5 == 1)) {
    local_60 = 0;
    if (DAT_05aed670 == 0) {
      puVar2 = &DAT_055c04a0;
    }
    else {
      puVar2 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar2 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar1 = FUN_006bd550(*puVar2,0);
        puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar1 != 0x758f7eaf) {
          puVar2 = &DAT_055c04a0;
        }
      }
    }
    local_5c = *(undefined4 *)(puVar2 + 7);
    local_58 = FUN_017baf44();
    local_58 = local_58 & 1;
    local_68 = PTR_DAT_04bb6268 + 0x10;
    uVar3 = FUN_01a50ed0(&local_68,param_6,param_7,0);
    *(undefined4 *)(param_4 + 0x2c) = uVar3;
    *(undefined4 *)(param_4 + 0x30) = param_2;
    *(undefined4 *)(param_4 + 0x34) = param_3;
  }
  return;
}


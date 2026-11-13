
uint FUN_011e64f0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 *param_5,long param_6,undefined4 param_7,uint param_8,byte param_9)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_83;
  undefined1 local_7f;
  byte local_7e;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  local_70 = 0;
  lVar3 = *(long *)PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    puVar4 = &DAT_055c04a0;
  }
  else {
    puVar4 = &DAT_055c04a0;
    if (*(long *)(lVar3 + 0x330) != 0) {
      puVar4 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar3 + 0x338));
      iVar1 = FUN_006bd550(*puVar4,0);
      puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar4 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar4 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  uVar5 = FUN_01a50ed0(&local_78,param_5,param_6,param_7);
  local_c4 = 0x3f800000;
  local_bc = 0xfffe;
  FUN_0277d4ac(&local_bc);
  local_9c = 0xffffffff00000000;
  local_90 = 0x300000000;
  local_83 = 0;
  local_88 = 0xff00ffff;
  local_a0 = 0xff;
  local_84 = 0xff;
  local_7f = 0;
  local_b0 = &DAT_048f9750;
  local_bc = *param_5;
  local_a8 = *(undefined4 *)(param_6 + 8);
  uStack_a4 = *(undefined4 *)(param_6 + 0xc);
  local_7e = param_9 & 1;
  if ((param_8 & 1) != 0) {
    local_88 = 0xff00fffe;
  }
  local_d0 = uVar5;
  uStack_cc = param_2;
  local_c8 = param_3;
  local_94 = param_7;
  uVar2 = FUN_011e5aa0(param_4,&local_d0);
  return uVar2 & 1;
}


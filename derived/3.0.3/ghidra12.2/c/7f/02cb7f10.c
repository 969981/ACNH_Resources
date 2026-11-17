
void FUN_02cb7f10(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  byte bVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined **local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined1 local_8d;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined2 *)(param_1 + 0xba) = 99;
  *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_2 + 8);
  if ((*(short *)(param_2 + 0xc) != 0) &&
     (uVar7 = nn::time::IsValidDate
                        ((int)*(short *)(param_2 + 0xc),(int)(char)param_2[0xe],
                         (int)(char)param_2[0xf]), (uVar7 & 1) != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0xc);
    *(undefined2 *)(param_1 + 0x2b4) = 0;
    *(undefined1 *)(param_1 + 0x2b6) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  }
  *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 0x14);
  FUN_03780780(*(undefined4 *)(param_1 + 0x2a8),param_1 + 200);
  uVar3 = *(undefined4 *)(param_1 + 0x2a8);
  lVar1 = param_1 + 0x60;
  lVar2 = param_1 + 0x90;
  **(undefined1 **)(param_1 + 0x68) = 0;
  **(undefined1 **)(param_1 + 0x98) = 0;
  local_a8 = &PTR_LAB_04b46ca0;
  lStack_a0 = lVar1;
  local_98 = lVar2;
  FUN_036ad030(&local_a8,uVar3,0);
  puVar4 = PTR_DAT_04bb3768;
  if (**(char **)(param_1 + 0x68) != '\0') {
    uVar6 = FUN_0376baa0(lVar1);
    *(undefined2 *)(param_1 + 0x58) = uVar6;
    local_a8 = (undefined **)(puVar4 + 0x10);
    local_8d = 0;
    local_98 = CONCAT35(local_98._5_3_,8);
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xfffe;
    lStack_a0 = (long)&local_98 + 4;
    FUN_0277d4ac(&local_78);
    local_70 = 0xfffe;
    FUN_0277d4ac(&local_70);
    local_68 = 0xfffe;
    FUN_0277d4ac(&local_68);
    FUN_037789a0(&local_a8,lVar1,0);
    *(undefined4 *)(param_1 + 0x80) = local_80;
  }
  if (**(char **)(param_1 + 0x98) != '\0') {
    uVar6 = FUN_0376baa0(lVar2);
    *(undefined2 *)(param_1 + 0x88) = uVar6;
    local_a8 = (undefined **)(puVar4 + 0x10);
    local_8d = 0;
    local_98 = CONCAT35(local_98._5_3_,8);
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xfffe;
    lStack_a0 = (long)&local_98 + 4;
    FUN_0277d4ac(&local_78);
    local_70 = 0xfffe;
    FUN_0277d4ac(&local_70);
    local_68 = 0xfffe;
    FUN_0277d4ac(&local_68);
    FUN_037789a0(&local_a8,lVar2,0);
    *(undefined4 *)(param_1 + 0xb0) = local_80;
  }
  bVar5 = FUN_02cb6f90(param_1);
  *(byte *)(param_1 + 8) = bVar5 & 1;
  *(undefined1 *)(param_1 + 9) = *param_2;
  *(undefined4 *)(param_1 + 0x2c0) = 0xffff0000;
  FUN_008301bc(param_1 + 0x2c8,param_2,0);
  FUN_008301bc(param_1 + 0x2cc,param_2,1);
  bVar5 = FUN_037818a0(param_1 + 0x2c8);
  *(byte *)(param_1 + 0x2c4) = bVar5 & 1;
  bVar5 = FUN_037818a0(param_1 + 0x2cc);
  *(byte *)(param_1 + 0x2c5) = bVar5 & 1;
  *(undefined1 *)(param_1 + 0x2d0) = param_2[1];
  *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x18);
  return;
}


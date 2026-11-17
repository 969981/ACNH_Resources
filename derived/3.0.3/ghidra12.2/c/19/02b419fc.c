
/* WARNING: Removing unreachable block (ram,0x02b41abc) */
/* WARNING: Removing unreachable block (ram,0x02b41a74) */
/* WARNING: Removing unreachable block (ram,0x02b41a50) */
/* WARNING: Removing unreachable block (ram,0x02b41a98) */
/* WARNING: Removing unreachable block (ram,0x02b41ae0) */

void FUN_02b419fc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_134;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined **local_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  puVar2 = PTR_DAT_04bb3238;
  lVar4 = *(long *)PTR_DAT_04bb27c0;
  if (lVar4 == 0) {
LAB_02b41bc4:
    uVar3 = DAT_04c9a0c8;
  }
  else {
    iVar1 = param_2[1];
    if (iVar1 != 0x1e) {
      local_158 = CONCAT44(local_158._4_4_,iVar1);
      if ((((DAT_05641c34 != iVar1) && (DAT_05641c38 != iVar1)) && (DAT_05641c3c != iVar1)) &&
         ((DAT_05641c40 != iVar1 && (DAT_05641c44 != iVar1)))) goto LAB_02b41bc4;
    }
    param_1[1] = *param_2;
    uVar3 = *(undefined4 *)puVar2;
    param_1[2] = param_2[1];
    param_1[0x12] = 0;
    param_1[0x13] = uVar3;
    local_80 = PTR_DAT_04bc44c0 + 0x10;
    uStack_78 = 0xffffffff00000000;
    FUN_02b40530(param_1,&local_80);
    local_150 = param_2[2];
    local_158 = 0xe00000000;
    local_118 = 0x80;
    local_95 = 0;
    local_90 = 7;
    local_14c = *(undefined8 *)(param_2 + 3);
    local_114[0] = 0;
    local_128 = PTR_DAT_04bb2d88 + 0x10;
    local_144 = param_2[5];
    puStack_120 = local_114;
    uStack_13c = *param_2;
    local_140 = 0;
    local_138 = param_2[1];
    local_134 = 3;
    local_8c = 0x201;
    local_88 = &local_80;
    uVar3 = FUN_007402e0(lVar4,&local_158,0,0);
  }
  *param_1 = uVar3;
  return;
}


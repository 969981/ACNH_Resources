
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_011dec54(long param_1)

{
  uint *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar2 = *(ushort *)PTR_DAT_04bb6298;
  uVar7 = (ulong)(short)uVar2;
  if (uVar7 == 0xffffffffffffffff) {
    return false;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar2 * 8);
  if (0xff < (uint)(int)(short)uVar2) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 3 & 1) == 0) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar7 & 0xffffffff) * 8);
    if (0xff < uVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar7 & 0xffffffff) * 8);
      if (0xff < uVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 1 & 1) == 0) {
        return false;
      }
      if ((*puVar1 >> 0x1a & 1) == 0) {
        return false;
      }
    }
  }
  local_30 = 0;
  local_58 = PTR_DAT_04bb2018 + 0x10;
  fVar11 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar6 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar6 = (uint)(fVar11 < 0.0);
  }
  fVar12 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar9 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar9 = (uint)(fVar12 < 0.0);
  }
  local_50 = (undefined *)CONCAT44((int)fVar12 - uVar9,(int)fVar11 - uVar6);
  local_28 = 0;
  local_24 = 0x1d;
  local_24 = 0x2e;
  local_30 = 0x4000;
  local_24 = 0x2e;
  local_28 = 0;
  uVar7 = FUN_00977f70(&local_58,&local_30);
  if ((uVar7 & 1) != 0) {
    local_48 = *(int *)(param_1 + 8);
    iStack_44 = *(int *)(param_1 + 0xc);
    local_58 = PTR_DAT_04bbc1a0 + 0x10;
    local_50 = PTR_DAT_04bb2010 + 0x10;
    local_38 = local_48 + 1;
    iStack_34 = iStack_44 + 1;
    local_40 = local_50;
    uVar7 = FUN_00978be0(&local_58);
    if ((uVar7 & 1) != 0) {
      local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
      lVar8 = *(long *)PTR_DAT_04bb2720;
      if (lVar8 == 0) {
        puVar10 = &DAT_055c04a0;
      }
      else {
        puVar10 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          puVar10 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
          iVar4 = FUN_006bd550(*puVar10,0);
          puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar10 = &DAT_055c04a0;
          }
        }
      }
      local_50 = (undefined *)CONCAT44(*(undefined4 *)(puVar10 + 7),(undefined4)local_50);
      uVar3 = FUN_017baf44();
      local_48 = CONCAT31(local_48._1_3_,uVar3) & 0xffffff01;
      local_58 = PTR_DAT_04bb6268 + 0x10;
      psVar5 = (short *)FUN_01a5010c(&local_58,0,param_1);
      if (*psVar5 == -2) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        psVar5 = (short *)FUN_01a5010c(&local_58,0,param_1);
        if (*psVar5 == -2) {
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
          psVar5 = (short *)FUN_01a5010c(&local_58,0,param_1);
          if (*psVar5 == -2) {
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
            psVar5 = (short *)FUN_01a5010c(&local_58,0,param_1);
            return *psVar5 == -2;
          }
        }
      }
    }
  }
  return false;
}


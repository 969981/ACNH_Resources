
ulong FUN_02ae17d8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined *local_158;
  undefined8 local_150;
  float local_148;
  int iStack_144;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb2010;
  local_70 = PTR_DAT_04bb2010 + 0x10;
  local_68 = 0;
  local_58 = 0xf61f;
  FUN_0277d4ac(&local_58);
  local_80 = PTR_DAT_04bc35c0 + 0x10;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  iVar5 = FUN_0277d6c4(&local_78);
  if (((iVar5 - 0xf619U < 7) && (DAT_0519d040 != 0)) && (*(char *)(DAT_0519d040 + 0x4b30) != '\0'))
  {
    uVar1 = *(uint *)(DAT_0519d040 + 0x4b34);
    lVar7 = FUN_01260194(0xe7);
    local_158 = (undefined *)CONCAT44(local_158._4_4_,uVar1);
    if ((uVar1 < *(uint *)(lVar7 + 0x420)) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x428) + (long)(int)uVar1 * 8), lVar7 != 0)) {
      plVar13 = (long *)(lVar7 + 0xd0);
      piVar8 = (int *)(**(code **)(*plVar13 + 0xf0))(plVar13);
      iVar5 = *piVar8;
      lVar9 = (**(code **)(*plVar13 + 0xf0))(plVar13);
      iVar2 = *(int *)(lVar9 + 4);
      local_68 = CONCAT44(iVar2,iVar5);
      puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0xa0) + 0xf0))((long *)(lVar7 + 0xa0));
      local_150 = puVar3 + 0x10;
      uVar16 = *puVar10;
      uStack_138 = 0;
      local_134 = 0;
      local_148 = 0.0;
      iStack_144 = 0;
      local_158 = PTR_DAT_04bbc1a0 + 0x10;
      local_140 = local_150;
      FUN_0263fe7c(&local_80,&local_158);
      local_150 = (undefined *)((ulong)local_150 & 0xffffffff00000000);
      fVar14 = (float)(int)local_148;
      fVar15 = (float)iStack_144;
      if (DAT_05aed670 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar6 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      local_150 = (undefined *)CONCAT44(*(undefined4 *)(puVar12 + 7),(undefined4)local_150);
      uVar4 = FUN_017baf44();
      local_148 = (float)(CONCAT31(local_148._1_3_,uVar4) & 0xffffff01);
      local_158 = PTR_DAT_04bb6268 + 0x10;
      FUN_011f3390(&local_158,0,&local_58,&local_70);
      local_95 = 0;
      local_158 = (undefined *)0xeb00000000;
      puStack_120 = local_114;
      iStack_144 = 0x3f800000;
      local_140._0_4_ = 0;
      local_118 = 0x80;
      local_114[0] = 0;
      local_90 = 7;
      local_88 = 0;
      local_8c = 0;
      local_140._4_4_ = 0;
      uStack_138 = 0;
      local_134 = 0;
      uStack_130 = 0;
      local_150 = (undefined *)CONCAT44(uVar16,fVar14 * 5.0 + (float)iVar5 * 5.0);
      local_128 = &DAT_048fc708;
      local_148 = fVar15 * 5.0 + (float)iVar2 * 5.0;
      uVar11 = FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_158,param_1,1);
      return uVar11;
    }
  }
  return (ulong)DAT_04c9a0c8;
}


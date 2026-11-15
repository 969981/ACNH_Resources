
void FUN_0219f990(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined *local_468;
  undefined1 *puStack_460;
  undefined *local_458;
  char *pcStack_450;
  long local_270 [6];
  undefined2 local_240;
  undefined1 local_23e;
  undefined4 local_23c;
  undefined *local_238;
  undefined1 *local_230;
  undefined4 local_228;
  undefined1 local_224 [127];
  undefined1 local_1a5;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [7];
  undefined1 local_185;
  undefined *local_180;
  char *local_178;
  undefined4 local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  local_1a0 = PTR_DAT_04bb3768;
  local_185 = 0;
  local_18c[0] = 0;
  piVar4 = (int *)(param_1 + 0x7440);
  local_198 = local_18c;
  local_190 = 8;
  local_230 = local_224;
  *piVar4 = 0;
  puVar7 = PTR_DAT_04bc2a20;
  puVar6 = PTR_DAT_04bc27f0;
  local_1a0 = local_1a0 + 0x10;
  local_238 = PTR_DAT_04bb2d88 + 0x10;
  local_228 = 0x80;
  local_1a5 = 0;
  local_224[0] = 0;
  uVar17 = 0;
  puVar16 = (undefined1 *)(param_1 + 0xaf9);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
  do {
    local_23c = (undefined4)uVar17;
    *puVar16 = 0;
    lVar9 = FUN_0265c2a0(uVar17 & 0xffffffff);
    if (lVar9 != 0) {
      if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
         (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)*puVar10)();
        uVar11 = uVar11 & 0xffffffff;
      }
      puVar13 = (ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      local_23e = (undefined1)puVar13[1];
      uVar5 = *puVar13;
      uVar15 = (ulong)(uVar5 & 0xff);
      if (((uVar15 < 0x23) &&
          (local_240._1_1_ = (byte)(uVar5 >> 8), local_240._1_1_ <= (byte)puVar6[uVar15])) &&
         ((*(uint *)(puVar7 + uVar15 * 4) >> (ulong)(local_240._1_1_ & 0x1f) & 1) != 0)) {
        local_178 = "AbandonedHouse";
        local_240 = uVar5;
        local_180 = puVar1;
        iVar8 = FUN_02749340(puVar13 + 0x933e,&local_180);
        uVar5 = local_240;
        if (iVar8 < 2) {
          local_458 = PTR_DAT_04bb2020 + 0x10;
          pcStack_450 = "MoveInCompletion";
          iVar8 = FUN_02749340(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1267c,&local_458);
          uVar5 = local_240;
          if (iVar8 != 0) {
            *puVar16 = 1;
            if ((param_2 & 1) != 0) {
              FUN_01e373e8(puVar16 + -0x5f1,&local_240,&local_23c);
            }
            *piVar4 = *piVar4 + 1;
            FUN_038d1270(&local_1a0,"-----");
            if ((ulong)(byte)local_240 < 0x23) {
              FUN_038d1270(&local_1a0,"%s%02d",
                           *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)(byte)local_240 * 8 + 0xb0),
                           local_240._1_1_);
            }
            (**(code **)(local_1a0 + 0x18))(&local_1a0);
            FUN_038d1270(&local_238,"Param/NpcHouse/%s.byml",local_198);
            uVar15 = FUN_03eba3a0(&local_238);
            uVar5 = local_240;
            if (((uVar15 & 1) != 0) &&
               (plVar18 = *(long **)(*(long *)PTR_DAT_04bb3968 + 0x17598), plVar18 != (long *)0x0))
            {
              lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              lVar14 = *(long *)(lVar12 + 0xa8);
              *(long **)(lVar12 + 0xa8) = plVar18;
              puVar3 = PTR_DAT_04bb2020 + 0x10;
              local_178 = "NpcHouse";
              local_180 = puVar3;
              (**(code **)(local_1a0 + 0x18))(&local_1a0);
              puStack_460 = local_198;
              local_468 = puVar3;
              FUN_0219fd80(&local_458,&local_180,&local_468,0);
              local_6d = 0;
              local_170 = 0x100;
              local_16c[0] = '\0';
              local_180 = puVar2;
              local_178 = local_16c;
              uVar15 = (**(code **)(local_458 + 0xf0))(&local_458,&local_180,1);
              if ((uVar15 & 1) != 0) {
                FUN_03c27e60(&local_458,&local_180,plVar18);
              }
              puVar13 = (ushort *)(**(code **)(local_270[0] + 0xf0))(local_270);
              *(uint *)(puVar16 + -5) = (uint)*puVar13;
              (**(code **)(local_458 + 0x20))(&local_458);
              (**(code **)(*plVar18 + 0x58))(plVar18);
              uVar5 = local_240;
              if (lVar14 != 1) {
                lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                *(long *)(lVar12 + 0xa8) = lVar14;
                uVar5 = local_240;
              }
            }
          }
        }
      }
      local_240 = uVar5;
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
    uVar17 = uVar17 + 1;
    puVar16 = puVar16 + 0xba0;
  } while (uVar17 != 10);
  return;
}


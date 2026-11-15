
void FUN_024edd10(long param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_48;
  char *local_40;
  undefined2 local_38;
  undefined2 local_36;
  undefined1 local_34;
  
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xfffffffe;
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xffffffbf;
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xffffff7f;
  local_48 = (undefined *)CONCAT44((int)((ulong)local_48 >> 0x20),8);
  *(uint *)(param_1 + 0xcf0) = *(uint *)(param_1 + 0xcf0) & 0xfffffeff;
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xda4) = 0;
  *(undefined8 *)(param_1 + 0xcf4) = 0;
  *(undefined8 *)(param_1 + 0xcfc) = 0;
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar8 = &DAT_05240280;
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "IsWarpPipeRiseFinish";
  if (((puVar8[0x227] != 0) && (lVar9 = *(long *)(puVar8[0x227] + 0x78), lVar9 != 0)) &&
     (plVar7 = *(long **)(lVar9 + 0x48), plVar7 != (long *)0x0)) {
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_48,0);
  }
  fVar13 = (float)*(int *)(param_1 + 0x1918) * 0.001;
  fVar15 = (float)*(int *)(param_1 + 0x191e) * 0.001;
  fVar17 = fVar13 + -4.0;
  fVar16 = fVar15 + -4.0;
  fVar13 = fVar13 + 4.0;
  fVar15 = fVar15 + 4.0;
  iVar2 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar3 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar4 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar5 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar6 = iVar2;
  if (iVar4 <= iVar2) {
    iVar6 = iVar4;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  *(int *)(param_1 + 0xd98) = iVar2;
  *(int *)(param_1 + 0xd88) = iVar6;
  iVar6 = iVar3;
  if (iVar5 <= iVar3) {
    iVar6 = iVar5;
  }
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0xd8c) = iVar6;
  *(int *)(param_1 + 0xd9c) = iVar3;
  local_48 = (undefined *)
             ((ulong)CONCAT42(local_48._4_4_,*(undefined2 *)(param_1 + 0x1922)) << 0x10);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_48);
  plVar7 = *(long **)(param_1 + 0x60);
  if (plVar7 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar7 = &DAT_05240280;
    }
    else {
      plVar7 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar7 + 0x4e0))(0);
  fVar13 = (float)*(int *)(param_1 + 0x192a) * 0.001;
  local_48 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1928) * 0.25,
                      (float)*(int *)(param_1 + 0x1924) * 0.001);
  lVar9 = *(long *)PTR_DAT_04bb2720;
  local_40._0_4_ = fVar13;
  if (lVar9 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    puVar12 = DAT_055c1b60;
    do {
      if (*(int *)(puVar12 + -1) == *(int *)(puVar8 + 7)) break;
      puVar12 = (undefined8 *)puVar12[1];
    } while (puVar12 != &DAT_055c1b58);
  }
  local_34 = 1;
  local_36 = 1;
  local_38 = *(undefined2 *)PTR_DAT_04bb6298;
  uVar14 = FUN_016e80f0(&local_48,0,&local_38);
  local_48 = (undefined *)CONCAT44(uVar14,(int)local_48);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_48,1);
  FUN_0230f780(param_1,0);
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar9 + 0x158);
    }
    bVar11 = *(byte *)(param_1 + 0x1ee8);
    bVar10 = *pbVar1;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (bVar10 != bVar11) {
      local_48._0_4_ = (float)*(int *)(param_1 + 0x1924) * 0.001;
      local_40._0_4_ = (float)*(int *)(param_1 + 0x192a) * 0.001;
      local_48 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x1928) * 0.25,(float)local_48);
      lVar9 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) || (*(char *)(lVar9 + 0x11c8) != '\0')) {
        fVar13 = -491.0;
      }
      else {
        fVar13 = (float)FUN_0093a950(lVar9 + 0x28,&local_48,0);
        fVar13 = fVar13 + 9.0;
      }
      puVar8 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar8 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(undefined1 *)((long)puVar8 + 0x2e4) = 1;
      *(float *)(puVar8 + 0x5d) = (float)local_48;
      *(float *)((long)puVar8 + 0x2ec) = fVar13;
      *(float *)(puVar8 + 0x5e) = local_40._0_4_;
      *(undefined2 *)((long)puVar8 + 0x2e5) = 0x101;
    }
  }
  return;
}



void FUN_024ecbd0(long param_1)

{
  int *piVar1;
  byte *pbVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  float local_4c;
  float fStack_48;
  float local_44;
  undefined4 local_38;
  undefined1 local_34;
  
  piVar1 = (int *)(param_1 + 0x192a);
  FUN_023164ec(param_1,6);
  local_4c = (float)((uint)*(ushort *)(param_1 + 0x1922) << 0x10);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x160))(*(long **)(param_1 + 0x68),&local_4c);
  plVar8 = *(long **)(param_1 + 0x60);
  if (plVar8 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      plVar8 = &DAT_05240280;
    }
    else {
      plVar8 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar8 + 0x4e0))(0);
  fStack_48 = (float)(int)*(short *)(param_1 + 0x1928) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x1924) * 0.001;
  local_44 = (float)*piVar1 * 0.001;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  puVar6 = PTR_DAT_04bb6298;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    puVar13 = DAT_055c1b60;
    do {
      if (*(int *)(puVar13 + -1) == *(int *)(puVar14 + 7)) break;
      puVar13 = (undefined8 *)puVar13[1];
    } while (puVar13 != &DAT_055c1b58);
  }
  local_34 = 1;
  local_38 = CONCAT22(1,*(undefined2 *)PTR_DAT_04bb6298);
  fStack_48 = (float)FUN_016e80f0(&local_4c,0,&local_38);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x140))(*(long **)(param_1 + 0x68),&local_4c,1);
  FUN_0230f780(param_1,0);
  puVar5 = PTR_DAT_04bb27c8;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0x15c) != 0)) {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar10 + 0x158);
    }
    bVar12 = *(byte *)(param_1 + 0x1ee8);
    bVar11 = *pbVar2;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    if (bVar11 != bVar12) {
      fStack_48 = (float)(int)*(short *)(param_1 + 0x1928) * 0.25;
      lVar10 = *(long *)PTR_DAT_04bb27c8;
      local_4c = (float)*(int *)(param_1 + 0x1924) * 0.001;
      local_44 = (float)*piVar1 * 0.001;
      if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0')
         ) {
        fVar15 = -491.0;
      }
      else {
        fVar15 = (float)FUN_0093a950(lVar10 + 0x28,&local_4c,0);
        fVar15 = fVar15 + 9.0;
      }
      puVar14 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)(param_1 + 0x4c8);
      }
      *(undefined1 *)((long)puVar14 + 0x2e4) = 1;
      *(float *)(puVar14 + 0x5d) = local_4c;
      *(float *)((long)puVar14 + 0x2ec) = fVar15;
      *(float *)(puVar14 + 0x5e) = local_44;
      *(undefined2 *)((long)puVar14 + 0x2e5) = 0x101;
    }
  }
  fStack_48 = (float)(int)*(short *)(param_1 + 0x1928) * 0.25;
  lVar10 = *(long *)puVar5;
  local_4c = (float)*(int *)(param_1 + 0x1924) * 0.001;
  local_44 = (float)*piVar1 * 0.001;
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0')) {
    fStack_48 = -491.0;
  }
  else {
    fStack_48 = (float)FUN_0093a950(lVar10 + 0x28,&local_4c,0);
    fStack_48 = fStack_48 + 9.0;
  }
  sVar4 = *(short *)puVar6;
  if (sVar4 == -1) {
    uVar9 = 0;
  }
  else {
    local_38 = 0;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar9 = *puVar3 & 1;
  }
  FUN_023343f0(param_1,&local_4c,uVar9 ^ 1);
  return;
}


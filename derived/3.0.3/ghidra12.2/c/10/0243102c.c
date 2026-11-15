
void FUN_0243102c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint *puVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 *puVar10;
  float *pfVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_64;
  float local_5c [3];
  
  iVar14 = *(int *)(param_1 + 0x18e5);
  iVar15 = *(int *)(param_1 + 0x18eb);
  lVar9 = FUN_0251e98c(1);
  puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
  local_5c[1] = 0.0;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_70 = (undefined4)puVar2[0x4f];
  local_68 = *(undefined4 *)(puVar2 + 0x50);
  uStack_6c = 0;
  local_5c[0] = (float)iVar14 * 0.001;
  local_5c[2] = (float)iVar15 * 0.001;
  FUN_03eb4b60(*puVar10,0x41200000,0x3e4ccccc,&local_70,local_5c);
  *(undefined4 *)(puVar2 + 0x4f) = local_70;
  *(undefined4 *)(puVar2 + 0x50) = local_68;
  uVar5 = *(ushort *)(param_1 + 0x18ef);
  lVar9 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar16 = *pfVar11;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_5c[0] = 1.4013e-44;
    local_70 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0243117c;
  }
  else {
LAB_0243117c:
    iVar14 = (uint)uVar5 * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar9 = (**(code **)(*plVar3 + 0x148))();
    iVar15 = iVar14 - *(int *)(lVar9 + 4);
    if (0xb60b5e < iVar15 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar14 = -0x15555560;
      iVar15 = (int)(fVar16 * 0.6 * (float)iVar15);
      if (iVar15 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar14 = 0x5b05b0;
      }
      iVar1 = iVar15;
      if (iVar7 <= iVar15) {
        iVar1 = iVar7;
      }
      if (iVar14 <= iVar15) {
        iVar14 = iVar1;
      }
      iVar14 = iVar14 + *(int *)(lVar9 + 4);
    }
    *(int *)(lVar9 + 4) = iVar14;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar9 + 0xc) = 2;
  local_5c[0] = (float)FUN_01392d64(lVar9 + 0xb0);
  *(float *)(lVar9 + 8) = local_5c[0];
  *(int *)(lVar9 + 0xa8) = *(int *)(lVar9 + 0xa8) + 1;
  puVar8 = PTR_DAT_04bb27d0;
  if (local_5c[0] == 4.2039e-45) {
    return;
  }
  if (local_5c[0] == 1.4013e-45) {
    FUN_0243134c(param_1,param_1 + 0x1900);
    return;
  }
  uStack_6c = 0;
  local_68 = 0;
  local_70 = 6;
  local_64 = 0;
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    pcVar12 = (char *)FUN_02582a24(param_1 + 0x1ee8);
    lVar9 = **(long **)puVar8;
    bVar6 = *(byte *)(lVar9 + 0x473);
    pcVar13 = PTR_DAT_04bc1220;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar4 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pcVar13 = (char *)(lVar9 + 0x472);
      }
    }
    if (*pcVar12 != *pcVar13) {
      local_68 = 10;
      goto LAB_02431338;
    }
  }
  local_68 = 0;
LAB_02431338:
  FUN_02374564(param_1,&local_70);
  return;
}


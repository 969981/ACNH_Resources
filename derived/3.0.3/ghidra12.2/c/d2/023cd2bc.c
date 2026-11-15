
void FUN_023cd2bc(long param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  byte local_4c;
  undefined1 uStack_4b;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined1 local_42;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  undefined4 local_34;
  
  uVar2 = *(ushort *)(param_1 + 0x1900);
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar11 = *pfVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_34 = 10;
    local_4c = 10;
    uStack_4b = 0;
    uStack_4a = 0;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_023cd35c;
  }
  else {
LAB_023cd35c:
    iVar4 = (uint)uVar2 * 0x10000;
    plVar10 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar10 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar10 + 0x148))();
    iVar8 = iVar4 - *(int *)(lVar5 + 4);
    if (0xb60b5e < iVar8 + 0x5b05afU) {
      iVar3 = 0x15555560;
      iVar4 = -0x15555560;
      iVar8 = (int)(fVar11 * (float)iVar8);
      if (iVar8 < 1) {
        iVar3 = -0x5b05b0;
      }
      else {
        iVar4 = 0x5b05b0;
      }
      iVar1 = iVar8;
      if (iVar3 <= iVar8) {
        iVar1 = iVar3;
      }
      if (iVar4 <= iVar8) {
        iVar4 = iVar1;
      }
      iVar4 = iVar4 + *(int *)(lVar5 + 4);
    }
    *(int *)(lVar5 + 4) = iVar4;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  local_34 = 0;
  local_4c = 2;
  uStack_4b = 0;
  uStack_4a = 0;
  if (((puVar9[0x227] != 0) && (uVar7 = FUN_03850890(puVar9[0x227],2,0,0), (uVar7 & 1) != 0)) &&
     (plVar10 = *(long **)(param_1 + 0x60), plVar10 != (long *)0x0)) {
    if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37a0);
    }
    uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bb3798);
    if ((uVar7 & 1) != 0) {
      local_42 = (undefined1)plVar10[0x1836];
      local_3e = 1;
      local_4c = *(byte *)(param_1 + 0x1ee8);
      local_3c = 0;
      local_38 = 0x100;
      uStack_4a = (undefined2)plVar10[0x1835];
      uStack_48 = (undefined6)((ulong)plVar10[0x1835] >> 0x10);
      if (7 < local_4c) {
        local_4c = 0xff;
      }
      local_40 = *(undefined2 *)(param_1 + 0x190c);
      FUN_0254212c(&local_4c);
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      lVar5 = DAT_052413b8;
      goto joined_r0x023cd50c;
    }
    puVar9 = &DAT_05240280;
  }
  lVar5 = puVar9[0x227];
joined_r0x023cd50c:
  if (lVar5 == 0) {
    uVar7 = FUN_0170a6d0(puVar9,0);
  }
  else {
    local_4c = 1;
    uStack_4b = 0;
    uStack_4a = 0;
    uVar7 = FUN_0170a6d0(puVar9,*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
  }
  if ((uVar7 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined1 *)(param_1 + 0x1983) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined2 *)(param_1 + 0x1980) = 0x601;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    local_4c = 0x19;
    uStack_4b = 0;
    uStack_4a = 0;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar5 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar5,0x19);
  }
  return;
}


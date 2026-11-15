
void FUN_023bef20(long param_1)

{
  int iVar1;
  long *plVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined8 local_88;
  float local_80;
  float local_7c;
  int local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined2 local_60;
  float local_5c [3];
  
  uVar3 = *(ushort *)(param_1 + 0x190a);
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x13b0) + 0xf0))(lVar5 + 0x13b0);
  fVar13 = *pfVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_5c[0] = 1.4013e-44;
    local_88 = CONCAT44(local_88._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_023bf05c;
  }
  iVar12 = (uint)uVar3 * 0x10000;
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar5 = (**(code **)(*plVar2 + 0x148))();
  iVar11 = iVar12 - *(int *)(lVar5 + 4);
  if (0xb60b5e < iVar11 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar12 = -0x15555560;
    iVar11 = (int)(fVar13 * (float)iVar11);
    if (iVar11 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar12 = 0x5b05b0;
    }
    iVar1 = iVar11;
    if (iVar4 <= iVar11) {
      iVar1 = iVar4;
    }
    if (iVar12 <= iVar11) {
      iVar12 = iVar1;
    }
    iVar12 = iVar12 + *(int *)(lVar5 + 4);
  }
  *(int *)(lVar5 + 4) = iVar12;
LAB_023bf05c:
  iVar12 = *(int *)(param_1 + 0x1900);
  iVar11 = *(int *)(param_1 + 0x1906);
  lVar5 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x1380) + 0xf0))(lVar5 + 0x1380);
  local_5c[1] = 0.0;
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_80 = *(float *)(puVar10 + 0x50);
  local_88 = puVar10[0x4f] & 0xffffffff;
  local_5c[0] = (float)iVar12 * 0.001;
  local_5c[2] = (float)iVar11 * 0.001;
  FUN_03eb4b60(*puVar7,0x41200000,0x3e4ccccc,&local_88,local_5c);
  *(undefined4 *)(puVar10 + 0x4f) = (undefined4)local_88;
  *(float *)(puVar10 + 0x50) = local_80;
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_5c[0] = 0.0;
  local_88 = CONCAT44(local_88._4_4_,0xc);
  if (((puVar10[0x227] != 0) && (uVar8 = FUN_03850890(puVar10[0x227],0xc,0,0), (uVar8 & 1) != 0)) &&
     (*(char *)(param_1 + 0x190d) != '\0')) {
    FUN_02b64410(*(undefined2 *)(param_1 + 0x190e));
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar10 = &DAT_05240280;
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  uVar8 = FUN_0170a6d0(puVar10,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      if (*(char *)(param_1 + 0x190d) == '\0') {
        *(undefined8 *)(param_1 + 0x1988) = 0;
        *(undefined8 *)(param_1 + 0x1990) = 0;
        *(undefined8 *)(param_1 + 0x1998) = 0;
        *(undefined8 *)(param_1 + 0x19a0) = 0;
        *(undefined8 *)(param_1 + 0x19a8) = 0;
        *(undefined8 *)(param_1 + 0x19b0) = 0;
        *(undefined8 *)(param_1 + 0x19b8) = 0;
        *(undefined8 *)(param_1 + 0x19c0) = 0;
        *(undefined8 *)(param_1 + 0x19c8) = 0;
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1980) = 0;
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(undefined2 *)(param_1 + 0x198c) = 0x101;
        *(undefined1 *)(param_1 + 0x198e) = 6;
        local_88 = CONCAT44(local_88._4_4_,0xf);
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
        FUN_03ebb160(lVar5,0xf);
      }
      else {
        local_70 = 0;
        local_72 = 0;
        local_60 = 0xffff;
        local_74 = (undefined2)*(undefined8 *)(param_1 + 0x190e);
        local_80 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
        local_78 = (uint)*(ushort *)(param_1 + 0x190a) << 0x10;
        local_7c = (float)*(int *)(param_1 + 0x1906) * 0.001;
        uVar9 = (uint)*(byte *)(param_1 + 0x190c);
        if (0x1b < uVar9) {
          uVar9 = 0;
        }
        uStack_64 = (uint)*(byte *)(param_1 + 0x1916);
        local_88 = CONCAT44((float)*(int *)(param_1 + 0x1900) * 0.001,uVar9);
        if (1 < uStack_64) {
          uStack_64 = 0;
        }
        local_68 = 0;
        FUN_023bd244(param_1,&local_88);
      }
    }
    else {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
    }
  }
  return;
}



void FUN_00c08024(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  float fVar10;
  int local_38;
  undefined4 local_34;
  
  if (*(long *)(param_1 + 8) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar7 == (long *)0x0) {
    return;
  }
  uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  puVar8 = (undefined8 *)plVar7[0xc];
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  local_38 = 0;
  FUN_00c07e90(&local_38,param_1 + 0xd8);
  if (*(char *)(param_1 + 0x108) == '\x01') {
    lVar6 = plVar7[0x76];
    if (*(int *)(lVar6 + 0x360) != 0) {
      return;
    }
    if (*(int *)(lVar6 + 0x4b8) == 0) {
      return;
    }
    if (*(int *)(lVar6 + 0x378) != 0x23) {
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x108) != '\0') {
      return;
    }
    if (*(long *)(param_1 + 0xf0) == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0xf8);
      plVar4 = (long *)plVar7[0xc];
    }
    else {
      plVar4 = (long *)(**(code **)(*(long *)(*(long *)(param_1 + 0xf0) + 0x30) + 0xf0))();
      if (*(float *)(param_1 + 0x100) <= *(float *)(param_1 + 0xfc)) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = *(float *)(param_1 + 0xfc) + 1.0;
        *(float *)(param_1 + 0xfc) = fVar10;
        fVar10 = (1.0 / *(float *)(param_1 + 0x100)) * fVar10;
      }
      uVar9 = (**(code **)(*plVar4 + 0x10))(fVar10);
      *(undefined4 *)(param_1 + 0xf8) = uVar9;
      plVar4 = (long *)plVar7[0xc];
    }
    if (plVar4 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        plVar4 = &DAT_05240280;
      }
      else {
        plVar4 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar4 + 0x4e0))(uVar9);
    bVar1 = *(char *)(param_1 + 0x109) + 1;
    *(byte *)(param_1 + 0x109) = bVar1;
    if (local_38 == 2) {
      if (bVar1 < 10) {
        return;
      }
      if (puVar8[0x227] == 0) {
        uVar5 = 0;
      }
      else {
        local_34 = 1;
        uVar5 = *(uint *)(puVar8 + 0x2d3) >> 1 & 1;
      }
      uVar3 = FUN_0170a6d0(puVar8,uVar5);
      if ((uVar3 & 1) == 0) {
        return;
      }
      FUN_01e5aacc(plVar7[0x76],6);
      *(char *)(param_1 + 0x108) = *(char *)(param_1 + 0x108) + '\x01';
      return;
    }
    if (puVar8[0x227] == 0) {
      uVar5 = 0;
    }
    else {
      local_34 = 1;
      uVar5 = *(uint *)(puVar8 + 0x2d3) >> 1 & 1;
    }
    uVar3 = FUN_0170a6d0(puVar8,uVar5);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return;
}


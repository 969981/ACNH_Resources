
void FUN_0243f2dc(long param_1)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_48;
  char *pcStack_40;
  undefined4 local_34;
  
  local_34 = *(undefined4 *)(param_1 + 0x230);
  sVar1 = *(short *)PTR_DAT_04bb6298;
  if (sVar1 != -1) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
    puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar1 * 8);
    if (0xff < (uint)(int)sVar1) {
      puVar8 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar8 >> 1 & 1) != 0) {
      uVar5 = 0;
      goto LAB_0243f370;
    }
  }
  FUN_016f742c(&local_48,&local_34,0);
  uVar5 = local_48._2_2_;
LAB_0243f370:
  *(undefined2 *)(param_1 + 0x1900) = uVar5;
  FUN_023164ec(param_1,6);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar6 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar7 + 0x278) * 999.99994);
    iVar3 = (int)(*(float *)(lVar7 + 0x27c) * 4.0);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar3;
    fVar9 = *(float *)(lVar7 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar9 * 999.99994);
    uVar6 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar6;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar4 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar10 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar4 + 0x2ec) = uVar10;
    *(undefined1 *)((long)puVar4 + 0x2e5) = 1;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "PlayerSharePlayPassMain";
  FUN_017081d0(puVar4,&local_48,6,1,0);
  puVar2 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
      if (iVar3 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
      puVar8 = &DAT_054f08d0;
    }
    else {
      puVar8 = &DAT_054f08d0;
    }
  }
  else {
    puVar8 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
  }
  local_48._0_4_ = 2;
  *puVar8 = *puVar8 | 4;
  if (*(long *)puVar2 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0960);
      puVar8 = (uint *)&DAT_054f0958;
      if (iVar3 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar8 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar8 = (uint *)(*(long *)puVar2 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar8 = puVar8 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  local_48 = (undefined *)CONCAT44(local_48._4_4_,0x19);
  *puVar8 = *puVar8 & 0xfdffffff;
  FUN_02333d7c(param_1);
  return;
}


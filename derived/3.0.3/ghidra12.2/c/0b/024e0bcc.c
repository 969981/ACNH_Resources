
void FUN_024e0bcc(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 local_60;
  char *local_58;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  fVar5 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1900));
  fVar5 = fVar5 * 5.0 + 2.5;
  fVar7 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x1901));
  fVar7 = fVar7 * 5.0 + 2.5;
  local_60 = (undefined *)(ulong)(uint)fVar5;
  local_58._0_4_ = fVar7;
  uVar6 = FUN_016e026c(0,&local_60,0,0);
  local_60 = (undefined *)
             CONCAT44(uVar6,(float)(int)((int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0) &
                                        0xfffffffe) * 5.0 + 5.0);
  local_58 = (char *)CONCAT44(local_58._4_4_,
                              (float)(int)((int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0) &
                                          0xfffffffe) * 5.0 + 5.0);
  uStack_48 = FUN_016e026c(0,&local_60,0,0);
  cVar1 = *(char *)(param_1 + 0x1902);
  local_4c = (undefined4)local_60;
  local_44 = local_58._0_4_;
  FUN_016dec40(param_1,&local_4c,0,0,0,0,0);
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfff7ffff;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar4 = &DAT_054f0958;
    }
    else {
      puVar4 = &DAT_054f0958;
    }
  }
  else {
    uVar3 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar4 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if (uVar3 < 8) {
      puVar4 = puVar4 + uVar3;
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0x2c);
  *(uint *)((long)puVar4 + 4) = *(uint *)((long)puVar4 + 4) & 0xffffefff;
  if (cVar1 != '\0') {
    FUN_02549a64((byte *)(param_1 + 0x1ee8));
  }
  FUN_023164ec(param_1,6);
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "CommonTreeShake";
  FUN_017081d0(puVar4,&local_60,6,0,0);
  return;
}


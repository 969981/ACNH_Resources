
void FUN_0040cb4c(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  undefined *local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 uStack_58;
  
  puVar4 = PTR_DAT_04bd29a8;
  *param_1 = (long)(PTR_DAT_04bd29a0 + 0x10);
  (**(code **)(*(long *)puVar4 + 0x10))(puVar4);
  puVar6 = PTR_DAT_04bd29b0;
  sVar3 = *(short *)PTR_DAT_04bd29b0;
  if (sVar3 == 1) {
    local_70[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    uStack_58 = 0x10;
    local_78 = puVar1;
    local_60 = local_70;
    FUN_0018b070(&local_78,"UserMessage",0xffffffffffffffff);
    puVar5 = PTR_DAT_04bcc970;
    FUN_001f8df0(PTR_DAT_04bcc970,&local_78);
    local_78 = puVar1;
    FUN_0018b1a0(&local_78);
    local_70[0] = 0;
    uStack_58 = 0x10;
    local_78 = puVar1;
    local_60 = local_70;
    FUN_0018b070(&local_78,"TextMessage",0xffffffffffffffff);
    FUN_001f8df0(puVar5,&local_78);
    local_78 = puVar1;
    FUN_0018b1a0(&local_78);
    local_70[0] = 0;
    uStack_58 = 0x10;
    local_78 = puVar1;
    local_60 = local_70;
    FUN_0018b070(&local_78,"BinaryMessage",0xffffffffffffffff);
    FUN_001f8df0(puVar5,&local_78);
    local_78 = puVar1;
    FUN_0018b1a0(&local_78);
    sVar3 = *(short *)puVar6;
  }
  *(short *)puVar6 = sVar3 + -1;
  (**(code **)(*(long *)puVar4 + 0x20))(puVar4);
  puVar4 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      lVar8 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar8 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar9 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  param_1[0x27] = 0;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  FUN_00204900(param_1,0);
  FUN_001f87d0();
  FUN_00202110(param_1 + 0x28);
  FUN_0040c51c(param_1 + 0x16);
  FUN_00202110(param_1 + 4);
  FUN_002045b0(param_1);
  return;
}


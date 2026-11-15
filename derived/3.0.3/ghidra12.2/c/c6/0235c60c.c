
void FUN_0235c60c(long param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_90;
  float fStack_8c;
  float local_88;
  int *local_80;
  undefined1 local_78 [8];
  undefined4 local_70;
  uint uStack_6c;
  int local_64 [2];
  undefined1 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined1 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    piVar1 = (int *)(param_1 + 0x18e5);
    bVar2 = -1 < (char)*(byte *)(param_1 + 0x18f4);
    if (bVar2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 4;
      *(undefined8 *)(param_1 + 0x17e0) = *(undefined8 *)piVar1;
      *(undefined2 *)(param_1 + 0x17e8) = *(undefined2 *)(param_1 + 0x18ed);
    }
    fVar9 = (float)*piVar1 * 0.001;
    fVar8 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    local_64[1] = 6;
    fVar7 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    if ((*(byte *)(param_1 + 0x18f4) >> 6 & 1) == 0) {
      if (bVar2) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = uVar6 | 2;
      *(undefined8 *)(param_1 + 0x17e0) = *(undefined8 *)piVar1;
      *(undefined2 *)(param_1 + 0x17e8) = *(undefined2 *)(param_1 + 0x18ed);
    }
    local_64[0] = (uint)*(ushort *)(param_1 + 0x18ef) << 0x10;
    local_90 = fVar9;
    fStack_8c = fVar8;
    local_88 = fVar7;
    uVar4 = FUN_016ec07c(0,&local_90,1);
    if ((uVar4 & 1) == 0) {
      local_80 = local_64;
      local_70 = 6;
      local_78 = (undefined1  [8])0x2;
      local_90 = fVar9;
      fStack_8c = fVar8;
      local_88 = fVar7;
      uStack_6c = uVar6;
      FUN_02416248(param_1,&local_90);
      FUN_0244d1b8(0,param_1);
      puVar5 = *(undefined8 **)(param_1 + 0x60);
      if (puVar5 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_052461c0);
          puVar5 = &DAT_05240280;
          if (iVar3 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar5 = &DAT_05240280;
        }
      }
      local_64[1] = 6;
      local_5c = 1;
      local_50 = 1;
      local_58 = *(undefined2 *)PTR_DAT_04bb37e0;
      local_56 = PTR_DAT_04bb37e0[2];
      local_55 = PTR_DAT_04bb37e0[3];
      local_54 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      local_42 = 0;
      local_44 = 0x101;
      local_4c = local_58;
      local_4a = local_56;
      local_49 = local_55;
      local_48 = local_54;
      FUN_0170f380(puVar5,local_64 + 1);
    }
    else {
      if (*(int *)(param_1 + 0x1810) == 6) {
        local_78[4] = 1;
        local_78._0_4_ = uVar6;
      }
      else {
        local_78[4] = 0;
        local_78._0_4_ = uVar6;
      }
      local_80 = local_64;
      local_90 = fVar9;
      fStack_8c = fVar8;
      local_88 = fVar7;
      FUN_024178e0(param_1,&local_90);
    }
  }
  return;
}


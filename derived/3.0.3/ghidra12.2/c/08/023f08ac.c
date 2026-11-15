
/* WARNING: Removing unreachable block (ram,0x023f0a54) */

void FUN_023f08ac(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68 [4];
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar4 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  *(undefined4 *)((long)puVar3 + 0x2ec) = uVar4;
  *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  fStack_38 = (float)(int)*(short *)(param_1 + 0x1910) * 0.25;
  fStack_44 = (float)(int)*(short *)(param_1 + 0x1906) * 0.25;
  local_3c = (float)*(int *)(param_1 + 0x190c) * 0.001;
  local_34 = (float)*(int *)(param_1 + 0x1912) * 0.001;
  local_48 = (float)*(int *)(param_1 + 0x1902) * 0.001;
  local_40 = (float)*(int *)(param_1 + 0x1908) * 0.001;
  local_88 = CONCAT44((float)(int)*(short *)(param_1 + 0x191a) * 0.25,
                      (float)*(int *)(param_1 + 0x1916) * 0.001);
  local_68[0] = &PTR_LAB_04a81380;
  local_80 = CONCAT44(local_80._4_4_,(float)*(int *)(param_1 + 0x191c) * 0.001);
  (**(code **)(*(long *)PTR_DAT_04bbde30 + 0x10))(PTR_DAT_04bbde30,local_68);
  FUN_016da7c0(param_1,&local_88,&local_3c,&local_48,local_68);
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(char *)(param_1 + 0x1921) != '\0') {
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      local_80 = 0;
      if (puVar3 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar1 = __cxa_guard_acquire(&DAT_052461c0);
          puVar3 = &DAT_05240280;
          if (iVar1 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar3 = &DAT_05240280;
        }
      }
      if (puVar3[0x227] == 0) {
        local_48 = 0.0;
      }
      else {
        local_48 = (float)(*(uint *)(puVar3 + 0x2d3) >> 1 & 1);
        local_3c = 2.52234e-44;
        uVar2 = FUN_03850890(puVar3[0x227],0x12,&local_88,local_48);
        if ((uVar2 & 1) != 0) {
          local_3c = *(float *)(param_1 + 0x1924);
          fStack_38 = *(float *)(param_1 + 0x1928);
          local_34 = (float)CONCAT22(local_34._2_2_,1);
          FUN_02431500(param_1,&local_3c);
        }
      }
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
    }
    uVar2 = FUN_016dad90(param_1);
    if ((uVar2 & 1) != 0) {
      if (*(char *)(param_1 + 0x1922) == '\0') {
        local_80 = (ulong)local_80._5_3_ << 0x28;
      }
      else {
        local_80 = CONCAT35(local_80._5_3_,0x100000000);
      }
      local_88 = 0x1000000000006;
      FUN_02374564(param_1,&local_88);
    }
  }
  return;
}


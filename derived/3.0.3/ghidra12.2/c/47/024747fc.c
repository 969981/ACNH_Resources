
void FUN_024747fc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  uVar6 = (uint)*(byte *)(param_1 + 0x1900);
  if (5 < uVar6) {
    uVar6 = 0;
  }
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "PlayerToolReflect";
  FUN_017081d0(puVar2,&local_48,6,0,0);
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2290) + 0xf0))(lVar3 + 0x2290);
  fVar8 = *pfVar4;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined1 *)(param_1 + 0x4ed) = 1;
  uVar7 = (uint)fVar8;
  *(byte *)(param_1 + 0x4ec) = (byte)(uVar7 >> 0x1f);
  *(uint *)(param_1 + 0x4e8) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x4e4) = uVar7 & (int)uVar7 >> 0x1f;
  lVar3 = FUN_0251e98c(1);
  puVar5 = (uint *)(**(code **)(*(long *)(lVar3 + 0xcc0) + 0xf0))(lVar3 + 0xcc0);
  uVar7 = *puVar5;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x54d) = 1;
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xffffff7f;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  *(byte *)(param_1 + 0x54c) = (byte)(uVar7 >> 0x1f);
  *(uint *)(param_1 + 0x544) = uVar7 & (int)uVar7 >> 0x1f;
  *(uint *)(param_1 + 0x548) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  if (puVar2 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  if (uVar6 - 2 < 4) {
    *(undefined1 *)((long)puVar2 + 0x5e95) = 1;
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x5e95) = 0;
    if (uVar6 == 0) {
      local_38 = 0;
      local_48 = (undefined *)
                 CONCAT44((float)(int)*(short *)(param_1 + 0x1913) * 0.25,
                          (float)(int)*(short *)(param_1 + 0x1911) * 0.25);
      local_40 = (char *)CONCAT44(0x10101,(float)(int)*(short *)(param_1 + 0x1915) * 0.25);
      FUN_016dec40(param_1,&local_48,1,1,1,0,0);
    }
  }
  return;
}


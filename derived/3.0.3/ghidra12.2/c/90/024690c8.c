
/* WARNING: Removing unreachable block (ram,0x0246916c) */

void FUN_024690c8(long param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  float fVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  
  *(undefined4 *)(param_1 + 0x620) = 0;
  *(undefined1 *)(param_1 + 0x64d) = 0;
  *(undefined1 *)(param_1 + 0x624) = 0;
  cVar1 = *(char *)(param_1 + 0x190d);
  *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(param_1 + 0x644);
  puVar4 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(puVar4 + 0x4f);
  *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)((long)puVar4 + 0x27c);
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(puVar4 + 0x50);
  if (*(char *)(param_1 + 0x190c) == '\0') {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x27c);
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar4 = &DAT_05240280;
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    uStack_50 = "PlayerEnterInWater";
    uVar5 = 6;
  }
  else {
    fVar8 = -20.0;
    if ((*(long *)PTR_DAT_04bb2200 != 0) &&
       (lVar7 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar7 != 0)) {
      local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
      lVar7 = *(long *)(lVar7 + 0x118);
      if (lVar7 != 0) {
        lVar7 = *(long *)(lVar7 + 0x280);
        fVar8 = 0.0;
        if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 8), lVar7 != 0)) {
          pfVar3 = (float *)(**(code **)(*(long *)(lVar7 + 0x488) + 0xf0))(lVar7 + 0x488);
          fVar8 = *pfVar3;
        }
        lVar7 = FUN_0251e98c(1);
        pfVar3 = (float *)(**(code **)(*(long *)(lVar7 + 0x1560) + 0xf0))(lVar7 + 0x1560);
        fVar8 = fVar8 + *pfVar3;
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    *(float *)(param_1 + 0x62c) = fVar8;
    if (puVar4 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar4 = &DAT_05240280;
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    if (cVar1 == '\0') {
      uStack_50 = "PlayerJumpValley";
    }
    else {
      uStack_50 = "PlayerSwimGoOut";
    }
    uVar5 = 0x10;
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  FUN_017029bc(puVar4,&local_58,uVar5,0,0);
  *(undefined8 *)(param_1 + 0x398) = 0;
  bVar6 = *(byte *)(param_1 + 0x1ee8);
  *(undefined2 *)(param_1 + 0x3a4) = 0x100;
  *(undefined4 *)(param_1 + 0x3a0) = 0x1e;
  local_48 = 0x3f800000;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 2;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_58 = (undefined *)CONCAT71(local_58._1_7_,bVar6);
  local_44 = 1;
  local_58 = (undefined *)CONCAT44((float)*(int *)(param_1 + 0x1900) * 0.001,(undefined4)local_58);
  uStack_50 = (char *)CONCAT44((float)*(int *)(param_1 + 0x1906) * 0.001,
                               (float)(int)*(short *)(param_1 + 0x1904) * 0.25);
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_58,*(undefined4 *)(param_1 + 0x230),1);
  return;
}


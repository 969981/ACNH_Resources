
void FUN_0247d20c(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *local_70;
  char *local_68;
  long local_60;
  undefined1 local_54 [8];
  float local_4c;
  float fStack_48;
  float local_44;
  
  local_4c = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fStack_48 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_44 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  FUN_016dec40(param_1,&local_4c,0,0,0,0,0);
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  FUN_0252d8f0(local_54,pbVar1);
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(local_54);
  lVar7 = *(long *)puVar2;
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_60 = 0;
      local_70 = PTR_DAT_04bc0510 + 0x10;
      uVar3 = FUN_0277d6c4(&local_68);
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(local_54);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
            local_60 = lVar7;
          }
        }
      }
      uVar5 = FUN_01ad9244(&local_70);
      if ((uVar5 & 1) != 0) {
        puVar6 = *(undefined8 **)(param_1 + 0x60);
        if (puVar6 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar4 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar6 = &DAT_05240280;
          }
          else {
            puVar6 = &DAT_05240280;
          }
        }
        local_68 = "PlayerAxeDullHitTree";
        goto LAB_0247d3ec;
      }
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_68 = "PlayerAxeHitTree";
LAB_0247d3ec:
  local_70 = PTR_DAT_04bb2020 + 0x10;
  FUN_017029bc(puVar6,&local_70,6,0,0);
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfff7ffff;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f0960);
      puVar6 = &DAT_054f0958;
      if (iVar4 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar6 = &DAT_054f0958;
    }
  }
  else {
    puVar6 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar6 = puVar6 + *pbVar1;
    }
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x2c);
  *(uint *)((long)puVar6 + 4) = *(uint *)((long)puVar6 + 4) & 0xffffefff;
  if (*(char *)(param_1 + 0x1913) != '\0') {
    FUN_02549a64(pbVar1);
  }
  return;
}


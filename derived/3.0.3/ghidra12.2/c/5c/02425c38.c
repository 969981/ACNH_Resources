
/* WARNING: Removing unreachable block (ram,0x02425e3c) */
/* WARNING: Removing unreachable block (ram,0x02425d7c) */
/* WARNING: Removing unreachable block (ram,0x02425e8c) */

void FUN_02425c38(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_48;
  char *local_40;
  undefined1 local_38;
  
  if (((*(long *)PTR_DAT_04bb2808 != 0) &&
      (lVar8 = *(long *)(*(long *)PTR_DAT_04bb2808 + 8), lVar8 != 0)) &&
     (1 < *(uint *)(lVar8 + 0x1b0))) {
    return;
  }
  if (*(char *)(param_1 + 0xc55) == '\0') {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_48 = PTR_DAT_04bb2020 + 0x10;
    local_40 = "PlayerSeeSomebody";
    FUN_01707d90(puVar9,&local_48,6,0,0);
    lVar8 = FUN_0251e98c(1);
    puVar7 = (uint *)(**(code **)(*(long *)(lVar8 + 0x12c0) + 0xf0))(lVar8 + 0x12c0);
    uVar1 = *puVar7;
    *(undefined4 *)(param_1 + 0xc48) = 0;
    *(undefined1 *)(param_1 + 0xc55) = 1;
    *(byte *)(param_1 + 0xc54) = (byte)(uVar1 >> 0x1f);
    *(uint *)(param_1 + 0xc50) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    *(uint *)(param_1 + 0xc4c) = uVar1 & (int)uVar1 >> 0x1f;
    goto LAB_02425f70;
  }
  if (*(char *)(param_1 + 0xc60) == '\0') {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    if (puVar9[0x227] == 0) {
      local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
LAB_02425ddc:
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      if (puVar9[0x227] == 0) {
        local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
      }
      else {
        uVar1 = *(uint *)(puVar9 + 0x2d3) >> 1 & 1;
        local_48 = (undefined *)
                   (CONCAT44(local_48._4_4_,*(uint *)(puVar9 + 0x2d3) >> 1) & 0xffffffff00000001);
        uVar6 = FUN_03850368(puVar9[0x227],uVar1);
        if ((((uVar6 & 1) == 0) && (puVar9[0x227] != 0)) &&
           ((uVar6 = FUN_03850368(puVar9[0x227],uVar1), (uVar6 & 1) == 0 &&
            (uVar6 = FUN_0384fca4(puVar9[0x227],uVar1), (uVar6 & 1) == 0)))) goto LAB_02425d90;
      }
LAB_02425eb8:
      *(undefined1 *)(param_1 + 0xc60) = 1;
      goto LAB_02425ecc;
    }
    local_48 = (undefined *)
               (CONCAT44(local_48._4_4_,*(uint *)(puVar9 + 0x2d3) >> 1) & 0xffffffff00000001);
    uVar6 = FUN_03850368(puVar9[0x227],*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
    if ((uVar6 & 1) == 0) goto LAB_02425ddc;
LAB_02425d90:
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    if (puVar9[0x227] == 0) {
      local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
    }
    else {
      local_48 = (undefined *)
                 (CONCAT44(local_48._4_4_,*(uint *)(puVar9 + 0x2d3) >> 1) & 0xffffffff00000001);
      uVar6 = FUN_03850368(puVar9[0x227],*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
      if ((((uVar6 & 1) != 0) && (*(char *)(param_1 + 0xc55) != '\0')) &&
         (*(int *)(param_1 + 0xc50) <= *(int *)(param_1 + 0xc48))) goto LAB_02425eb8;
    }
    if (*(char *)(param_1 + 0xc60) != '\0') goto LAB_02425ecc;
LAB_02425f68:
    cVar2 = *(char *)(param_1 + 0xc55);
  }
  else {
LAB_02425ecc:
    lVar8 = FUN_0251e98c(1);
    puVar7 = (uint *)(**(code **)(*(long *)(lVar8 + 0x12f0) + 0xf0))(lVar8 + 0x12f0);
    local_40 = (char *)0x41a0000040000000;
    local_38 = 0;
    local_48 = (undefined *)((ulong)*puVar7 << 0x20);
    uVar6 = FUN_023b7bb8(param_1,&local_48);
    if ((uVar6 & 1) == 0) goto LAB_02425f68;
    bVar3 = *(byte *)(param_1 + 0x1900);
    if (7 < bVar3) {
      bVar3 = 0;
    }
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_023752f4(param_1,bVar3,6);
      goto LAB_02425f68;
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
    if (bVar3 == 1) {
      FUN_0231b68c(param_1,6);
      cVar2 = *(char *)(param_1 + 0xc55);
    }
    else {
      FUN_023164ec(param_1,6);
      cVar2 = *(char *)(param_1 + 0xc55);
    }
  }
  if (cVar2 == '\0') {
    return;
  }
LAB_02425f70:
  uVar4 = (**(code **)(*(long *)(param_1 + 0xc40) + (ulong)*(byte *)(param_1 + 0xc54) * 8))
                    (param_1 + 0xc40);
  *(undefined4 *)(param_1 + 0xc48) = uVar4;
  return;
}


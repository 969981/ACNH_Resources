
void FUN_023e8dc4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *local_48;
  uint *local_40;
  char *local_38;
  
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x40;
  if (*(char *)(param_1 + 0x1900) != '\0') {
    lVar5 = **(long **)PTR_DAT_04bb27d0;
    if (*(byte *)(lVar5 + 0x476) < 2) {
      lVar5 = *(long *)PTR_DAT_04bb4fb8;
      uVar2 = (uint)*(byte *)(lVar5 + 0x27c4) + (uint)*(byte *)(lVar5 + 0x13d4) +
              (uint)*(byte *)(lVar5 + 0x3bb4) + (uint)*(byte *)(lVar5 + 0x4fa4) +
              (uint)*(byte *)(lVar5 + 0x6394) + (uint)*(byte *)(lVar5 + 0x7784) +
              (uint)*(byte *)(lVar5 + 0x8b74) + (uint)*(byte *)(lVar5 + 0x9f64);
      puVar8 = *(undefined8 **)(param_1 + 0x60);
    }
    else if (*(int *)(lVar5 + 0x508) == 4) {
      uVar2 = (uint)*(byte *)(lVar5 + 0x475);
      puVar8 = *(undefined8 **)(param_1 + 0x60);
    }
    else {
      uVar2 = FUN_0250a5c8(*(undefined8 *)PTR_DAT_04bb4fb8);
      puVar8 = *(undefined8 **)(param_1 + 0x60);
    }
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    if (uVar2 < 2) {
      local_48 = "PlayerMenuWait";
    }
    else {
      local_48 = "PlayerWait";
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    FUN_017081d0(puVar8,&local_50,0xc,1,0);
    return;
  }
  local_38 = (char *)0xfffe;
  FUN_0277d4ac(&local_38);
  puVar1 = PTR_DAT_04bb43c0;
  local_38 = *(char **)(param_1 + 0x1901);
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_38);
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) goto LAB_023e9038;
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if ((*(uint *)(lVar9 + 0x1d8) <= uVar2) ||
     (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_023e9038;
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = local_38;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 == 0) {
LAB_023e8fb8:
    uVar4 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_023e8fb8;
    lVar5 = *(long *)PTR_DAT_04bc0428;
    uVar2 = FUN_0277d6c4(&local_38);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
       (puVar6 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), puVar6 == (uint *)0x0)
       ) goto LAB_023e8fb8;
    uVar4 = 0;
    uVar2 = *puVar6;
    local_40 = puVar6;
    if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
      uVar4 = 0;
      if (*puVar7 != 0) {
        uVar2 = puVar7[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar5 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar5 != 0) {
            uVar4 = 0;
            if ((ulong)uVar2 != 0) {
              uVar4 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar2);
            }
            if (*puVar7 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar4 * 2),
               uVar4 < 0x52)) goto LAB_023e8fbc;
          }
        }
        goto LAB_023e8fb8;
      }
    }
  }
LAB_023e8fbc:
  local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar4);
  if ((uVar4 < 0x11) && ((1 << (ulong)(uVar4 & 0x1f) & 0x17000U) != 0)) {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    local_60 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "PlayerFtrHoldWait";
    FUN_01707d90(puVar8,&local_60,6,0,0);
    return;
  }
LAB_023e9038:
  FUN_023164ec(param_1,6);
  return;
}


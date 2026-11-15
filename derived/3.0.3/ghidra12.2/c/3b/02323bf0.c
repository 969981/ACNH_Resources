
undefined8 FUN_02323bf0(long param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar5 = PTR_DAT_04bb6298;
  if ((*(char *)(param_1 + 0x12f8) == '\0') || (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 == -1))
  goto LAB_02323fb4;
  local_48 = 1;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar3 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((*puVar3 >> 1 & 1) == 0) || (uVar9 = FUN_016e6498(), (uVar9 & 1) != 0)) goto LAB_02323c78;
  if (((7 < *pbVar1) ||
      (((uVar7 = FUN_02582d8c(pbVar1,1), puVar6 = PTR_DAT_04bb4fb8, 7 < uVar7 ||
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0')) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) == '\0')))) ||
     ((uVar7 = FUN_02582d8c(pbVar1,1), 7 < uVar7 ||
      (*(char *)(*(long *)puVar6 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0')))) goto LAB_02323fb4;
  if (*(char *)(param_1 + 0x17ac) != '\0') goto LAB_02323c78;
  puVar2 = (undefined4 *)(*(long *)puVar6 + (ulong)uVar7 * 0x13f0 + 0x10);
  if ((*(uint *)(param_1 + 0xed0) >> 8 & 1) == 0) {
LAB_02323f64:
    if ((*(uint *)(param_1 + 0xed0) >> 5 & 1) == 0) {
      if ((*(uint *)(param_1 + 0xed0) >> 6 & 1) != 0) {
        local_48 = 0xfffe;
        uStack_44 = 0;
        FUN_0277d4ac(&local_48);
        uVar9 = FUN_02580b14(puVar2,&local_48);
        goto joined_r0x02324018;
      }
      local_48 = 4;
      if ((*(uint *)(param_1 + 0xed0) >> 4 & 1) != 0) {
        plVar11 = (long *)FUN_016debb0(param_1);
        (**(code **)(*plVar11 + 0x370))(&local_48);
        uVar9 = FUN_0277d9a8(&local_48);
        if ((uVar9 & 1) == 0) goto LAB_02323c78;
        uVar9 = FUN_02535300(pbVar1,*(undefined4 *)(param_1 + 0x230),PTR_DAT_04bb37e0,0);
        goto joined_r0x023240a0;
      }
    }
    else {
      local_48 = 0xfffe;
      uStack_44 = 0;
      FUN_0277d4ac(&local_48);
      uVar9 = FUN_02580be0(puVar2,&local_48);
joined_r0x02324018:
      if ((uVar9 & 1) != 0) {
        uVar9 = FUN_02535300(pbVar1,*(undefined4 *)(param_1 + 0x230),&local_48,*puVar2);
joined_r0x023240a0:
        if ((uVar9 & 1) != 0) goto LAB_023240a4;
      }
    }
LAB_02323c78:
    sVar4 = *(short *)puVar5;
    if (sVar4 != -1) {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((((puVar3[1] & 1) != 0) && (local_48 = 1, (*puVar3 >> 1 & 1) != 0)) && (*pbVar1 < 8)) &&
          (((uVar7 = FUN_02582d8c(pbVar1,1), puVar5 = PTR_DAT_04bb4fb8, uVar7 < 8 &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
           ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0' &&
            ((uVar7 = FUN_02582d8c(pbVar1,1), uVar7 < 8 && (*(long *)puVar5 != 0)))))))) &&
         ((*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0' &&
          ((*(char *)(param_1 + 0x17ac) == '\0' &&
           (_local_48 = CONCAT44(uStack_44,4), (*(uint *)(param_1 + 0xed0) >> 4 & 1) != 0)))))) {
        plVar11 = *(long **)(param_1 + 0x60);
        if (plVar11 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(&DAT_052461c0);
            plVar11 = &DAT_05240280;
            if (iVar8 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar11 = &DAT_05240280;
          }
        }
        (**(code **)(*plVar11 + 0x370))(&local_48,plVar11);
        puVar5 = PTR_DAT_04bb43c0;
        lVar12 = *(long *)PTR_DAT_04bb43c0;
        uVar7 = FUN_0277d6c4(&local_48);
        if (*(long *)puVar5 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if (((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
             (uVar9 = FUN_02539778(pbVar1,*(undefined4 *)(param_1 + 0x230),PTR_DAT_04bb37e0,0),
             (uVar9 & 1) != 0)) goto LAB_023240a4;
        }
      }
    }
LAB_02323fb4:
    uVar10 = 0;
  }
  else {
    local_48 = 0xfffe;
    uStack_44 = 0;
    FUN_0277d4ac(&local_48);
    uVar9 = FUN_02580be0(puVar2,&local_48);
    if (((uVar9 & 1) == 0) ||
       (uVar9 = FUN_02535300(pbVar1,*(undefined4 *)(param_1 + 0x230),&local_48,*puVar2),
       (uVar9 & 1) == 0)) {
      if (*(char *)(param_1 + 0x17ac) != '\0') goto LAB_02323c78;
      goto LAB_02323f64;
    }
LAB_023240a4:
    uVar10 = 1;
  }
  return uVar10;
}


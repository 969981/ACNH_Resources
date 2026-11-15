
void FUN_024cd740(long param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined1 auStack_5c [8];
  byte local_54 [4];
  undefined8 local_50;
  undefined8 local_48;
  
  pcVar1 = (char *)(param_1 + 0x1900);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x15c) != 0)) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar9 + 0x158);
      }
      bVar11 = *(byte *)(param_1 + 0x1ee8);
      bVar10 = *pbVar2;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      if (bVar10 != bVar11) goto LAB_024cd768;
    }
    local_50 = (undefined **)
               (CONCAT44(local_50._4_4_,(uint)(**(byte **)PTR_DAT_04bb38d0 >> 2)) &
               0xffffffff0000000f);
    if (((int)local_50 == 6) && (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2)) {
      local_50 = &PTR_FUN_04a73288;
      iVar7 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar7 != 0) {
        lVar9 = (long)iVar7 << 3;
        puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_50)(&local_50,*puVar12);
          lVar9 = lVar9 + -8;
          puVar12 = puVar12 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_024cd768:
  if (*pcVar1 == '\0') {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    local_50 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_48 = "CommonStickLightDown";
    FUN_017081d0(puVar12,&local_50,6,1,0);
  }
  else {
    uVar4 = *(undefined1 *)(param_1 + 0x1901);
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    uVar8 = FUN_016dd11c(uVar4);
    FUN_017081d0(puVar12,uVar8,6,1,0);
    uVar3 = *(undefined4 *)(param_1 + 0x230);
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    lVar9 = FUN_017067d4(puVar12,uVar3,0);
    if (lVar9 != 0) {
      uVar8 = FUN_016dc47c(uVar4);
      FUN_01751d60(lVar9,uVar8,6,0,0);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar6 & 0xfffffffe;
  if ((uVar6 & 1) != 0) {
    local_54[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
    if (*pcVar1 != '\0') {
      local_50 = (undefined **)0xfffe;
      FUN_0277d4ac(&local_50);
      puVar5 = PTR_DAT_04bb43c0;
      local_50 = *(undefined ***)(param_1 + 0x1902);
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar5 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          FUN_02326130(local_54,&local_50,1);
        }
      }
      if (*pcVar1 != '\0') {
        local_50 = (undefined **)((ulong)local_50 & 0xffffff0000000000);
        local_48 = (char *)CONCAT17(local_48._7_1_,6);
        local_48 = (char *)CONCAT26(local_48._6_2_,6);
        FUN_02321e44(auStack_5c,param_1,&local_50);
      }
    }
  }
  return;
}


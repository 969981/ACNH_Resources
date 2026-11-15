
void FUN_0237a58c(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ushort uVar8;
  undefined8 uVar9;
  byte bVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  char cVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  undefined8 local_68;
  
  puVar1 = (undefined8 *)(param_1 + 0x190c);
  if (*(int *)(param_1 + 0x178) == 0) {
    *(undefined1 *)(param_1 + 0x1914) = 0;
  }
  *(undefined1 *)(param_1 + 0xda8) = 0;
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  puVar3 = PTR_DAT_04bb43c0;
  local_68 = *puVar1;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_68);
  lVar13 = *(long *)puVar3;
  if (lVar13 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_70 = (uint *)0x0;
      local_80 = PTR_DAT_04bc0510 + 0x10;
      local_78 = (undefined4)local_68;
      uStack_74 = local_68._4_4_;
      uVar4 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar3 == 0) {
LAB_0237a764:
        cVar15 = *(char *)(param_1 + 0x1914);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
        uVar4 = 0xbc;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0237a764;
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_68);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
           (puVar11 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8),
           puVar11 == (uint *)0x0)) goto LAB_0237a764;
        cVar15 = *(char *)(param_1 + 0x1914);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
        uVar4 = 0;
        uVar2 = *puVar11;
        local_70 = puVar11;
        if ((uVar2 != 0) && (puVar11 != (uint *)(ulong)uVar2)) {
          puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar2);
          uVar4 = 0;
          if (*puVar12 != 0) {
            uVar4 = puVar12[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar13 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar4);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar4 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   uVar4 < 0xbd)) goto LAB_0237a774;
              }
            }
            uVar4 = 0;
          }
        }
      }
LAB_0237a774:
      local_98 = CONCAT44(local_98._4_4_,uVar4);
      uVar2 = (uint)local_90;
      puVar6 = *(undefined8 **)(param_1 + 0x60);
      if (puVar6 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_052461c0), iVar5 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar6 = &DAT_05240280;
        }
        else {
          puVar6 = &DAT_05240280;
        }
      }
      if (cVar15 == '\0') {
        if (uVar4 != uVar2) {
          local_88 = "PlayerCookingGetDemo";
        }
        else {
          local_88 = "PlayerWorkbenchGetDemo";
        }
        local_90 = PTR_DAT_04bb2020 + 0x10;
        FUN_017081d0(puVar6,&local_90,6,1,0);
      }
      else {
        if (uVar4 != uVar2) {
          local_88 = "PlayerCookingGetDemoKeep";
        }
        else {
          local_88 = "PlayerWorkbenchGetDemoKeep";
        }
        local_90 = PTR_DAT_04bb2020 + 0x10;
        FUN_017081d0(puVar6,&local_90,6,1,0);
        *(undefined1 *)(param_1 + 0xda8) = 1;
      }
    }
  }
  FUN_02472404(0,param_1);
  local_90 = (undefined *)CONCAT71(local_90._1_7_,*(int *)(param_1 + 0x178) == 0);
  local_80 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_80);
  uVar9 = *puVar1;
  bVar10 = *(byte *)(param_1 + 0x1ee8);
  local_90 = (undefined *)
             CONCAT17((char)((ulong)uVar9 >> 0x18),
                      CONCAT16((char)((ulong)uVar9 >> 0x10),CONCAT24((short)uVar9,(uint)local_90)));
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  local_88._0_5_ = CONCAT14(bVar10,(int)((ulong)uVar9 >> 0x20));
  FUN_02309380(&local_90);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  *(undefined1 *)(puVar6 + 0xbd1) = 1;
  lVar13 = FUN_0251e98c(1);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0x2e30) + 0xf0))(lVar13 + 0x2e30);
  uVar17 = *puVar7;
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0x2e60) + 0xf0))(lVar13 + 0x2e60);
  uVar18 = *puVar7;
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0x2e90) + 0xf0))(lVar13 + 0x2e90);
  uVar16 = *puVar7;
  *(undefined4 *)(param_1 + 0xdbc) = uVar17;
  *(undefined4 *)(param_1 + 0xdc0) = uVar18;
  local_98 = 0xfffe;
  *(undefined4 *)(param_1 + 0xdc4) = uVar16;
  FUN_0277d4ac(&local_98);
  local_98 = *puVar1;
  lVar14 = *(long *)puVar3;
  uVar4 = FUN_0277d6c4(&local_98);
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    return;
  }
  lVar14 = *(long *)(lVar14 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_70 = (uint *)0x0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = (undefined4)local_98;
  uStack_74 = local_98._4_4_;
  uVar4 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar3 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_98);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
         (puVar11 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar11 != (uint *)0x0)) {
        uVar8 = 0;
        uVar4 = *puVar11;
        if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
          puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
          uVar8 = 0;
          if (*puVar12 != 0) {
            uVar4 = puVar12[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar13 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar4);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   uVar8 < 0xbd)) goto LAB_0237aab0;
              }
            }
            uVar8 = 0;
          }
        }
        goto LAB_0237aab0;
      }
    }
  }
  uVar8 = 0xbc;
LAB_0237aab0:
  if (uVar8 == 3) {
    lVar13 = FUN_0251e98c(1);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0xf00) + 0xf0))(lVar13 + 0xf00);
    uVar17 = *puVar7;
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0xf30) + 0xf0))(lVar13 + 0xf30);
    uVar18 = *puVar7;
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0xf60) + 0xf0))(lVar13 + 0xf60);
    uVar16 = *puVar7;
    *(undefined4 *)(param_1 + 0xdbc) = uVar17;
    *(undefined4 *)(param_1 + 0xdc0) = uVar18;
    *(undefined4 *)(param_1 + 0xdc4) = uVar16;
  }
  return;
}


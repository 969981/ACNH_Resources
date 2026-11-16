
void FUN_025dab50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *local_90;
  undefined *local_88;
  uint local_7c;
  undefined *local_78;
  char *local_70;
  long local_68;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x30) != 0) {
    if (DAT_054f06c0 != 0) {
      lVar13 = (long)DAT_054f06c0 << 3;
      iVar12 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      puVar14 = DAT_054f06c8;
      do {
        puVar10 = (undefined8 *)*puVar14;
        lVar11 = *(long *)puVar5;
        uVar6 = FUN_0277d6c4(puVar10);
        lVar9 = *(long *)puVar5;
        if (lVar9 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar11 = *(long *)(*(long *)(param_1 + 0x40) + (long)iVar12 * 8);
            local_70 = (char *)*puVar10;
            local_68 = 0;
            local_78 = puVar1;
            uVar6 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar5 != 0) {
              lVar9 = *(long *)(lVar9 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar9 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(puVar10);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
                  lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
                  if (lVar9 != 0) {
                    local_68 = lVar9;
                  }
                }
              }
            }
            FUN_0277d6c4(puVar10);
            iVar7 = FUN_01afcfa0(&local_78);
            if ((iVar7 == 0) ||
               (puVar8 = (ushort *)FUN_01afd600(&local_78), puVar8 == (ushort *)0x0)) {
              local_7c = 0;
            }
            else {
              uVar6 = *puVar8 >> 3 & 3;
              local_7c = 0;
              if (uVar6 != 3) {
                local_7c = uVar6;
              }
            }
            iVar7 = FUN_01ad7260(&local_78);
            if ((iVar7 != 0) && (lVar9 = FUN_01afd600(&local_78), lVar9 != 0)) {
              FUN_01ad7260(&local_78);
            }
            FUN_01ae3a80(&local_78);
            pcVar3 = (char *)(lVar11 + 8);
            local_88 = &DAT_040f7ef1;
            local_90 = puVar2;
            lVar9 = nn::prepo::Struct::GetBuffer();
            if (lVar9 != 0) {
              (**(code **)(local_90 + 0x18))(&local_90);
              nn::prepo::Struct::Add(pcVar3,(long)local_88);
            }
            puVar4 = PTR_DAT_04bb2020 + 0x10;
            local_88 = &DAT_040cca49;
            local_90 = puVar4;
            lVar9 = nn::prepo::Struct::GetBuffer();
            if (lVar9 != 0) {
              (**(code **)(local_90 + 0x18))(&local_90);
              nn::prepo::Struct::Add(pcVar3,(long)local_88);
            }
            local_88 = &DAT_04084f46;
            local_90 = puVar4;
            lVar9 = nn::prepo::Struct::GetBuffer();
            if (lVar9 != 0) {
              (**(code **)(local_90 + 0x18))(&local_90);
              nn::prepo::Struct::Add(pcVar3,(long)local_88);
            }
            puVar4 = PTR_DAT_04bb2020 + 0x10;
            local_88 = &DAT_040c113a;
            local_90 = puVar4;
            lVar9 = nn::prepo::Struct::GetBuffer();
            if (lVar9 != 0) {
              (**(code **)(local_90 + 0x18))(&local_90);
              nn::prepo::Struct::Add(pcVar3,(long)local_88);
            }
            local_88 = &DAT_0408287f;
            local_90 = puVar4;
            lVar9 = nn::prepo::Struct::GetBuffer();
            if (lVar9 != 0) {
              (**(code **)(local_90 + 0x18))(&local_90);
              nn::prepo::Struct::Add(pcVar3,(long)local_88);
            }
            lVar11 = *(long *)(param_1 + 0x30);
            lVar9 = nn::prepo::Array::GetBuffer();
            if (lVar9 != 0) {
              nn::prepo::Array::Add((Struct *)(lVar11 + 8));
            }
            iVar12 = iVar12 + 1;
          }
        }
        puVar14 = puVar14 + 1;
        lVar13 = lVar13 + -8;
      } while (lVar13 != 0);
    }
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "TartgetFtr";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_78,*(undefined8 *)(param_1 + 0x30));
    }
  }
  return;
}


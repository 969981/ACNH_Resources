
void FUN_025d75d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *local_88;
  char *local_80;
  undefined *local_78;
  char *local_70;
  long local_68;
  
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb2020;
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 != 0) {
    iVar8 = *(int *)(param_2 + 0xc);
    if (0 < iVar8) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      uVar11 = 0;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      puVar12 = (undefined8 *)(param_2 + 0x10);
      do {
        if ((uVar11 < *(uint *)(param_1 + 0x30)) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x38) + uVar11 * 8), lVar9 != 0)) {
          puVar4 = puVar12;
          if (0xf < uVar11) {
            puVar4 = (undefined8 *)(param_2 + 0x10);
          }
          local_70 = "Item";
          local_78 = puVar1;
          FUN_0277d6c4(puVar4);
          pcVar3 = (char *)(lVar9 + 8);
          lVar9 = nn::prepo::Struct::GetBuffer();
          if (lVar9 != 0) {
            (**(code **)(local_78 + 0x18))(&local_78);
            nn::prepo::Struct::Add(pcVar3,(long)local_70);
          }
          local_70 = (char *)*puVar4;
          local_68 = 0;
          lVar9 = *(long *)puVar6;
          local_78 = puVar2;
          uVar7 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar6 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              lVar9 = *(long *)PTR_DAT_04bc0428;
              uVar7 = FUN_0277d6c4(puVar4);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
                 (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
                local_68 = lVar9;
              }
            }
          }
          local_88 = puVar5 + 0x10;
          local_80 = "R_Body";
          iVar8 = FUN_01ad7260(&local_78);
          if ((iVar8 != 0) && (lVar9 = FUN_01afd600(&local_78), lVar9 != 0)) {
            FUN_01ad7260(&local_78);
          }
          lVar9 = nn::prepo::Struct::GetBuffer();
          if (lVar9 != 0) {
            (**(code **)(local_88 + 0x18))(&local_88);
            nn::prepo::Struct::Add(pcVar3,(long)local_80);
          }
          local_88 = puVar5 + 0x10;
          local_80 = "R_Fablic";
          FUN_01ae3a80(&local_78);
          lVar9 = nn::prepo::Struct::GetBuffer();
          if (lVar9 != 0) {
            (**(code **)(local_88 + 0x18))(&local_88);
            nn::prepo::Struct::Add(pcVar3,(long)local_80);
          }
          lVar10 = *(long *)(param_1 + 0x28);
          lVar9 = nn::prepo::Array::GetBuffer();
          if (lVar9 != 0) {
            nn::prepo::Array::Add((Struct *)(lVar10 + 8));
          }
          iVar8 = *(int *)(param_2 + 0xc);
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 1;
      } while ((long)uVar11 < (long)iVar8);
      lVar9 = *(long *)(param_1 + 0x28);
    }
    local_78 = puVar5 + 0x10;
    local_70 = "BuyInfo";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_78,lVar9);
    }
  }
  return;
}


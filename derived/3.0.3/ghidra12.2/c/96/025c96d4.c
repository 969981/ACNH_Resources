
void FUN_025c96d4(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint local_88;
  undefined *local_80;
  char *local_78;
  long local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,*(undefined4 *)(param_2 + 4));
  lVar7 = *(long *)PTR_DAT_04bb46b0;
  if (lVar7 != 0) {
    puVar8 = *(undefined8 **)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar8 + 0x38))();
      if (lVar7 == 0) goto LAB_025c9b48;
      lVar7 = lVar7 + 0x70;
    }
    else if (((puVar8 == (undefined8 *)0x0) || ((long *)puVar8[0x26] == (long *)0x0)) ||
            (lVar7 = (**(code **)(*(long *)puVar8[0x26] + 0x38))(), lVar7 == 0)) goto LAB_025c9b48;
    if ((uint)local_80 < 10) {
      lVar1 = lVar7 + 0x1962d8 + ((ulong)local_80 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_80) {
        lVar1 = lVar7 + 0x1962d8;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar8 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar8 == (undefined8 *)0x0)) {
        local_88 = 0;
      }
      else {
        local_88 = (**(code **)*puVar8)();
      }
      lVar9 = *(long *)(param_1 + 0x38);
      lVar7 = nn::prepo::Struct::GetBuffer();
      if (lVar7 != 0) {
        nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40eee51);
      }
      lVar9 = *(long *)(param_1 + 0x38);
      lVar7 = nn::prepo::Struct::GetBuffer();
      if (lVar7 != 0) {
        nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40771c9);
      }
      lVar9 = *(long *)(param_1 + 0x38);
      lVar7 = nn::prepo::Struct::GetBuffer();
      if (lVar7 != 0) {
        nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40a73de);
      }
      puVar4 = PTR_DAT_04bb43c0;
      local_80 = puVar3 + 0x10;
      local_78 = "HasDoorDeco";
      lVar9 = *(long *)(param_1 + 0x38);
      lVar7 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
      local_68 = *(undefined2 *)(lVar7 + 0x1c8);
      local_66 = *(undefined1 *)(lVar7 + 0x1ca);
      local_65 = *(undefined1 *)(lVar7 + 0x1cb);
      local_64 = *(undefined4 *)(lVar7 + 0x1cc);
      pcVar2 = *(char **)(lVar7 + 0x1c8);
      FUN_0277d6c4(&local_68);
      lVar7 = nn::prepo::Struct::GetBuffer();
      if (lVar7 != 0) {
        (**(code **)(local_80 + 0x18))(&local_80);
        nn::prepo::Struct::Add((char *)(lVar9 + 8),SUB81(local_78,0));
      }
      lVar9 = *(long *)puVar4;
      uVar5 = FUN_0277d6c4(&local_68);
      lVar7 = *(long *)puVar4;
      if (lVar7 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          local_80 = PTR_DAT_04bc0510 + 0x10;
          local_70 = 0;
          local_78 = pcVar2;
          uVar5 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar4 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar5 = FUN_0277d6c4(&local_68);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
                 (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8), lVar7 != 0)) {
                local_70 = lVar7;
              }
            }
          }
          FUN_0277d6c4(&local_68);
          iVar6 = FUN_01afcfa0(&local_80);
          if (iVar6 != 0) {
            FUN_01afd600(&local_80);
          }
          iVar6 = FUN_01ad7260(&local_80);
          if ((iVar6 != 0) && (lVar7 = FUN_01afd600(&local_80), lVar7 != 0)) {
            FUN_01ad7260(&local_80);
          }
          FUN_01ae3a80(&local_80);
          lVar9 = *(long *)(param_1 + 0x38);
          lVar7 = nn::prepo::Struct::GetBuffer();
          if (lVar7 != 0) {
            nn::prepo::Struct::Add((char *)(lVar9 + 8),0x409d06e);
          }
          lVar9 = *(long *)(param_1 + 0x38);
          lVar7 = nn::prepo::Struct::GetBuffer();
          if (lVar7 != 0) {
            nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40fab47);
          }
          lVar9 = *(long *)(param_1 + 0x38);
          lVar7 = nn::prepo::Struct::GetBuffer();
          if (lVar7 != 0) {
            nn::prepo::Struct::Add((char *)(lVar9 + 8),0x40c1133);
          }
          lVar9 = *(long *)(param_1 + 0x38);
          lVar7 = nn::prepo::Struct::GetBuffer();
          if (lVar7 != 0) {
            nn::prepo::Struct::Add((char *)(lVar9 + 8),0x4092cb8);
          }
        }
      }
      if ((((local_88 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar8 != (undefined8 *)0x0)) {
        (**(code **)*puVar8)();
      }
    }
  }
LAB_025c9b48:
  nn::prepo::Struct::GetSize();
  local_80 = puVar3 + 0x10;
  local_78 = "Exteria";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605cc0(*(long *)(param_1 + 8),&local_80,*(undefined8 *)(param_1 + 0x38));
  }
  return;
}


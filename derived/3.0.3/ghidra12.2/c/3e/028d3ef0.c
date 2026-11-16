
undefined4 FUN_028d3ef0(uint *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  uVar8 = *param_1;
  uVar6 = (int)(uVar8 << 0x1e) >> 0x1f & 0xd;
  if ((uVar8 & 4) != 0) {
    uVar6 = uVar6 + 10;
  }
  if ((uVar8 & 8) != 0) {
    uVar6 = uVar6 + 8;
  }
  if ((uVar8 & 0x40) != 0) {
    uVar6 = uVar6 + 10;
  }
  if ((uVar8 & 0x80) != 0) {
    uVar6 = uVar6 + 10;
  }
  if ((uVar8 & 0x100) != 0) {
    uVar6 = uVar6 + 8;
  }
  if ((uVar8 & 0x200) != 0) {
    uVar6 = uVar6 + 6;
  }
  if ((uVar8 & 0x400) != 0) {
    uVar6 = uVar6 + 10;
  }
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar8 = *puVar4 ^ *puVar4 << 0xb;
  uVar2 = puVar4[3];
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar8 = uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar8 ^ uVar2;
  puVar4[2] = uVar2;
  puVar4[3] = uVar8;
  puVar3 = PTR_DAT_04bb2020;
  uVar2 = *param_1;
  uVar6 = (uint)((ulong)uVar6 * (ulong)uVar8 >> 0x20);
  if ((uVar2 >> 1 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if (uVar6 < 0xd) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "JohnnyTalkAnyPlayerFlag";
      local_30 = puVar1;
      uVar5 = FUN_0273f0a0(&local_30);
      if ((uVar5 & 1) != 0) {
        pcStack_38 = "GulBVisitEnable";
        local_40 = puVar1;
        uVar5 = FUN_0273f0a0(&local_40);
        if ((uVar5 & 1) != 0) {
          local_30 = puVar3 + 0x10;
          pcStack_28 = "VisitGulAFlag";
          uVar5 = FUN_0273f0a0(&local_30);
          uVar7 = 0xb;
          if ((uVar5 & 1) == 0) {
            uVar7 = 1;
          }
          return uVar7;
        }
      }
      return 1;
    }
    uVar8 = 0xd;
  }
  if (((uVar2 >> 2 & 1) == 0) || (uVar8 = uVar8 + 10, uVar8 <= uVar6)) {
    if (((uVar2 >> 3 & 1) == 0) || (uVar8 = uVar8 + 8, uVar8 <= uVar6)) {
      if (((uVar2 >> 4 & 1) == 0) || (uVar8 <= uVar6)) {
        if (((uVar2 >> 5 & 1) == 0) || (uVar8 <= uVar6)) {
          if (((uVar2 >> 6 & 1) == 0) || (uVar8 = uVar8 + 10, uVar8 <= uVar6)) {
            if (((uVar2 >> 7 & 1) == 0) || (uVar8 = uVar8 + 10, uVar8 <= uVar6)) {
              if (((uVar2 >> 8 & 1) == 0) || (uVar8 = uVar8 + 8, uVar8 <= uVar6)) {
                if (((uVar2 >> 9 & 1) == 0) || (uVar8 = uVar8 + 6, uVar8 <= uVar6)) {
                  if (((uVar2 >> 10 & 1) == 0) || (uVar8 = uVar8 + 10, uVar8 <= uVar6)) {
                    uVar7 = 4;
                    if (((uVar2 >> 0xb & 1) != 0) && (uVar6 < uVar8)) {
                      uVar7 = 0xb;
                    }
                  }
                  else {
                    uVar7 = 10;
                  }
                }
                else {
                  uVar7 = 9;
                }
              }
              else {
                uVar7 = 8;
              }
            }
            else {
              uVar7 = 7;
            }
          }
          else {
            uVar7 = 6;
          }
        }
        else {
          uVar7 = 5;
        }
      }
      else {
        uVar7 = 4;
      }
    }
    else {
      uVar7 = 3;
    }
  }
  else {
    uVar7 = 2;
  }
  return uVar7;
}


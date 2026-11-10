
bool FUN_003763bc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 0x30000) != 0) {
    uVar5 = *(uint *)(param_1 + 0x10);
    uVar9 = (ulong)uVar5 & 0x30;
    lVar7 = ((ulong)uVar5 & 3) * 0x10;
    uVar12 = (ulong)(uVar5 >> 6) & 8;
    uVar2 = -(uVar5 >> 0xc & 1) & 0xc;
    local_40 = 0;
    local_38 = 0;
    uVar10 = (ulong)(uVar5 >> 8) & 0xc;
    local_50 = 0;
    local_48 = 0;
    uVar11 = (ulong)(uVar5 >> 4) & 0x1c;
    uVar13 = (ulong)(uVar5 >> 0xc) & 8;
    local_60 = 0;
    local_58 = 0;
    lVar8 = (((ulong)(uVar5 >> 0xd) & 3) + ((ulong)(uVar5 >> 2) & 3)) * 0x14;
    uVar3 = -(uVar5 >> 0x10 & 1) & 0x1c;
    local_70 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = 0;
    local_90 = 0;
    local_88 = 0;
    if ((uVar4 >> 0x10 & 1) == 0) {
      uVar14 = 0x53554243;
      puVar1 = (undefined8 *)
               (*(long *)(param_1 + 0x18) +
               (lVar7 + uVar9 | uVar12) + uVar10 + uVar11 + uVar13 + (ulong)uVar2 + (ulong)uVar3 +
               ((ulong)(uVar5 >> 0xc) & 0x10) * ((ulong)(uVar5 >> 6) & 7) + lVar8);
      local_90 = *puVar1;
      local_88 = puVar1[1];
      local_80 = puVar1[2];
      local_78 = puVar1[3];
      local_70 = puVar1[4];
      local_68 = puVar1[5];
      local_60 = puVar1[6];
      local_58 = puVar1[7];
      local_50 = puVar1[8];
      local_48 = puVar1[9];
      local_40 = puVar1[10];
      local_38 = puVar1[0xb];
    }
    else {
      uVar14 = 0x42435444;
      uVar5 = uVar4 >> 6 & 7;
      if (uVar5 != 0) {
        puVar1 = (undefined8 *)
                 (*(long *)(param_1 + 0x18) + lVar8 +
                 (lVar7 + uVar9 | uVar12) + uVar10 + uVar11 + uVar13 + (ulong)uVar2 + (ulong)uVar3);
        local_90 = *puVar1;
        local_88 = puVar1[1];
        if (uVar5 != 1) {
          local_80 = puVar1[2];
          local_78 = puVar1[3];
          if (uVar5 != 2) {
            local_70 = puVar1[4];
            local_68 = puVar1[5];
            if (uVar5 != 3) {
              local_60 = puVar1[6];
              local_58 = puVar1[7];
              if (uVar5 != 4) {
                local_50 = puVar1[8];
                local_48 = puVar1[9];
                if (uVar5 != 5) {
                  local_40 = puVar1[10];
                  local_38 = puVar1[0xb];
                  if (uVar5 != 6) {
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar7 = FUN_0036abf8(*(undefined8 *)(param_3 + 0x38),param_2,uVar14,0x18,&local_90);
    *(long *)(param_1 + 0x20) = lVar7;
    uVar6 = FUN_0038c040(*(undefined8 *)(lVar7 + 0x38),uVar14,0x18,&local_90);
    *(undefined2 *)(param_1 + 0x4a) = uVar6;
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
  }
  return (uVar4 & 0x30000) != 0;
}


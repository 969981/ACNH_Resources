
undefined8 FUN_0252bbf0(byte *param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  ulong uVar8;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  byte local_60 [4];
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_54;
  
  FUN_02507c6c(local_60,1,1,1,0);
  puVar1 = PTR_DAT_04bb5038;
  uVar5 = (uint)local_60[0];
  local_68 = local_5c;
  local_6c[0] = local_60[0];
  if (7 < local_60[0]) {
    local_6c[0] = 0xff;
  }
  local_64 = local_58;
  if (7 < local_60[0]) {
    return 0;
  }
  while( true ) {
    if (7 < *param_1 || *param_1 != uVar5) {
      if (DAT_054f5738 == 0) {
        puVar6 = (uint *)&DAT_054f0958;
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar6 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar6 = (uint *)(DAT_054f5738 + (ulong)uVar5 * 8 + 0x204);
      }
      local_54 = 5;
      if ((*puVar6 >> 5 & 1) != 0) {
        return 1;
      }
    }
    bVar2 = local_6c[0];
    uVar8 = (ulong)local_6c[0];
    if (7 < local_6c[0]) {
      return 0;
    }
    if (uVar8 + 1 == 8) break;
    pbVar7 = puVar1 + uVar8 + 1;
    uVar4 = FUN_02507924(local_6c,pbVar7);
    if ((uVar4 & 1) == 0) {
      if (uVar8 + 2 == 8) {
        return 0;
      }
      pbVar7 = puVar1 + uVar8 + 2;
      uVar4 = FUN_02507924(local_6c,pbVar7);
      if ((uVar4 & 1) == 0) {
        if (uVar8 + 3 == 8) {
          return 0;
        }
        pbVar7 = puVar1 + uVar8 + 3;
        uVar4 = FUN_02507924(local_6c,pbVar7);
        if ((uVar4 & 1) == 0) {
          if (uVar8 + 4 == 8) {
            return 0;
          }
          pbVar7 = puVar1 + uVar8 + 4;
          uVar4 = FUN_02507924(local_6c,pbVar7);
          if ((uVar4 & 1) == 0) {
            if (uVar8 + 5 == 8) {
              return 0;
            }
            pbVar7 = puVar1 + uVar8 + 5;
            uVar4 = FUN_02507924(local_6c,pbVar7);
            if ((uVar4 & 1) == 0) {
              if (uVar8 + 6 == 8) {
                return 0;
              }
              pbVar7 = puVar1 + uVar8 + 6;
              uVar4 = FUN_02507924(local_6c,pbVar7);
              if ((uVar4 & 1) == 0) {
                if (uVar8 + 7 == 8) {
                  return 0;
                }
                pbVar7 = puVar1 + uVar8 + 7;
                uVar4 = FUN_02507924(local_6c,pbVar7);
                if ((uVar4 & 1) == 0) {
                  if (bVar2 == 0) {
                    return 0;
                  }
                  pbVar7 = puVar1 + uVar8 + 8;
                  FUN_02507924(local_6c,pbVar7);
                }
              }
            }
          }
        }
      }
    }
    local_6c[0] = *pbVar7;
    uVar5 = (uint)local_6c[0];
    if (7 < uVar5) {
      return 0;
    }
  }
  return 0;
}


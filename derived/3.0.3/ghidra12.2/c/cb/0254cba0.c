
undefined8 FUN_0254cba0(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  ulong uVar9;
  byte local_68 [4];
  undefined4 local_64;
  undefined2 local_60;
  byte local_5c [4];
  undefined4 local_58;
  undefined2 local_54;
  
  FUN_02507c6c(local_5c,1,1,1,0);
  puVar2 = PTR_DAT_04bb5038;
  uVar6 = 0x1e;
  if (*param_1 != 1) {
    uVar6 = 0x1b;
  }
  uVar1 = 0x1d;
  if (*param_1 != 2) {
    uVar1 = uVar6;
  }
  local_68[0] = 0xff;
  if (local_5c[0] < 8) {
    local_68[0] = local_5c[0];
  }
  local_64 = local_58;
  local_60 = local_54;
  if (7 < local_5c[0]) {
    return 1;
  }
  if (DAT_054f5738 == 0) goto LAB_0254cc70;
  do {
    puVar7 = (uint *)(DAT_054f5738 + (ulong)local_5c[0] * 8 + 0x204);
    while( true ) {
      bVar3 = local_68[0];
      if ((uVar1 < 0x39) && ((*puVar7 >> (ulong)uVar1 & 1) != 0)) {
        return 0;
      }
      uVar9 = (ulong)local_68[0];
      if (7 < local_68[0]) {
        return 1;
      }
      if (uVar9 + 1 == 8) {
        return 1;
      }
      pbVar8 = puVar2 + uVar9 + 1;
      uVar5 = FUN_02507924(local_68,pbVar8);
      if ((uVar5 & 1) == 0) {
        if (uVar9 + 2 == 8) {
          return 1;
        }
        pbVar8 = puVar2 + uVar9 + 2;
        uVar5 = FUN_02507924(local_68,pbVar8);
        if ((uVar5 & 1) == 0) {
          if (uVar9 + 3 == 8) {
            return 1;
          }
          pbVar8 = puVar2 + uVar9 + 3;
          uVar5 = FUN_02507924(local_68,pbVar8);
          if ((uVar5 & 1) == 0) {
            if (uVar9 + 4 == 8) {
              return 1;
            }
            pbVar8 = puVar2 + uVar9 + 4;
            uVar5 = FUN_02507924(local_68,pbVar8);
            if ((uVar5 & 1) == 0) {
              if (uVar9 + 5 == 8) {
                return 1;
              }
              pbVar8 = puVar2 + uVar9 + 5;
              uVar5 = FUN_02507924(local_68,pbVar8);
              if ((uVar5 & 1) == 0) {
                if (uVar9 + 6 == 8) {
                  return 1;
                }
                pbVar8 = puVar2 + uVar9 + 6;
                uVar5 = FUN_02507924(local_68,pbVar8);
                if ((uVar5 & 1) == 0) {
                  if (uVar9 + 7 == 8) {
                    return 1;
                  }
                  pbVar8 = puVar2 + uVar9 + 7;
                  uVar5 = FUN_02507924(local_68,pbVar8);
                  if ((uVar5 & 1) == 0) {
                    if (bVar3 == 0) {
                      return 1;
                    }
                    pbVar8 = puVar2 + uVar9 + 8;
                    FUN_02507924(local_68,pbVar8);
                  }
                }
              }
            }
          }
        }
      }
      local_5c[0] = *pbVar8;
      if (7 < local_5c[0]) {
        return 1;
      }
      local_68[0] = local_5c[0];
      if (DAT_054f5738 != 0) break;
LAB_0254cc70:
      puVar7 = (uint *)&DAT_054f0958;
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar7 = (uint *)&DAT_054f0958;
      }
    }
  } while( true );
}


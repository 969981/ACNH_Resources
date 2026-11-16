
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0255bb80(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  short *psVar8;
  ulong uVar9;
  byte *pbVar10;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  FUN_02507c6c(local_6c,1,1,1,0);
  puVar3 = PTR_DAT_04bb6298;
  puVar2 = PTR_DAT_04bb5038;
  local_74 = local_68;
  local_78[0] = 0xff;
  if (local_6c[0] < 8) {
    local_78[0] = local_6c[0];
  }
  local_70 = local_64;
  if (7 < local_6c[0]) {
    return 1;
  }
  if (DAT_054f5738 == 0) goto LAB_0255bc64;
LAB_0255bc40:
  lVar7 = DAT_054f5738 + (ulong)local_6c[0] * 0xd0 +
          (ulong)(*(uint *)(DAT_054f5738 + (ulong)local_6c[0] * 4 + 0xd68) & 1) * 0x68;
  psVar8 = (short *)(lVar7 + 0x6e8);
  if (*(char *)(lVar7 + 0x74c) != '\0') goto LAB_0255bc78;
  do {
    if ((DAT_054f5738 == 0) || (uVar9 = (ulong)local_78[0], 7 < uVar9)) {
      psVar8 = &DAT_054f0c08;
      cVar1 = DAT_054f0c6c;
      if ((DAT_054f0c70 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
        if (iVar5 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
        psVar8 = &DAT_054f0c08;
        cVar1 = DAT_054f0c6c;
      }
    }
    else {
      lVar7 = DAT_054f5738 + uVar9 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar9 * 4 + 0xd68) & 1) * 0x68;
      psVar8 = (short *)(lVar7 + 0x6e8);
      cVar1 = *(char *)(lVar7 + 0x74c);
    }
    if ((((cVar1 == '\0') || (*psVar8 != *(short *)puVar3)) || (0x148 < *(uint *)(psVar8 + 2))) ||
       (*(uint *)(psVar8 + 2) != 0x66)) {
      return 0;
    }
    while( true ) {
      bVar4 = local_78[0];
      uVar9 = (ulong)local_78[0];
      if (7 < local_78[0]) {
        return 1;
      }
      if (uVar9 + 1 == 8) {
        return 1;
      }
      pbVar10 = puVar2 + uVar9 + 1;
      uVar6 = FUN_02507924(local_78,pbVar10);
      if ((uVar6 & 1) == 0) {
        if (uVar9 + 2 == 8) {
          return 1;
        }
        pbVar10 = puVar2 + uVar9 + 2;
        uVar6 = FUN_02507924(local_78,pbVar10);
        if ((uVar6 & 1) == 0) {
          if (uVar9 + 3 == 8) {
            return 1;
          }
          pbVar10 = puVar2 + uVar9 + 3;
          uVar6 = FUN_02507924(local_78,pbVar10);
          if ((uVar6 & 1) == 0) {
            if (uVar9 + 4 == 8) {
              return 1;
            }
            pbVar10 = puVar2 + uVar9 + 4;
            uVar6 = FUN_02507924(local_78,pbVar10);
            if ((uVar6 & 1) == 0) {
              if (uVar9 + 5 == 8) {
                return 1;
              }
              pbVar10 = puVar2 + uVar9 + 5;
              uVar6 = FUN_02507924(local_78,pbVar10);
              if ((uVar6 & 1) == 0) {
                if (uVar9 + 6 == 8) {
                  return 1;
                }
                pbVar10 = puVar2 + uVar9 + 6;
                uVar6 = FUN_02507924(local_78,pbVar10);
                if ((uVar6 & 1) == 0) {
                  if (uVar9 + 7 == 8) {
                    return 1;
                  }
                  pbVar10 = puVar2 + uVar9 + 7;
                  uVar6 = FUN_02507924(local_78,pbVar10);
                  if ((uVar6 & 1) == 0) {
                    if (bVar4 == 0) {
                      return 1;
                    }
                    pbVar10 = puVar2 + uVar9 + 8;
                    FUN_02507924(local_78,pbVar10);
                  }
                }
              }
            }
          }
        }
      }
      local_6c[0] = *pbVar10;
      if (7 < local_6c[0]) {
        return 1;
      }
      local_78[0] = local_6c[0];
      if (DAT_054f5738 != 0) goto LAB_0255bc40;
LAB_0255bc64:
      if (((DAT_054f0c70 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0c70), iVar5 != 0)) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
      psVar8 = &DAT_054f0c08;
      if (DAT_054f0c6c == '\0') break;
LAB_0255bc78:
      if ((*psVar8 != *(short *)puVar3) || (*(int *)(psVar8 + 2) != 0x10)) break;
    }
  } while( true );
}


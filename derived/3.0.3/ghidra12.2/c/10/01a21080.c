
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01a21080(float param_1,float *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  byte local_88 [4];
  undefined4 local_84;
  undefined2 local_80;
  byte local_7c [4];
  undefined4 local_78;
  undefined2 local_74;
  byte local_68 [4];
  uint local_64;
  
  FUN_02507c6c(local_7c,7,1,1,0);
  puVar4 = PTR_DAT_04bb6298;
  puVar3 = PTR_DAT_04bb5038;
  puVar2 = PTR_DAT_04bb4718;
  uVar12 = (uint)local_7c[0];
  local_84 = local_78;
  local_88[0] = local_7c[0];
  if (7 < local_7c[0]) {
    local_88[0] = 0xff;
  }
  local_80 = local_74;
  if (7 < local_7c[0]) {
    return 0;
  }
  do {
    local_68[0] = (byte)uVar12;
    pfVar6 = (float *)FUN_0251b3b0(local_68,0);
    if ((pfVar6 != (float *)0x0) &&
       (SQRT((param_2[2] - pfVar6[2]) * (param_2[2] - pfVar6[2]) +
             (*param_2 - *pfVar6) * (*param_2 - *pfVar6)) <= param_1)) {
      lVar8 = *(long *)puVar2;
      if ((lVar8 == 0) || (uVar10 = (ulong)local_68[0], 7 < uVar10)) {
        psVar9 = &DAT_054f0c08;
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
          psVar9 = &DAT_054f0c08;
          cVar1 = DAT_054f0c6c;
          goto joined_r0x01a2135c;
        }
        if (DAT_054f0c6c != '\0') goto LAB_01a211b4;
LAB_01a211d0:
        local_64 = 0;
      }
      else {
        lVar8 = lVar8 + uVar10 * 0xd0 + (ulong)(*(uint *)(lVar8 + uVar10 * 4 + 0xd68) & 1) * 0x68;
        psVar9 = (short *)(lVar8 + 0x6e8);
        cVar1 = *(char *)(lVar8 + 0x74c);
joined_r0x01a2135c:
        if (cVar1 == '\0') goto LAB_01a211d0;
LAB_01a211b4:
        if ((*psVar9 != *(short *)puVar4) || (local_64 = *(uint *)(psVar9 + 2), 0x148 < local_64))
        goto LAB_01a211d0;
      }
      if (local_64 - 0x13c < 5) {
        return 1;
      }
      uVar12 = (uint)local_88[0];
    }
    if (7 < uVar12) {
      return 0;
    }
    uVar10 = (ulong)uVar12;
    if (uVar10 + 1 == 8) {
      return 0;
    }
    pbVar11 = puVar3 + uVar10 + 1;
    uVar7 = FUN_02507924(local_88,pbVar11);
    if ((uVar7 & 1) == 0) {
      if (uVar10 + 2 == 8) {
        return 0;
      }
      pbVar11 = puVar3 + uVar10 + 2;
      uVar7 = FUN_02507924(local_88,pbVar11);
      if ((uVar7 & 1) == 0) {
        if (uVar10 + 3 == 8) {
          return 0;
        }
        pbVar11 = puVar3 + uVar10 + 3;
        uVar7 = FUN_02507924(local_88,pbVar11);
        if ((uVar7 & 1) == 0) {
          if (uVar10 + 4 == 8) {
            return 0;
          }
          pbVar11 = puVar3 + uVar10 + 4;
          uVar7 = FUN_02507924(local_88,pbVar11);
          if ((uVar7 & 1) == 0) {
            if (uVar10 + 5 == 8) {
              return 0;
            }
            pbVar11 = puVar3 + uVar10 + 5;
            uVar7 = FUN_02507924(local_88,pbVar11);
            if ((uVar7 & 1) == 0) {
              if (uVar10 + 6 == 8) {
                return 0;
              }
              pbVar11 = puVar3 + uVar10 + 6;
              uVar7 = FUN_02507924(local_88,pbVar11);
              if ((uVar7 & 1) == 0) {
                if (uVar10 + 7 == 8) {
                  return 0;
                }
                pbVar11 = puVar3 + uVar10 + 7;
                uVar7 = FUN_02507924(local_88,pbVar11);
                if ((uVar7 & 1) == 0) {
                  if (uVar12 == 0) {
                    return 0;
                  }
                  pbVar11 = puVar3 + uVar10 + 8;
                  FUN_02507924(local_88,pbVar11);
                }
              }
            }
          }
        }
      }
    }
    local_88[0] = *pbVar11;
    uVar12 = (uint)local_88[0];
    if (7 < uVar12) {
      return 0;
    }
  } while( true );
}


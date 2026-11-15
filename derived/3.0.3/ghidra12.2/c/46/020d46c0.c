
void FUN_020d46c0(undefined8 param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  undefined1 local_7c [4];
  byte local_78 [4];
  byte local_74 [12];
  byte local_68 [8];
  
  if (*param_2 == 0xff) {
    local_68[0] = 0xff;
    local_68[1] = 0xff;
    local_68[2] = 0xff;
    local_68[3] = 0xff;
    local_68[4] = 0xff;
    local_68[5] = 0xff;
    local_68[6] = 0xff;
    local_68[7] = 0xff;
    FUN_02507c6c(local_74,7,1,0,0);
    puVar3 = PTR_DAT_04bb5038;
    if (local_74[0] < 8) {
      uVar13 = 0;
      iVar15 = 2;
      uVar4 = 1;
      while( true ) {
        uVar9 = (ulong)local_74[0];
        uVar6 = uVar13;
        if (7 < uVar13) {
          uVar6 = 0;
        }
        uVar13 = uVar13 + 1;
        local_68[uVar6] = local_74[0];
        do {
          if (uVar9 == 7) goto LAB_020d487c;
          uVar9 = uVar9 + 1;
          uVar6 = FUN_02507924(local_74,puVar3 + uVar9);
        } while ((uVar6 & 1) == 0);
        local_74[0] = puVar3[uVar9];
        if (7 < local_74[0]) break;
        iVar15 = iVar15 + 1;
        uVar4 = uVar4 + 1;
      }
LAB_020d487c:
      local_74[0] = 0xff;
      uVar5 = nn::os::GetSystemTick();
      if ((int)uVar13 != 0) {
        uVar9 = (ulong)uVar4;
        uVar4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
        uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
        uVar14 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
        uVar13 = (ulong)((uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4);
        do {
          uVar4 = uVar4 ^ uVar4 << 0xb;
          uVar12 = (uint)uVar13;
          uVar13 = (ulong)((uint)(uVar13 >> 0x13) ^ uVar4 >> 8 ^ uVar12 ^ uVar4);
          iVar8 = (int)(uVar13 * uVar9 >> 0x20);
          if (local_68[0] < 8) {
            if (iVar8 != 0) {
              iVar8 = iVar8 + -1;
              goto LAB_020d4944;
            }
            pbVar10 = local_68;
            local_78[0] = local_68[0];
          }
          else {
LAB_020d4944:
            if (local_68[1] < 8) {
              if (iVar8 == 0) {
                pbVar10 = (byte *)((ulong)local_68 | 1);
                local_78[0] = local_68[1];
                goto LAB_020d48d0;
              }
              iVar8 = iVar8 + -1;
            }
            if (local_68[2] < 8) {
              if (iVar8 == 0) {
                pbVar10 = (byte *)((ulong)local_68 | 2);
                local_78[0] = local_68[2];
                goto LAB_020d48d0;
              }
              iVar8 = iVar8 + -1;
            }
            if (local_68[3] < 8) {
              if (iVar8 == 0) {
                pbVar10 = (byte *)((ulong)local_68 | 3);
                local_78[0] = local_68[3];
                goto LAB_020d48d0;
              }
              iVar8 = iVar8 + -1;
            }
            if (local_68[4] < 8) {
              if (iVar8 == 0) {
                pbVar10 = (byte *)((ulong)local_68 | 4);
                local_78[0] = local_68[4];
                goto LAB_020d48d0;
              }
              iVar8 = iVar8 + -1;
            }
            if (local_68[5] < 8) {
              if (iVar8 == 0) {
                pbVar10 = (byte *)((ulong)local_68 | 5);
                local_78[0] = local_68[5];
                goto LAB_020d48d0;
              }
              iVar8 = iVar8 + -1;
            }
            if (local_68[6] < 8) {
              if (iVar8 == 0) {
                pbVar10 = (byte *)((ulong)local_68 | 6);
                local_78[0] = local_68[6];
                goto LAB_020d48d0;
              }
              iVar8 = iVar8 + -1;
            }
            if (7 < local_68[7]) {
              return;
            }
            pbVar10 = (byte *)((ulong)local_68 | 7);
            local_78[0] = local_68[7];
            if (iVar8 != 0) {
              return;
            }
          }
LAB_020d48d0:
          *pbVar10 = 0xff;
          puVar7 = (undefined1 *)FUN_02582a24(local_78,1);
          local_7c[0] = *puVar7;
          FUN_020d4a30(param_1,local_7c);
          iVar15 = iVar15 + -1;
          uVar9 = uVar9 - 1;
          uVar4 = uVar5;
          uVar5 = uVar14;
          uVar14 = uVar12;
        } while (1 < iVar15);
      }
    }
    else {
      nn::os::GetSystemTick();
    }
  }
  else {
    uVar4 = nn::os::GetSystemTick();
    uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
    lVar11 = *DAT_0537d558;
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
    bVar2 = *(byte *)(lVar11 + 0x473);
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965;
    pbVar10 = PTR_DAT_04bc1220;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar11 + 0x472);
      }
    }
    local_74[0] = *pbVar10;
    pbVar10 = local_74;
    if (((uVar4 >> 8 ^ uVar5 + 4 >> 0x13 ^ uVar4 ^ uVar5) & 1) != 0) {
      pbVar10 = param_2;
      param_2 = local_74;
    }
    FUN_020d4a30(param_1,param_2);
    FUN_020d4a30(param_1,pbVar10);
  }
  return;
}


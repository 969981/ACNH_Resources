
void FUN_02856580(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_f80;
  undefined4 uStack_f7c;
  undefined8 local_f78;
  undefined4 local_f6c;
  undefined4 uStack_f68;
  undefined8 local_f64;
  undefined8 local_f5c;
  uint local_f54;
  uint uStack_f50;
  uint local_f4c;
  undefined *local_f48;
  undefined1 auStack_f40 [1876];
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  int local_7e0;
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  puVar1 = PTR_DAT_04bbfe60 + 0x10;
  local_7d8 = puVar1;
  memset(auStack_7d0,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_7c = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  pvVar4 = (void *)FUN_01a451fc(&local_7d8);
  memset(pvVar4,0,0x754);
  local_f48 = puVar1;
  memset(auStack_f40,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_7ec = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
  local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
  pvVar4 = (void *)FUN_01a451fc(&local_f48);
  memset(pvVar4,0,0x754);
  FUN_013fb520(*(undefined8 *)PTR_DAT_04bb3d80,&local_7d8);
  FUN_0195548c(*(undefined8 *)PTR_DAT_04bb47e0,&local_f48);
  local_f54 = 0;
  uStack_f50 = 0;
  local_f5c = 0xfffe;
  FUN_0277d4ac(&local_f5c);
  local_f64 = 0xfffe;
  FUN_0277d4ac(&local_f64);
  FUN_02856e70(&uStack_f50,&local_f5c,&local_f48,1);
  FUN_02856e70(&local_f54,&local_f64,&local_7d8,0);
  uVar11 = uStack_f50;
  uVar14 = local_f54;
  uVar3 = uStack_f50 - (uStack_f50 >> 1 & 0x55555555);
  uVar15 = local_f54 - (local_f54 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar7 = uVar3 + (uVar3 >> 0x10) & 0x3f;
  uVar3 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar3 = uVar3 + (uVar3 >> 0x10) & 0x3f;
  if ((uVar7 == 0) || (uVar3 == 0)) {
    if (uVar7 == 0) {
      if (uVar3 == 0) {
        return;
      }
      if (DAT_055a345c == '\0') {
        puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar7 = *puVar9 ^ *puVar9 << 0xb;
        uVar11 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar7 = uVar7 >> 8 ^ uVar11 >> 0x13 ^ uVar7 ^ uVar11;
        puVar9[2] = uVar11;
        puVar9[3] = uVar7;
      }
      else {
        uVar7 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        uVar7 = uVar7 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar7 ^ DAT_05582b7c;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar7;
      }
      uVar15 = 0xffffffff;
      if (uVar14 != 0) {
        uVar15 = 0xffffffff;
        uVar7 = (uint)((ulong)uVar7 * (ulong)uVar3 >> 0x20);
        if (uVar7 < uVar3) {
          iVar6 = uVar7 + 2;
          do {
            iVar6 = iVar6 + -1;
            if (iVar6 < 2) goto LAB_02856aac;
            uVar14 = uVar14 - 1 & uVar14;
          } while (uVar14 != 0);
        }
      }
    }
    else {
      if (DAT_055a345c == '\0') {
        puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar3 = *puVar9 ^ *puVar9 << 0xb;
        uVar14 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar3 = uVar3 >> 8 ^ uVar14 >> 0x13 ^ uVar3 ^ uVar14;
        puVar9[2] = uVar14;
        puVar9[3] = uVar3;
      }
      else {
        uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar3;
      }
      uVar15 = 0xffffffff;
      uVar3 = (uint)((ulong)uVar3 * (ulong)uVar7 >> 0x20);
      if ((uVar3 < uVar7) && (uVar11 != 0)) {
        iVar6 = uVar3 + 2;
        do {
          iVar6 = iVar6 + -1;
          if (iVar6 < 2) goto LAB_028569bc;
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
    }
  }
  else {
    if (DAT_055a345c == '\0') {
      puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar15 = *puVar9 ^ *puVar9 << 0xb;
      uVar2 = puVar9[3];
      *puVar9 = puVar9[1];
      puVar9[1] = puVar9[2];
      cVar8 = DAT_055a345c;
      uVar15 = uVar15 >> 8 ^ uVar2 >> 0x13 ^ uVar15 ^ uVar2;
      puVar9[2] = uVar2;
      puVar9[3] = uVar15;
    }
    else {
      uVar15 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      uVar15 = uVar15 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar15 ^ DAT_05582b7c;
      cVar8 = '\x01';
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar15;
    }
    if ((int)uVar15 < 0) {
      if (cVar8 == '\0') {
        puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar7 = *puVar9 ^ *puVar9 << 0xb;
        uVar11 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar7 = uVar7 >> 8 ^ uVar11 >> 0x13 ^ uVar7 ^ uVar11;
        puVar9[2] = uVar11;
        puVar9[3] = uVar7;
      }
      else {
        uVar7 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        uVar7 = uVar7 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar7 ^ DAT_05582b7c;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar7;
      }
      uVar15 = 0xffffffff;
      if (uVar14 != 0) {
        uVar15 = 0xffffffff;
        uVar7 = (uint)((ulong)uVar7 * (ulong)uVar3 >> 0x20);
        if (uVar7 < uVar3) {
          iVar6 = uVar7 + 2;
          do {
            iVar6 = iVar6 + -1;
            if (iVar6 < 2) goto LAB_02856aac;
            uVar14 = uVar14 - 1 & uVar14;
          } while (uVar14 != 0);
        }
      }
    }
    else {
      if (cVar8 == '\0') {
        puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar3 = *puVar9 ^ *puVar9 << 0xb;
        uVar14 = puVar9[3];
        *puVar9 = puVar9[1];
        puVar9[1] = puVar9[2];
        uVar3 = uVar3 >> 8 ^ uVar14 >> 0x13 ^ uVar3 ^ uVar14;
        puVar9[2] = uVar14;
        puVar9[3] = uVar3;
      }
      else {
        uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
        DAT_05582b70 = DAT_05582b74;
        DAT_05582b74 = DAT_05582b78;
        DAT_05582b78 = DAT_05582b7c;
        DAT_05582b7c = uVar3;
      }
      uVar15 = 0xffffffff;
      uVar3 = (uint)((ulong)uVar3 * (ulong)uVar7 >> 0x20);
      if ((uVar3 < uVar7) && (uVar11 != 0)) {
        iVar6 = uVar3 + 2;
        do {
          iVar6 = iVar6 + -1;
          if (iVar6 < 2) goto LAB_028569bc;
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
    }
  }
  goto LAB_02856ae0;
LAB_02856aac:
  uVar3 = uVar14 - 1 & (uVar14 ^ 0xffffffff);
  goto LAB_02856ab4;
LAB_028569bc:
  uVar3 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
LAB_02856ab4:
  uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar15 = uVar3 + (uVar3 >> 0x10) & 0x3f;
LAB_02856ae0:
  local_f6c = 0xfffe;
  uStack_f68 = 0;
  local_f4c = uVar15;
  FUN_0277d4ac(&local_f6c);
  puVar1 = PTR_DAT_04bb43c0;
  if (uVar15 != 10) {
    if (uVar15 != 9) goto LAB_02856e34;
    local_f6c = (undefined4)local_f5c;
    uStack_f68 = local_f5c._4_4_;
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_f6c);
    lVar12 = *(long *)puVar1;
    if (lVar12 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_f78 = 0;
        local_f80 = local_f6c;
        uStack_f7c = uStack_f68;
        uVar3 = FUN_0277d6c4(&local_f80);
        if (*(long *)puVar1 == 0) {
LAB_02856dfc:
          uVar5 = 0xbc;
        }
        else {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02856dfc;
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(&local_f6c);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
             (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8),
             puVar9 == (uint *)0x0)) goto LAB_02856dfc;
          uVar3 = *puVar9;
          uVar5 = 0;
          if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
            puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
            uVar5 = 0;
            if (*puVar10 != 0) {
              uVar3 = puVar10[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar10 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
                if (lVar12 != 0) {
                  uVar7 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar7 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar3);
                  }
                  if (*puVar10 <= uVar7) {
                    uVar7 = 0xffffffff;
                  }
                  if ((uVar7 < DAT_05326ec0) &&
                     (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar7 * 2), uVar5 < 0xbd))
                  goto LAB_02856e00;
                }
              }
              uVar5 = 0;
            }
          }
        }
LAB_02856e00:
        if (uVar5 == 0x69) goto LAB_02856e34;
      }
    }
    local_f4c = 3;
    goto LAB_02856e34;
  }
  local_f6c = (undefined4)local_f64;
  uStack_f68 = local_f64._4_4_;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_f6c);
  lVar12 = *(long *)puVar1;
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_f78 = 0;
      local_f80 = local_f6c;
      uStack_f7c = uStack_f68;
      uVar3 = FUN_0277d6c4(&local_f80);
      if (*(long *)puVar1 == 0) {
LAB_02856e18:
        uVar5 = 0xbc;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02856e18;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_f6c);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar3) ||
           (puVar9 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar3 * 8),
           puVar9 == (uint *)0x0)) goto LAB_02856e18;
        uVar3 = *puVar9;
        uVar5 = 0;
        if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
          puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar10 != 0) {
            uVar3 = puVar10[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar10 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar10 + lVar12 + (ulong)(ushort)puVar10[2] * 8;
              if (lVar12 != 0) {
                uVar7 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar7 = (uint)((ulong)((long)puVar9 - lVar12) / (ulong)uVar3);
                }
                if (*puVar10 <= uVar7) {
                  uVar7 = 0xffffffff;
                }
                if ((uVar7 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar7 * 2), uVar5 < 0xbd))
                goto LAB_02856e1c;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_02856e1c:
      if (uVar5 == 0x6a) goto LAB_02856e34;
    }
  }
  local_f4c = 7;
LAB_02856e34:
  *(undefined4 *)(param_1 + 0x34) = local_f6c;
  *(undefined4 *)(param_1 + 0x38) = uStack_f68;
  *(char *)(param_1 + 0x2e) = (char)local_f4c;
  return;
}


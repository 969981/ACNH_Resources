
/* WARNING: Removing unreachable block (ram,0x01957fb8) */
/* WARNING: Removing unreachable block (ram,0x01957fc8) */
/* WARNING: Removing unreachable block (ram,0x01957fd4) */

undefined8 FUN_01957f74(long param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  float local_7c [2];
  float local_74;
  
  puVar9 = PTR_DAT_04bb39d8;
  local_7c[0] = 0.0;
  lVar13 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar13 == 0) {
LAB_01958378:
    uVar12 = 0;
  }
  else {
    iVar4 = *(int *)(lVar13 + 0x20);
    iVar5 = *(int *)(lVar13 + 0x24);
    iVar15 = *(int *)(lVar13 + 0x30);
    iVar6 = *(int *)(lVar13 + 0x34);
    iVar14 = iVar15 + -0x40;
    iVar8 = iVar4 + 0x40;
    if ((iVar15 - iVar4) + 1 < 0x81) {
      iVar14 = iVar15;
      iVar8 = iVar4;
    }
    iVar4 = iVar5 + 0x40;
    iVar15 = iVar6 + -0x40;
    if ((iVar6 - iVar5) + 1 < 0x81) {
      iVar4 = iVar5;
      iVar15 = iVar6;
    }
    uVar1 = (iVar14 - iVar8) + 1;
    uVar2 = (iVar15 - iVar4) + 1;
    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = *puVar10 ^ *puVar10 << 0xb;
    uVar7 = puVar10[3];
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
    puVar10[2] = uVar7;
    puVar10[3] = uVar3;
    iVar14 = iVar8 + (int)((ulong)uVar3 * (ulong)uVar1 >> 0x20);
    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
    uVar3 = *puVar10 ^ *puVar10 << 0xb;
    uVar7 = puVar10[3];
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
    puVar10[2] = uVar7;
    puVar10[3] = uVar3;
    iVar15 = iVar4 + (int)((ulong)uVar3 * (ulong)uVar2 >> 0x20);
    if (*(char *)(param_1 + 0x638) == '\0') {
      local_7c[0] = (float)iVar14 * 5.0 + 2.5;
      local_74 = (float)iVar15 * 5.0 + 2.5;
      uVar11 = FUN_035a2340(local_7c,&DAT_0418f444);
      if ((uVar11 & 1) != 0) {
        puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
        uVar3 = *puVar10 ^ *puVar10 << 0xb;
        uVar7 = puVar10[3];
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
        puVar10[2] = uVar7;
        puVar10[3] = uVar3;
        iVar14 = iVar8 + (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20);
        puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
        uVar3 = *puVar10 ^ *puVar10 << 0xb;
        uVar7 = puVar10[3];
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
        puVar10[2] = uVar7;
        puVar10[3] = uVar3;
        iVar15 = iVar4 + (int)((ulong)uVar2 * (ulong)uVar3 >> 0x20);
        if (*(char *)(param_1 + 0x638) == '\0') {
          local_7c[0] = (float)iVar14 * 5.0 + 2.5;
          local_74 = (float)iVar15 * 5.0 + 2.5;
          uVar11 = FUN_035a2340(local_7c,&DAT_0418f444);
          if ((uVar11 & 1) != 0) {
            puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
            uVar3 = *puVar10 ^ *puVar10 << 0xb;
            uVar7 = puVar10[3];
            *puVar10 = puVar10[1];
            puVar10[1] = puVar10[2];
            uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
            puVar10[2] = uVar7;
            puVar10[3] = uVar3;
            iVar14 = iVar8 + (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20);
            puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
            uVar3 = *puVar10 ^ *puVar10 << 0xb;
            uVar7 = puVar10[3];
            *puVar10 = puVar10[1];
            puVar10[1] = puVar10[2];
            uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
            puVar10[2] = uVar7;
            puVar10[3] = uVar3;
            iVar15 = iVar4 + (int)((ulong)uVar2 * (ulong)uVar3 >> 0x20);
            if (*(char *)(param_1 + 0x638) == '\0') {
              local_7c[0] = (float)iVar14 * 5.0 + 2.5;
              local_74 = (float)iVar15 * 5.0 + 2.5;
              uVar11 = FUN_035a2340(local_7c,&DAT_0418f444);
              if ((uVar11 & 1) != 0) {
                puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
                uVar3 = *puVar10 ^ *puVar10 << 0xb;
                uVar7 = puVar10[3];
                *puVar10 = puVar10[1];
                puVar10[1] = puVar10[2];
                uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
                puVar10[2] = uVar7;
                puVar10[3] = uVar3;
                iVar14 = iVar8 + (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20);
                puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
                uVar3 = *puVar10 ^ *puVar10 << 0xb;
                uVar7 = puVar10[3];
                *puVar10 = puVar10[1];
                puVar10[1] = puVar10[2];
                uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
                puVar10[2] = uVar7;
                puVar10[3] = uVar3;
                iVar15 = iVar4 + (int)((ulong)uVar2 * (ulong)uVar3 >> 0x20);
                if (*(char *)(param_1 + 0x638) == '\0') {
                  local_7c[0] = (float)iVar14 * 5.0 + 2.5;
                  local_74 = (float)iVar15 * 5.0 + 2.5;
                  uVar11 = FUN_035a2340(local_7c,&DAT_0418f444);
                  if ((uVar11 & 1) != 0) {
                    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
                    uVar3 = *puVar10 ^ *puVar10 << 0xb;
                    uVar7 = puVar10[3];
                    *puVar10 = puVar10[1];
                    puVar10[1] = puVar10[2];
                    uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
                    puVar10[2] = uVar7;
                    puVar10[3] = uVar3;
                    iVar14 = iVar8 + (int)((ulong)uVar1 * (ulong)uVar3 >> 0x20);
                    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar9);
                    uVar1 = *puVar10 ^ *puVar10 << 0xb;
                    uVar3 = puVar10[3];
                    *puVar10 = puVar10[1];
                    puVar10[1] = puVar10[2];
                    uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar1 ^ uVar3;
                    puVar10[2] = uVar3;
                    puVar10[3] = uVar1;
                    iVar15 = iVar4 + (int)((ulong)uVar2 * (ulong)uVar1 >> 0x20);
                    if (*(char *)(param_1 + 0x638) == '\0') {
                      local_7c[0] = (float)iVar14 * 5.0 + 2.5;
                      local_74 = (float)iVar15 * 5.0 + 2.5;
                      uVar11 = FUN_035a2340(local_7c,&DAT_0418f444);
                      if ((uVar11 & 1) != 0) goto LAB_01958378;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (param_2 != (float *)0x0) {
      *param_2 = (float)iVar14 * 5.0 + 2.5;
      param_2[2] = (float)iVar15 * 5.0 + 2.5;
    }
    uVar12 = 1;
  }
  return uVar12;
}


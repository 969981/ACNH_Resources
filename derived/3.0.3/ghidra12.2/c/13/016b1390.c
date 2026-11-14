
uint FUN_016b1390(byte *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb39d8;
  lVar10 = 0;
  uVar11 = 0;
  do {
    uVar6 = *(uint *)(param_2 + lVar10 * 4);
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    uVar6 = uVar6 + (uVar6 >> 0x10);
    uVar8 = uVar6 & 0x3f;
    if ((uVar6 & 0x3f) != 0) {
      uVar11 = uVar8 + uVar11;
      puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
      uVar6 = *puVar4 ^ *puVar4 << 0xb;
      uVar1 = puVar4[3];
      *puVar4 = puVar4[1];
      puVar4[1] = puVar4[2];
      uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar6 ^ uVar1;
      puVar4[2] = uVar1;
      puVar4[3] = uVar6;
      if ((uint)((ulong)uVar6 * (ulong)uVar11 >> 0x20) < uVar8) {
        puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
        uVar6 = *puVar4 ^ *puVar4 << 0xb;
        uVar2 = puVar4[3];
        *puVar4 = puVar4[1];
        puVar4[1] = puVar4[2];
        uVar1 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
        puVar4[2] = uVar2;
        puVar4[3] = uVar1;
        uVar6 = *(uint *)(param_2 + lVar10 * 4);
        if (uVar6 == 0) {
LAB_016b13d8:
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0xffffffff;
          uVar2 = uVar6 - (uVar6 >> 1 & 0x55555555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
          uVar2 = uVar2 + (uVar2 >> 8);
          uVar8 = (uint)((ulong)uVar1 * (ulong)uVar8 >> 0x20);
          if (uVar8 < (uVar2 + (uVar2 >> 0x10) & 0x3f)) {
            iVar9 = uVar8 + 2;
            do {
              iVar9 = iVar9 + -1;
              if (iVar9 < 2) {
                uVar6 = uVar6 - 1 & (uVar6 ^ 0xffffffff);
                uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
                uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
                uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
                uVar6 = uVar6 + (uVar6 >> 8);
                uVar5 = uVar6 + (uVar6 >> 0x10) & 0x3f;
                goto LAB_016b13dc;
              }
              uVar6 = uVar6 - 1 & uVar6;
            } while (uVar6 != 0);
            goto LAB_016b13d8;
          }
        }
LAB_016b13dc:
        FUN_020fd218(param_1,lVar10,uVar5);
      }
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 0x23) {
      uVar7 = (ulong)*param_1;
      if ((uVar7 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar7])) {
        uVar11 = (uint)(&DAT_053e6eb8)[uVar7] >> (ulong)(param_1[1] & 0x1f) & 1;
      }
      else {
        uVar11 = 0;
      }
      return uVar11;
    }
  } while( true );
}


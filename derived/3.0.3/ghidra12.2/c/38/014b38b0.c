
void FUN_014b38b0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  uVar5 = nn::os::GetSystemTick();
  lVar10 = DAT_05ae7600;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x78) = uVar5;
  *(uint *)(param_1 + 0x7c) = uVar4;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x80) = uVar5;
  *(uint *)(param_1 + 0x84) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  puVar2 = PTR_DAT_04bb2010;
  if (lVar10 == 0) {
    puVar8 = malloc(0x1e8);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) goto LAB_014b3a10;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1e8,8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 0x10;
    puVar8[0x3a] = 0;
    puVar8[1] = puVar1;
    *puVar8 = 0x1e;
    puVar8[2] = 0;
    puVar8[3] = puVar1;
    puVar8[4] = 0;
    puVar8[5] = puVar1;
    puVar8[6] = 0;
    puVar8[7] = puVar1;
    puVar8[8] = 0;
    puVar8[9] = puVar1;
    puVar8[10] = 0;
    puVar8[0xb] = puVar1;
    puVar8[0xc] = 0;
    puVar8[0xd] = puVar1;
    puVar8[0xe] = 0;
    puVar8[0xf] = puVar1;
    puVar8[0x10] = 0;
    puVar8[0x11] = puVar1;
    puVar8[0x12] = 0;
    puVar8[0x13] = puVar1;
    puVar8[0x14] = 0;
    puVar8[0x15] = puVar1;
    puVar8[0x16] = 0;
    puVar8[0x17] = puVar1;
    puVar8[0x18] = 0;
    puVar8[0x19] = puVar1;
    puVar8[0x1a] = 0;
    puVar8[0x1b] = puVar1;
    puVar8[0x1c] = 0;
    puVar8[0x1d] = puVar1;
    puVar8[0x1e] = 0;
    puVar8[0x1f] = puVar1;
    puVar8[0x20] = 0;
    puVar8[0x21] = puVar1;
    puVar8[0x22] = 0;
    puVar8[0x23] = puVar1;
    puVar8[0x24] = 0;
    puVar8[0x25] = puVar1;
    puVar8[0x26] = 0;
    puVar8[0x27] = puVar1;
    puVar8[0x28] = 0;
    puVar8[0x29] = puVar1;
    puVar8[0x2a] = 0;
    puVar8[0x2b] = puVar1;
    puVar8[0x2c] = 0;
    puVar8[0x2d] = puVar1;
    puVar8[0x2e] = 0;
    puVar8[0x2f] = puVar1;
    puVar8[0x30] = 0;
    puVar8[0x31] = puVar1;
    puVar8[0x32] = 0;
    puVar8[0x33] = puVar1;
    puVar8[0x34] = 0;
    puVar8[0x35] = puVar1;
    puVar8[0x36] = 0;
    puVar8[0x37] = puVar1;
    puVar8[0x38] = 0;
    puVar8[0x39] = puVar1;
    puVar8[0x3b] = puVar1;
    puVar8[0x3c] = 0;
    *(undefined4 *)(param_1 + 8) = 0x1e;
    *(undefined8 **)(param_1 + 0x10) = puVar8 + 1;
  }
LAB_014b3a10:
  uVar5 = 0;
  puVar2 = puVar2 + 0x10;
  do {
    lVar10 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(0xa8);
joined_r0x014b3a98:
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 10;
        puVar3 = (undefined4 *)(param_1 + 0x18 + ((long)((ulong)uVar5 << 0x20) >> 0x1c));
        puVar8[2] = 0;
        puVar8[3] = puVar2;
        puVar8[1] = puVar2;
        puVar8[0x12] = 0;
        puVar8[4] = 0;
        puVar8[5] = puVar2;
        puVar8[6] = 0;
        puVar8[7] = puVar2;
        puVar8[8] = 0;
        puVar8[9] = puVar2;
        puVar8[10] = 0;
        puVar8[0xb] = puVar2;
        puVar8[0xc] = 0;
        puVar8[0xd] = puVar2;
        puVar8[0xe] = 0;
        puVar8[0xf] = puVar2;
        puVar8[0x10] = 0;
        puVar8[0x11] = puVar2;
        puVar8[0x13] = puVar2;
        puVar8[0x14] = 0;
        *puVar3 = 10;
        *(undefined8 **)(puVar3 + 2) = puVar8 + 1;
      }
    }
    else {
      plVar7 = param_2;
      if (param_2 != (long *)0x0) {
LAB_014b3a70:
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa8,8);
        goto joined_r0x014b3a98;
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_014b3a70;
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 6) {
      uVar5 = *(uint *)(param_1 + 8);
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 + 8) = 0xffffffffffffffff;
            lVar6 = *(long *)(param_1 + 0x10) + lVar10;
            lVar10 = lVar10 + 0x20;
            *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar9);
        }
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x18);
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar10 + 8) = 0xffffffffffffffff;
            lVar6 = *(long *)(param_1 + 0x20) + lVar10;
            lVar10 = lVar10 + 0x20;
            *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar9);
        }
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x28);
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 + 8) = 0xffffffffffffffff;
            lVar6 = *(long *)(param_1 + 0x30) + lVar10;
            lVar10 = lVar10 + 0x20;
            *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar9);
        }
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x38);
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar10 + 8) = 0xffffffffffffffff;
            lVar6 = *(long *)(param_1 + 0x40) + lVar10;
            lVar10 = lVar10 + 0x20;
            *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar9);
        }
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x48);
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar10 + 8) = 0xffffffffffffffff;
            lVar6 = *(long *)(param_1 + 0x50) + lVar10;
            lVar10 = lVar10 + 0x20;
            *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar9);
        }
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x50) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x58);
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar10 + 8) = 0xffffffffffffffff;
            lVar6 = *(long *)(param_1 + 0x60) + lVar10;
            lVar10 = lVar10 + 0x20;
            *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar9);
        }
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x60) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x68);
      if (0 < (int)uVar5) {
        if (uVar5 == 1) {
          uVar9 = 0;
        }
        else {
          lVar10 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar10 + 8) = 0xffffffffffffffff;
            lVar6 = *(long *)(param_1 + 0x70) + lVar10;
            lVar10 = lVar10 + 0x20;
            *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar5 & 0xfffffffe) != uVar9);
        }
        if ((uVar5 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x70) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      return;
    }
  } while( true );
}


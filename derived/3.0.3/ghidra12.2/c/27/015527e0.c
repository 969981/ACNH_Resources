
void FUN_015527e0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  
  uVar4 = nn::os::GetSystemTick();
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)(param_1 + 0x318) = uVar4;
  lVar12 = DAT_05ae7600;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0x31c) = uVar4;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 800) = uVar4;
  *(uint *)(param_1 + 0x324) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  puVar3 = PTR_DAT_04bb2010;
  if (lVar12 == 0) {
    puVar7 = malloc(0x1e8);
  }
  else {
    plVar6 = param_2;
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar12 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_0155294c;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1e8,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar1 = puVar3 + 0x10;
    puVar7[0x3a] = 0;
    puVar7[1] = puVar1;
    *puVar7 = 0x1e;
    puVar7[2] = 0;
    puVar7[3] = puVar1;
    puVar7[4] = 0;
    puVar7[5] = puVar1;
    puVar7[6] = 0;
    puVar7[7] = puVar1;
    puVar7[8] = 0;
    puVar7[9] = puVar1;
    puVar7[10] = 0;
    puVar7[0xb] = puVar1;
    puVar7[0xc] = 0;
    puVar7[0xd] = puVar1;
    puVar7[0xe] = 0;
    puVar7[0xf] = puVar1;
    puVar7[0x10] = 0;
    puVar7[0x11] = puVar1;
    puVar7[0x12] = 0;
    puVar7[0x13] = puVar1;
    puVar7[0x14] = 0;
    puVar7[0x15] = puVar1;
    puVar7[0x16] = 0;
    puVar7[0x17] = puVar1;
    puVar7[0x18] = 0;
    puVar7[0x19] = puVar1;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = puVar1;
    puVar7[0x1c] = 0;
    puVar7[0x1d] = puVar1;
    puVar7[0x1e] = 0;
    puVar7[0x1f] = puVar1;
    puVar7[0x20] = 0;
    puVar7[0x21] = puVar1;
    puVar7[0x22] = 0;
    puVar7[0x23] = puVar1;
    puVar7[0x24] = 0;
    puVar7[0x25] = puVar1;
    puVar7[0x26] = 0;
    puVar7[0x27] = puVar1;
    puVar7[0x28] = 0;
    puVar7[0x29] = puVar1;
    puVar7[0x2a] = 0;
    puVar7[0x2b] = puVar1;
    puVar7[0x2c] = 0;
    puVar7[0x2d] = puVar1;
    puVar7[0x2e] = 0;
    puVar7[0x2f] = puVar1;
    puVar7[0x30] = 0;
    puVar7[0x31] = puVar1;
    puVar7[0x32] = 0;
    puVar7[0x33] = puVar1;
    puVar7[0x34] = 0;
    puVar7[0x35] = puVar1;
    puVar7[0x36] = 0;
    puVar7[0x37] = puVar1;
    puVar7[0x38] = 0;
    puVar7[0x39] = puVar1;
    puVar7[0x3b] = puVar1;
    puVar7[0x3c] = 0;
    *(undefined4 *)(param_1 + 8) = 0x1e;
    *(undefined8 **)(param_1 + 0x10) = puVar7 + 1;
  }
LAB_0155294c:
  lVar12 = 0;
  puVar1 = puVar3 + 0x10;
  do {
    lVar11 = DAT_05ae7600;
    lVar5 = param_1 + lVar12;
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc(0xa8);
joined_r0x01552a38:
      if (puVar7 != (undefined8 *)0x0) {
        puVar2 = puVar3 + 0x10;
        *puVar7 = 10;
        puVar7[1] = puVar2;
        puVar7[2] = 0;
        puVar7[3] = puVar2;
        puVar7[0x12] = 0;
        puVar7[4] = 0;
        puVar7[5] = puVar2;
        puVar7[6] = 0;
        puVar7[7] = puVar2;
        puVar7[8] = 0;
        puVar7[9] = puVar2;
        puVar7[10] = 0;
        puVar7[0xb] = puVar2;
        puVar7[0xc] = 0;
        puVar7[0xd] = puVar2;
        puVar7[0xe] = 0;
        puVar7[0xf] = puVar2;
        puVar7[0x10] = 0;
        puVar7[0x11] = puVar2;
        puVar7[0x13] = puVar2;
        puVar7[0x14] = 0;
        *(undefined4 *)(lVar5 + 0x18) = 10;
        *(undefined8 **)(lVar5 + 0x20) = puVar7 + 1;
      }
      if (DAT_05ae7600 == 0) goto LAB_01552ae0;
      plVar6 = param_2;
      if (param_2 != (long *)0x0) {
LAB_01552a74:
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
        goto joined_r0x01552a88;
      }
LAB_01552a48:
      lVar11 = DAT_05ae7600;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_01552a74;
      if (DAT_05ae7600 != 0) goto LAB_01552af8;
LAB_01552b90:
      puVar7 = malloc(0xa8);
joined_r0x01552b98:
      if (puVar7 != (undefined8 *)0x0) {
        puVar2 = puVar3 + 0x10;
        *puVar7 = 10;
        puVar7[1] = puVar2;
        puVar7[2] = 0;
        puVar7[3] = puVar2;
        puVar7[0x12] = 0;
        puVar7[4] = 0;
        puVar7[5] = puVar2;
        puVar7[6] = 0;
        puVar7[7] = puVar2;
        puVar7[8] = 0;
        puVar7[9] = puVar2;
        puVar7[10] = 0;
        puVar7[0xb] = puVar2;
        puVar7[0xc] = 0;
        puVar7[0xd] = puVar2;
        puVar7[0xe] = 0;
        puVar7[0xf] = puVar2;
        puVar7[0x10] = 0;
        puVar7[0x11] = puVar2;
        puVar7[0x13] = puVar2;
        puVar7[0x14] = 0;
        *(undefined4 *)(lVar5 + 0x38) = 10;
        *(undefined8 **)(lVar5 + 0x40) = puVar7 + 1;
      }
      if (DAT_05ae7600 == 0) goto LAB_01552c40;
      plVar6 = param_2;
      if (param_2 != (long *)0x0) {
LAB_01552bd4:
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
        goto joined_r0x01552be8;
      }
LAB_01552ba8:
      lVar11 = DAT_05ae7600;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_01552bd4;
      if (DAT_05ae7600 != 0) goto LAB_01552c58;
LAB_01552cf0:
      puVar7 = malloc(0xa8);
joined_r0x01552cf8:
      if (puVar7 != (undefined8 *)0x0) {
        puVar2 = puVar3 + 0x10;
        *puVar7 = 10;
        puVar7[1] = puVar2;
        puVar7[2] = 0;
        puVar7[3] = puVar2;
        puVar7[0x12] = 0;
        puVar7[4] = 0;
        puVar7[5] = puVar2;
        puVar7[6] = 0;
        puVar7[7] = puVar2;
        puVar7[8] = 0;
        puVar7[9] = puVar2;
        puVar7[10] = 0;
        puVar7[0xb] = puVar2;
        puVar7[0xc] = 0;
        puVar7[0xd] = puVar2;
        puVar7[0xe] = 0;
        puVar7[0xf] = puVar2;
        puVar7[0x10] = 0;
        puVar7[0x11] = puVar2;
        puVar7[0x13] = puVar2;
        puVar7[0x14] = 0;
        *(undefined4 *)(lVar5 + 0x58) = 10;
        *(undefined8 **)(lVar5 + 0x60) = puVar7 + 1;
      }
      if (DAT_05ae7600 == 0) goto LAB_01552d50;
      plVar6 = param_2;
      if (param_2 != (long *)0x0) {
LAB_01552d34:
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
        if (puVar7 == (undefined8 *)0x0) goto LAB_01552970;
        goto LAB_01552d5c;
      }
LAB_01552d08:
      lVar11 = DAT_05ae7600;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_01552d34;
    }
    else {
      plVar6 = param_2;
      if (param_2 != (long *)0x0) {
LAB_015529bc:
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
        goto joined_r0x01552a38;
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_015529bc;
      if (DAT_05ae7600 != 0) goto LAB_01552a48;
LAB_01552ae0:
      puVar7 = malloc(0xa8);
joined_r0x01552a88:
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 10;
        puVar7[0x12] = 0;
        puVar7[1] = puVar1;
        puVar7[2] = 0;
        puVar7[3] = puVar1;
        puVar7[4] = 0;
        puVar7[5] = puVar1;
        puVar7[6] = 0;
        puVar7[7] = puVar1;
        puVar7[8] = 0;
        puVar7[9] = puVar1;
        puVar7[10] = 0;
        puVar7[0xb] = puVar1;
        puVar7[0xc] = 0;
        puVar7[0xd] = puVar1;
        puVar7[0xe] = 0;
        puVar7[0xf] = puVar1;
        puVar7[0x10] = 0;
        puVar7[0x11] = puVar1;
        puVar7[0x13] = puVar1;
        puVar7[0x14] = 0;
        *(undefined4 *)(lVar5 + 0x28) = 10;
        *(undefined8 **)(lVar5 + 0x30) = puVar7 + 1;
      }
      if (DAT_05ae7600 == 0) goto LAB_01552b90;
      plVar6 = param_2;
      if (param_2 != (long *)0x0) {
LAB_01552b24:
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
        goto joined_r0x01552b98;
      }
LAB_01552af8:
      lVar11 = DAT_05ae7600;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_01552b24;
      if (DAT_05ae7600 != 0) goto LAB_01552ba8;
LAB_01552c40:
      puVar7 = malloc(0xa8);
joined_r0x01552be8:
      if (puVar7 != (undefined8 *)0x0) {
        puVar2 = puVar3 + 0x10;
        *puVar7 = 10;
        puVar7[1] = puVar2;
        puVar7[2] = 0;
        puVar7[3] = puVar2;
        puVar7[0x12] = 0;
        puVar7[4] = 0;
        puVar7[5] = puVar2;
        puVar7[6] = 0;
        puVar7[7] = puVar2;
        puVar7[8] = 0;
        puVar7[9] = puVar2;
        puVar7[10] = 0;
        puVar7[0xb] = puVar2;
        puVar7[0xc] = 0;
        puVar7[0xd] = puVar2;
        puVar7[0xe] = 0;
        puVar7[0xf] = puVar2;
        puVar7[0x10] = 0;
        puVar7[0x11] = puVar2;
        puVar7[0x13] = puVar2;
        puVar7[0x14] = 0;
        *(undefined4 *)(lVar5 + 0x48) = 10;
        *(undefined8 **)(lVar5 + 0x50) = puVar7 + 1;
      }
      if (DAT_05ae7600 == 0) goto LAB_01552cf0;
      plVar6 = param_2;
      if (param_2 != (long *)0x0) {
LAB_01552c84:
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xa8,8);
        goto joined_r0x01552cf8;
      }
LAB_01552c58:
      lVar11 = DAT_05ae7600;
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar6 = (long *)(lVar8 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) goto LAB_01552c84;
      if (DAT_05ae7600 != 0) goto LAB_01552d08;
LAB_01552d50:
      puVar7 = malloc(0xa8);
      if (puVar7 != (undefined8 *)0x0) {
LAB_01552d5c:
        puVar2 = puVar3 + 0x10;
        *puVar7 = 10;
        puVar7[1] = puVar2;
        puVar7[2] = 0;
        puVar7[3] = puVar2;
        puVar7[0x12] = 0;
        puVar7[4] = 0;
        puVar7[5] = puVar2;
        puVar7[6] = 0;
        puVar7[7] = puVar2;
        puVar7[8] = 0;
        puVar7[9] = puVar2;
        puVar7[10] = 0;
        puVar7[0xb] = puVar2;
        puVar7[0xc] = 0;
        puVar7[0xd] = puVar2;
        puVar7[0xe] = 0;
        puVar7[0xf] = puVar2;
        puVar7[0x10] = 0;
        puVar7[0x11] = puVar2;
        puVar7[0x13] = puVar2;
        puVar7[0x14] = 0;
        *(undefined4 *)(lVar5 + 0x68) = 10;
        *(undefined8 **)(lVar5 + 0x70) = puVar7 + 1;
      }
    }
LAB_01552970:
    lVar12 = lVar12 + 0x60;
    if (lVar12 == 0x300) {
      uVar4 = *(uint *)(param_1 + 8);
      if (0 < (int)uVar4) {
        if (uVar4 == 1) {
          uVar9 = 0;
        }
        else {
          lVar12 = 0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar12 + 8) = 0xffffffffffffffff;
            lVar5 = *(long *)(param_1 + 0x10) + lVar12;
            lVar12 = lVar12 + 0x20;
            *(undefined8 *)(lVar5 + 0x18) = 0xffffffffffffffff;
          } while (((ulong)uVar4 & 0xfffffffe) != uVar9);
        }
        if ((uVar4 & 1) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar9 * 0x10 + 8) = 0xffffffffffffffff;
        }
      }
      lVar12 = 0;
      do {
        puVar10 = (uint *)(param_1 + 0x18 + lVar12 * 0x60);
        uVar4 = *puVar10;
        if (0 < (int)uVar4) {
          if (uVar4 < 4) {
            lVar11 = 0;
          }
          else {
            lVar5 = 0;
            lVar11 = 0;
            do {
              lVar11 = lVar11 + 4;
              *(undefined8 *)(*(long *)(puVar10 + 2) + lVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 2) + lVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 2) + lVar5 + 0x28) = 0xffffffffffffffff;
              lVar8 = *(long *)(puVar10 + 2) + lVar5;
              lVar5 = lVar5 + 0x40;
              *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
            } while (((ulong)uVar4 & 0xfffffffc) * 0x10 != lVar5);
          }
          uVar9 = (ulong)uVar4 & 3;
          if ((uVar4 & 3) != 0) {
            lVar11 = lVar11 << 4;
            do {
              uVar9 = uVar9 - 1;
              lVar5 = *(long *)(puVar10 + 2) + lVar11;
              lVar11 = lVar11 + 0x10;
              *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
            } while (uVar9 != 0);
          }
        }
        uVar4 = puVar10[4];
        if (0 < (int)uVar4) {
          if (uVar4 < 4) {
            lVar11 = 0;
          }
          else {
            lVar5 = 0;
            lVar11 = 0;
            do {
              lVar11 = lVar11 + 4;
              *(undefined8 *)(*(long *)(puVar10 + 6) + lVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 6) + lVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 6) + lVar5 + 0x28) = 0xffffffffffffffff;
              lVar8 = *(long *)(puVar10 + 6) + lVar5;
              lVar5 = lVar5 + 0x40;
              *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
            } while (((ulong)uVar4 & 0xfffffffc) * 0x10 != lVar5);
          }
          uVar9 = (ulong)uVar4 & 3;
          if ((uVar4 & 3) != 0) {
            lVar11 = lVar11 << 4;
            do {
              uVar9 = uVar9 - 1;
              lVar5 = *(long *)(puVar10 + 6) + lVar11;
              lVar11 = lVar11 + 0x10;
              *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
            } while (uVar9 != 0);
          }
        }
        uVar4 = puVar10[8];
        if (0 < (int)uVar4) {
          if (uVar4 < 4) {
            lVar11 = 0;
          }
          else {
            lVar5 = 0;
            lVar11 = 0;
            do {
              lVar11 = lVar11 + 4;
              *(undefined8 *)(*(long *)(puVar10 + 10) + lVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 10) + lVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 10) + lVar5 + 0x28) = 0xffffffffffffffff;
              lVar8 = *(long *)(puVar10 + 10) + lVar5;
              lVar5 = lVar5 + 0x40;
              *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
            } while (((ulong)uVar4 & 0xfffffffc) * 0x10 != lVar5);
          }
          uVar9 = (ulong)uVar4 & 3;
          if ((uVar4 & 3) != 0) {
            lVar11 = lVar11 << 4;
            do {
              uVar9 = uVar9 - 1;
              lVar5 = *(long *)(puVar10 + 10) + lVar11;
              lVar11 = lVar11 + 0x10;
              *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
            } while (uVar9 != 0);
          }
        }
        uVar4 = puVar10[0xc];
        if (0 < (int)uVar4) {
          if (uVar4 < 4) {
            lVar11 = 0;
          }
          else {
            lVar5 = 0;
            lVar11 = 0;
            do {
              lVar11 = lVar11 + 4;
              *(undefined8 *)(*(long *)(puVar10 + 0xe) + lVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 0xe) + lVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 0xe) + lVar5 + 0x28) = 0xffffffffffffffff;
              lVar8 = *(long *)(puVar10 + 0xe) + lVar5;
              lVar5 = lVar5 + 0x40;
              *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
            } while (((ulong)uVar4 & 0xfffffffc) * 0x10 != lVar5);
          }
          uVar9 = (ulong)uVar4 & 3;
          if ((uVar4 & 3) != 0) {
            lVar11 = lVar11 << 4;
            do {
              uVar9 = uVar9 - 1;
              lVar5 = *(long *)(puVar10 + 0xe) + lVar11;
              lVar11 = lVar11 + 0x10;
              *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
            } while (uVar9 != 0);
          }
        }
        uVar4 = puVar10[0x10];
        if (0 < (int)uVar4) {
          if (uVar4 < 4) {
            lVar11 = 0;
          }
          else {
            lVar5 = 0;
            lVar11 = 0;
            do {
              lVar11 = lVar11 + 4;
              *(undefined8 *)(*(long *)(puVar10 + 0x12) + lVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 0x12) + lVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 0x12) + lVar5 + 0x28) = 0xffffffffffffffff;
              lVar8 = *(long *)(puVar10 + 0x12) + lVar5;
              lVar5 = lVar5 + 0x40;
              *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
            } while (((ulong)uVar4 & 0xfffffffc) * 0x10 != lVar5);
          }
          uVar9 = (ulong)uVar4 & 3;
          if ((uVar4 & 3) != 0) {
            lVar11 = lVar11 << 4;
            do {
              uVar9 = uVar9 - 1;
              lVar5 = *(long *)(puVar10 + 0x12) + lVar11;
              lVar11 = lVar11 + 0x10;
              *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
            } while (uVar9 != 0);
          }
        }
        uVar4 = puVar10[0x14];
        if (0 < (int)uVar4) {
          if (uVar4 < 4) {
            lVar11 = 0;
          }
          else {
            lVar5 = 0;
            lVar11 = 0;
            do {
              lVar11 = lVar11 + 4;
              *(undefined8 *)(*(long *)(puVar10 + 0x16) + lVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 0x16) + lVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(*(long *)(puVar10 + 0x16) + lVar5 + 0x28) = 0xffffffffffffffff;
              lVar8 = *(long *)(puVar10 + 0x16) + lVar5;
              lVar5 = lVar5 + 0x40;
              *(undefined8 *)(lVar8 + 0x38) = 0xffffffffffffffff;
            } while (((ulong)uVar4 & 0xfffffffc) * 0x10 != lVar5);
          }
          uVar9 = (ulong)uVar4 & 3;
          if ((uVar4 & 3) != 0) {
            lVar11 = lVar11 << 4;
            do {
              uVar9 = uVar9 - 1;
              lVar5 = *(long *)(puVar10 + 0x16) + lVar11;
              lVar11 = lVar11 + 0x10;
              *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
            } while (uVar9 != 0);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 8);
      return;
    }
  } while( true );
}



ulong FUN_01db0cc0(byte *param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  undefined2 uVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  byte abStack_14 [4];
  
  lVar14 = *DAT_0537d558;
  switch(param_1[4]) {
  case 1:
    bVar3 = *(byte *)(lVar14 + 0x472);
    break;
  case 2:
    bVar3 = *(byte *)(lVar14 + 0x473);
    if (bVar3 == 0xff) {
      pbVar15 = &DAT_0537bdbc;
    }
    else {
      if (bVar3 < 8) {
        uVar5 = *(undefined2 *)(DAT_0537d558[2] + (ulong)bVar3 * 0xc + 0x108);
      }
      else {
        uVar5 = 0xffff;
      }
      pbVar15 = abStack_14;
      FUN_01d6915c(abStack_14,DAT_0537d558[2],uVar5);
    }
    bVar3 = *pbVar15;
    if ((long)(char)bVar3 == 0xffffffffffffffff) goto LAB_01db14f4;
    puVar7 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar7 = (uint *)(lVar14 + 0x48);
    }
    uVar8 = *puVar7;
    if (((uVar8 ^ 0xffffffff) & 6) != 0) goto LAB_01db14f4;
    goto LAB_01db0f2c;
  case 3:
    uVar8 = *(uint *)(DAT_0537d558[2] + 0x104);
    if ((uVar8 & 1) == 0) {
      if ((uVar8 >> 1 & 1) != 0) {
        uVar9 = 1;
        goto LAB_01db1478;
      }
      if ((uVar8 >> 2 & 1) != 0) {
        uVar9 = 2;
        goto LAB_01db1478;
      }
      if ((uVar8 >> 3 & 1) != 0) {
        uVar9 = 3;
        goto LAB_01db1478;
      }
      if ((uVar8 >> 4 & 1) != 0) {
        uVar9 = 4;
        goto LAB_01db1478;
      }
      if ((uVar8 >> 5 & 1) != 0) {
        uVar9 = 5;
        goto LAB_01db1478;
      }
      if ((uVar8 >> 6 & 1) != 0) {
        uVar9 = 6;
        goto LAB_01db1478;
      }
      if ((uVar8 >> 7 & 1) != 0) {
        uVar9 = 7;
        goto LAB_01db1478;
      }
      uVar9 = 0;
LAB_01db147c:
      if ((uVar8 >> 6 & 1) == 0) {
        if ((uVar8 >> 5 & 1) == 0) {
          if ((uVar8 >> 4 & 1) == 0) {
            if ((uVar8 >> 3 & 1) == 0) {
              bVar4 = true;
              if ((uVar8 >> 2 & 1) == 0) {
                uVar11 = 1;
                if ((uVar8 & 2) != 0) {
                  uVar11 = 2;
                }
                if ((uVar8 & 3) == 0) {
                  uVar11 = 0;
                }
              }
              else {
                uVar11 = 3;
              }
            }
            else {
              uVar11 = 4;
              bVar4 = true;
            }
          }
          else {
            uVar11 = 5;
            bVar4 = true;
          }
        }
        else {
          uVar11 = 6;
          bVar4 = true;
        }
      }
      else {
        uVar11 = 7;
        bVar4 = true;
      }
    }
    else {
      uVar9 = 0;
LAB_01db1478:
      if ((uVar8 >> 7 & 1) == 0) goto LAB_01db147c;
      bVar4 = false;
      uVar11 = 8;
    }
    if (uVar9 != uVar11) {
      uVar13 = 1;
      if ((uVar8 & 2) != 0) {
        uVar13 = 2;
      }
      uVar12 = 7;
      if (!bVar4) {
        uVar12 = 8;
      }
      uVar1 = 6;
      if ((uVar8 & 0xc0) != 0) {
        uVar1 = uVar12;
      }
      uVar6 = 0;
      uVar12 = 5;
      if ((uVar8 & 0xe0) != 0) {
        uVar12 = uVar1;
      }
      uVar1 = 4;
      if ((uVar8 & 0xf0) != 0) {
        uVar1 = uVar12;
      }
      uVar12 = 3;
      if ((uVar8 & 0xf8) != 0) {
        uVar12 = uVar1;
      }
      if ((uVar8 & 0xfc) != 0) {
        uVar13 = uVar12;
      }
      uVar12 = 0;
      if ((uVar8 & 0xff) != 0) {
        uVar12 = uVar13;
      }
      do {
        puVar7 = (uint *)(lVar14 + 0x48) + ((long)(char)uVar9 & 0xffffffffU) * 0x20;
        if ((uVar9 & 0xf8) != 0) {
          puVar7 = (uint *)(lVar14 + 0x48);
        }
        if (((*puVar7 ^ 0xffffffff) & 6) == 0) {
          if ((*puVar7 & 1) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulong)puVar7[0x1f];
          }
          uVar6 = uVar6 | uVar10;
        }
        uVar9 = (uint)(char)uVar9;
        do {
          uVar9 = uVar9 + 1;
          if (7 < uVar9) {
            uVar9 = uVar12;
            break;
          }
        } while ((uVar8 >> (ulong)(uVar9 & 0x1f) & 1) == 0);
      } while (uVar11 != (uVar9 & 0xff));
      goto LAB_01db14f8;
    }
    goto LAB_01db14f4;
  case 4:
    bVar3 = param_1[5];
    break;
  case 5:
    bVar3 = param_1[5];
    if (bVar3 == 0) {
      uVar6 = 0;
LAB_01db1338:
      if (((*(uint *)(lVar14 + 200) ^ 0xffffffff) & 10) == 0) {
        if ((*(uint *)(lVar14 + 200) & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(lVar14 + 0x144);
        }
        uVar6 = uVar6 | uVar8;
      }
      if (bVar3 != 2) goto LAB_01db1368;
LAB_01db1394:
      if (((*(uint *)(lVar14 + 0x1c8) ^ 0xffffffff) & 10) == 0) {
        if ((*(uint *)(lVar14 + 0x1c8) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x244);
        }
        uVar6 = uVar10 | uVar6;
      }
      if (bVar3 != 4) goto LAB_01db13bc;
LAB_01db13e4:
      if (((*(uint *)(lVar14 + 0x2c8) ^ 0xffffffff) & 10) == 0) {
        if ((*(uint *)(lVar14 + 0x2c8) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x344);
        }
        uVar6 = uVar10 | uVar6;
      }
      if (bVar3 != 6) goto LAB_01db140c;
    }
    else {
      if (bVar3 == 0xff) goto LAB_01db14f4;
      if (((*(uint *)(lVar14 + 0x48) ^ 0xffffffff) & 10) == 0) {
        if ((*(uint *)(lVar14 + 0x48) & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(lVar14 + 0xc4);
        }
        uVar6 = (ulong)uVar8;
      }
      else {
        uVar6 = 0;
      }
      if (bVar3 != 1) goto LAB_01db1338;
LAB_01db1368:
      if (((*(uint *)(lVar14 + 0x148) ^ 0xffffffff) & 10) == 0) {
        if ((*(uint *)(lVar14 + 0x148) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x1c4);
        }
        uVar6 = uVar6 | uVar10;
      }
      if (bVar3 != 3) goto LAB_01db1394;
LAB_01db13bc:
      if (((*(uint *)(lVar14 + 0x248) ^ 0xffffffff) & 10) == 0) {
        if ((*(uint *)(lVar14 + 0x248) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x2c4);
        }
        uVar6 = uVar10 | uVar6;
      }
      if (bVar3 != 5) goto LAB_01db13e4;
LAB_01db140c:
      if (((*(uint *)(lVar14 + 0x348) ^ 0xffffffff) & 10) == 0) {
        if ((*(uint *)(lVar14 + 0x348) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x3c4);
        }
        uVar6 = uVar10 | uVar6;
      }
      if (bVar3 == 7) goto LAB_01db14f8;
    }
    uVar8 = *(uint *)(lVar14 + 0x3c8);
    goto joined_r0x01db1094;
  case 6:
    if (((*(uint *)(lVar14 + 0x48) ^ 0xffffffff) & 7) == 0) {
      uVar6 = (ulong)*(uint *)(lVar14 + 0xc4);
    }
    else {
      uVar6 = 0;
    }
    if (((*(uint *)(lVar14 + 200) ^ 0xffffffff) & 6) == 0) {
      if ((*(uint *)(lVar14 + 200) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x144);
      }
      uVar6 = uVar6 | uVar10;
    }
    if (((*(uint *)(lVar14 + 0x148) ^ 0xffffffff) & 6) == 0) {
      if ((*(uint *)(lVar14 + 0x148) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x1c4);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x1c8) ^ 0xffffffff) & 6) == 0) {
      if ((*(uint *)(lVar14 + 0x1c8) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x244);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x248) ^ 0xffffffff) & 6) == 0) {
      if ((*(uint *)(lVar14 + 0x248) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x2c4);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x2c8) ^ 0xffffffff) & 6) == 0) {
      if ((*(uint *)(lVar14 + 0x2c8) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x344);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x348) ^ 0xffffffff) & 6) == 0) {
      if ((*(uint *)(lVar14 + 0x348) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x3c4);
      }
      uVar6 = uVar10 | uVar6;
    }
    goto LAB_01db11c4;
  case 7:
    bVar3 = param_1[5];
    if (bVar3 == 0) {
      uVar6 = 0;
LAB_01db10c8:
      if (((*(uint *)(lVar14 + 200) ^ 0xffffffff) & 6) == 0) {
        if ((*(uint *)(lVar14 + 200) & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(lVar14 + 0x144);
        }
        uVar6 = uVar6 | uVar8;
      }
      if (bVar3 != 2) goto LAB_01db10f8;
LAB_01db1124:
      if (((*(uint *)(lVar14 + 0x1c8) ^ 0xffffffff) & 6) == 0) {
        if ((*(uint *)(lVar14 + 0x1c8) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x244);
        }
        uVar6 = uVar10 | uVar6;
      }
      if (bVar3 != 4) goto LAB_01db114c;
LAB_01db1174:
      if (((*(uint *)(lVar14 + 0x2c8) ^ 0xffffffff) & 6) == 0) {
        if ((*(uint *)(lVar14 + 0x2c8) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x344);
        }
        uVar6 = uVar10 | uVar6;
      }
      if (bVar3 == 6) goto LAB_01db11c4;
    }
    else {
      if (((*(uint *)(lVar14 + 0x48) ^ 0xffffffff) & 6) == 0) {
        if ((*(uint *)(lVar14 + 0x48) & 1) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(lVar14 + 0xc4);
        }
        uVar6 = (ulong)uVar8;
      }
      else {
        uVar6 = 0;
      }
      if (bVar3 != 1) goto LAB_01db10c8;
LAB_01db10f8:
      if (((*(uint *)(lVar14 + 0x148) ^ 0xffffffff) & 6) == 0) {
        if ((*(uint *)(lVar14 + 0x148) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x1c4);
        }
        uVar6 = uVar6 | uVar10;
      }
      if (bVar3 != 3) goto LAB_01db1124;
LAB_01db114c:
      if (((*(uint *)(lVar14 + 0x248) ^ 0xffffffff) & 6) == 0) {
        if ((*(uint *)(lVar14 + 0x248) & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(uint *)(lVar14 + 0x2c4);
        }
        uVar6 = uVar10 | uVar6;
      }
      if (bVar3 != 5) goto LAB_01db1174;
    }
    if (((*(uint *)(lVar14 + 0x348) ^ 0xffffffff) & 6) == 0) {
      if ((*(uint *)(lVar14 + 0x348) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x3c4);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (bVar3 == 7) goto LAB_01db14f8;
LAB_01db11c4:
    uVar8 = *(uint *)(lVar14 + 0x3c8);
    if (((uVar8 ^ 0xffffffff) & 6) != 0) goto LAB_01db14f8;
    goto joined_r0x01db1098;
  case 8:
    if (((*param_1 & 1) == 0) || (((*(uint *)(lVar14 + 0x48) ^ 0xffffffff) & 6) != 0)) {
      uVar6 = 0;
      bVar3 = *param_1;
    }
    else {
      if ((*(uint *)(lVar14 + 0x48) & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(lVar14 + 0xc4);
      }
      uVar6 = (ulong)uVar8;
      bVar3 = *param_1;
    }
    if (((bVar3 >> 1 & 1) != 0) && (((*(uint *)(lVar14 + 200) ^ 0xffffffff) & 6) == 0)) {
      if ((*(uint *)(lVar14 + 200) & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(lVar14 + 0x144);
      }
      uVar6 = uVar6 | uVar8;
    }
    if (((*param_1 >> 2 & 1) != 0) && (((*(uint *)(lVar14 + 0x148) ^ 0xffffffff) & 6) == 0)) {
      if ((*(uint *)(lVar14 + 0x148) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x1c4);
      }
      uVar6 = uVar6 | uVar10;
    }
    if (((*param_1 >> 3 & 1) != 0) && (((*(uint *)(lVar14 + 0x1c8) ^ 0xffffffff) & 6) == 0)) {
      if ((*(uint *)(lVar14 + 0x1c8) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x244);
      }
      uVar6 = uVar6 | uVar10;
    }
    if (((*param_1 >> 4 & 1) != 0) && (((*(uint *)(lVar14 + 0x248) ^ 0xffffffff) & 6) == 0)) {
      if ((*(uint *)(lVar14 + 0x248) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x2c4);
      }
      uVar6 = uVar6 | uVar10;
    }
    if (((*param_1 >> 5 & 1) != 0) && (((*(uint *)(lVar14 + 0x2c8) ^ 0xffffffff) & 6) == 0)) {
      if ((*(uint *)(lVar14 + 0x2c8) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x344);
      }
      uVar6 = uVar6 | uVar10;
    }
    if (((*param_1 >> 6 & 1) != 0) && (((*(uint *)(lVar14 + 0x348) ^ 0xffffffff) & 6) == 0)) {
      if ((*(uint *)(lVar14 + 0x348) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x3c4);
      }
      uVar6 = uVar6 | uVar10;
    }
    if ((((char)*param_1 < '\0') && (((*(uint *)(lVar14 + 0x3c8) ^ 0xffffffff) & 6) == 0)) &&
       ((*(uint *)(lVar14 + 0x3c8) & 1) != 0)) {
      uVar6 = uVar6 | *(uint *)(lVar14 + 0x444);
    }
    goto LAB_01db14f8;
  default:
    if (((*(uint *)(lVar14 + 0x48) ^ 0xffffffff) & 0xb) == 0) {
      uVar6 = (ulong)*(uint *)(lVar14 + 0xc4);
    }
    else {
      uVar6 = 0;
    }
    if (((*(uint *)(lVar14 + 200) ^ 0xffffffff) & 10) == 0) {
      if ((*(uint *)(lVar14 + 200) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x144);
      }
      uVar6 = uVar6 | uVar10;
    }
    if (((*(uint *)(lVar14 + 0x148) ^ 0xffffffff) & 10) == 0) {
      if ((*(uint *)(lVar14 + 0x148) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x1c4);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x1c8) ^ 0xffffffff) & 10) == 0) {
      if ((*(uint *)(lVar14 + 0x1c8) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x244);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x248) ^ 0xffffffff) & 10) == 0) {
      if ((*(uint *)(lVar14 + 0x248) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x2c4);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x2c8) ^ 0xffffffff) & 10) == 0) {
      if ((*(uint *)(lVar14 + 0x2c8) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x344);
      }
      uVar6 = uVar10 | uVar6;
    }
    if (((*(uint *)(lVar14 + 0x348) ^ 0xffffffff) & 10) == 0) {
      if ((*(uint *)(lVar14 + 0x348) & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x3c4);
      }
      uVar6 = uVar10 | uVar6;
    }
    uVar8 = *(uint *)(lVar14 + 0x3c8);
joined_r0x01db1094:
    if (((uVar8 ^ 0xffffffff) & 10) == 0) {
joined_r0x01db1098:
      if ((uVar8 & 1) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)*(uint *)(lVar14 + 0x444);
      }
      uVar6 = uVar10 | uVar6;
    }
    goto LAB_01db14f8;
  }
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar7 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar7 = (uint *)(lVar14 + 0x48);
    }
    uVar8 = *puVar7;
    if ((uVar8 >> 1 & 1) != 0) {
LAB_01db0f2c:
      puVar2 = (uint *)PTR_DAT_04bb32e0;
      if ((uVar8 & 1) != 0) {
        puVar2 = puVar7 + 0x1e;
      }
      bVar3 = (byte)*puVar2;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      uVar6 = 1L << ((long)(char)bVar3 & 0x3fU);
      goto LAB_01db14f8;
    }
  }
LAB_01db14f4:
  uVar6 = 0;
LAB_01db14f8:
  bVar3 = *(byte *)(*DAT_0537d558 + 0x471);
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  return uVar6 & (1L << ((long)(char)bVar3 & 0x3fU) ^ 0xffffffffffffffffU);
}


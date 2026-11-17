
void FUN_0306e124(long param_1,short *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined1 auStack_16d0 [5780];
  byte local_3c [4];
  byte local_38 [4];
  undefined4 local_34;
  
  if (*(int *)(param_2 + 4) == -1 && *param_2 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  *(short *)(param_1 + 0x98) = *param_2;
  bVar8 = *(byte *)(param_2 + 1);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(byte *)(param_1 + 0x9a) = bVar8;
  uVar7 = *(ulong *)(param_2 + 2);
  *(ulong *)(param_1 + 0x9c) = uVar7;
  switch(uVar7 & 0xffffffff) {
  case 0:
    pbVar12 = (byte *)(param_1 + 0x9a);
    local_38[0] = *pbVar12;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    lVar6 = FUN_025830c0(DAT_055021a0,local_38,1);
    if (lVar6 != 0) {
      if ((*(long **)(lVar6 + 0x161a8) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar6 + 0x161a8), puVar11 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar11)();
        uVar4 = uVar4 ^ 1;
      }
      pbVar1 = (byte *)(*(long *)(lVar6 + 0x16190) + *(long *)(lVar6 + 0x16188));
      bVar8 = pbVar1[1];
      bVar3 = *pbVar1;
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x161a8) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar6 + 0x161a8) + 8), puVar11 != (undefined8 *)0x0))
      {
        (**(code **)*puVar11)();
      }
      if ((bVar8 == 0 || 7 < bVar3) &&
         ((DAT_05ab5ea8 == 0 || ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) == 0)))) {
        if (DAT_04c487d4 != -1) {
          local_34 = 0x1a;
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 0x1a & 1) != 0) goto LAB_0306e3c0;
        }
        uVar7 = FUN_02538bb0(pbVar12);
        if ((uVar7 & 1) == 0) {
          local_3c[0] = *pbVar12;
          if (7 < local_3c[0]) {
            local_3c[0] = 0xff;
          }
          uVar7 = FUN_0266a8f0(local_3c);
          if (((uVar7 & 1) == 0) && (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
            puVar11 = *(undefined8 **)(param_1 + 0x18);
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar11;
            }
            *(undefined4 *)puVar11 = 8;
            if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) =
                   puVar11;
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            }
          }
        }
      }
    }
LAB_0306e3c0:
    if ((*(short *)(param_1 + 0x98) != DAT_04cb6038) &&
       (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 9;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar11;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
    return;
  case 1:
    break;
  default:
    return;
  case 0x13:
    iVar5 = *(int *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar9) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 0x15;
      iVar5 = *(int *)(param_1 + 8);
      iVar9 = *(int *)(param_1 + 0xc);
      if (iVar5 < iVar9) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
        iVar9 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar5;
      }
    }
    if (iVar5 < iVar9) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 0x16;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar11;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
    iVar5 = FUN_0274bce0(param_1 + 0x9a,&DAT_056e44f0);
    if (iVar5 != 0) {
      if (*(short *)(param_1 + 0x98) == *(short *)PTR_DAT_04bb3170) {
        iVar5 = *(int *)(param_1 + 0xa0);
        if (iVar5 != -1) {
          if (DAT_05292338 == 0) {
            if (iVar5 == -1) {
              return;
            }
          }
          else if (*(int *)(DAT_05292338 + 0xf90) == iVar5) {
            return;
          }
        }
      }
      else {
        uVar7 = FUN_0308c8c0();
        if ((uVar7 & 1) != 0) {
          return;
        }
      }
      iVar5 = *(int *)(param_1 + 8);
      iVar9 = *(int *)(param_1 + 0xc);
      if (iVar5 < iVar9) {
        puVar11 = *(undefined8 **)(param_1 + 0x18);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar11;
        }
        *(undefined4 *)puVar11 = 0x17;
        iVar5 = *(int *)(param_1 + 8);
        iVar9 = *(int *)(param_1 + 0xc);
        if (iVar5 < iVar9) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
          iVar9 = *(int *)(param_1 + 0xc);
          iVar5 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar5;
        }
      }
      if (iVar5 < iVar9) {
        puVar11 = *(undefined8 **)(param_1 + 0x18);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar11;
        }
        *(undefined4 *)puVar11 = 0x18;
        if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar11;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
      }
    }
    return;
  case 0x14:
    iVar5 = *(int *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar9) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 0x15;
      iVar5 = *(int *)(param_1 + 8);
      iVar9 = *(int *)(param_1 + 0xc);
      if (iVar5 < iVar9) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
        iVar9 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar5;
      }
    }
    if (iVar9 <= iVar5) {
      return;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    *(undefined4 *)puVar11 = 0x16;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar11;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0xa0) == -1) {
    lVar6 = param_1 + 0x98;
    FUN_007ef010(local_38 + 0x20,lVar6);
    FUN_007e4920(auStack_16d0,local_38 + 0x20);
    uVar7 = FUN_007e4bb0(auStack_16d0);
    if ((uVar7 & 1) != 0) {
      uVar7 = FUN_0344ca60(lVar6);
      if ((uVar7 & 1) == 0) {
        FUN_007ef010(local_38 + 0x26,lVar6);
        FUN_007e4920(auStack_16d0,local_38 + 0x26);
        uVar4 = FUN_007e68d0(auStack_16d0);
        if ((uVar4 < 0x1a) && ((1 << (ulong)(uVar4 & 0x1f) & 0x3038000U) != 0)) {
          iVar5 = *(int *)(param_1 + 8);
          iVar9 = *(int *)(param_1 + 0xc);
          if (iVar5 < iVar9) {
            puVar11 = *(undefined8 **)(param_1 + 0x18);
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar11;
            }
            *(undefined4 *)puVar11 = 0xe;
            iVar5 = *(int *)(param_1 + 8);
            iVar9 = *(int *)(param_1 + 0xc);
            if (iVar5 < iVar9) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
              iVar9 = *(int *)(param_1 + 0xc);
              iVar5 = *(int *)(param_1 + 8) + 1;
              *(int *)(param_1 + 8) = iVar5;
            }
          }
          if (iVar9 <= iVar5) {
            return;
          }
          puVar11 = *(undefined8 **)(param_1 + 0x18);
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar11;
          }
          uVar10 = 0xf;
        }
        else {
          FUN_007ef010(local_38 + 0x20,lVar6);
          FUN_007e4920(auStack_16d0,local_38 + 0x20);
          uVar7 = FUN_007e4bb0(auStack_16d0);
          if ((uVar7 & 1) == 0) {
            return;
          }
          iVar5 = FUN_007e68d0(auStack_16d0);
          if (iVar5 != 0x1d) {
            return;
          }
          iVar5 = *(int *)(param_1 + 8);
          iVar9 = *(int *)(param_1 + 0xc);
          if (iVar5 < iVar9) {
            puVar11 = *(undefined8 **)(param_1 + 0x18);
            if (puVar11 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar11;
            }
            *(undefined4 *)puVar11 = 0x11;
            iVar5 = *(int *)(param_1 + 8);
            iVar9 = *(int *)(param_1 + 0xc);
            if (iVar5 < iVar9) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
              iVar9 = *(int *)(param_1 + 0xc);
              iVar5 = *(int *)(param_1 + 8) + 1;
              *(int *)(param_1 + 8) = iVar5;
            }
          }
          if (iVar9 <= iVar5) {
            return;
          }
          puVar11 = *(undefined8 **)(param_1 + 0x18);
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar11;
          }
          uVar10 = 0x12;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 8);
        iVar9 = *(int *)(param_1 + 0xc);
        if (iVar5 < iVar9) {
          puVar11 = *(undefined8 **)(param_1 + 0x18);
          if (puVar11 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar11;
          }
          *(undefined4 *)puVar11 = 10;
          iVar5 = *(int *)(param_1 + 8);
          iVar9 = *(int *)(param_1 + 0xc);
          if (iVar5 < iVar9) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
            iVar9 = *(int *)(param_1 + 0xc);
            iVar5 = *(int *)(param_1 + 8) + 1;
            *(int *)(param_1 + 8) = iVar5;
          }
        }
        if (iVar9 <= iVar5) {
          return;
        }
        puVar11 = *(undefined8 **)(param_1 + 0x18);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar11;
        }
        uVar10 = 0xd;
      }
      goto LAB_0306e5e0;
    }
  }
  uVar7 = FUN_0308bdc0(param_1 + 0x9a);
  iVar5 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0xc);
  if ((uVar7 & 1) == 0) {
    if (iVar5 < iVar9) {
      puVar11 = *(undefined8 **)(param_1 + 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar11;
      }
      *(undefined4 *)puVar11 = 10;
      iVar5 = *(int *)(param_1 + 8);
      if (iVar5 < *(int *)(param_1 + 0xc)) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
        iVar9 = *(int *)(param_1 + 0xc);
        iVar5 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar5;
        goto LAB_0306e5c4;
      }
      if (*(int *)(param_1 + 0xc) <= iVar5) {
        return;
      }
    }
    else {
LAB_0306e5c4:
      if (iVar9 <= iVar5) {
        return;
      }
    }
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    uVar10 = 0xb;
    goto LAB_0306e5e0;
  }
  if (iVar5 < iVar9) {
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    *(undefined4 *)puVar11 = 10;
    iVar5 = *(int *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar9) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
      iVar9 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
    }
  }
  if (iVar5 < iVar9) {
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    *(undefined4 *)puVar11 = 0xb;
    iVar5 = *(int *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar9 <= iVar5) {
      if (iVar5 < iVar9) goto LAB_0306e680;
      goto LAB_0306e55c;
    }
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
    iVar9 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar5;
    if (iVar9 <= iVar5) goto LAB_0306e55c;
LAB_0306e680:
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    *(undefined4 *)puVar11 = 0xc;
    iVar5 = *(int *)(param_1 + 8);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar5 < iVar9) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
      iVar9 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
      if (iVar9 <= iVar5) goto LAB_0306e564;
      goto LAB_0306e6d4;
    }
    if (iVar5 < iVar9) goto LAB_0306e6d4;
LAB_0306e564:
    if (iVar9 <= iVar5) {
      return;
    }
  }
  else {
    if (iVar5 < iVar9) goto LAB_0306e680;
LAB_0306e55c:
    if (iVar9 <= iVar5) goto LAB_0306e564;
LAB_0306e6d4:
    puVar11 = *(undefined8 **)(param_1 + 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar11;
    }
    *(undefined4 *)puVar11 = 0xd;
    iVar5 = *(int *)(param_1 + 8);
    if (iVar5 < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar5 * 8) = puVar11;
      iVar5 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar5;
      if (*(int *)(param_1 + 0xc) <= iVar5) {
        return;
      }
    }
    else if (*(int *)(param_1 + 0xc) <= iVar5) {
      return;
    }
  }
  puVar11 = *(undefined8 **)(param_1 + 0x18);
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar11;
  }
  uVar10 = 0x10;
LAB_0306e5e0:
  *(undefined4 *)puVar11 = uVar10;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar11;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}


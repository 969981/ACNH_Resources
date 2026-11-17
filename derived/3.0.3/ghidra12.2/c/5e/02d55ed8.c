
void FUN_02d55ed8(long param_1,short *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined1 auStack_16d0 [5780];
  byte local_3c [4];
  byte local_38 [4];
  undefined4 local_34;
  ushort in_stack_ffffffffffffffe8;
  
  if (*(int *)(param_2 + 4) == -1 && *param_2 == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  *(short *)(param_1 + 0x98) = *param_2;
  bVar11 = *(byte *)(param_2 + 1);
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  *(byte *)(param_1 + 0x9a) = bVar11;
  uVar10 = *(ulong *)(param_2 + 2);
  *(ulong *)(param_1 + 0x9c) = uVar10;
  switch(uVar10 & 0xffffffff) {
  case 0:
    pbVar15 = (byte *)(param_1 + 0x9a);
    local_38[0] = *pbVar15;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    lVar9 = FUN_025830c0(DAT_055021a0,local_38,1);
    if (lVar9 != 0) {
      if ((*(long **)(lVar9 + 0x161a8) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar9 + 0x161a8), puVar14 == (undefined8 *)0x0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = (**(code **)*puVar14)();
        uVar8 = uVar8 ^ 1;
      }
      pbVar1 = (byte *)(*(long *)(lVar9 + 0x16190) + *(long *)(lVar9 + 0x16188));
      bVar11 = pbVar1[1];
      bVar4 = *pbVar1;
      if ((((uVar8 & 1) == 0) && (*(long *)(lVar9 + 0x161a8) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar9 + 0x161a8) + 8), puVar14 != (undefined8 *)0x0))
      {
        (**(code **)*puVar14)();
      }
      if ((bVar11 == 0 || 7 < bVar4) &&
         ((DAT_05ab5ea8 == 0 || ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) == 0)))) {
        if (DAT_04c487d4 != -1) {
          local_34 = 0x1a;
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 0x1a & 1) != 0) goto LAB_02d56174;
        }
        uVar10 = FUN_02538bb0(pbVar15);
        if ((uVar10 & 1) == 0) {
          local_3c[0] = *pbVar15;
          if (7 < local_3c[0]) {
            local_3c[0] = 0xff;
          }
          uVar10 = FUN_0266a8f0(local_3c);
          if (((uVar10 & 1) == 0) && (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
            puVar14 = *(undefined8 **)(param_1 + 0x18);
            if (puVar14 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar14;
            }
            *(undefined4 *)puVar14 = 8;
            if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) =
                   puVar14;
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
            }
          }
        }
      }
    }
LAB_02d56174:
    if ((*(short *)(param_1 + 0x98) != DAT_04cb6038) &&
       (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
      puVar14 = *(undefined8 **)(param_1 + 0x18);
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar14;
      }
      *(undefined4 *)puVar14 = 9;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar14;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
    return;
  case 1:
    break;
  default:
    return;
  case 0x13:
    iVar7 = *(int *)(param_1 + 8);
    iVar12 = *(int *)(param_1 + 0xc);
    if (iVar7 < iVar12) {
      puVar14 = *(undefined8 **)(param_1 + 0x18);
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar14;
      }
      *(undefined4 *)puVar14 = 0x15;
      iVar7 = *(int *)(param_1 + 8);
      iVar12 = *(int *)(param_1 + 0xc);
      if (iVar7 < iVar12) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
        iVar12 = *(int *)(param_1 + 0xc);
        iVar7 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar7;
      }
    }
    if (iVar7 < iVar12) {
      puVar14 = *(undefined8 **)(param_1 + 0x18);
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar14;
      }
      *(undefined4 *)puVar14 = 0x16;
      if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar14;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
    iVar7 = FUN_0274bce0(param_1 + 0x9a,&DAT_056e44f0);
    puVar3 = PTR_DAT_04bb3170;
    if (iVar7 != 0) {
      uVar5 = *(ushort *)(param_1 + 0x98);
      uVar6 = *(ushort *)PTR_DAT_04bb3170;
      if (uVar5 == uVar6) {
        iVar7 = *(int *)(param_1 + 0xa0);
        if (iVar7 != -1) {
          if (DAT_05292338 == 0) {
            if (iVar7 == -1) {
              return;
            }
          }
          else if (*(int *)(DAT_05292338 + 0xf90) == iVar7) {
            return;
          }
        }
      }
      else {
        uVar8 = FUN_007ef180();
        FUN_0344d0c0(local_38 + 0x24,uVar5 & 0x7f,uVar8 & 1);
        if (*(long *)PTR_DAT_04bb5ce0 != 0) {
          puVar3 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
        }
        FUN_007ef010(local_38 + 0x20,puVar3);
        if (uVar6 == in_stack_ffffffffffffffe8) {
          return;
        }
      }
      iVar7 = *(int *)(param_1 + 8);
      iVar12 = *(int *)(param_1 + 0xc);
      if (iVar7 < iVar12) {
        puVar14 = *(undefined8 **)(param_1 + 0x18);
        if (puVar14 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar14;
        }
        *(undefined4 *)puVar14 = 0x17;
        iVar7 = *(int *)(param_1 + 8);
        iVar12 = *(int *)(param_1 + 0xc);
        if (iVar7 < iVar12) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
          iVar12 = *(int *)(param_1 + 0xc);
          iVar7 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar7;
        }
      }
      if (iVar7 < iVar12) {
        puVar14 = *(undefined8 **)(param_1 + 0x18);
        if (puVar14 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar14;
        }
        *(undefined4 *)puVar14 = 0x18;
        if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar14;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
      }
    }
    return;
  case 0x14:
    iVar7 = *(int *)(param_1 + 8);
    iVar12 = *(int *)(param_1 + 0xc);
    if (iVar7 < iVar12) {
      puVar14 = *(undefined8 **)(param_1 + 0x18);
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar14;
      }
      *(undefined4 *)puVar14 = 0x15;
      iVar7 = *(int *)(param_1 + 8);
      iVar12 = *(int *)(param_1 + 0xc);
      if (iVar7 < iVar12) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
        iVar12 = *(int *)(param_1 + 0xc);
        iVar7 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar7;
      }
    }
    if (iVar12 <= iVar7) {
      return;
    }
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar14;
    }
    *(undefined4 *)puVar14 = 0x16;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar14;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0xa0) == -1) {
    lVar9 = param_1 + 0x98;
    FUN_007ef010(local_38 + 0x20,lVar9);
    FUN_007e4920(auStack_16d0,local_38 + 0x20);
    uVar10 = FUN_007e4bb0(auStack_16d0);
    if ((uVar10 & 1) != 0) {
      uVar10 = FUN_0344ca60(lVar9);
      if ((uVar10 & 1) == 0) {
        FUN_007ef010(local_38 + 0x26,lVar9);
        FUN_007e4920(auStack_16d0,local_38 + 0x26);
        uVar8 = FUN_007e68d0(auStack_16d0);
        if ((uVar8 < 0x1a) && ((1 << (ulong)(uVar8 & 0x1f) & 0x3038000U) != 0)) {
          iVar7 = *(int *)(param_1 + 8);
          iVar12 = *(int *)(param_1 + 0xc);
          if (iVar7 < iVar12) {
            puVar14 = *(undefined8 **)(param_1 + 0x18);
            if (puVar14 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar14;
            }
            *(undefined4 *)puVar14 = 0xe;
            iVar7 = *(int *)(param_1 + 8);
            iVar12 = *(int *)(param_1 + 0xc);
            if (iVar7 < iVar12) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
              iVar12 = *(int *)(param_1 + 0xc);
              iVar7 = *(int *)(param_1 + 8) + 1;
              *(int *)(param_1 + 8) = iVar7;
            }
          }
          if (iVar12 <= iVar7) {
            return;
          }
          puVar14 = *(undefined8 **)(param_1 + 0x18);
          if (puVar14 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar14;
          }
          uVar13 = 0xf;
        }
        else {
          FUN_007ef010(local_38 + 0x20,lVar9);
          FUN_007e4920(auStack_16d0,local_38 + 0x20);
          uVar10 = FUN_007e4bb0(auStack_16d0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          iVar7 = FUN_007e68d0(auStack_16d0);
          if (iVar7 != 0x1d) {
            return;
          }
          iVar7 = *(int *)(param_1 + 8);
          iVar12 = *(int *)(param_1 + 0xc);
          if (iVar7 < iVar12) {
            puVar14 = *(undefined8 **)(param_1 + 0x18);
            if (puVar14 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x18) = *puVar14;
            }
            *(undefined4 *)puVar14 = 0x11;
            iVar7 = *(int *)(param_1 + 8);
            iVar12 = *(int *)(param_1 + 0xc);
            if (iVar7 < iVar12) {
              *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
              iVar12 = *(int *)(param_1 + 0xc);
              iVar7 = *(int *)(param_1 + 8) + 1;
              *(int *)(param_1 + 8) = iVar7;
            }
          }
          if (iVar12 <= iVar7) {
            return;
          }
          puVar14 = *(undefined8 **)(param_1 + 0x18);
          if (puVar14 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar14;
          }
          uVar13 = 0x12;
        }
      }
      else {
        iVar7 = *(int *)(param_1 + 8);
        iVar12 = *(int *)(param_1 + 0xc);
        if (iVar7 < iVar12) {
          puVar14 = *(undefined8 **)(param_1 + 0x18);
          if (puVar14 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 0x18) = *puVar14;
          }
          *(undefined4 *)puVar14 = 10;
          iVar7 = *(int *)(param_1 + 8);
          iVar12 = *(int *)(param_1 + 0xc);
          if (iVar7 < iVar12) {
            *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
            iVar12 = *(int *)(param_1 + 0xc);
            iVar7 = *(int *)(param_1 + 8) + 1;
            *(int *)(param_1 + 8) = iVar7;
          }
        }
        if (iVar12 <= iVar7) {
          return;
        }
        puVar14 = *(undefined8 **)(param_1 + 0x18);
        if (puVar14 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = *puVar14;
        }
        uVar13 = 0xd;
      }
      goto LAB_02d56394;
    }
  }
  uVar10 = FUN_02d6f360(param_1 + 0x9a);
  iVar7 = *(int *)(param_1 + 8);
  iVar12 = *(int *)(param_1 + 0xc);
  if ((uVar10 & 1) == 0) {
    if (iVar7 < iVar12) {
      puVar14 = *(undefined8 **)(param_1 + 0x18);
      if (puVar14 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar14;
      }
      *(undefined4 *)puVar14 = 10;
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 < *(int *)(param_1 + 0xc)) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
        iVar12 = *(int *)(param_1 + 0xc);
        iVar7 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar7;
        goto LAB_02d56378;
      }
      if (*(int *)(param_1 + 0xc) <= iVar7) {
        return;
      }
    }
    else {
LAB_02d56378:
      if (iVar12 <= iVar7) {
        return;
      }
    }
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar14;
    }
    uVar13 = 0xb;
    goto LAB_02d56394;
  }
  if (iVar7 < iVar12) {
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar14;
    }
    *(undefined4 *)puVar14 = 10;
    iVar7 = *(int *)(param_1 + 8);
    iVar12 = *(int *)(param_1 + 0xc);
    if (iVar7 < iVar12) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
      iVar12 = *(int *)(param_1 + 0xc);
      iVar7 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar7;
    }
  }
  if (iVar7 < iVar12) {
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar14;
    }
    *(undefined4 *)puVar14 = 0xb;
    iVar7 = *(int *)(param_1 + 8);
    iVar12 = *(int *)(param_1 + 0xc);
    if (iVar12 <= iVar7) {
      if (iVar7 < iVar12) goto LAB_02d56434;
      goto LAB_02d56310;
    }
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
    iVar12 = *(int *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar7;
    if (iVar12 <= iVar7) goto LAB_02d56310;
LAB_02d56434:
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar14;
    }
    *(undefined4 *)puVar14 = 0xc;
    iVar7 = *(int *)(param_1 + 8);
    iVar12 = *(int *)(param_1 + 0xc);
    if (iVar7 < iVar12) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
      iVar12 = *(int *)(param_1 + 0xc);
      iVar7 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar7;
      if (iVar12 <= iVar7) goto LAB_02d56318;
      goto LAB_02d56488;
    }
    if (iVar7 < iVar12) goto LAB_02d56488;
LAB_02d56318:
    if (iVar12 <= iVar7) {
      return;
    }
  }
  else {
    if (iVar7 < iVar12) goto LAB_02d56434;
LAB_02d56310:
    if (iVar12 <= iVar7) goto LAB_02d56318;
LAB_02d56488:
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar14;
    }
    *(undefined4 *)puVar14 = 0xd;
    iVar7 = *(int *)(param_1 + 8);
    if (iVar7 < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar7 * 8) = puVar14;
      iVar7 = *(int *)(param_1 + 8) + 1;
      *(int *)(param_1 + 8) = iVar7;
      if (*(int *)(param_1 + 0xc) <= iVar7) {
        return;
      }
    }
    else if (*(int *)(param_1 + 0xc) <= iVar7) {
      return;
    }
  }
  puVar14 = *(undefined8 **)(param_1 + 0x18);
  if (puVar14 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar14;
  }
  uVar13 = 0x10;
LAB_02d56394:
  *(undefined4 *)puVar14 = uVar13;
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar14;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}


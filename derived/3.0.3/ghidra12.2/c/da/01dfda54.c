
/* WARNING: Removing unreachable block (ram,0x01dfdabc) */
/* WARNING: Removing unreachable block (ram,0x01dfdd2c) */

undefined8 FUN_01dfda54(long param_1,undefined8 *param_2,uint param_3)

{
  void *__src;
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  byte *pbVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  void *local_1218;
  uint local_1208;
  undefined1 local_1204;
  undefined4 local_1202;
  undefined8 local_11fc;
  undefined8 local_11f4;
  undefined8 local_11ec;
  undefined8 local_11e0;
  undefined1 auStack_11d8 [104];
  byte local_1170;
  undefined1 auStack_1168 [2096];
  undefined8 local_938;
  undefined1 auStack_930 [104];
  byte local_8c8;
  undefined1 auStack_8c0 [2096];
  ulong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ulong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  byte local_6c [12];
  
  local_80 = CONCAT44(local_80._4_4_,param_3);
  if (((param_3 == 5) || (DAT_05574040 == 0)) ||
     (local_1208 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) {
switchD_01dfdb14_default:
    return 0;
  }
  local_70 = param_3;
  lVar9 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
  if (lVar9 == 0) goto switchD_01dfdb14_default;
  switch(local_80 & 0xffffffff) {
  case 0:
    lVar9 = lVar9 + 0x390a0;
    break;
  case 1:
    lVar9 = lVar9 + 0x3a488;
    break;
  case 2:
    lVar9 = lVar9 + 0x3b870;
    break;
  case 3:
    lVar9 = lVar9 + 0x3cc58;
    break;
  case 4:
    lVar9 = lVar9 + 0x3e040;
    break;
  default:
    return 0;
  }
  iVar7 = FUN_0377fc30(param_3,0);
  if (*(long **)(lVar9 + 0x98) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar9 + 0x98);
    uVar11 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar10)();
    }
  }
  local_1208 = 0;
  uVar3 = *(ushort *)(*(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78) + 0x153c);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x98) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x98) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if ((ushort)(iVar7 < 1) == (uVar3 & 1)) {
    return 0;
  }
  if (*(long **)(lVar9 + 0x6f0) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar9 + 0x6f0);
    uVar11 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar10)();
    }
  }
  local_1208 = 0;
  uVar3 = *(ushort *)(*(long *)(lVar9 + 0x6d8) + *(long *)(lVar9 + 0x6d0) + 0x153c);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x6f0) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x6f0) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if ((ushort)(iVar7 < 2) == (uVar3 & 1)) {
    return 0;
  }
  if (*(long **)(lVar9 + 0xd48) == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    puVar10 = (undefined8 *)**(long **)(lVar9 + 0xd48);
    uVar11 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      uVar11 = (**(code **)*puVar10)();
    }
  }
  local_1208 = 0;
  uVar3 = *(ushort *)(*(long *)(lVar9 + 0xd30) + *(long *)(lVar9 + 0xd28) + 0x153c);
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0xd48) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0xd48) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if ((ushort)(iVar7 < 3) == (uVar3 & 1)) {
    return 0;
  }
  if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar11 = uVar11 & 0xffffffff;
  }
  if (DAT_05574040 == 0) {
    lVar24 = 0;
  }
  else {
    local_1208 = 1;
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar12 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar12 = 0;
    }
    lVar24 = 0;
    if (lVar12 != 0) {
      lVar24 = lVar12 + 0xa8;
    }
  }
  if ((*(long **)(lVar24 + 0x450) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar24 + 0x450), puVar10 == (undefined8 *)0x0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = (**(code **)*puVar10)();
    uVar13 = uVar13 & 0xffffffff;
  }
  if (DAT_05574040 != 0) {
    lVar12 = *(long *)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      if (lVar12 != 0) {
        lVar12 = *(long *)(lVar12 + 8);
        goto joined_r0x01dfddb0;
      }
    }
    else if (lVar12 != 0) {
      lVar12 = *(long *)(lVar12 + 0x138);
joined_r0x01dfddb0:
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
        if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
           (puVar10 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar10 == (undefined8 *)0x0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = (**(code **)*puVar10)();
          uVar14 = uVar14 & 0xffffffff;
        }
        if (DAT_04cd19d8 == 0) {
          bVar4 = DAT_0548e140;
LAB_01dfdea0:
          if (bVar4 < 8) goto LAB_01dfdf14;
LAB_01dfdea8:
          if (DAT_0537d558 != (long *)0x0) {
            lVar21 = *DAT_0537d558;
            bVar4 = *(byte *)(lVar21 + 0x473);
            pbVar20 = PTR_DAT_04bb5038;
            if ((long)(char)bVar4 != 0xffffffffffffffff) {
              puVar1 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
              if (7 < bVar4) {
                puVar1 = (uint *)(lVar21 + 0x48);
              }
              if ((*puVar1 & 8) != 0) {
                pbVar20 = (byte *)(lVar21 + 0x471);
              }
            }
            bVar4 = *pbVar20;
            if (*pbVar20 < 8) goto LAB_01dfdf14;
          }
          bVar4 = DAT_0548e168;
          if (DAT_0548e168 < 8) goto LAB_01dfdf14;
LAB_01dfdf58:
          uVar22 = 0;
        }
        else {
          pbVar20 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar20 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          bVar4 = *pbVar20;
          if (7 < *pbVar20) {
            if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
              bVar4 = *(byte *)(DAT_054f5738 + 0x11a5);
              goto LAB_01dfdea0;
            }
            goto LAB_01dfdea8;
          }
LAB_01dfdf14:
          local_6c[0] = bVar4;
          uVar15 = FUN_007b39a4(&local_1208,local_6c);
          if ((uVar15 & 1) == 0) goto LAB_01dfdf58;
          local_90 = local_90 & 0xffffffffffffff00;
          iVar7 = nn::account::IsNetworkServiceAccountAvailable
                            ((bool *)&local_90,(UserHandle *)&local_1208);
          if ((iVar7 != 0) || (local_90._0_1_ == false)) goto LAB_01dfdf58;
          iVar7 = nn::account::GetNetworkServiceAccountId
                            ((NetworkServiceAccountId *)&local_80,(UserHandle *)&local_1208);
          uVar15 = local_80;
          if (iVar7 != 0) goto LAB_01dfdf58;
          uVar25 = 0;
          iVar7 = 0;
          local_80 = 0xffffffffffffffff;
          local_78 = 0xffffffff;
          uStack_74 = 0xf;
          local_90 = 0xffffffffffffffff;
          local_88 = 0xffffffff;
          uStack_84 = 0xf;
          do {
            lVar21 = lVar24 + 0x498 + (long)iVar7 * 0x16c0;
            if (*(long **)(lVar21 + 0x28) == (long *)0x0) {
              uVar16 = 0;
            }
            else {
              puVar10 = (undefined8 *)**(long **)(lVar21 + 0x28);
              uVar16 = 0;
              if (puVar10 != (undefined8 *)0x0) {
                uVar16 = (**(code **)*puVar10)();
              }
            }
            uVar6 = local_70;
            uVar19 = (uint)*(byte *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 2);
            local_1208 = uVar19;
            if ((((uVar16 & 1) != 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
               (puVar10 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 8),
               puVar10 != (undefined8 *)0x0)) {
              (**(code **)*puVar10)();
            }
            iVar7 = iVar7 + 1;
            if (uVar19 == uVar6) {
              uVar25 = uVar25 + 1;
            }
          } while (iVar7 != 0x26);
          lVar21 = 0x4d50c;
          if (uVar25 != 0) {
            lVar21 = (ulong)uVar25 * 0x1178 + 0x4d514;
          }
          puVar17 = (undefined4 *)
                    (**(code **)(**(long **)(param_1 + 0x50) + 0x30))
                              (*(long **)(param_1 + 0x50),lVar21,8);
          if (puVar17 == (undefined4 *)0x0) {
LAB_01dfe314:
            uVar22 = 0;
          }
          else {
            puVar10 = (undefined8 *)FUN_01e064f0(puVar17 + 10);
            if (puVar10 == (undefined8 *)0x0) {
LAB_01dfe300:
              (**(code **)(**(long **)(param_1 + 0x50) + 0x38))(*(long **)(param_1 + 0x50),puVar17);
              goto LAB_01dfe314;
            }
            lVar23 = *(long *)(lVar9 + 8);
            lVar2 = *(long *)(lVar9 + 0x10);
            *puVar10 = 0x40000408c;
            memcpy(puVar10 + 1,(void *)(lVar2 + lVar23),0x408c);
            local_1218 = (void *)((long)puVar10 + 0x4094);
            if (uVar25 != 0) {
              iVar7 = 0;
              *(undefined4 *)((long)puVar10 + 0x4094) = 0x1178;
              *(undefined4 *)(puVar10 + 0x813) = 8;
              local_1218 = (void *)((long)puVar10 + 0x409c);
              do {
                lVar23 = lVar24 + 0x498 + (long)iVar7 * 0x16c0;
                if (*(long **)(lVar23 + 0x28) == (long *)0x0) {
                  uVar16 = 0;
                }
                else {
                  puVar10 = (undefined8 *)**(long **)(lVar23 + 0x28);
                  uVar16 = 0;
                  if (puVar10 != (undefined8 *)0x0) {
                    uVar16 = (**(code **)*puVar10)();
                  }
                }
                local_1208 = (uint)*(byte *)(*(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8) + 2);
                if (local_1208 == local_70) {
                  local_1208 = 0x5ffff;
                  local_1204 = 0;
                  local_1202 = 0;
                  local_11fc = 0xfffe;
                  FUN_0277d4ac(&local_11fc);
                  local_11f4 = 0xfffe;
                  FUN_0277d4ac(&local_11f4);
                  local_11ec = 0xfffe;
                  FUN_0277d4ac(&local_11ec);
                  local_11e0 = 0;
                  FUN_027c0ee4(auStack_11d8);
                  memset(auStack_1168,0,0x830);
                  local_938 = 0;
                  local_1170 = local_1170 | 1;
                  FUN_027c0ee4(auStack_930);
                  memset(auStack_8c0,0,0x830);
                  local_8c8 = local_8c8 | 1;
                  __src = (void *)(*(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8));
                  memcpy(&local_1208,__src,0x1178);
                  memmove(local_1218,__src,0x1178);
                  uVar16 = uVar16 & 0xffffffff;
                  local_1218 = (void *)((long)local_1218 + 0x1178);
                }
                if ((((uVar16 & 1) != 0) && (*(long *)(lVar23 + 0x28) != 0)) &&
                   (puVar10 = *(undefined8 **)(*(long *)(lVar23 + 0x28) + 8),
                   puVar10 != (undefined8 *)0x0)) {
                  (**(code **)*puVar10)();
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 != 0x26);
            }
            uVar22 = FUN_01e06ff0(local_1218,&local_80);
            puVar18 = (undefined4 *)FUN_01e07250(uVar22,&local_90);
            puVar5 = PTR_DAT_04bb3448;
            lVar23 = (long)puVar18 - (long)puVar17;
            if (puVar18 <= puVar17) {
              lVar23 = (long)puVar17 - (long)puVar18;
            }
            if (lVar23 != lVar21) goto LAB_01dfe300;
            *param_2 = puVar17;
            *(int *)(param_2 + 1) = (int)lVar21;
            local_1208 = **(uint **)puVar5;
            puVar17[1] = 6;
            puVar17[8] = uVar25;
            puVar17[2] = 0xa0028;
            puVar17[3] = 0xa0002;
            puVar17[4] = local_1208;
            *(ulong *)(puVar17 + 6) = uVar15;
            uVar8 = FUN_006f6900(puVar17 + 1,lVar21 + -4,0x3f89a3a2);
            uVar22 = 1;
            *puVar17 = uVar8;
          }
        }
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 8), puVar10 != (undefined8 *)0x0))
        {
          (**(code **)*puVar10)();
        }
        goto LAB_01dfddf4;
      }
    }
  }
  uVar22 = 0;
LAB_01dfddf4:
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar24 + 0x450) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar24 + 0x450) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
  if ((uVar11 & 1) == 0) {
    return uVar22;
  }
  if (*(long *)(lVar9 + 0x28) == 0) {
    return uVar22;
  }
  puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8);
  if (puVar10 == (undefined8 *)0x0) {
    return uVar22;
  }
  (**(code **)*puVar10)();
  return uVar22;
}


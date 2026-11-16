
ulong FUN_0284f138(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [8];
  undefined *local_90;
  undefined2 local_88;
  undefined1 local_86;
  byte local_85;
  undefined4 local_84;
  uint *local_80;
  undefined *local_78;
  undefined4 local_70;
  int local_6c;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_48;
  
  uVar9 = FUN_0284da58(param_1,param_2,0);
  puVar4 = PTR_DAT_04bb43c0;
  if (uVar9 < 7) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar9);
    switch(uVar9) {
    default:
      lVar16 = param_1 + 8;
      break;
    case 1:
      lVar16 = param_1 + 0x44;
      break;
    case 2:
      lVar16 = param_1 + 0x80;
      break;
    case 3:
      lVar16 = param_1 + 0xc0;
      break;
    case 4:
      lVar16 = param_1 + 0xfc;
      break;
    case 5:
      lVar16 = param_1 + 0x134;
      break;
    case 6:
      lVar16 = param_1 + 0x16c;
    }
    if (*(char *)(lVar16 + 0x2f) == '\x02') {
      if (uVar9 == 3) {
        local_48 = (undefined *)0x9f1;
        FUN_0277d4ac(&local_48);
      }
      else {
        if (uVar9 != 1) {
          if (uVar9 == 0) {
            uVar11 = FUN_028454ec(param_1 + 8,param_3);
            return uVar11;
          }
          goto LAB_0284f200;
        }
        FUN_02847f9c(&local_48,param_1 + 0x44);
      }
      uVar9 = FUN_0277d7b4(&local_48,param_3);
      goto LAB_0284f37c;
    }
  }
LAB_0284f200:
  if (((int)*(char *)(param_1 + 0xbc) == (int)param_2) &&
     ((*(ushort *)(param_1 + 0xbe) >> 8 & 1) == 0)) {
    local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
    if ((*(ushort *)(param_1 + 0xbe) & 1) == 0) {
      if (DAT_05574040 == 0) {
        return 0;
      }
      puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar16 = (**(code **)(*(long *)*puVar13 + 0x38))();
        if (lVar16 == 0) {
          return 0;
        }
        lVar16 = lVar16 + 0x70;
      }
      else {
        if (puVar13 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar13[0x26] == (long *)0x0) {
          return 0;
        }
        lVar16 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
        if (lVar16 == 0) {
          return 0;
        }
      }
      iVar6 = FUN_0277d6c4(param_3);
      puVar5 = PTR_DAT_04bc0510;
      puVar4 = PTR_DAT_04bb43c0;
      if (iVar6 != 0x1095) {
        return 0;
      }
      local_88 = (undefined2)*param_3;
      local_80 = (uint *)0x0;
      local_86 = *(undefined1 *)((long)param_3 + 2);
      local_90 = PTR_DAT_04bc0510 + 0x10;
      bVar2 = *(byte *)((long)param_3 + 3);
      local_84 = *(undefined4 *)((long)param_3 + 4);
      lVar17 = *(long *)PTR_DAT_04bb43c0;
      local_85 = bVar2;
      uVar9 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar4 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_3);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (puVar14 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar14 != (uint *)0x0)) {
            uVar9 = 0;
            local_78 = (undefined *)CONCAT44(local_78._4_4_,0x8d);
            uVar8 = *puVar14;
            local_80 = puVar14;
            if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
              puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
              uVar9 = 0;
              if (*puVar15 != 0) {
                uVar9 = puVar15[1];
                if ((uVar9 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar15 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                  if (lVar17 != 0) {
                    uVar8 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar8 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar9);
                    }
                    if (*puVar15 <= uVar8) {
                      uVar8 = 0xffffffff;
                    }
                    if ((uVar8 < DAT_05326ec0) &&
                       (uVar9 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), uVar9 < 0xbd
                       )) goto LAB_0284534c;
                  }
                }
                uVar9 = 0;
              }
            }
            goto LAB_0284534c;
          }
        }
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,0x8d);
      uVar9 = 0xbc;
LAB_0284534c:
      local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar9);
      if ((uVar9 != (uint)local_78) || ((bVar2 >> 2 & 1) == 0)) {
        FUN_01b06c00(auStack_98,&local_90);
        if ((*(long **)(lVar16 + 0xe6d50) == (long *)0x0) ||
           (puVar13 = (undefined8 *)**(long **)(lVar16 + 0xe6d50), puVar13 == (undefined8 *)0x0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = (**(code **)*puVar13)();
          uVar9 = uVar9 ^ 1;
        }
        lVar17 = *(long *)(lVar16 + 0xe6d38) + *(long *)(lVar16 + 0xe6d30);
        puVar1 = (undefined4 *)(lVar17 + 0x34);
        uVar3 = *puVar1;
        local_a0 = *puVar1;
        uVar7 = *(undefined4 *)(lVar17 + 0x38);
        local_9c = uVar7;
        iVar6 = FUN_0277d6c4(&local_a0);
        if (iVar6 == 0x1095) {
          local_78 = puVar5 + 0x10;
          lVar17 = *(long *)puVar4;
          local_68 = 0;
          local_70 = uVar3;
          local_6c = uVar7;
          uVar8 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar4 != 0) {
            lVar17 = *(long *)(lVar17 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
              lVar17 = *(long *)PTR_DAT_04bc0428;
              uVar8 = FUN_0277d6c4(&local_a0);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
                 (lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8), lVar17 != 0)
                 ) {
                local_68 = lVar17;
              }
            }
          }
          FUN_01b06c00(&local_48,&local_78);
          local_a0 = (undefined4)local_48;
          local_9c = local_48._4_4_;
        }
        uVar11 = FUN_0277d7b4(auStack_98,&local_a0);
        if ((((uVar9 & 1) == 0) && (*(long *)(lVar16 + 0xe6d50) != 0)) &&
           (puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0xe6d50) + 8),
           puVar13 != (undefined8 *)0x0)) {
          (**(code **)*puVar13)();
        }
        if ((uVar11 & 1) != 0) {
          return 1;
        }
      }
      return 0;
    }
    if (DAT_05574040 == 0) {
      return 0;
    }
    puVar13 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar16 == 0) {
        return 0;
      }
      lVar16 = lVar16 + 0x70;
LAB_02844e00:
      if ((*(long **)(lVar16 + 0xe6d50) == (long *)0x0) ||
         (puVar13 = (undefined8 *)**(long **)(lVar16 + 0xe6d50), puVar13 == (undefined8 *)0x0)) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)*puVar13)();
        uVar11 = uVar11 & 0xffffffff;
      }
      lVar17 = *(long *)(lVar16 + 0xe6d38) + *(long *)(lVar16 + 0xe6d30);
      local_70 = *(undefined4 *)(lVar17 + 0x34);
      local_6c = *(int *)(lVar17 + 0x38);
      iVar6 = FUN_0277d6c4(&local_70);
      puVar4 = PTR_DAT_04bb43c0;
      if (iVar6 == 0x1095) {
        lVar17 = *(long *)PTR_DAT_04bb43c0;
        local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        local_58 = CONCAT44(local_6c,local_70);
        uVar9 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar4 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            FUN_0277d6c4(&local_70);
          }
        }
        FUN_01b06c00(&local_68,&local_60);
        local_70 = (int)local_68;
        local_6c = local_68._4_4_;
      }
      uVar10 = FUN_0277d7b4(&local_70,param_3);
      if ((((uVar10 & 1) == 0) || (local_70._3_1_ != *(char *)((long)param_3 + 3))) ||
         (local_6c != *(int *)((long)param_3 + 4))) {
        lVar18 = *(long *)puVar4;
        uVar9 = FUN_0277d6c4(param_3);
        lVar17 = *(long *)puVar4;
        if (lVar17 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_58 = *param_3;
            local_60 = &PTR_FUN_04a36b50;
            uVar9 = FUN_0277d6c4(&local_58);
            if (*(long *)puVar4 != 0) {
              lVar17 = *(long *)(lVar17 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                FUN_0277d6c4(param_3);
              }
            }
            uVar10 = FUN_01b032d0(&local_60);
            if ((((uVar10 & 1) != 0) && (uVar10 = FUN_01b032d0(&local_60), (uVar10 & 1) != 0)) &&
               ((local_58 & 0x3000000) != 0)) {
              uVar10 = FUN_01b032d0(&local_60);
              uVar9 = local_58._3_1_ & 3;
              if ((uVar10 & 1) == 0) {
                uVar9 = 0;
              }
              local_68 = CONCAT44(local_68._4_4_,uVar9);
              uVar10 = FUN_01b032d0(&local_60);
              bVar2 = local_58._3_1_ >> 2 & 0xf;
              if ((uVar10 & 1) == 0) {
                bVar2 = 1;
              }
              if ((int)local_68 == 1) {
LAB_028450b4:
                FUN_01b079ec(&local_68,&local_60);
                uVar10 = FUN_0277d7b4(&local_68,&local_70);
                if ((uVar10 & 1) != 0) {
                  if ((local_68._3_1_ == local_70._3_1_) && (local_68._4_4_ == local_6c))
                  goto LAB_02844f40;
                }
              }
              else if ((int)local_68 == 3) {
                if (bVar2 == 0xf) goto LAB_028450b4;
                uVar7 = FUN_01b03610();
                local_48 = (undefined *)CONCAT44(uVar7,(undefined4)local_48);
              }
            }
          }
        }
        if (((uVar11 & 1) == 0) || (*(long *)(lVar16 + 0xe6d50) == 0)) goto LAB_0284513c;
        puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0xe6d50) + 8);
        uVar10 = 0;
        uVar11 = 0;
      }
      else {
LAB_02844f40:
        if (((uVar11 & 1) == 0) || (*(long *)(lVar16 + 0xe6d50) == 0)) {
          return 1;
        }
        puVar13 = *(undefined8 **)(*(long *)(lVar16 + 0xe6d50) + 8);
        uVar10 = 1;
        uVar11 = 1;
      }
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13);
        uVar11 = uVar10;
      }
    }
    else {
      if (puVar13 != (undefined8 *)0x0) {
        if ((long *)puVar13[0x26] == (long *)0x0) {
          return 0;
        }
        lVar16 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
        if (lVar16 == 0) {
          return 0;
        }
        goto LAB_02844e00;
      }
LAB_0284513c:
      uVar11 = 0;
    }
    return uVar11;
  }
  local_48 = PTR_DAT_04bc0510 + 0x10;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(auStack_98 + 0x58);
  if (*(long *)puVar4 == 0) {
LAB_0284f35c:
    uVar12 = 0xbc;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0284f35c;
    lVar16 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(param_3);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
       (puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar14 == (uint *)0x0)) goto LAB_0284f35c;
    uVar9 = *puVar14;
    if (uVar9 == 0 || puVar14 == (uint *)(ulong)uVar9) {
LAB_0284f354:
      uVar12 = 0;
    }
    else {
      puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
      if (((*puVar15 == 0) || (uVar9 = puVar15[1], uVar9 == 0)) || ((ulong)(ushort)puVar15[2] == 0))
      goto LAB_0284f354;
      lVar16 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        lVar16 = 0x1c;
      }
      lVar16 = (long)puVar15 + lVar16 + (ulong)(ushort)puVar15[2] * 8;
      if (lVar16 == 0) goto LAB_0284f354;
      uVar8 = 0;
      if ((ulong)uVar9 != 0) {
        uVar8 = (uint)((ulong)((long)puVar14 - lVar16) / (ulong)uVar9);
      }
      if (*puVar15 <= uVar8) {
        uVar8 = 0xffffffff;
      }
      if ((DAT_05326ec0 <= uVar8) ||
         (uVar12 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar8 * 2), 0xbc < uVar12))
      goto LAB_0284f354;
    }
  }
  uVar9 = (uint)(uVar12 == 0x8f);
LAB_0284f37c:
  return (ulong)(uVar9 & 1);
}


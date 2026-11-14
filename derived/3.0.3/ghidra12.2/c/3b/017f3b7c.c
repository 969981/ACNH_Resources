
/* WARNING: Removing unreachable block (ram,0x017f3fc0) */

void FUN_017f3b7c(undefined2 *param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined2 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined **local_60;
  char *local_58;
  undefined1 local_50;
  byte local_4f;
  int local_44;
  int local_28;
  uint local_24;
  
  local_28 = param_2;
  if (DAT_05aed670 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar12 + 7) == param_2) && (DAT_05292338 != 0)) {
    FUN_007ef010(param_1,DAT_05292338 + 0xe78);
    return;
  }
  uVar6 = FUN_017f37d0(param_2);
  if ((uVar6 & 1) != 0) {
    local_44 = 0;
    uVar6 = FUN_02b5f400(&local_44,param_2);
    iVar3 = local_44;
    if ((uVar6 & 1) == 0) goto LAB_017f44ec;
    local_24 = FUN_017f4660(&local_28);
    local_60 = (undefined **)CONCAT44(local_60._4_4_,iVar3);
    lVar11 = *(long *)PTR_DAT_04bb46b0;
    if (lVar11 == 0) goto LAB_017f44ec;
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 == 0) goto LAB_017f44ec;
      lVar11 = lVar11 + 0x70;
    }
    else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
            (lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar11 == 0))
    goto LAB_017f44ec;
    if (7 < (uint)local_60) goto LAB_017f44ec;
    lVar9 = lVar11 + 0x119228 + ((ulong)local_60 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_60) {
      lVar9 = lVar11 + 0x119228;
    }
    lVar11 = lVar9 + 0x1df8 + (ulong)local_24 * 0x2488;
    if (5 < local_24) {
      lVar11 = lVar9 + 0x1df8;
    }
    if ((*(long **)(lVar11 + 0x1ec8) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x1ec8), puVar12 == (undefined8 *)0x0)) {
      *param_1 = *(undefined2 *)(*(long *)(lVar11 + 0x1eb0) + *(long *)(lVar11 + 0x1ea8) + 0x1a);
      return;
    }
    uVar6 = (**(code **)*puVar12)();
    *param_1 = *(undefined2 *)(*(long *)(lVar11 + 0x1eb0) + *(long *)(lVar11 + 0x1ea8) + 0x1a);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar11 = *(long *)(lVar11 + 0x1ec8);
    goto joined_r0x017f460c;
  }
  if (0x427decd < param_2) {
    if (param_2 < 0x4d702d55) {
      if (param_2 < 0x16f2dadc) {
        if (param_2 != 0x427dece) {
          iVar3 = 0xe716ff8;
          goto LAB_017f3ee0;
        }
      }
      else if ((param_2 != 0x16f2dadc) && (param_2 != 0x1d096e7d)) {
        iVar3 = 0x28c45759;
        goto LAB_017f3ee0;
      }
    }
    else if (param_2 < 0x72a13146) {
      if (param_2 != 0x4d702d55) {
        iVar3 = 0x60c2c4f0;
        goto LAB_017f3ee0;
      }
    }
    else if ((param_2 != 0x72a13146) && (param_2 != 0x7c939885)) {
      iVar3 = 0x77870a84;
      goto LAB_017f3ee0;
    }
    goto LAB_017f3ee8;
  }
  if (param_2 < -0x196792d8) {
    if (param_2 < -0x66cc4d79) {
      if (param_2 != -0x7b521843) {
        iVar3 = -0x74337aab;
        goto LAB_017f3ee0;
      }
    }
    else if ((param_2 != -0x66cc4d79) && (param_2 != -0x4772f804)) {
      iVar3 = -0x4701dc58;
      goto LAB_017f3ee0;
    }
  }
  else if (param_2 < -0xbf1cc08) {
    if (param_2 != -0x196792d8) {
      iVar3 = -0x11f68f68;
      goto LAB_017f3ee0;
    }
  }
  else if ((param_2 != -0xbf1cc08) && (param_2 != 0x5f6c88)) {
    iVar3 = 0x1ac1236;
LAB_017f3ee0:
    if (param_2 != iVar3) {
      if (param_2 < 0x2922957e) {
        if (0x80e20d7 < param_2) {
          if (((param_2 != 0x80e20d8) && (param_2 != 0xb6a5301)) && (param_2 != 0x1490248c))
          goto LAB_017f44ec;
          goto LAB_017f437c;
        }
        if (((param_2 != -0x11ea17dc) && (param_2 != -0x917edf9)) && (param_2 != -0x8fb780d))
        goto LAB_017f44ec;
      }
      else if (param_2 < 0x65b7732d) {
        if ((param_2 == 0x2922957e) || (param_2 == 0x51b9e069)) goto LAB_017f437c;
        iVar3 = 0x6168e44d;
LAB_017f4300:
        if (param_2 != iVar3) goto LAB_017f44ec;
      }
      else if (param_2 != 0x65b7732d) {
        if (param_2 != 0x7a616e2f) {
          iVar3 = 0x6c9ebc71;
          goto LAB_017f4300;
        }
LAB_017f437c:
        uVar4 = FUN_017f4660(&local_28);
        local_60 = (undefined **)CONCAT44(local_60._4_4_,uVar4);
        lVar11 = FUN_02643020();
        if (lVar11 != 0) {
          lVar9 = lVar11 + 0xe0 + ((ulong)local_60 & 0xffffffff) * 0x2488;
          if (5 < (uint)local_60) {
            lVar9 = lVar11 + 0xe0;
          }
          local_58 = (char *)(lVar9 + 0x1ea0);
          local_50 = 1;
          if (*(long **)(lVar9 + 0x1ec8) == (long *)0x0) {
            local_4f = 0;
          }
          else {
            puVar12 = (undefined8 *)**(long **)(lVar9 + 0x1ec8);
            local_4f = 0;
            if (puVar12 != (undefined8 *)0x0) {
              local_4f = (**(code **)*puVar12)();
            }
          }
          local_4f = local_4f & 1;
          lVar8 = *(long *)(lVar9 + 0x1eb0);
          lVar11 = *(long *)(lVar9 + 0x1ea8);
          goto LAB_017f4648;
        }
        goto LAB_017f44ec;
      }
      uVar6 = FUN_01810f30();
      if ((((uVar6 & 1) == 0) || (lVar11 = FUN_029156e0(), param_2 != -0x8fb780d)) ||
         (*(int *)(lVar11 + 0x38) != -0x8fb780d)) {
        if ((DAT_05574040 != 0) && (lVar9 = FUN_026f480c(), lVar9 != 0)) {
          uVar6 = FUN_017f4660(&local_28);
          lVar9 = lVar9 + (uVar6 & 0xffffffff) * 0x2488;
          local_58 = (char *)(lVar9 + 0x1fb8);
          local_50 = 1;
          if (*(long **)(lVar9 + 0x1fe0) == (long *)0x0) {
            local_4f = 0;
          }
          else {
            puVar12 = (undefined8 *)**(long **)(lVar9 + 0x1fe0);
            local_4f = 0;
            if (puVar12 != (undefined8 *)0x0) {
              local_4f = (**(code **)*puVar12)();
            }
          }
          local_4f = local_4f & 1;
          lVar11 = *(long *)(lVar9 + 0x1fc0);
          lVar8 = *(long *)(lVar9 + 0x1fc8);
          goto LAB_017f4648;
        }
      }
      else if ((DAT_05574040 != 0) && (lVar9 = FUN_026f480c(), lVar9 != 0)) {
        local_58 = (char *)(lVar9 + 0xfae8);
        local_50 = 1;
        if (*(long **)(lVar9 + 0xfb10) == (long *)0x0) {
          local_4f = 0;
        }
        else {
          puVar12 = (undefined8 *)**(long **)(lVar9 + 0xfb10);
          local_4f = 0;
          if (puVar12 != (undefined8 *)0x0) {
            local_4f = (**(code **)*puVar12)();
          }
        }
        local_4f = local_4f & 1;
        lVar11 = *(long *)(lVar9 + 0xfaf0);
        lVar8 = *(long *)(lVar9 + 0xfaf8);
LAB_017f4648:
        local_60 = &PTR_FUN_04917240;
        *param_1 = *(undefined2 *)(lVar8 + lVar11 + 0x1a);
        FUN_02640184(&local_60);
        return;
      }
      goto LAB_017f44ec;
    }
  }
LAB_017f3ee8:
  uVar4 = FUN_017e4f94(param_2);
  local_60 = (undefined **)CONCAT44(local_60._4_4_,uVar4);
  if (DAT_05574040 == 0) goto LAB_017f44ec;
  puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
    if (lVar11 == 0) goto LAB_017f44ec;
    lVar11 = lVar11 + 0x70;
  }
  else if (((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0)) ||
          (lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar11 == 0)) goto LAB_017f44ec;
  if (9 < (uint)local_60) goto LAB_017f44ec;
  lVar9 = lVar11 + 0x1962d8 + ((ulong)local_60 & 0xffffffff) * 0x10d8;
  if (9 < (uint)local_60) {
    lVar9 = lVar11 + 0x1962d8;
  }
  if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar12 == (undefined8 *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)*puVar12)();
    uVar6 = uVar6 & 0xffffffff;
  }
  cVar2 = *(char *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x1c4);
  local_60 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_58 = "NpcInteriorCoordinate";
  local_44 = (int)cVar2;
  iVar3 = FUN_02743000(&local_60);
  uVar5 = (uint)cVar2;
  if (iVar3 == 0) {
    uVar7 = FUN_02663fa0(&local_44);
    if ((uVar7 & 1) != 0) {
      local_24 = 0;
      uVar7 = FUN_02b67a30(&local_24,uVar5);
      if ((uVar7 & 1) == 0) goto LAB_017f44cc;
      local_60 = (undefined **)CONCAT44(local_60._4_4_,local_24);
      if (DAT_05574040 == 0) goto LAB_017f44cc;
      puVar12 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) != 0) {
        if (((puVar12 != (undefined8 *)0x0) && ((long *)puVar12[0x26] != (long *)0x0)) &&
           (lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar11 != 0))
        goto LAB_017f44c0;
        goto LAB_017f44cc;
      }
      lVar11 = (**(code **)(*(long *)*puVar12 + 0x38))();
      if (lVar11 == 0) goto LAB_017f44cc;
      lVar11 = lVar11 + 0x70;
LAB_017f44c0:
      if (9 < (uint)local_60) goto LAB_017f44cc;
      lVar8 = lVar11 + 0x1962d8 + ((ulong)local_60 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_60) {
        lVar8 = lVar11 + 0x1962d8;
      }
      if ((*(long **)(lVar8 + 0x990) != (long *)0x0) &&
         (puVar12 = (undefined8 *)**(long **)(lVar8 + 0x990), puVar12 != (undefined8 *)0x0)) {
        uVar7 = (**(code **)*puVar12)();
        *param_1 = *(undefined2 *)(*(long *)(lVar8 + 0x978) + *(long *)(lVar8 + 0x970) + 0x1a);
        if ((uVar7 & 1) != 0) {
          lVar11 = *(long *)(lVar8 + 0x990);
          goto joined_r0x017f4458;
        }
        goto LAB_017f4604;
      }
      lVar11 = *(long *)(lVar8 + 0x970);
      lVar8 = *(long *)(lVar8 + 0x978);
LAB_017f45f8:
      uVar10 = *(undefined2 *)(lVar8 + lVar11 + 0x1a);
      goto LAB_017f4600;
    }
    lVar11 = FUN_0265c3e0((int)cVar2);
    if (lVar11 == 0) goto LAB_017f44cc;
    if ((*(long **)(lVar11 + 0xf950) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xf950), puVar12 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar12)();
      uVar5 = uVar5 ^ 1;
    }
    *param_1 = *(undefined2 *)(*(long *)(lVar11 + 0xf938) + *(long *)(lVar11 + 0xf930) + 0x1a);
    if ((uVar5 & 1) == 0) {
      lVar11 = *(long *)(lVar11 + 0xf950);
joined_r0x017f4458:
      if ((lVar11 != 0) && (*(undefined8 **)(lVar11 + 8) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar11 + 8))();
      }
    }
  }
  else {
    if (DAT_04c487d0 == -1) {
LAB_017f4050:
      uVar7 = FUN_02660600(uVar5);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_02663fa0(&local_44);
        if ((uVar7 & 1) == 0) {
          lVar11 = FUN_0265c3e0(uVar5);
          if (lVar11 != 0) {
            local_58 = (char *)(lVar11 + 0xf928);
            local_50 = 1;
            if (*(long **)(lVar11 + 0xf950) == (long *)0x0) {
              local_4f = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar11 + 0xf950);
              local_4f = 0;
              if (puVar12 != (undefined8 *)0x0) {
                local_4f = (**(code **)*puVar12)();
              }
            }
            lVar8 = *(long *)(lVar11 + 0xf930);
            lVar11 = *(long *)(lVar11 + 0xf938);
            goto LAB_017f4558;
          }
        }
        else {
          lVar11 = FUN_02663ee0(&local_44);
          if (lVar11 != 0) {
            local_58 = (char *)(lVar11 + 0x118);
            local_50 = 1;
            if (*(long **)(lVar11 + 0x140) == (long *)0x0) {
              local_4f = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(lVar11 + 0x140);
              local_4f = 0;
              if (puVar12 != (undefined8 *)0x0) {
                local_4f = (**(code **)*puVar12)();
              }
            }
            lVar8 = *(long *)(lVar11 + 0x120);
            lVar11 = *(long *)(lVar11 + 0x128);
LAB_017f4558:
            local_4f = local_4f & 1;
            local_60 = &PTR_FUN_04917240;
            *param_1 = *(undefined2 *)(lVar11 + lVar8 + 0x1a);
            FUN_02640184(&local_60);
            goto LAB_017f4604;
          }
        }
      }
      else if (((uVar5 < 10) && (DAT_05574040 != 0)) &&
              (lVar8 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x38))(),
              lVar8 != 0)) {
        lVar8 = lVar8 + (ulong)uVar5 * 0x888;
        if ((*(long **)(lVar8 + 0x27f9f0) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar8 + 0x27f9f0), puVar12 == (undefined8 *)0x0)) {
          lVar11 = *(long *)(lVar8 + 0x27f9d0);
          lVar8 = *(long *)(lVar8 + 0x27f9d8);
          goto LAB_017f45f8;
        }
        uVar7 = (**(code **)*puVar12)();
        *param_1 = *(undefined2 *)(*(long *)(lVar8 + 0x27f9d8) + *(long *)(lVar8 + 0x27f9d0) + 0x1a)
        ;
        if ((uVar7 & 1) != 0) {
          lVar11 = *(long *)(lVar8 + 0x27f9f0);
          goto joined_r0x017f4458;
        }
        goto LAB_017f4604;
      }
LAB_017f44cc:
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
LAB_017f44ec:
      FUN_007ef010(param_1,PTR_DAT_04bb3170);
      return;
    }
    local_60 = (undefined **)CONCAT44(local_60._4_4_,0x1d);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d0 * 8);
    if (0xff < (uint)(int)DAT_04c487d0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1d & 1) == 0) goto LAB_017f4050;
    if (DAT_053d2ea8 == 0) goto LAB_017f44cc;
    uVar10 = *(undefined2 *)(DAT_053d2ea8 + 0x2636);
LAB_017f4600:
    *param_1 = uVar10;
  }
LAB_017f4604:
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar11 = *(long *)(lVar9 + 0x28);
joined_r0x017f460c:
  if (lVar11 == 0) {
    return;
  }
  if (*(undefined8 **)(lVar11 + 8) == (undefined8 *)0x0) {
    return;
  }
  (**(code **)**(undefined8 **)(lVar11 + 8))();
  return;
}


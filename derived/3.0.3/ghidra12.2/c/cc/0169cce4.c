
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169cce4(long param_1,uint param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint *puVar13;
  char cVar14;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_78 = (undefined **)CONCAT44(local_78._4_4_,param_2);
  *(undefined8 *)(DAT_05234ef0 + 8) = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_DAT_04bb46b0;
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 == 0) {
    return;
  }
  puVar11 = *(undefined8 **)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
    lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
    if (lVar10 == 0) {
      return;
    }
    lVar10 = lVar10 + 0x70;
  }
  else {
    if (puVar11 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar11[0x26] == (long *)0x0) {
      return;
    }
    lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
    if (lVar10 == 0) {
      return;
    }
  }
  if (7 < (uint)local_78) {
    return;
  }
  lVar7 = lVar10 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_78) {
    lVar7 = lVar10 + 0x119228;
  }
  if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar11 == (undefined8 *)0x0)) {
    cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
  }
  else {
    uVar6 = (**(code **)*puVar11)();
    cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  if (cVar14 == -1) {
    return;
  }
  if (6 < param_3 - 2U) {
    return;
  }
  uVar4 = (uint)cVar14;
  switch(param_3) {
  case 2:
    if (*(long *)puVar2 == 0) {
      lVar10 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar2 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x276cb0;
      }
    }
    lVar7 = *(long *)(lVar10 + 0x98);
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        lVar7 = *(long *)(lVar10 + 0x98);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar7 == 0) goto LAB_0169d508;
      }
      plVar8 = *(long **)(lVar7 + 0x20);
      if (plVar8 != (long *)0x0) {
        local_78 = *(undefined ***)(lVar10 + 0x78);
        local_70 = *(undefined8 *)(lVar10 + 0x80);
        local_68 = 0x53c;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
      }
    }
LAB_0169d508:
    lVar7 = *(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x78);
    *(uint *)(lVar7 + 0x238) =
         *(uint *)(lVar7 + 0x238) & (0xf << (ulong)((uVar4 & 7) << 2) ^ 0xffffffffU);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x98) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x98) + 0x18), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    *(byte *)(DAT_05234ef0 + 0xb28) =
         *(byte *)(DAT_05234ef0 + 0xb28) | (byte)(1 << (ulong)(param_2 & 0x1f));
    return;
  case 3:
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
    FUN_01b8f0d0(&local_80,10,2,uVar4);
    local_78 = (undefined **)CONCAT44(local_78._4_4_,param_2);
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
      return;
    }
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) {
        return;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return;
      }
      lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar10 == 0) {
        return;
      }
    }
    if (7 < (uint)local_78) {
      return;
    }
    lVar7 = lVar10 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_78) {
      lVar7 = lVar10 + 0x119228;
    }
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar11 == (undefined8 *)0x0)) {
      cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
    }
    else {
      uVar6 = (**(code **)*puVar11)();
      cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
    if (cVar14 == -1) {
      return;
    }
    local_78._0_3_ = (undefined3)local_80;
    uVar9 = 2;
    break;
  default:
    if (*(long *)puVar2 == 0) {
      lVar10 = 0;
      lVar7 = _DAT_00000098;
      if (_DAT_00000098 != 0) goto LAB_0169ce70;
LAB_0169cea0:
      uVar6 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)**(undefined8 **)(*(long *)puVar2 + 0x10) + 0x30))();
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + 0x276cb0;
      }
      lVar7 = *(long *)(lVar10 + 0x98);
      if (*(long *)(lVar10 + 0x98) == 0) goto LAB_0169cea0;
LAB_0169ce70:
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
LAB_0169cfe4:
        plVar8 = *(long **)(lVar7 + 0x20);
        if (plVar8 != (long *)0x0) {
          local_78 = *(undefined ***)(lVar10 + 0x78);
          local_70 = *(undefined8 *)(lVar10 + 0x80);
          local_68 = 0x53c;
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
        }
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        lVar7 = *(long *)(lVar10 + 0x98);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar7 != 0) goto LAB_0169cfe4;
      }
    }
    iVar3 = FUN_0275c02c(*(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x78),param_2);
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar10 + 0x98) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x98) + 0x18), puVar11 != (undefined8 *)0x0))
    {
      (**(code **)*puVar11)();
    }
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
    FUN_01b8f0d0(&local_80,10,iVar3 + 3U & 0xff,uVar4);
    local_78 = (undefined **)CONCAT44(local_78._4_4_,param_2);
    lVar10 = *(long *)puVar2;
    if (lVar10 != 0) {
      puVar11 = *(undefined8 **)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
        lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
        if (lVar10 != 0) {
          lVar10 = lVar10 + 0x70;
          goto LAB_0169d0e4;
        }
      }
      else if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
              (lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar10 != 0)) {
LAB_0169d0e4:
        if ((uint)local_78 < 8) {
          lVar7 = lVar10 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
          if (7 < (uint)local_78) {
            lVar7 = lVar10 + 0x119228;
          }
          if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar11 == (undefined8 *)0x0)) {
            cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
          }
          else {
            uVar6 = (**(code **)*puVar11)();
            cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
            if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
               (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8),
               puVar11 != (undefined8 *)0x0)) {
              (**(code **)*puVar11)();
            }
          }
          if (cVar14 != -1) {
            local_78 = (undefined **)CONCAT44(local_7c,local_80);
            FUN_016980c0(param_1,(int)cVar14,&local_78,iVar3 + 3U);
          }
        }
      }
    }
    puVar2 = PTR_DAT_04bb43c0;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_80);
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
      return;
    }
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (*(uint *)(lVar7 + 0x1d8) <= uVar4) {
      return;
    }
    if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return;
    }
    local_68 = 0;
    lVar7 = DAT_05234ef0 + 0x10 + (ulong)param_2 * 0x160;
    if (7 < param_2) {
      lVar7 = DAT_05234ef0 + 0x10;
    }
    local_78 = &PTR_FUN_04a36b50;
    *(uint *)(lVar7 + 0x140) = *(uint *)(lVar7 + 0x140) | 0x40;
    uVar5 = FUN_0277d6c4(&local_70);
    uVar4 = 0;
    if (*(long *)puVar2 == 0) goto LAB_0169d370;
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (uVar5 < *(uint *)(lVar10 + 0x1d8)) {
      uVar4 = 0;
      if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) == 0) goto LAB_0169d370;
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_80);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         (puVar12 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar12 != (uint *)0x0)) {
        uVar5 = *puVar12;
        uVar4 = 0;
        if ((uVar5 == 0) || (puVar12 == (uint *)(ulong)uVar5)) goto LAB_0169d370;
        puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
        uVar4 = 0;
        if (*puVar13 == 0) goto LAB_0169d370;
        uVar4 = puVar13[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar10 != 0) {
            uVar5 = 0;
            if ((ulong)uVar4 != 0) {
              uVar5 = (uint)((ulong)((long)puVar12 - lVar10) / (ulong)uVar4);
            }
            if (*puVar13 <= uVar5) {
              uVar5 = 0xffffffff;
            }
            if ((uVar5 < DAT_05327268) &&
               (uVar1 = *(ushort *)(DAT_05327270 + (long)(int)uVar5 * 2), uVar4 = (uint)uVar1,
               uVar1 < 0x4f)) goto LAB_0169d370;
          }
        }
      }
    }
    uVar4 = 0;
LAB_0169d370:
    lVar10 = DAT_05234ef0 + 0x10;
    lVar7 = lVar10 + (ulong)param_2 * 0x160;
    if (7 < param_2) {
      lVar7 = lVar10;
    }
    *(uint *)(lVar7 + 0x148) = uVar4;
    lVar7 = lVar10 + (ulong)param_2 * 0x160;
    if (7 < param_2) {
      lVar7 = lVar10;
    }
    *(int *)(lVar7 + 0x144) = param_3;
    return;
  case 8:
    uVar5 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar5 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar5 ^ DAT_05582b7c;
    FUN_01b8f0d0(&local_80,10,7,uVar4);
    local_78 = (undefined **)CONCAT44(local_78._4_4_,param_2);
    lVar10 = *(long *)puVar2;
    if (lVar10 == 0) {
      return;
    }
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) {
        return;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return;
      }
      lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar10 == 0) {
        return;
      }
    }
    if (7 < (uint)local_78) {
      return;
    }
    lVar7 = lVar10 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_78) {
      lVar7 = lVar10 + 0x119228;
    }
    if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar11 == (undefined8 *)0x0)) {
      cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
    }
    else {
      uVar6 = (**(code **)*puVar11)();
      cVar14 = *(char *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x289f8);
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
    if (cVar14 == -1) {
      return;
    }
    uVar9 = 7;
    local_78._0_3_ = (undefined3)local_80;
  }
  local_78._0_4_ = CONCAT13(local_80._3_1_,(undefined3)local_78);
  local_78 = (undefined **)CONCAT44(local_7c,(uint)local_78);
  FUN_016980c0(param_1,(int)cVar14,&local_78,uVar9);
  return;
}



undefined8 FUN_01b6f610(undefined2 *param_1,int *param_2,uint *param_3,uint *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ushort *puVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  uint local_74;
  undefined4 local_70;
  ushort local_6c [2];
  undefined *local_68;
  uint local_60;
  uint uStack_5c;
  long local_58;
  uint local_38;
  uint local_34;
  
  puVar2 = PTR_DAT_04bc0648;
  puVar1 = PTR_DAT_04bc0640;
  if (*param_3 == 0) {
LAB_01b6f71c:
    uVar3 = 0;
  }
  else {
    cVar10 = *PTR_DAT_04bc0640;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar2 + 0x1c);
        if (-1 < (int)uVar4) {
          if ((undefined2 *)((ulong)uVar4 + (long)param_3) == (undefined2 *)0x0) goto LAB_01b6f71c;
          uVar3 = *(undefined2 *)((ulong)uVar4 + (long)param_3);
          goto LAB_01b6f720;
        }
        if (uVar4 != 0xffffffff) goto LAB_01b6f71c;
      }
      puVar11 = (uint *)(ulong)*param_3;
      uVar3 = 0;
      if ((*param_3 == 0) || (param_3 == puVar11)) goto LAB_01b6f720;
      lVar14 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar11)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)param_3 + (lVar14 - (long)puVar11);
      if (lVar14 == 0) goto LAB_01b6f71c;
      uVar7 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar11));
      *(undefined4 *)(puVar2 + 0x1c) = 0xfffffffe;
      uVar3 = 0;
      if (uVar7 == 0) goto LAB_01b6f720;
      piVar12 = (int *)(lVar14 + 4);
      while (piVar12[-1] != 0x54706054) {
        piVar12 = piVar12 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          uVar3 = 0;
          goto LAB_01b6f720;
        }
      }
      iVar5 = 0;
      if (*piVar12 != -1) {
        iVar5 = *piVar12;
      }
      *(int *)(puVar2 + 0x1c) = iVar5;
    } while (*param_3 != 0);
    uVar3 = 0;
  }
LAB_01b6f720:
  *param_1 = uVar3;
  lVar14 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_04bb37e0;
  iVar5 = *param_2;
  if (iVar5 == 8) {
    iVar5 = 1;
  }
  local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar5);
  if (iVar5 == 2) {
LAB_01b6f7d8:
    local_38 = *(uint *)PTR_DAT_04bb37e0;
    local_34 = *(uint *)(PTR_DAT_04bb37e0 + 4);
    lVar13 = *(long *)PTR_DAT_04bbbc68;
    if ((((lVar13 == 0) || (*(long *)(lVar13 + 0xb0) == 0)) ||
        (*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0)) ||
       (((*(long *)(lVar13 + 0x488) == 0 || (*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0)) ||
        ((*(long *)(lVar13 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0)))))) {
LAB_01b6f8cc:
      local_38 = *param_4;
      local_34 = param_4[1];
    }
    else {
      uVar4 = FUN_0277d6c4(param_4);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01b6f8cc;
      FUN_0124c030(&local_68,param_4);
      if (((short)DAT_053360a8 != -2) &&
         (uVar7 = FUN_01253750(&local_68,&DAT_053360a8), (uVar7 & 1) != 0)) {
        local_38 = DAT_053360a8;
        local_34 = DAT_053360ac;
      }
      if ((((short)local_38 == -2) && (uVar7 = FUN_0124c70c(&local_68,&local_38), (uVar7 & 1) == 0))
         && (uVar7 = FUN_0124c4c0(&local_68,&local_38,1), (uVar7 & 1) == 0)) {
        return 0;
      }
      DAT_053360a8 = *(uint *)puVar1;
      DAT_053360ac = *(uint *)(puVar1 + 4);
    }
    uVar3 = FUN_0277d6c4(&local_38);
    param_1[lVar14 + 1] = uVar3;
  }
  else {
    iVar5 = param_2[1];
    if (iVar5 == 8) {
      iVar5 = 1;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar5);
    if (iVar5 == 2) {
      lVar14 = 1;
      goto LAB_01b6f7d8;
    }
    iVar5 = param_2[2];
    lVar14 = 2;
    if (iVar5 == 8) {
      iVar5 = 1;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar5);
    if (iVar5 == 2) goto LAB_01b6f7d8;
    iVar5 = param_2[3];
    local_38 = 2;
    if (iVar5 == 8) {
      iVar5 = 1;
    }
    local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar5);
    if (iVar5 == 2) {
      lVar14 = 3;
      goto LAB_01b6f7d8;
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_4);
  lVar14 = *(long *)puVar2;
  if (lVar14 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_58 = 0;
      local_60 = *param_4;
      uStack_5c = param_4[1];
      local_68 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(param_4);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (uVar4 < *(uint *)(lVar14 + 0x1d8)) {
            lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar14 != 0) {
              local_58 = lVar14;
            }
          }
        }
      }
      iVar9 = *param_2;
      iVar5 = iVar9;
      if (iVar9 == 8) {
        iVar5 = 1;
      }
      if (iVar5 == 3) {
        lVar14 = 0;
        local_38 = 3;
LAB_01b6fb58:
        local_74 = 3;
        iVar5 = FUN_01ad7260(&local_68);
        if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_68), puVar8 == (ushort *)0x0)) {
          uVar3 = 0;
        }
        else {
          uVar4 = *puVar8 & 7;
          uVar6 = FUN_01ad7260(&local_68);
          if (uVar6 <= uVar4) {
            uVar4 = 0;
          }
          uVar3 = (undefined2)uVar4;
        }
        param_1[lVar14 + 1] = uVar3;
        iVar9 = *param_2;
      }
      else {
        iVar5 = param_2[1];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 == 3) {
          lVar14 = 1;
          local_38 = 3;
          goto LAB_01b6fb58;
        }
        iVar5 = param_2[2];
        lVar14 = 3;
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 == 3) {
          lVar14 = 2;
          local_38 = 3;
          goto LAB_01b6fb58;
        }
        local_38 = param_2[3];
        if (local_38 == 8) {
          local_38 = 1;
        }
        if (local_38 == 3) goto LAB_01b6fb58;
      }
      if (iVar9 == 8) {
        iVar9 = 1;
      }
      if (iVar9 == 4) {
        lVar14 = 0;
LAB_01b6fc4c:
        local_38 = 4;
        local_74 = 4;
        iVar5 = FUN_01afcfa0(&local_68);
        if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(&local_68), puVar8 == (ushort *)0x0)) {
          local_38 = 0;
        }
        else {
          uVar4 = *puVar8 >> 3 & 3;
          local_38 = 0;
          if (uVar4 != 3) {
            local_38 = uVar4;
          }
        }
        if (local_38 < 2) {
          uVar3 = FUN_01ae3a80(&local_68);
          param_1[lVar14 + 1] = uVar3;
        }
      }
      else {
        iVar5 = param_2[1];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 == 4) {
          lVar14 = 1;
          goto LAB_01b6fc4c;
        }
        iVar5 = param_2[2];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 == 4) {
          lVar14 = 2;
          goto LAB_01b6fc4c;
        }
        iVar5 = param_2[3];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 == 4) {
          lVar14 = 3;
          goto LAB_01b6fc4c;
        }
      }
      iVar9 = *param_2;
      iVar5 = iVar9;
      if (iVar9 == 8) {
        iVar5 = 1;
      }
      if (iVar5 == 0x10) {
        lVar14 = 0;
      }
      else {
        iVar5 = param_2[1];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 == 0x10) {
          lVar14 = 1;
        }
        else {
          iVar5 = param_2[2];
          if (iVar5 == 8) {
            iVar5 = 1;
          }
          if (iVar5 == 0x10) {
            lVar14 = 2;
          }
          else {
            iVar5 = param_2[3];
            if (iVar5 == 8) {
              iVar5 = 1;
            }
            if (iVar5 != 0x10) goto LAB_01b6fe48;
            lVar14 = 3;
          }
        }
      }
      local_74 = 0x10;
      local_38 = *(uint *)puVar1;
      uVar4 = (uint)*(ushort *)puVar1;
      local_34 = *(uint *)(puVar1 + 4);
      uVar7 = FUN_01b05ea8(&local_68);
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_01af48b8(&local_68);
        if ((uVar7 & 1) != 0) {
          FUN_026129ac(local_6c,param_4);
          if ((local_6c[0] < 0x800) &&
             ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(local_6c[0] >> 3) + 0xe99e0) >>
               (ulong)(local_6c[0] & 7) & 1) != 0)) {
            FUN_02621f00(&local_74);
            uVar4 = local_74 & 0xffff;
            local_38 = local_74;
            local_34 = local_70;
          }
          if (uVar4 == 0xfffe) {
            return 0;
          }
        }
      }
      else {
        FUN_02621c70(*(undefined8 *)PTR_DAT_04bb46f0,&local_38,param_4);
        if ((short)local_38 == -2) {
          return 0;
        }
      }
      uVar3 = FUN_0277d6c4(&local_38);
      param_1[lVar14 + 1] = uVar3;
      iVar9 = *param_2;
      goto LAB_01b6fe48;
    }
  }
  if (((((((*param_2 == 3) || (param_2[1] == 3)) || (param_2[2] == 3)) ||
        ((param_2[3] == 3 || (*param_2 == 4)))) ||
       ((param_2[1] == 4 || ((param_2[2] == 4 || (param_2[3] == 4)))))) ||
      (iVar9 = *param_2, iVar9 == 0x10)) ||
     (((param_2[1] == 0x10 || (param_2[2] == 0x10)) || (param_2[3] == 0x10)))) {
    return 0;
  }
LAB_01b6fe48:
  if (iVar9 == 8) {
    iVar9 = 1;
  }
  if (iVar9 == 1) {
    lVar14 = 0;
  }
  else {
    iVar5 = param_2[1];
    if (iVar5 == 8) {
      iVar5 = 1;
    }
    if (iVar5 == 1) {
      lVar14 = 1;
    }
    else {
      iVar5 = param_2[2];
      if (iVar5 == 8) {
        iVar5 = 1;
      }
      if (iVar5 == 1) {
        lVar14 = 2;
      }
      else {
        iVar5 = param_2[3];
        if (iVar5 == 8) {
          iVar5 = 1;
        }
        if (iVar5 != 1) {
          return 1;
        }
        lVar14 = 3;
      }
    }
  }
  param_1[lVar14 + 1] = 1;
  return 1;
}


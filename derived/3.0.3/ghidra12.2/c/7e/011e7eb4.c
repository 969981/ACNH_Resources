
void FUN_011e7eb4(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  short local_a8;
  byte local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined1 auStack_38 [8];
  
  local_88 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar13 + 7);
  local_80 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb2010;
  local_80 = local_80 & 1;
  local_90 = PTR_DAT_04bb6268 + 0x10;
  local_98 = *(int *)(param_2 + 8);
  iStack_94 = *(int *)(param_2 + 0xc);
  local_a0 = PTR_DAT_04bb2010 + 0x10;
  FUN_01a5033c(auStack_38,&local_90,1,param_2,&local_a0);
  uVar8 = FUN_0277e158(auStack_38);
  if ((uVar8 & 1) != 0) {
    FUN_01a5033c(&local_a8,&local_90,0,param_2,0);
    puVar3 = PTR_DAT_04bb43c0;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_a8);
    if (*(long *)puVar3 == 0) {
LAB_011e801c:
      local_70 = puVar2 + 0x10;
      local_68 = 0;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_60 = local_70;
      FUN_0277f02c(auStack_38,&local_78);
      iVar5 = *(int *)(param_2 + 8);
      iVar11 = *(int *)(param_2 + 0xc);
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
          (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) ||
         (uVar8 = FUN_0277e158(&local_a8), (uVar8 & 1) != 0)) goto LAB_011e801c;
      uVar8 = FUN_011e64f0(param_1,auStack_38,&local_a0,1,0,0);
      if ((uVar8 & 1) == 0) goto LAB_011e8080;
      local_70 = puVar2 + 0x10;
      local_68 = 0;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_58 = 0;
      local_60 = local_70;
      FUN_0277f02c(auStack_38,&local_78);
      iVar5 = local_98;
      iVar11 = iStack_94;
    }
    local_68 = CONCAT44(local_68._4_4_ + iVar11,(int)local_68 + iVar5);
    local_58 = CONCAT44(local_58._4_4_ + iVar11,(int)local_58 + iVar5);
    FUN_011ed7e0(param_1 + 0x1e368,&local_78,1);
  }
LAB_011e8080:
  FUN_01a5033c(&local_a8,&local_90,0,param_2,&local_a0);
  puVar3 = PTR_DAT_04bbbc68;
  if (local_a8 == -2) {
    uVar6 = *(uint *)(param_2 + 8);
    if (0x11f < uVar6) {
      return;
    }
    if (0xff < *(uint *)(param_2 + 0xc)) {
      return;
    }
    uVar7 = uVar6 + *(uint *)(param_2 + 0xc) * 0x120;
    if (uVar7 == 0xffffffff) {
      return;
    }
    if (uVar7 >> 0xd < 9) {
      param_1 = param_1 + (ulong)(uVar7 >> 5) * 4;
      *(uint *)(param_1 + 0x1e368) = *(uint *)(param_1 + 0x1e368) | 1 << (ulong)(uVar6 & 0x1f);
      return;
    }
    return;
  }
  lVar10 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar10 == 0) || (*(long *)(lVar10 + 0xb0) == 0)) ||
       ((*(long *)(*(long *)(lVar10 + 0xb0) + 8) == 0 ||
        ((*(long *)(lVar10 + 0x488) == 0 || (*(long *)(*(long *)(lVar10 + 0x488) + 8) == 0)))))) ||
      (*(long *)(lVar10 + 0x2b0) == 0)) || (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) == 0)) {
LAB_011e816c:
    puVar4 = PTR_DAT_04bb43c0;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_a8);
    lVar14 = *(long *)puVar4;
    if (lVar14 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_68 = 0;
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_70 = (undefined *)CONCAT44(local_a4,CONCAT13(local_a5,CONCAT12(local_a6,local_a8)));
        uVar6 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar4 != 0) {
          lVar10 = *(long *)(lVar14 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar10 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(&local_a8);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
              lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
              if (lVar10 != 0) {
                local_68 = lVar10;
              }
            }
          }
        }
        uVar8 = FUN_01ae59b0(&local_78);
        bVar1 = local_a6 >> 2 & 1;
        if ((uVar8 & 1) == 0) {
          bVar1 = local_a6 & 4;
        }
        if (bVar1 != 0) goto LAB_011e8294;
      }
    }
    uVar8 = FUN_0277e158(&local_a8);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  else {
    uVar6 = FUN_0277d6c4(&local_a8);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_011e816c;
  }
LAB_011e8294:
  lVar10 = *(long *)puVar3;
  uVar6 = *(uint *)(param_1 + 0x24f78);
  if (((((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar10 + 0x488) != 0 && (*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar10 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)))) {
    uVar7 = FUN_0277d6c4(&local_a8);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      pcVar12 = (char *)(param_1 + 0x24fa0);
      if ((((((*pcVar12 == '\0') ||
             ((local_98 != *(int *)(param_1 + 0x24f98) || (iStack_94 != *(int *)(param_1 + 0x24f9c))
              ))) && (((pcVar12 = (char *)(param_1 + 0x24fb8), *pcVar12 == '\0' ||
                       ((local_98 != *(int *)(param_1 + 0x24fb0) ||
                        (iStack_94 != *(int *)(param_1 + 0x24fb4))))) &&
                      ((pcVar12 = (char *)(param_1 + 0x24fd0), *pcVar12 == '\0' ||
                       ((local_98 != *(int *)(param_1 + 0x24fc8) ||
                        (iStack_94 != *(int *)(param_1 + 0x24fcc))))))))) &&
           (((pcVar12 = (char *)(param_1 + 0x24fe8), *pcVar12 == '\0' ||
             ((local_98 != *(int *)(param_1 + 0x24fe0) || (iStack_94 != *(int *)(param_1 + 0x24fe4))
              ))) && ((pcVar12 = (char *)(param_1 + 0x25000), *pcVar12 == '\0' ||
                      ((local_98 != *(int *)(param_1 + 0x24ff8) ||
                       (iStack_94 != *(int *)(param_1 + 0x24ffc))))))))) &&
          (((pcVar12 = (char *)(param_1 + 0x25018), *pcVar12 == '\0' ||
            ((local_98 != *(int *)(param_1 + 0x25010) || (iStack_94 != *(int *)(param_1 + 0x25014)))
            )) && ((pcVar12 = (char *)(param_1 + 0x25030), *pcVar12 == '\0' ||
                   ((local_98 != *(int *)(param_1 + 0x25028) ||
                    (iStack_94 != *(int *)(param_1 + 0x2502c))))))))) &&
         (((pcVar12 = (char *)(param_1 + 0x25048), *pcVar12 == '\0' ||
           ((local_98 != *(int *)(param_1 + 0x25040) || (iStack_94 != *(int *)(param_1 + 0x25044))))
           ) && ((pcVar12 = (char *)(param_1 + 0x25060), *pcVar12 == '\0' ||
                 ((local_98 != *(int *)(param_1 + 0x25058) ||
                  (iStack_94 != *(int *)(param_1 + 0x2505c))))))))) {
        if (*(char *)(param_1 + 0x25078) == '\0') goto LAB_011e8480;
        uVar9 = 0;
        if ((local_98 != *(int *)(param_1 + 0x25070)) || (iStack_94 != *(int *)(param_1 + 0x25074)))
        goto LAB_011e8484;
        pcVar12 = (char *)(param_1 + 0x25078);
      }
      uVar9 = 1;
      *pcVar12 = '\0';
      goto LAB_011e8484;
    }
  }
LAB_011e8480:
  uVar9 = 0;
LAB_011e8484:
  uVar8 = FUN_011e64f0(param_1,&local_a8,&local_a0,0,uVar9,1);
  if ((uVar8 & 1) == 0) {
    return;
  }
  local_70 = puVar2 + 0x10;
  local_68 = 0;
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  local_58 = 0;
  local_60 = local_70;
  FUN_0277f02c(&local_a8,&local_78);
  local_68 = CONCAT44(local_68._4_4_ + iStack_94,(int)local_68 + local_98);
  local_58 = CONCAT44(local_58._4_4_ + iStack_94,(int)local_58 + local_98);
  FUN_011ed7e0(param_1 + 0x1e368,&local_78,1);
  if ((param_3 & 1) == 0) {
    lVar10 = *(long *)puVar3;
    if (lVar10 == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0xb0) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0xb0) + 8) == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x488) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0x488) + 8) == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x2b0) == 0) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) == 0) {
      return;
    }
    uVar7 = FUN_0277d6c4(&local_a8);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar7) {
      return;
    }
    if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
      return;
    }
    FUN_0124c030(&local_78,&local_a8);
    uVar8 = FUN_0123d890(local_68,4);
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar8 = FUN_0123d890(local_68,0);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (((ulong)local_70 & 0x18000000000000) != 0) {
      return;
    }
    uVar8 = FUN_0123b5b0(local_68);
    if ((uVar8 & 1) == 0) {
      return;
    }
  }
  uVar8 = FUN_011e76a4(param_1,&local_a8,&local_a0);
  if ((uVar8 & 1) == 0) {
    lVar10 = param_1 + 0x278;
    if (uVar6 < 1000) {
      lVar10 = param_1 + 0x278 + (ulong)uVar6 * 0x78;
    }
    *(ushort *)(lVar10 + 0x68) = *(ushort *)(lVar10 + 0x68) | 2;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x03d4c028) */
/* WARNING: Removing unreachable block (ram,0x03d4c13c) */
/* WARNING: Removing unreachable block (ram,0x03d4c23c) */
/* WARNING: Removing unreachable block (ram,0x03d4c290) */
/* WARNING: Removing unreachable block (ram,0x03d4c3d0) */
/* WARNING: Removing unreachable block (ram,0x03d4c33c) */
/* WARNING: Removing unreachable block (ram,0x03d4c738) */
/* WARNING: Removing unreachable block (ram,0x03d4c6a4) */
/* WARNING: Removing unreachable block (ram,0x03d4c6f0) */
/* WARNING: Removing unreachable block (ram,0x03d4bfac) */
/* WARNING: Removing unreachable block (ram,0x03d4c454) */

void FUN_03d4bea8(long *param_1,long param_2,undefined4 *param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint local_b0;
  uint uStack_ac;
  long *local_a8;
  long *plStack_a0;
  undefined4 local_98;
  uint local_94;
  uint uStack_90;
  undefined4 local_8c;
  undefined1 local_88;
  long local_80;
  undefined4 local_74;
  
  uVar12 = *(uint *)(param_1 + 4);
  local_b0 = 0;
  uStack_ac = 0;
  lVar11 = *(long *)(param_2 + 0x10);
  if (*(uint *)(param_2 + 8) <= uVar12) {
    uVar12 = 0;
  }
  puVar13 = (uint *)(lVar11 + (long)(int)uVar12 * 0x48);
  cVar2 = (char)puVar13[9];
  bVar6 = cVar2 == '\0';
  if (cVar2 == '\0') {
    if (*(char *)((long)puVar13 + 0x25) != '\0') {
      local_b0 = puVar13[0xc];
      puVar14 = puVar13 + 0xd;
      uVar15 = 1;
      goto LAB_03d4bf30;
    }
    bVar4 = false;
    bVar6 = false;
    uVar15 = 0xffffffff;
  }
  else {
    local_b0 = puVar13[10];
    uVar15 = 0;
    puVar14 = puVar13 + 0xb;
LAB_03d4bf30:
    uStack_ac = *puVar14;
    bVar4 = true;
  }
  uVar5 = uStack_ac;
  uVar1 = local_b0;
  cVar3 = *(char *)(lVar11 + (long)(int)uVar12 * 0x48 + 0x44);
  if (cVar3 == '\0' && *(char *)((long)param_1 + 0x3a) != '\0') {
    if ((param_4 & 1) != 0) {
      return;
    }
    if (!bVar4) {
      if (((char)param_1[7] != '\0') &&
         (*(char *)((long)param_1 + 0x39) != '\0' || *(char *)((long)param_1 + 0x3c) != '\0')) {
        if (*(int *)((long)param_1 + 0x2c) == 1) {
          local_94 = (uint)param_1[6];
          uStack_90 = *(undefined4 *)((long)param_1 + 0x34);
          local_74 = 5;
          plStack_a0 = &local_80;
          local_98 = 1;
          local_8c = 0;
          local_88 = 0;
          local_a8 = param_1;
          local_80 = param_2;
          (**(code **)param_1[0x1d])(param_1 + 0x1d,5,&local_a8);
        }
        else if (*(int *)((long)param_1 + 0x2c) == 0) {
          FUN_03d4ca24(param_1,param_2,0,param_1 + 6,*(char *)((long)param_1 + 0x39) != '\0');
        }
      }
      *(bool *)(param_1 + 7) = bVar4;
      *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
      return;
    }
    if (cVar2 == '\0') {
      if ((*puVar13 >> (ulong)(*(uint *)((long)param_1 + 0x174) & 0x1f) & 1) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = (*(uint *)(lVar11 + (long)(int)uVar12 * 0x48 + 0x3c) >>
                 (ulong)(*(uint *)((long)param_1 + 0x174) & 0x1f) & 1) == 0;
      }
      uVar9 = (**(code **)(*param_1 + 0x18))(param_1,&local_b0);
      if ((uVar9 & 1) == 0) {
        if (((char)param_1[7] != '\0') && (*(char *)((long)param_1 + 0x39) != '\0')) {
          local_74 = 5;
          plStack_a0 = &local_80;
          local_98 = 1;
          local_8c = 0;
          local_88 = 0;
          local_94 = local_b0;
          uStack_90 = uStack_ac;
          local_a8 = param_1;
          local_80 = param_2;
          (**(code **)param_1[0x1d])(param_1 + 0x1d,5,&local_a8);
        }
        if (*(char *)((long)param_1 + 0x3c) != '\0') {
          if (bVar7) {
            FUN_03d4c754(param_1,param_2,param_3,1,&local_b0,0);
          }
          else {
            FUN_03d4ca24(param_1,param_2,1,&local_b0,0);
          }
          goto LAB_03d4c4ac;
        }
LAB_03d4c40c:
        bVar7 = false;
      }
      else {
        if ((((char)param_1[7] == '\0') || (*(int *)((long)param_1 + 0x2c) != 1)) ||
           (*(char *)((long)param_1 + 0x39) == '\0')) {
          local_74 = 4;
          plStack_a0 = &local_80;
          local_98 = 1;
          local_8c = 0;
          local_88 = 1;
          local_94 = local_b0;
          uStack_90 = uStack_ac;
          local_a8 = param_1;
          local_80 = param_2;
          (**(code **)param_1[0x19])(param_1 + 0x19,4,&local_a8);
          if (*(char *)((long)param_1 + 0x3c) == '\0') {
            *(undefined4 *)((long)param_1 + 0x24) = 0xfffffffe;
          }
        }
        if (bVar7) {
          uVar10 = 1;
          goto LAB_03d4c378;
        }
        bVar7 = true;
        FUN_03d4ca24(param_1,param_2,1,&local_b0,1);
      }
    }
    else {
      uVar9 = (**(code **)(*param_1 + 0x18))(param_1,&local_b0);
      if ((uVar9 & 1) == 0) {
        if (((char)param_1[7] != '\0') && (*(char *)((long)param_1 + 0x39) != '\0')) {
          local_98 = *(undefined4 *)((long)param_1 + 0x2c);
          local_74 = 5;
          plStack_a0 = &local_80;
          local_8c = 0;
          local_88 = 0;
          local_94 = local_b0;
          uStack_90 = uStack_ac;
          local_a8 = param_1;
          local_80 = param_2;
          (**(code **)param_1[0x1d])(param_1 + 0x1d,5,&local_a8);
        }
        if (*(char *)((long)param_1 + 0x3c) == '\0') goto LAB_03d4c40c;
        local_74 = 3;
        plStack_a0 = &local_80;
        local_98 = 0;
        local_8c = 0;
        local_88 = 0;
        local_94 = local_b0;
        uStack_90 = uStack_ac;
        local_a8 = param_1;
        local_80 = param_2;
        (**(code **)param_1[0x15])(param_1 + 0x15,3,&local_a8);
LAB_03d4c4ac:
        bVar7 = *(char *)((long)param_1 + 0x3f) != '\0';
      }
      else if ((((char)param_1[7] == '\0') || (*(int *)((long)param_1 + 0x2c) != 0)) ||
              (*(char *)((long)param_1 + 0x39) != '\0')) {
        uVar10 = 0;
LAB_03d4c378:
        bVar7 = true;
        FUN_03d4c754(param_1,param_2,param_3,uVar10,&local_b0,1);
      }
      else {
        local_74 = 4;
        plStack_a0 = &local_80;
        bVar7 = true;
        *(undefined4 *)(param_1 + 5) = 0;
        local_98 = 0;
        local_8c = 0;
        local_88 = 1;
        local_94 = local_b0;
        uStack_90 = uStack_ac;
        local_a8 = param_1;
        local_80 = param_2;
        (**(code **)param_1[0x19])(param_1 + 0x19,4,&local_a8);
        local_74 = 2;
        plStack_a0 = &local_80;
        local_8c = (undefined4)param_1[5];
        local_98 = 0;
        local_88 = 1;
        local_94 = local_b0;
        uStack_90 = uStack_ac;
        local_a8 = param_1;
        local_80 = param_2;
        (**(code **)param_1[0x11])(param_1 + 0x11,2,&local_a8);
        local_74 = 3;
        plStack_a0 = &local_80;
        local_98 = 0;
        local_8c = 0;
        local_88 = 1;
        local_94 = local_b0;
        uStack_90 = uStack_ac;
        local_a8 = param_1;
        local_80 = param_2;
        (**(code **)param_1[0x15])(param_1 + 0x15,3,&local_a8);
        *(undefined4 *)((long)param_1 + 0x24) = *param_3;
      }
    }
    *(bool *)(param_1 + 7) = bVar4;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar15;
    *(uint *)(param_1 + 6) = local_b0;
    *(uint *)((long)param_1 + 0x34) = uStack_ac;
    cVar3 = *(char *)((long)param_1 + 0x3a);
joined_r0x03d4c4cc:
    if (cVar3 != '\0') {
      bVar8 = (**(code **)(*param_1 + 0x18))(param_1,&local_b0);
      *(byte *)((long)param_1 + 0x39) = bVar8 & 1;
      goto joined_r0x03d4c4d4;
    }
  }
  else {
    if (-1 < *(int *)((long)param_1 + 0x24)) {
      *(undefined4 *)((long)param_1 + 0x24) = 0xfffffffb;
switchD_03d4c0f8_caseD_fffffffb:
      local_94 = *(uint *)(param_1 + 6);
      uStack_90 = *(uint *)((long)param_1 + 0x34);
      local_98 = *(undefined4 *)((long)param_1 + 0x2c);
      local_74 = 8;
      plStack_a0 = &local_80;
      local_8c = 0;
      local_88 = 0;
      local_a8 = param_1;
      local_80 = param_2;
      (**(code **)param_1[0x29])(param_1 + 0x29,8,&local_a8);
      goto switchD_03d4c0f8_caseD_ffffffff;
    }
    bVar7 = false;
    switch(*(int *)((long)param_1 + 0x24)) {
    case -5:
      goto switchD_03d4c0f8_caseD_fffffffb;
    case -4:
      local_94 = *(uint *)(param_1 + 6);
      uStack_90 = *(uint *)((long)param_1 + 0x34);
      local_98 = *(undefined4 *)((long)param_1 + 0x2c);
      local_74 = 5;
      plStack_a0 = &local_80;
      local_8c = 0;
      local_88 = 0;
      local_a8 = param_1;
      local_80 = param_2;
      (**(code **)param_1[0x1d])(param_1 + 0x1d,5,&local_a8);
      *(undefined4 *)((long)param_1 + 0x24) = 0xfffffffe;
      bVar7 = true;
      break;
    case -3:
      FUN_03d4ca24(param_1,param_2,*(undefined4 *)((long)param_1 + 0x2c),param_1 + 6,
                   *(undefined1 *)((long)param_1 + 0x39));
      bVar7 = false;
      break;
    case -1:
switchD_03d4c0f8_caseD_ffffffff:
      bVar7 = false;
      *(undefined4 *)((long)param_1 + 0x24) = 0xfffffffe;
    }
    if (((char)param_1[7] != '\0') && (*(char *)((long)param_1 + 0x39) != '\0')) {
      if (*(int *)((long)param_1 + 0x2c) != 1) {
        bVar7 = true;
      }
      if (!bVar7) {
        local_94 = *(uint *)(param_1 + 6);
        uStack_90 = *(uint *)((long)param_1 + 0x34);
        local_74 = 5;
        plStack_a0 = &local_80;
        local_98 = 1;
        local_8c = 0;
        local_88 = 0;
        local_a8 = param_1;
        local_80 = param_2;
        (**(code **)param_1[0x1d])(param_1 + 0x1d,5,&local_a8);
      }
    }
    *(bool *)(param_1 + 7) = bVar4;
    if (!bVar4) {
      return;
    }
    bVar7 = false;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar15;
    *(uint *)(param_1 + 6) = uVar1;
    *(uint *)((long)param_1 + 0x34) = uVar5;
    if (cVar3 == '\0') {
      cVar3 = *(char *)((long)param_1 + 0x3a);
      goto joined_r0x03d4c4cc;
    }
  }
  *(undefined1 *)((long)param_1 + 0x39) = 0;
joined_r0x03d4c4d4:
  if ((bVar7) && (*(char *)((long)param_1 + 0x3d) != '\0')) {
    if (*(char *)((long)param_1 + 0x3e) != '\0') {
      uVar12 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_2 + 8) <= uVar12) {
        uVar12 = 0;
      }
      *(undefined1 *)(*(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x48 + 0x44) = 1;
    }
    if ((char)param_1[8] != '\0') {
      uVar12 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_2 + 8) <= uVar12) {
        uVar12 = 0;
      }
      lVar11 = *(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x48;
      *(uint *)(lVar11 + 0x3c) = *(uint *)(lVar11 + 0x3c) | 1;
      uVar12 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_2 + 8) <= uVar12) {
        uVar12 = 0;
      }
      lVar11 = *(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x48;
      *(uint *)(lVar11 + 0x3c) = *(uint *)(lVar11 + 0x3c) | 2;
      uVar12 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_2 + 8) <= uVar12) {
        uVar12 = 0;
      }
      lVar11 = *(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x48;
      *(uint *)(lVar11 + 0x3c) = *(uint *)(lVar11 + 0x3c) | 4;
      uVar12 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_2 + 8) <= uVar12) {
        uVar12 = 0;
      }
      lVar11 = *(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x48;
      *(uint *)(lVar11 + 0x3c) = *(uint *)(lVar11 + 0x3c) | 8;
    }
    if (cVar2 == '\0') {
      if (!bVar6) {
        return;
      }
      uVar12 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_2 + 8) <= uVar12) {
        uVar12 = 0;
      }
      lVar11 = *(long *)(param_2 + 0x10) + (long)(int)uVar12 * 0x48;
      uVar12 = 1 << (ulong)(*(uint *)((long)param_1 + 0x174) & 0x1f);
    }
    else {
      uVar1 = *(uint *)(param_1 + 4);
      uVar12 = *(uint *)(param_1 + 0x2d);
      if (*(uint *)(param_2 + 8) <= uVar1) {
        uVar1 = 0;
      }
      lVar11 = *(long *)(param_2 + 0x10) + (long)(int)uVar1 * 0x48;
    }
    *(uint *)(lVar11 + 0x3c) = *(uint *)(lVar11 + 0x3c) | uVar12;
  }
  return;
}


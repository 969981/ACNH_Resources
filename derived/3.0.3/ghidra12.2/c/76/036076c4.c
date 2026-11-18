
undefined8 FUN_036076c4(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined1 extraout_w8;
  undefined1 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  ulong *puVar15;
  ulong local_70;
  ulong local_68;
  uint local_5c;
  uint local_58;
  undefined1 auStack_54 [4];
  undefined8 local_38;
  
  uVar6 = FUN_04002180(param_2,0xd,0xd,auStack_54);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar5 = param_2[1];
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 9);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 10);
  uVar6 = FUN_03606054(param_1 + 0x38,param_2);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xb);
  iVar1 = (int)param_2[1];
  if (iVar1 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_036078c4:
          local_38 = local_38 & 0xffffffff00000000;
          goto LAB_036078c8;
        }
        goto LAB_03607874;
      }
    }
LAB_036078c8:
    lVar8 = *param_2;
    puVar15 = &local_38;
LAB_036078d0:
    (**(code **)(lVar8 + 0x20))(param_2,puVar15,4);
  }
  else if (iVar1 == 1) {
    bVar3 = *(byte *)(param_1 + 0xc);
    local_68 = CONCAT44(local_68._4_4_,(uint)bVar3);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_036078c4;
        goto LAB_0360785c;
      }
      lVar8 = *param_2;
      puVar15 = &local_68;
      goto LAB_036078d0;
    }
LAB_0360785c:
    uVar9 = (uint)bVar3 << 0x18;
    if ((int)param_2[2] != 0xff00) {
      uVar9 = (uint)bVar3;
    }
    local_38 = CONCAT44(local_38._4_4_,uVar9);
LAB_03607874:
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
  }
  else if (iVar1 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0360788c:
      local_38 = local_38 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
      uVar9 = (uint)local_38 >> 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar9 = (uint)local_38;
      }
      uVar7 = (char)uVar9;
    }
    else {
      local_38 = CONCAT71(local_38._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_68,4);
        uVar7 = (undefined1)local_68;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_0360788c;
        (**(code **)(*param_2 + 0x38))(param_2,&local_38);
        uVar7 = extraout_w8;
      }
    }
    *(undefined1 *)(param_1 + 0xc) = uVar7;
  }
  puVar15 = (ulong *)(param_1 + 0x10);
  uVar10 = *puVar15 - *(long *)(param_1 + -0x30);
  uVar6 = *(long *)(param_1 + -0x2538) - *puVar15;
  lVar8 = uVar6 + (uVar10 & 0x7f);
  if ((uVar10 & 0x80) != 0) {
    lVar8 = lVar8 + 0x80;
  }
  puVar14 = (uint *)(param_1 + 0x18);
  if ((uVar10 & 4) != 0) {
    uVar6 = uVar6 + 4;
  }
  local_58 = *puVar14 + (int)((ulong)lVar8 >> 8);
  puVar12 = (uint *)(param_1 + 0x1c);
  local_5c = *puVar12 + (int)(uVar6 >> 3);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_38 = CONCAT71(local_38._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_58,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = (local_58 & 0xff00ff00) >> 8 | (local_58 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar9 = local_58;
    }
    local_38 = CONCAT44(local_38._4_4_,uVar9);
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = (ulong)local_38._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
    uVar9 = ((uint)local_38 & 0xff00ff00) >> 8 | ((uint)local_38 & 0xff00ff) << 8;
    local_58 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_58 = (uint)local_38;
    }
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_5c,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar9 = (local_5c & 0xff00ff00) >> 8 | (local_5c & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar9 = local_5c;
    }
    local_38 = CONCAT44(local_38._4_4_,uVar9);
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = (ulong)local_38._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
    uVar9 = ((uint)local_38 & 0xff00ff00) >> 8 | ((uint)local_38 & 0xff00ff) << 8;
    local_5c = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_5c = (uint)local_38;
    }
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar15,8);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar10 = *puVar15;
    uVar6 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_38 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar10;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar6 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_38;
    }
    *puVar15 = uVar6;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar14,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = *puVar14;
    uVar9 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar9 = uVar2;
    }
    local_38 = CONCAT44(local_38._4_4_,uVar9);
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = (ulong)local_38._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
    uVar9 = ((uint)local_38 & 0xff00ff00) >> 8 | ((uint)local_38 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar9 = (uint)local_38;
    }
    *puVar14 = uVar9;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar12,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar2 = *puVar12;
    uVar9 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar9 = uVar2;
    }
    local_38 = CONCAT44(local_38._4_4_,uVar9);
    (**(code **)(*param_2 + 0x38))(param_2,&local_38);
  }
  else {
    local_38 = (ulong)local_38._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
    uVar9 = ((uint)local_38 & 0xff00ff00) >> 8 | ((uint)local_38 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar9 = (uint)local_38;
    }
    *puVar12 = uVar9;
  }
  local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 0xd));
  (**(code **)(*param_2 + 0x28))(param_2,&local_38);
  *(bool *)(param_1 + 0xd) = (char)local_38 != '\0';
  uVar10 = *(ulong *)(param_1 + -0x30);
  uVar11 = *(long *)(param_1 + -0x2538) - uVar10;
  uVar6 = (uVar11 & 0xffffffffffffff80) + uVar10;
  if ((uVar11 & 0x80) != 0) {
    uVar6 = uVar6 - 0x80;
  }
  if (uVar6 == 0xffffffffffffffff) {
LAB_03607de8:
    uVar6 = 0;
  }
  else if (uVar6 == uVar10) {
    if ((long)uVar10 < 0) goto LAB_03607de8;
    uVar6 = *(ulong *)(param_1 + 0x20);
  }
  else {
    uVar6 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar13 = (uVar11 & 0xfffffffffffffffc) + uVar10;
  if ((uVar11 & 4) != 0) {
    uVar13 = uVar13 - 4;
  }
  if (uVar13 != 0xffffffffffffffff) {
    if (uVar13 != uVar10) {
      uVar13 = uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU);
      goto LAB_03607e34;
    }
    if (-1 < (long)uVar10) {
      uVar13 = *(ulong *)(param_1 + 0x28);
      goto LAB_03607e34;
    }
  }
  uVar13 = 0;
LAB_03607e34:
  local_70 = uVar13;
  local_68 = uVar6;
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_68,8);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar10 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    local_38 = uVar10 >> 0x20 | uVar10 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar6;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar6 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_68 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_68 = local_38;
    }
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,&local_70,8);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar6 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_38 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar13;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar6 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_70 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_70 = local_38;
    }
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  puVar15 = (ulong *)(param_1 + 0x20);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar15,8);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar10 = *puVar15;
    uVar6 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_38 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar10;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar6 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_38;
    }
    *puVar15 = uVar6;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_38._1_7_ = (undefined7)(local_38 >> 8);
    local_38 = CONCAT71(local_38._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,1);
  }
  puVar15 = (ulong *)(param_1 + 0x28);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar15,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar10 = *puVar15;
    uVar6 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_38 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_38 = uVar10;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_38);
  }
  else {
    local_38 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_38,8);
    uVar6 = (local_38 & 0xff00ff00ff00ff00) >> 8 | (local_38 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_38;
    }
    *puVar15 = uVar6;
  }
  local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)(param_1 + 0xe));
  (**(code **)(*param_2 + 0x28))(param_2,&local_38);
  *(bool *)(param_1 + 0xe) = (char)local_38 != '\0';
  if ((int)lVar5 == 0) {
    FUN_036081dc(param_1);
  }
  return 1;
}


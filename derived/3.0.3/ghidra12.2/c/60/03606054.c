
uint FUN_03606054(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  uint extraout_w8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_44 [4];
  ulong local_40;
  uint local_34;
  
  uVar7 = FUN_04002180(param_2,1,1,auStack_44);
  if ((uVar7 & 1) == 0) goto LAB_0360658c;
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 9);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_40 = CONCAT71(local_40._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_40,1);
  }
  puVar8 = (ulong *)(param_1 + 0x10);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar11 = *puVar8;
    uVar6 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_40 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_40 = uVar11;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_40);
  }
  else {
    local_40 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_40,8);
    uVar6 = (local_40 & 0xff00ff00ff00ff00) >> 8 | (local_40 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_40;
    }
    *puVar8 = uVar6;
  }
  iVar3 = (int)param_2[1];
  if (iVar3 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_40 = CONCAT71(local_40._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_40,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_036062d4:
          local_40 = local_40 & 0xffffffff00000000;
          goto LAB_036062d8;
        }
        goto LAB_03606284;
      }
    }
LAB_036062d8:
    lVar10 = *param_2;
    puVar8 = &local_40;
LAB_036062e0:
    (**(code **)(lVar10 + 0x20))(param_2,puVar8,4);
  }
  else if (iVar3 == 1) {
    uVar9 = *(uint *)(param_1 + 0x18);
    local_34 = uVar9;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_40 = CONCAT71(local_40._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_40,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_036062d4;
        goto LAB_0360626c;
      }
      lVar10 = *param_2;
      puVar8 = (ulong *)&local_34;
      goto LAB_036062e0;
    }
LAB_0360626c:
    uVar5 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = uVar9;
    }
    local_40 = CONCAT44(local_40._4_4_,uVar5);
LAB_03606284:
    (**(code **)(*param_2 + 0x38))(param_2,&local_40);
  }
  else if (iVar3 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0360629c:
      local_40 = local_40 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x20))(param_2,&local_40,4);
      uVar9 = ((uint)local_40 & 0xff00ff00) >> 8 | ((uint)local_40 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar9 = (uint)local_40;
      }
    }
    else {
      local_40 = CONCAT71(local_40._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_40,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
        uVar9 = local_34;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_0360629c;
        (**(code **)(*param_2 + 0x38))(param_2,&local_40);
        uVar9 = extraout_w8;
      }
    }
    *(uint *)(param_1 + 0x18) = uVar9;
  }
  local_40 = CONCAT71(local_40._1_7_,*(undefined1 *)(param_1 + 0x1c));
  (**(code **)(*param_2 + 0x28))(param_2,&local_40);
  puVar1 = (ushort *)(param_1 + 0x1e);
  *(bool *)(param_1 + 0x1c) = (char)local_40 != '\0';
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar1;
    uVar2 = uVar4 >> 8 | uVar4 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar4;
    }
    local_40 = CONCAT62(local_40._2_6_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_40);
  }
  else {
    local_40 = (ulong)local_40._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_40,2);
    uVar2 = (ushort)local_40 >> 8 | (ushort)local_40 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_40;
    }
    *puVar1 = uVar2;
  }
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x20,0x280);
  puVar1 = (ushort *)(param_1 + 0x2a0);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar1;
    uVar2 = uVar4 >> 8 | uVar4 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar4;
    }
    local_40 = CONCAT62(local_40._2_6_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_40);
  }
  else {
    local_40 = (ulong)local_40._2_6_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_40,2);
    uVar2 = (ushort)local_40 >> 8 | (ushort)local_40 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_40;
    }
    *puVar1 = uVar2;
  }
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x2a2,0x1680);
  puVar8 = (ulong *)(param_1 + 0x1928);
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_40 = CONCAT71(local_40._1_7_,8);
    (**(code **)(*param_2 + 0x20))(param_2,&local_40,1);
  }
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar8,8);
  }
  else if ((int)param_2[1] == 1) {
    uVar11 = *puVar8;
    uVar6 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_40 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      local_40 = uVar11;
    }
    (**(code **)(*param_2 + 0x40))(param_2,&local_40);
  }
  else {
    local_40 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_40,8);
    uVar6 = (local_40 & 0xff00ff00ff00ff00) >> 8 | (local_40 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if ((int)param_2[2] != 0xff00) {
      uVar6 = local_40;
    }
    *puVar8 = uVar6;
  }
LAB_0360658c:
  return uVar7 & 1;
}


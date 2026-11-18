
uint FUN_035b286c(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  uint extraout_w8;
  uint uVar7;
  int iVar8;
  uint extraout_w8_00;
  long lVar9;
  undefined1 auStack_3c [4];
  uint local_38;
  undefined4 local_34;
  
  uVar5 = FUN_04002180(param_2,4,4,auStack_3c);
  if ((uVar5 & 1) == 0) goto LAB_035b2fa4;
  (**(code **)(*param_2 + 0x28))(param_2,param_1);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 1);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 2);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 3);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 4);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 5);
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 6);
  iVar8 = (int)param_2[1];
  if (iVar8 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_035b2a88:
          local_34 = 0;
          goto LAB_035b2a8c;
        }
        goto LAB_035b2a38;
      }
    }
LAB_035b2a8c:
    lVar9 = *param_2;
    puVar6 = &local_34;
LAB_035b2a94:
    (**(code **)(lVar9 + 0x20))(param_2,puVar6,4);
LAB_035b2ac8:
    iVar8 = (int)param_2[1];
  }
  else {
    if (iVar8 == 1) {
      bVar3 = *(byte *)(param_1 + 7);
      local_38 = (uint)bVar3;
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_34 = CONCAT31(local_34._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_035b2a88;
          goto LAB_035b2a20;
        }
        lVar9 = *param_2;
        puVar6 = &local_38;
        goto LAB_035b2a94;
      }
LAB_035b2a20:
      local_34 = (uint)bVar3 << 0x18;
      if ((int)param_2[2] != 0xff00) {
        local_34 = (uint)bVar3;
      }
LAB_035b2a38:
      (**(code **)(*param_2 + 0x38))(param_2,&local_34);
      goto LAB_035b2ac8;
    }
    if (iVar8 == 0) {
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_035b2a50:
        local_34 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
        uVar7 = local_34 >> 0x18;
        if ((int)param_2[2] != 0xff00) {
          uVar7 = local_34;
        }
      }
      else {
        local_34 = CONCAT31(local_34._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
          uVar7 = local_38;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_035b2a50;
          (**(code **)(*param_2 + 0x38))(param_2,&local_34);
          uVar7 = extraout_w8;
        }
      }
      *(char *)(param_1 + 7) = (char)uVar7;
      goto LAB_035b2ac8;
    }
  }
  puVar1 = (ushort *)(param_1 + 8);
  if (iVar8 == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if (iVar8 == 1) {
    uVar4 = *puVar1;
    uVar2 = uVar4 >> 8 | uVar4 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar4;
    }
    local_34 = CONCAT22(local_34._2_2_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_34);
  }
  else {
    local_34 = (uint)local_34._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,2);
    uVar2 = (ushort)local_34 >> 8 | (ushort)local_34 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_34;
    }
    *puVar1 = uVar2;
  }
  puVar1 = (ushort *)(param_1 + 10);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar1;
    uVar2 = uVar4 >> 8 | uVar4 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar4;
    }
    local_34 = CONCAT22(local_34._2_2_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_34);
  }
  else {
    local_34 = (uint)local_34._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,2);
    uVar2 = (ushort)local_34 >> 8 | (ushort)local_34 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_34;
    }
    *puVar1 = uVar2;
  }
  iVar8 = (int)param_2[1];
  if (iVar8 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_035b2d70:
          local_34 = 0;
          goto LAB_035b2d74;
        }
        goto LAB_035b2d20;
      }
    }
LAB_035b2d74:
    lVar9 = *param_2;
    puVar6 = &local_34;
LAB_035b2d7c:
    (**(code **)(lVar9 + 0x20))(param_2,puVar6,4);
  }
  else if (iVar8 == 1) {
    bVar3 = *(byte *)(param_1 + 0xc);
    local_38 = (uint)bVar3;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_035b2d70;
        goto LAB_035b2d08;
      }
      lVar9 = *param_2;
      puVar6 = &local_38;
      goto LAB_035b2d7c;
    }
LAB_035b2d08:
    local_34 = (uint)bVar3 << 0x18;
    if ((int)param_2[2] != 0xff00) {
      local_34 = (uint)bVar3;
    }
LAB_035b2d20:
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
  }
  else if (iVar8 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_035b2d38:
      local_34 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
      uVar7 = local_34 >> 0x18;
      if ((int)param_2[2] != 0xff00) {
        uVar7 = local_34;
      }
    }
    else {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar7 = local_38;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_035b2d38;
        (**(code **)(*param_2 + 0x38))(param_2,&local_34);
        uVar7 = extraout_w8_00;
      }
    }
    *(char *)(param_1 + 0xc) = (char)uVar7;
  }
  local_34._0_1_ = *(char *)(param_1 + 0xd);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0xd) = (char)local_34 != '\0';
  local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_1 + 0xe));
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0xe) = (char)local_34 != '\0';
  (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xf);
  puVar1 = (ushort *)(param_1 + 0x10);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar1;
    uVar2 = uVar4 >> 8 | uVar4 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar4;
    }
    local_34 = CONCAT22(local_34._2_2_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_34);
  }
  else {
    local_34 = (uint)local_34._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,2);
    uVar2 = (ushort)local_34 >> 8 | (ushort)local_34 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_34;
    }
    *puVar1 = uVar2;
  }
  puVar1 = (ushort *)(param_1 + 0x12);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,2);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = *puVar1;
    uVar2 = uVar4 >> 8 | uVar4 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = uVar4;
    }
    local_34 = CONCAT22(local_34._2_2_,uVar2);
    (**(code **)(*param_2 + 0x30))(param_2,&local_34);
  }
  else {
    local_34 = (uint)local_34._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,2);
    uVar2 = (ushort)local_34 >> 8 | (ushort)local_34 << 8;
    if ((int)param_2[2] != 0xff00) {
      uVar2 = (ushort)local_34;
    }
    *puVar1 = uVar2;
  }
  local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_1 + 0x14));
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 0x14) = (char)local_34 != '\0';
LAB_035b2fa4:
  return uVar5 & 1;
}


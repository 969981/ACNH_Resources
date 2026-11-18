
void FUN_0364ccb0(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  uint *puVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  uint local_38;
  uint local_34;
  
  local_34 = CONCAT31(local_34._1_3_,(char)param_1[1]);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 1) = (char)local_34 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
  }
  puVar7 = (uint *)((long)param_1 + 0xc);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar5 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_34 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
    uVar8 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_34;
    }
    *puVar7 = uVar8;
  }
  if (param_3 < 10) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34._1_3_ = (undefined3)(local_34 >> 8);
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      (**(code **)(*param_2 + 0x38))(param_2,&local_34);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_34 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
      uVar8 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
      local_38 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_38 = local_34;
      }
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_34._1_3_ = (undefined3)(local_34 >> 8);
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
    }
    if ((int)param_2[1] != 2) {
      if ((int)param_2[1] == 1) {
        (**(code **)(*param_2 + 0x38))(param_2,&local_34);
        goto LAB_0364cf04;
      }
      local_34 = 0;
    }
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
  }
LAB_0364cf04:
  local_34 = CONCAT31(local_34._1_3_,(char)param_1[2]);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)(param_1 + 2) = (char)local_34 != '\0';
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
  }
  puVar7 = (uint *)((long)param_1 + 0x1c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar5 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_34 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
    uVar8 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_34;
    }
    *puVar7 = uVar8;
    cVar3 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar3 != '\0') {
    local_34._1_3_ = (undefined3)(local_34 >> 8);
    local_34 = CONCAT31(local_34._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
  }
  puVar7 = (uint *)(param_1 + 4);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar7,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar8 = *puVar7;
    uVar5 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_34 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = uVar8;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
  }
  else {
    local_34 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
    uVar8 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar8 = local_34;
    }
    *puVar7 = uVar8;
  }
  local_34._0_1_ = *(char *)((long)param_1 + 0x26);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)((long)param_1 + 0x26) = (char)local_34 != '\0';
  local_34._0_1_ = *(char *)((long)param_1 + 0x24);
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)((long)param_1 + 0x24) = (char)local_34 != '\0';
  if (param_3 < 2) {
    if ((int)param_2[1] == 0) {
      *(undefined1 *)((long)param_1 + 0x25) = 0;
      *(undefined4 *)(param_1 + 5) = 3;
    }
    goto LAB_0364d374;
  }
  local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)((long)param_1 + 0x25));
  (**(code **)(*param_2 + 0x28))(param_2,&local_34);
  *(bool *)((long)param_1 + 0x25) = (char)local_34 != '\0';
  iVar2 = (int)param_2[1];
  if (iVar2 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_0364d2d4:
          local_34 = 0;
          goto LAB_0364d2d8;
        }
        goto LAB_0364d27c;
      }
    }
LAB_0364d2d8:
    lVar9 = *param_2;
    puVar7 = &local_34;
LAB_0364d2e0:
    (**(code **)(lVar9 + 0x20))(param_2,puVar7,4);
  }
  else if (iVar2 == 1) {
    uVar8 = *(uint *)(param_1 + 5);
    local_38 = uVar8;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_0364d2d4;
        goto LAB_0364d264;
      }
      lVar9 = *param_2;
      puVar7 = &local_38;
      goto LAB_0364d2e0;
    }
LAB_0364d264:
    uVar5 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    local_34 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_34 = uVar8;
    }
LAB_0364d27c:
    (**(code **)(*param_2 + 0x38))(param_2,&local_34);
  }
  else if (iVar2 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0364d29c:
      local_34 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,4);
      uVar8 = (local_34 & 0xff00ff00) >> 8 | (local_34 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar8 = local_34;
      }
    }
    else {
      local_34 = CONCAT31(local_34._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_34,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_38,4);
        uVar8 = local_38;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_0364d29c;
        (**(code **)(*param_2 + 0x38))(param_2,&local_34);
        uVar8 = extraout_w8;
      }
    }
    *(uint *)(param_1 + 5) = uVar8;
  }
  if (6 < param_3) {
    local_34._1_3_ = (undefined3)(local_34 >> 8);
    local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)((long)param_1 + 0x2c));
    (**(code **)(*param_2 + 0x28))(param_2,&local_34);
    *(bool *)((long)param_1 + 0x2c) = (char)local_34 != '\0';
    if (9 < param_3) {
      (**(code **)(*param_2 + 0x20))(param_2,(long)param_1 + 0x11,8);
      return;
    }
  }
LAB_0364d374:
  bVar4 = *(byte *)(param_1 + 2);
  lVar9 = *param_1 + 0x7f8;
  bVar6 = bVar4 == 0;
  *(char *)((long)param_1 + 0x11) = (char)(*(uint *)(lVar9 + (ulong)bVar4 * 0x40) >> 0xb);
  *(char *)((long)param_1 + 0x12) =
       (char)(*(uint *)(lVar9 + (ulong)((uint)bVar4 << 4 | 8) * 4) >> 0xb);
  *(char *)((long)param_1 + 0x13) = (char)(*(uint *)(lVar9 + (ulong)bVar6 * 0x40) >> 10);
  *(char *)((long)param_1 + 0x14) =
       (char)(*(uint *)(lVar9 + (ulong)((uint)bVar6 << 4 | 4) * 4) >> 10);
  *(char *)((long)param_1 + 0x15) =
       (char)(*(uint *)(lVar9 + (ulong)((uint)bVar6 << 4 | 8) * 4) >> 10);
  *(char *)((long)param_1 + 0x16) =
       (char)(*(uint *)(lVar9 + (ulong)((uint)bVar6 << 4 | 0xc) * 4) >> 10);
  lVar1 = 0x200;
  if ((char)param_1[1] != '\0') {
    lVar1 = 0x300;
  }
  *(char *)((long)param_1 + 0x17) = (char)(*(uint *)(lVar9 + lVar1) >> 0xd);
  *(char *)(param_1 + 3) = (char)(*(uint *)(*param_1 + 0xa78) >> 0xd);
  return;
}


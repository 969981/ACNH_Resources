
undefined8 FUN_03656050(long param_1,long *param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  uint *puVar4;
  uint extraout_w8;
  uint uVar5;
  int iVar6;
  uint extraout_w8_00;
  uint extraout_w8_01;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  uint local_64;
  
  uVar3 = FUN_04002180(param_2,0xb,4,&local_70);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (local_70 < 6) {
    lVar9 = 0;
    do {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      }
      lVar8 = param_1 + lVar9;
      puVar4 = (uint *)(lVar8 + 0x48);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        uVar5 = *puVar4;
        uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_64 = uVar5;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_64 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
        uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_64;
        }
        *puVar4 = uVar5;
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar1 != '\0') {
        local_64._1_3_ = (undefined3)(local_64 >> 8);
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      }
      puVar4 = (uint *)(lVar8 + 0x4c);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        uVar5 = *puVar4;
        uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_64 = uVar5;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_64 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
        uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_64;
        }
        *puVar4 = uVar5;
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar1 != '\0') {
        local_64._1_3_ = (undefined3)(local_64 >> 8);
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      }
      puVar4 = (uint *)(lVar8 + 0x50);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
      }
      else if ((int)param_2[1] == 1) {
        uVar5 = *puVar4;
        uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_64 = uVar5;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
      }
      else {
        local_64 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
        uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_64;
        }
        *puVar4 = uVar5;
      }
      local_6c = 0;
      local_78 = 0;
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      }
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,(long)&local_6c + 4,4);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        uVar5 = (local_6c._4_4_ & 0xff00ff00) >> 8 | (local_6c._4_4_ & 0xff00ff) << 8;
        local_64 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_64 = local_6c._4_4_;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_64 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
        uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_64;
        }
        local_6c = CONCAT44(uVar5,(uint)local_6c);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar1 != '\0') {
        local_64._1_3_ = (undefined3)(local_64 >> 8);
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      }
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_6c,4);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        uVar5 = ((uint)local_6c & 0xff00ff00) >> 8 | ((uint)local_6c & 0xff00ff) << 8;
        local_64 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_64 = (uint)local_6c;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_64 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
        uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_64;
        }
        local_6c = CONCAT44(local_6c._4_4_,uVar5);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar1 != '\0') {
        local_64._1_3_ = (undefined3)(local_64 >> 8);
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      }
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,(long)&local_78 + 4,4);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        uVar5 = (local_78._4_4_ & 0xff00ff00) >> 8 | (local_78._4_4_ & 0xff00ff) << 8;
        local_64 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_64 = local_78._4_4_;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_64 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
        uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_64;
        }
        local_78 = CONCAT44(uVar5,(uint)local_78);
        cVar1 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar1 != '\0') {
        local_64._1_3_ = (undefined3)(local_64 >> 8);
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      }
      if ((int)param_2[1] == 2) {
        lVar8 = *param_2;
        puVar4 = (uint *)&local_78;
LAB_036560cc:
        (**(code **)(lVar8 + 0x20))(param_2,puVar4,4);
      }
      else {
        if ((int)param_2[1] != 1) {
          lVar8 = *param_2;
          local_64 = 0;
          puVar4 = &local_64;
          goto LAB_036560cc;
        }
        uVar5 = ((uint)local_78 & 0xff00ff00) >> 8 | ((uint)local_78 & 0xff00ff) << 8;
        local_64 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_64 = (uint)local_78;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
      }
      lVar9 = lVar9 + 0x28;
    } while (lVar9 != 0x230);
  }
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 8),0x800);
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x10),0x8000);
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x18),0x2000);
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x20),0x2000);
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x28),0x100);
  if (4 < local_70) {
    local_64 = CONCAT31(local_64._1_3_,*(undefined1 *)(param_1 + 0x1f69));
    (**(code **)(*param_2 + 0x28))(param_2,&local_64);
    *(bool *)(param_1 + 0x1f69) = (char)local_64 != '\0';
    if (10 < local_70) {
      local_64 = CONCAT31(local_64._1_3_,*(undefined1 *)(param_1 + 0x1f6a));
      (**(code **)(*param_2 + 0x28))(param_2,&local_64);
      *(bool *)(param_1 + 0x1f6a) = (char)local_64 != '\0';
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x30),0x2000);
  if (local_70 < 9) {
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x38),0x8000);
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x40),0x2000);
  }
  local_64._0_1_ = *(char *)(param_1 + 0x1bf8);
  (**(code **)(*param_2 + 0x28))(param_2,&local_64);
  *(char *)(param_1 + 0x1bf8) = (char)local_64 != '\0';
  local_64 = CONCAT31(local_64._1_3_,*(undefined1 *)(param_1 + 0x1bf9));
  (**(code **)(*param_2 + 0x28))(param_2,&local_64);
  *(bool *)(param_1 + 0x1bf9) = (char)local_64 != '\0';
  if ((param_3 < 0xc) && (param_4 < 0xd)) {
    local_6c._0_4_ = 0;
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_6c._0_4_ = 3;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_64 = CONCAT31(local_64._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,&local_6c,4);
      cVar1 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = ((uint)local_6c & 0xff00ff00) >> 8 | ((uint)local_6c & 0xff00ff) << 8;
      local_64 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_64 = (uint)local_6c;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_64);
      cVar1 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_64 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
      uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
      local_6c._0_4_ = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_6c._0_4_ = local_64;
      }
      cVar1 = *(char *)((long)param_2 + 0xc);
    }
  }
  if (cVar1 != '\0') {
    local_64._1_3_ = (undefined3)(local_64 >> 8);
    local_64 = CONCAT31(local_64._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
  }
  puVar4 = (uint *)(param_1 + 0x278);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_64 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
    uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_64;
    }
    *puVar4 = uVar5;
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_64._1_3_ = (undefined3)(local_64 >> 8);
    local_64 = CONCAT31(local_64._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
  }
  puVar4 = (uint *)(param_1 + 0x27c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_64 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
    uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_64;
    }
    *puVar4 = uVar5;
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_64._1_3_ = (undefined3)(local_64 >> 8);
    local_64 = CONCAT31(local_64._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
  }
  puVar4 = (uint *)(param_1 + 0x280);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_64 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
    uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_64;
    }
    *puVar4 = uVar5;
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_64._1_3_ = (undefined3)(local_64 >> 8);
    local_64 = CONCAT31(local_64._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
  }
  puVar4 = (uint *)(param_1 + 0x284);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_64 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
    uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_64;
    }
    *puVar4 = uVar5;
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_64._1_3_ = (undefined3)(local_64 >> 8);
    local_64 = CONCAT31(local_64._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
  }
  puVar4 = (uint *)(param_1 + 0x288);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_64 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
    uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_64;
    }
    *puVar4 = uVar5;
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_64._1_3_ = (undefined3)(local_64 >> 8);
    local_64 = CONCAT31(local_64._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
  }
  puVar4 = (uint *)(param_1 + 0x28c);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_64 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
    uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_64;
    }
    *puVar4 = uVar5;
    cVar1 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar1 != '\0') {
    local_64._1_3_ = (undefined3)(local_64 >> 8);
    local_64 = CONCAT31(local_64._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
  }
  puVar4 = (uint *)(param_1 + 0x290);
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar5 = *puVar4;
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
  }
  else {
    local_64 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
    uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar5 = local_64;
    }
    *puVar4 = uVar5;
  }
  iVar6 = (int)param_2[1];
  if (iVar6 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_64 = CONCAT31(local_64._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_03656ff0:
          local_64 = 0;
          goto LAB_03656ff4;
        }
        goto LAB_03656f38;
      }
    }
LAB_03656ff4:
    lVar9 = *param_2;
    puVar4 = &local_64;
LAB_03656ffc:
    (**(code **)(lVar9 + 0x20))(param_2,puVar4,4);
LAB_03657030:
    iVar6 = (int)param_2[1];
  }
  else {
    if (iVar6 == 1) {
      uVar5 = *(uint *)(param_1 + 0x298);
      local_6c._4_4_ = uVar5;
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_03656ff0;
          goto LAB_03656f20;
        }
        lVar9 = *param_2;
        puVar4 = (uint *)((long)&local_6c + 4);
        goto LAB_03656ffc;
      }
LAB_03656f20:
      uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_64 = uVar5;
      }
LAB_03656f38:
      (**(code **)(*param_2 + 0x38))(param_2,&local_64);
      goto LAB_03657030;
    }
    if (iVar6 == 0) {
      if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03656fb8:
        local_64 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
        uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar5 = local_64;
        }
      }
      else {
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
        if ((int)param_2[1] == 2) {
          (**(code **)(*param_2 + 0x20))(param_2,(long)&local_6c + 4,4);
          uVar5 = local_6c._4_4_;
        }
        else {
          if ((int)param_2[1] != 1) goto LAB_03656fb8;
          (**(code **)(*param_2 + 0x38))(param_2,&local_64);
          uVar5 = extraout_w8;
        }
      }
      *(uint *)(param_1 + 0x298) = uVar5;
      goto LAB_03657030;
    }
  }
  if (iVar6 == 2) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_64 = CONCAT31(local_64._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) {
LAB_03657188:
          local_64 = 0;
          goto LAB_0365718c;
        }
        goto LAB_03657138;
      }
    }
LAB_0365718c:
    lVar9 = *param_2;
    puVar4 = &local_64;
LAB_03657194:
    (**(code **)(lVar9 + 0x20))(param_2,puVar4,4);
  }
  else if (iVar6 == 1) {
    uVar5 = *(uint *)(param_1 + 0x29c);
    local_6c._4_4_ = uVar5;
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_64 = CONCAT31(local_64._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      if ((int)param_2[1] != 2) {
        if ((int)param_2[1] != 1) goto LAB_03657188;
        goto LAB_03657120;
      }
      lVar9 = *param_2;
      puVar4 = (uint *)((long)&local_6c + 4);
      goto LAB_03657194;
    }
LAB_03657120:
    uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_64 = uVar5;
    }
LAB_03657138:
    (**(code **)(*param_2 + 0x38))(param_2,&local_64);
  }
  else if (iVar6 == 0) {
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03657150:
      local_64 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
      uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_64;
      }
    }
    else {
      local_64 = CONCAT31(local_64._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,(long)&local_6c + 4,4);
        uVar5 = local_6c._4_4_;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_03657150;
        (**(code **)(*param_2 + 0x38))(param_2,&local_64);
        uVar5 = extraout_w8_00;
      }
    }
    *(uint *)(param_1 + 0x29c) = uVar5;
  }
  local_64._0_1_ = *(char *)(param_1 + 0x2a0);
  (**(code **)(*param_2 + 0x28))(param_2,&local_64);
  *(bool *)(param_1 + 0x2a0) = (char)local_64 != '\0';
  local_64 = CONCAT31(local_64._1_3_,*(undefined1 *)(param_1 + 0x2a1));
  (**(code **)(*param_2 + 0x28))(param_2,&local_64);
  *(bool *)(param_1 + 0x2a1) = (char)local_64 != '\0';
  if ((uint)local_6c != 0) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_64 = CONCAT31(local_64._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
    }
    puVar4 = (uint *)(param_1 + 0x294);
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar4,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar5 = *puVar4;
      uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_64 = uVar5;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_64);
    }
    else {
      local_64 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
      uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_64;
      }
      *puVar4 = uVar5;
    }
    if (2 < (uint)local_6c) {
      iVar6 = (int)param_2[1];
      if (iVar6 == 2) {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_64 = CONCAT31(local_64._1_3_,4);
          (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
          if ((int)param_2[1] != 2) {
            if ((int)param_2[1] != 1) {
LAB_03657474:
              local_64 = 0;
              goto LAB_03657478;
            }
            goto LAB_03657410;
          }
        }
LAB_03657478:
        lVar9 = *param_2;
        puVar4 = &local_64;
      }
      else {
        if (iVar6 != 1) {
          if (iVar6 != 0) goto joined_r0x03657494;
          if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_0365743c:
            local_64 = 0;
            (**(code **)(*param_2 + 0x20))(param_2,&local_64,4);
            uVar5 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
            uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
            if ((int)param_2[2] != 0xff00) {
              uVar5 = local_64;
            }
          }
          else {
            local_64 = CONCAT31(local_64._1_3_,4);
            (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
            if ((int)param_2[1] == 2) {
              (**(code **)(*param_2 + 0x20))(param_2,(long)&local_6c + 4,4);
              uVar5 = local_6c._4_4_;
            }
            else {
              if ((int)param_2[1] != 1) goto LAB_0365743c;
              (**(code **)(*param_2 + 0x38))(param_2,&local_64);
              uVar5 = extraout_w8_01;
            }
          }
          *(uint *)(param_1 + 0x2a4) = uVar5;
          goto joined_r0x03657494;
        }
        uVar5 = *(uint *)(param_1 + 0x2a4);
        local_6c._4_4_ = uVar5;
        if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_036573f8:
          uVar2 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
          local_64 = uVar2 >> 0x10 | uVar2 << 0x10;
          if ((int)param_2[2] != 0xff00) {
            local_64 = uVar5;
          }
LAB_03657410:
          (**(code **)(*param_2 + 0x38))(param_2,&local_64);
          goto joined_r0x03657494;
        }
        local_64 = CONCAT31(local_64._1_3_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_64,1);
        if ((int)param_2[1] != 2) {
          if ((int)param_2[1] != 1) goto LAB_03657474;
          goto LAB_036573f8;
        }
        lVar9 = *param_2;
        puVar4 = (uint *)((long)&local_6c + 4);
      }
      (**(code **)(lVar9 + 0x20))(param_2,puVar4,4);
    }
  }
joined_r0x03657494:
  if ((8 < local_70) && (*(int *)(param_1 + 0x2a4) - 2U < 5)) {
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x38),0x8000);
    (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(param_1 + 0x40),0x2000);
  }
  if ((param_3 == 0xb) && (param_4 < 0x43)) {
    FUN_03652360(param_2,param_1 + 0x7f8,param_1 + 0xbf8);
    if ((int)param_2[1] == 0) {
      uVar3 = 0;
      plVar7 = (long *)(param_1 + 0xc00);
      do {
        uVar5 = *(uint *)(param_1 + 0x7f8 + uVar3 * 4);
        lVar9 = param_1 + (uVar3 >> 2 & 0x3fffffff) * 0x10;
        uVar3 = uVar3 + 1;
        lVar8 = *(long *)(lVar9 + 0x2c0);
        *(undefined1 *)(plVar7 + -1) = *(undefined1 *)(lVar9 + 0x2b8);
        *plVar7 = lVar8 + (ulong)uVar5;
        plVar7 = plVar7 + 2;
      } while (uVar3 != 0x100);
    }
  }
  else {
    uVar3 = FUN_04002180(param_2,1,1,&local_64);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lVar9 = param_2[1];
    FUN_03652360(param_2,param_1 + 0x7f8,param_1 + 0xbf8);
    if ((int)lVar9 == 0) {
      uVar3 = 0;
      plVar7 = (long *)(param_1 + 0xc00);
      do {
        uVar5 = *(uint *)(param_1 + 0x7f8 + uVar3 * 4);
        lVar9 = param_1 + (uVar3 >> 2 & 0x3fffffff) * 0x10;
        uVar3 = uVar3 + 1;
        lVar8 = *(long *)(lVar9 + 0x2c0);
        *(undefined1 *)(plVar7 + -1) = *(undefined1 *)(lVar9 + 0x2b8);
        *plVar7 = lVar8 + (ulong)uVar5;
        plVar7 = plVar7 + 2;
      } while (uVar3 != 0x100);
    }
  }
  iVar6 = *(int *)(param_1 + 0x298);
  if (0x98 < iVar6) {
    if ((iVar6 != 0x99) && (iVar6 != 0x9f)) {
      if (iVar6 != 0xce) {
        return 1;
      }
      goto switchD_036575dc_caseD_58;
    }
switchD_036575dc_caseD_10:
    FUN_0364d8b8(param_1 + 0x1de8,param_2,local_70);
    return 1;
  }
  switch(iVar6) {
  case 1:
    FUN_0364bfc4(param_1 + 0x1c30,param_2);
    break;
  case 4:
    FUN_0364ccb0(param_1 + 0x1c68,param_2,local_70);
    break;
  case 5:
    FUN_0364f294(param_1 + 0x1d08,param_2);
    break;
  case 9:
    FUN_0364ea9c(param_1 + 0x1ca0,param_2);
    lVar9 = 0x1cb4;
    goto LAB_036576a0;
  case 10:
    FUN_0364ea9c(param_1 + 0x1cd8,param_2);
    lVar9 = 0x1cec;
LAB_036576a0:
    FUN_0364ea9c(param_1 + lVar9,param_2);
    break;
  case 0x10:
    goto switchD_036575dc_caseD_10;
  case 0x12:
    FUN_03651edc(param_1 + 0x1f38,param_2);
    break;
  case 0x13:
    FUN_03651424(param_1 + 0x1db8,param_2);
    break;
  case 0x58:
switchD_036575dc_caseD_58:
    (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0x1f30);
    return 1;
  }
  return 1;
}


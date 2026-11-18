
long * FUN_036445b0(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint local_6c;
  undefined8 local_68;
  
  local_6c = 3;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_68 = CONCAT71(local_68._1_7_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_6c,4);
    cVar4 = *(char *)((long)param_1 + 0xc);
  }
  else if ((int)param_1[1] == 1) {
    uVar6 = 0x3000000;
    if ((int)param_1[2] != 0xff00) {
      uVar6 = 3;
    }
    local_68 = CONCAT44(local_68._4_4_,uVar6);
    (**(code **)(*param_1 + 0x38))(param_1,&local_68);
    cVar4 = *(char *)((long)param_1 + 0xc);
  }
  else {
    local_68 = (ulong)local_68._4_4_ << 0x20;
    (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
    uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
    local_6c = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      local_6c = (uint)local_68;
    }
    cVar4 = *(char *)((long)param_1 + 0xc);
  }
  if (cVar4 != '\0') {
    local_68._1_7_ = (undefined7)(local_68 >> 8);
    local_68 = CONCAT71(local_68._1_7_,8);
    (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,8);
  }
  else if ((int)param_1[1] == 1) {
    uVar7 = *param_2;
    uVar8 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    local_68 = uVar8 >> 0x20 | uVar8 << 0x20;
    if ((int)param_1[2] != 0xff00) {
      local_68 = uVar7;
    }
    (**(code **)(*param_1 + 0x40))(param_1,&local_68);
  }
  else {
    local_68 = 0;
    (**(code **)(*param_1 + 0x20))(param_1,&local_68,8);
    uVar8 = (local_68 & 0xff00ff00ff00ff00) >> 8 | (local_68 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    if ((int)param_1[2] != 0xff00) {
      uVar8 = local_68;
    }
    *param_2 = uVar8;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2 + 1,0x10);
  (**(code **)(*param_1 + 0x20))(param_1,param_2 + 3,0xf000);
  (**(code **)(*param_1 + 0x20))(param_1,param_2 + 0x1e03,0xf000);
  puVar1 = param_2 + 0x3c03;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_68 = CONCAT71(local_68._1_7_,4);
    (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
  }
  if ((int)param_1[1] == 2) {
    (**(code **)(*param_1 + 0x20))(param_1,puVar1,4);
  }
  else {
    if ((int)param_1[1] != 1) {
      local_68 = (ulong)local_68._4_4_ << 0x20;
      (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
      uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if ((int)param_1[2] != 0xff00) {
        uVar5 = (uint)local_68;
      }
      *(uint *)puVar1 = uVar5;
      goto joined_r0x03644858;
    }
    uVar3 = (uint)*puVar1;
    uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((int)param_1[2] != 0xff00) {
      uVar5 = uVar3;
    }
    local_68 = CONCAT44(local_68._4_4_,uVar5);
    (**(code **)(*param_1 + 0x38))(param_1,&local_68);
  }
  uVar5 = (uint)*puVar1;
joined_r0x03644858:
  if (uVar5 != 0) {
    uVar8 = 0;
    do {
      if (*(char *)((long)param_1 + 0xc) != '\0') {
        local_68 = CONCAT71(local_68._1_7_,4);
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
      }
      puVar2 = (uint *)((long)param_2 + 0x1e01c);
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,puVar2,4);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else if ((int)param_1[1] == 1) {
        uVar3 = *puVar2;
        uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = uVar3;
        }
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        (**(code **)(*param_1 + 0x38))(param_1,&local_68);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
        uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = (uint)local_68;
        }
        *puVar2 = uVar5;
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      if (cVar4 != '\0') {
        local_68._1_7_ = (undefined7)(local_68 >> 8);
        local_68 = CONCAT71(local_68._1_7_,4);
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
      }
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,param_2 + 0x3c04,4);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else if ((int)param_1[1] == 1) {
        uVar3 = (uint)param_2[0x3c04];
        uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = uVar3;
        }
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        (**(code **)(*param_1 + 0x38))(param_1,&local_68);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
        uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = (uint)local_68;
        }
        *(uint *)(param_2 + 0x3c04) = uVar5;
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      if (cVar4 != '\0') {
        local_68._1_7_ = (undefined7)(local_68 >> 8);
        local_68 = CONCAT71(local_68._1_7_,4);
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
      }
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,(long)param_2 + 0x1e024,4);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else if ((int)param_1[1] == 1) {
        uVar3 = *(uint *)((long)param_2 + 0x1e024);
        uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = uVar3;
        }
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        (**(code **)(*param_1 + 0x38))(param_1,&local_68);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
        uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = (uint)local_68;
        }
        *(uint *)((long)param_2 + 0x1e024) = uVar5;
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      if (cVar4 != '\0') {
        local_68._1_7_ = (undefined7)(local_68 >> 8);
        local_68 = CONCAT71(local_68._1_7_,4);
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
      }
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,param_2 + 0x3c05,4);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else if ((int)param_1[1] == 1) {
        uVar3 = (uint)param_2[0x3c05];
        uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = uVar3;
        }
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        (**(code **)(*param_1 + 0x38))(param_1,&local_68);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
        uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = (uint)local_68;
        }
        *(uint *)(param_2 + 0x3c05) = uVar5;
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      if (cVar4 != '\0') {
        local_68._1_7_ = (undefined7)(local_68 >> 8);
        local_68 = CONCAT71(local_68._1_7_,4);
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
      }
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,(long)param_2 + 0x1e02c,4);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else if ((int)param_1[1] == 1) {
        uVar3 = *(uint *)((long)param_2 + 0x1e02c);
        uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = uVar3;
        }
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        (**(code **)(*param_1 + 0x38))(param_1,&local_68);
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      else {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
        uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = (uint)local_68;
        }
        *(uint *)((long)param_2 + 0x1e02c) = uVar5;
        cVar4 = *(char *)((long)param_1 + 0xc);
      }
      if (cVar4 != '\0') {
        local_68._1_7_ = (undefined7)(local_68 >> 8);
        local_68 = CONCAT71(local_68._1_7_,4);
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,1);
      }
      if ((int)param_1[1] == 2) {
        (**(code **)(*param_1 + 0x20))(param_1,param_2 + 0x3c06,4);
      }
      else if ((int)param_1[1] == 1) {
        uVar3 = (uint)param_2[0x3c06];
        uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = uVar3;
        }
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        (**(code **)(*param_1 + 0x38))(param_1,&local_68);
      }
      else {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x20))(param_1,&local_68,4);
        uVar5 = ((uint)local_68 & 0xff00ff00) >> 8 | ((uint)local_68 & 0xff00ff) << 8;
        uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
        if ((int)param_1[2] != 0xff00) {
          uVar5 = (uint)local_68;
        }
        *(uint *)(param_2 + 0x3c06) = uVar5;
      }
      (**(code **)(*param_1 + 0x20))(param_1,(long)param_2 + 0x1e034,0x3000);
      (**(code **)(*param_1 + 0x20))(param_1,(long)param_2 + 0x21034,0x20);
      (**(code **)(*param_1 + 0x20))(param_1,(long)param_2 + 0x21054,0x100);
      uVar8 = uVar8 + 1;
      param_2 = param_2 + 0x627;
    } while (uVar8 < (uint)*puVar1);
  }
  return param_1;
}


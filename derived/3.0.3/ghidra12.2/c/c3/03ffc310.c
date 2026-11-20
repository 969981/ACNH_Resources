
uint FUN_03ffc310(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  uint extraout_w8;
  long lVar9;
  ulong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined8 local_8c8;
  undefined2 local_8c0;
  undefined2 uStack_8bc;
  undefined2 local_8b8;
  undefined2 uStack_8b4;
  undefined2 local_8b0;
  undefined2 uStack_8ac;
  undefined2 local_8a8;
  undefined2 uStack_8a4;
  undefined2 local_8a0;
  undefined2 uStack_89c;
  undefined2 local_898;
  undefined2 uStack_894;
  undefined2 local_890;
  undefined2 uStack_88c;
  undefined1 auStack_888 [2112];
  uint local_48;
  uint local_44;
  
  uVar7 = FUN_04002180(param_2,3,0,&local_44);
  if ((uVar7 & 1) == 0) goto LAB_03ffc92c;
  if (local_44 == 0) {
    local_48 = 0;
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
    }
    else if ((int)param_2[1] == 1) {
      local_8c8 = (ulong)local_8c8._4_4_ << 0x20;
      (**(code **)(*param_2 + 0x38))(param_2,&local_8c8);
    }
    else {
      local_8c8 = (ulong)local_8c8._4_4_ << 0x20;
      (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,4);
      uVar12 = ((uint)local_8c8 & 0xff00ff00) >> 8 | ((uint)local_8c8 & 0xff00ff) << 8;
      local_48 = uVar12 >> 0x10 | uVar12 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_48 = (uint)local_8c8;
      }
    }
    if ((int)param_2[1] == 2) {
      lVar9 = *param_2;
      puVar8 = &local_48;
LAB_03ffc7e0:
      (**(code **)(lVar9 + 0x20))(param_2,puVar8,4);
    }
    else {
      if ((int)param_2[1] != 1) {
        lVar9 = *param_2;
        local_8c8 = (ulong)local_8c8._4_4_ << 0x20;
        puVar8 = (uint *)&local_8c8;
        goto LAB_03ffc7e0;
      }
      uVar12 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
      uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar12 = local_48;
      }
      local_8c8 = CONCAT44(local_8c8._4_4_,uVar12);
      (**(code **)(*param_2 + 0x38))(param_2,&local_8c8);
    }
LAB_03ffc7f0:
    FUN_03611e60(param_2,&local_8c8,auStack_888);
    *(short *)(param_1 + 0x8c) = (short)local_8c8;
    *(short *)((long)param_1 + 0x462) = (short)(local_8c8 >> 0x20);
    *(undefined2 *)((long)param_1 + 0x464) = local_8c0;
    *(undefined2 *)((long)param_1 + 0x466) = uStack_8bc;
    *(undefined2 *)(param_1 + 0x8d) = local_8b8;
    *(undefined2 *)((long)param_1 + 0x46a) = uStack_8b4;
    *(undefined2 *)((long)param_1 + 0x46c) = local_8b0;
    *(undefined2 *)((long)param_1 + 0x46e) = uStack_8ac;
    *(undefined2 *)(param_1 + 0x8e) = local_8a8;
    *(undefined2 *)((long)param_1 + 0x472) = uStack_8a4;
    *(undefined2 *)((long)param_1 + 0x474) = local_8a0;
    *(undefined2 *)((long)param_1 + 0x476) = uStack_89c;
    *(undefined2 *)(param_1 + 0x8f) = local_898;
    *(undefined2 *)((long)param_1 + 0x47a) = uStack_894;
    *(undefined2 *)((long)param_1 + 0x47c) = local_890;
    *(undefined2 *)((long)param_1 + 0x47e) = uStack_88c;
    cVar5 = *(char *)((long)param_2 + 0xc);
  }
  else {
    if (local_44 == 1) {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_8c8 = CONCAT71(local_8c8._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,1);
      }
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_48,4);
        cVar5 = *(char *)((long)param_2 + 0xc);
      }
      else if ((int)param_2[1] == 1) {
        (**(code **)(*param_2 + 0x38))(param_2,&local_8c8);
        cVar5 = *(char *)((long)param_2 + 0xc);
      }
      else {
        local_8c8 = local_8c8 & 0xffffffff00000000;
        (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,4);
        uVar12 = ((uint)local_8c8 & 0xff00ff00) >> 8 | ((uint)local_8c8 & 0xff00ff) << 8;
        local_48 = uVar12 >> 0x10 | uVar12 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_48 = (uint)local_8c8;
        }
        cVar5 = *(char *)((long)param_2 + 0xc);
      }
      if (cVar5 != '\0') {
        local_8c8._1_7_ = (undefined7)(local_8c8 >> 8);
        local_8c8 = CONCAT71(local_8c8._1_7_,4);
        (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,1);
      }
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,4);
        uVar12 = (uint)local_8c8;
      }
      else if ((int)param_2[1] == 1) {
        (**(code **)(*param_2 + 0x38))(param_2,&local_8c8);
        uVar12 = extraout_w8;
      }
      else {
        local_8c8 = local_8c8 & 0xffffffff00000000;
        (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,4);
        uVar12 = ((uint)local_8c8 & 0xff00ff00) >> 8 | ((uint)local_8c8 & 0xff00ff) << 8;
        uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          uVar12 = (uint)local_8c8;
        }
      }
      *param_1 = (long)(int)local_48;
      param_1[1] = (long)(int)uVar12;
LAB_03ffc5e4:
      FUN_03611e60(param_2,&local_8c8,&local_48);
      lVar9 = 0;
      puVar11 = (undefined2 *)((long)param_1 + 0x22);
      do {
        lVar2 = lVar9 + 8;
        uVar3 = *(undefined4 *)(auStack_888 + lVar9 + -0x3c);
        puVar11[-1] = (short)*(undefined4 *)(auStack_888 + lVar9 + -0x40);
        *puVar11 = (short)uVar3;
        lVar9 = lVar2;
        puVar11 = puVar11 + 2;
      } while (lVar2 != 0x880);
      goto LAB_03ffc7f0;
    }
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_8c8 = CONCAT71(local_8c8._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,param_1,8);
      cVar5 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar10 = *param_1;
      uVar6 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      local_8c8 = uVar6 >> 0x20 | uVar6 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_8c8 = uVar10;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_8c8);
      cVar5 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_8c8 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,8);
      uVar6 = (local_8c8 & 0xff00ff00ff00ff00) >> 8 | (local_8c8 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar6 = local_8c8;
      }
      *param_1 = uVar6;
      cVar5 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar5 != '\0') {
      local_8c8._1_7_ = (undefined7)(local_8c8 >> 8);
      local_8c8 = CONCAT71(local_8c8._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,1);
    }
    puVar1 = param_1 + 1;
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,8);
    }
    else if ((int)param_2[1] == 1) {
      uVar10 = *puVar1;
      uVar6 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      local_8c8 = uVar6 >> 0x20 | uVar6 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_8c8 = uVar10;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_8c8);
    }
    else {
      local_8c8 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,8);
      uVar6 = (local_8c8 & 0xff00ff00ff00ff00) >> 8 | (local_8c8 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar6 = local_8c8;
      }
      *puVar1 = uVar6;
    }
    if (local_44 < 3) goto LAB_03ffc5e4;
    FUN_03611b50(param_2,param_1 + 4,param_1 + 0x8c);
    FUN_03611b50(param_2,param_1 + 0x8c,param_1 + 0x90);
    cVar5 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar5 != '\0') {
    local_8c8._1_7_ = (undefined7)(local_8c8 >> 8);
    local_8c8 = CONCAT71(local_8c8._1_7_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,1);
  }
  param_1 = param_1 + 2;
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,param_1,4);
  }
  else if ((int)param_2[1] == 1) {
    uVar4 = (uint)*param_1;
    uVar12 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar12 = uVar4;
    }
    local_8c8 = CONCAT44(local_8c8._4_4_,uVar12);
    (**(code **)(*param_2 + 0x38))(param_2,&local_8c8);
  }
  else {
    local_8c8 = (ulong)local_8c8._4_4_ << 0x20;
    (**(code **)(*param_2 + 0x20))(param_2,&local_8c8,4);
    uVar12 = ((uint)local_8c8 & 0xff00ff00) >> 8 | ((uint)local_8c8 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar12 = (uint)local_8c8;
    }
    *(uint *)param_1 = uVar12;
  }
LAB_03ffc92c:
  return uVar7 & 1;
}


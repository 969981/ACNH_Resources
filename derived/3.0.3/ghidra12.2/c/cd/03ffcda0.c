
uint FUN_03ffcda0(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_44 [4];
  undefined8 local_28;
  
  uVar6 = FUN_04002180(param_2,3,0,auStack_44);
  if ((uVar6 & 1) != 0) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_28 = CONCAT71(local_28._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,param_1,8);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar7 = *param_1;
      uVar5 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      local_28 = uVar5 >> 0x20 | uVar5 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_28 = uVar7;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_28 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,8);
      uVar5 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      cVar3 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar3 != '\0') {
      local_28._1_7_ = (undefined7)(local_28 >> 8);
      local_28 = CONCAT71(local_28._1_7_,8);
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,1);
    }
    puVar1 = param_1 + 1;
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,puVar1,8);
    }
    else if ((int)param_2[1] == 1) {
      uVar7 = *puVar1;
      uVar5 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      local_28 = uVar5 >> 0x20 | uVar5 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        local_28 = uVar7;
      }
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    else {
      local_28 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,8);
      uVar5 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      if ((int)param_2[2] != 0xff00) {
        uVar5 = local_28;
      }
      *puVar1 = uVar5;
    }
    FUN_03611b50(param_2,param_1 + 4,param_1 + 0x8c);
    FUN_03611b50(param_2,param_1 + 0x8c,param_1 + 0x90);
    FUN_03611b50(param_2,param_1 + 0x90,param_1 + 0x94);
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_28 = CONCAT71(local_28._1_7_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,1);
    }
    param_1 = param_1 + 2;
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,param_1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar2 = (uint)*param_1;
      uVar4 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = uVar2;
      }
      local_28 = CONCAT44(local_28._4_4_,uVar4);
      (**(code **)(*param_2 + 0x38))(param_2,&local_28);
    }
    else {
      local_28 = (ulong)local_28._4_4_ << 0x20;
      (**(code **)(*param_2 + 0x20))(param_2,&local_28,4);
      uVar4 = ((uint)local_28 & 0xff00ff00) >> 8 | ((uint)local_28 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar4 = (uint)local_28;
      }
      *(uint *)param_1 = uVar4;
    }
  }
  return uVar6 & 1;
}



uint FUN_03ffd744(uint *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_18 [4];
  uint local_14;
  
  uVar4 = FUN_04002180(param_2,0,0,auStack_18);
  if ((uVar4 & 1) != 0) {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,param_1,4);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else if ((int)param_2[1] == 1) {
      uVar1 = *param_1;
      uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar1;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_14 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
      uVar1 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar1 = local_14;
      }
      *param_1 = uVar1;
      cVar2 = *(char *)((long)param_2 + 0xc);
    }
    if (cVar2 != '\0') {
      local_14._1_3_ = (undefined3)(local_14 >> 8);
      local_14 = CONCAT31(local_14._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,1);
    }
    param_1 = param_1 + 1;
    if ((int)param_2[1] == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,param_1,4);
    }
    else if ((int)param_2[1] == 1) {
      uVar1 = *param_1;
      uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      local_14 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_14 = uVar1;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_14);
    }
    else {
      local_14 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_14,4);
      uVar1 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar1 = local_14;
      }
      *param_1 = uVar1;
    }
  }
  return uVar4 & 1;
}


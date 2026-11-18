
void FUN_0345c380(uint *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_68;
  uint local_64;
  int local_60;
  long local_58;
  
  lVar2 = *param_2;
  uVar4 = *(int *)(lVar2 + 0xc) - *(int *)(lVar2 + 8);
  uVar3 = -uVar4;
  if (-1 < (int)uVar4) {
    uVar3 = uVar4;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    if ((int)uVar4 < 0) {
      uVar6 = *param_1;
      uVar4 = uVar6 - uVar3;
      if (uVar3 <= uVar6) {
        uVar7 = uVar4;
        do {
          local_58 = *param_2;
          local_60 = 0xffffffff;
          local_68 = 2;
          local_64 = uVar7;
          (*(code *)**(undefined8 **)(param_1 + 2))(param_1 + 2,&local_68);
          uVar6 = *param_1;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      if (0 < (int)uVar4) {
        uVar4 = uVar4 + 1;
        do {
          uVar6 = uVar6 - 1;
          local_60 = uVar4 - 2;
          local_58 = *param_2;
          local_68 = 1;
          local_64 = uVar6;
          (*(code *)**(undefined8 **)(param_1 + 2))(param_1 + 2,&local_68);
          uVar4 = uVar4 - 1;
        } while (1 < uVar4);
      }
      uVar4 = 0;
      do {
        local_58 = *param_2;
        local_60 = 0xffffffff;
        local_68 = 0;
        local_64 = uVar4;
        (*(code *)**(undefined8 **)(param_1 + 2))(param_1 + 2,&local_68);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
    else if (*(int *)(lVar2 + 0xc) != *(int *)(lVar2 + 8)) {
      uVar4 = 0;
      puVar1 = param_1 + 2;
      do {
        local_58 = *param_2;
        local_60 = 0xffffffff;
        local_68 = 2;
        local_64 = uVar4;
        (*(code *)**(undefined8 **)puVar1)(puVar1,&local_68);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
      uVar4 = *param_1;
      if (uVar3 < uVar4) {
        iVar5 = 0;
        do {
          local_60 = uVar3 + iVar5;
          local_58 = *param_2;
          local_68 = 1;
          local_64 = iVar5;
          (*(code *)**(undefined8 **)(param_1 + 2))(puVar1,&local_68);
          uVar4 = *param_1;
          iVar5 = iVar5 + 1;
        } while (uVar3 + iVar5 < uVar4);
      }
      uVar3 = uVar4 - uVar3;
      if (uVar3 < uVar4) {
        do {
          local_58 = *param_2;
          local_60 = 0xffffffff;
          local_68 = 0;
          local_64 = uVar3;
          (*(code *)**(undefined8 **)(param_1 + 2))(puVar1,&local_68);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *param_1);
      }
    }
  }
  else if (*param_1 != 0) {
    uVar3 = 0;
    do {
      local_58 = *param_2;
      local_60 = 0xffffffff;
      local_68 = 2;
      local_64 = uVar3;
      (*(code *)**(undefined8 **)(param_1 + 2))(param_1 + 2,&local_68);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_1);
    if (*param_1 != 0) {
      uVar3 = 0;
      do {
        local_58 = *param_2;
        local_60 = 0xffffffff;
        local_68 = 0;
        local_64 = uVar3;
        (*(code *)**(undefined8 **)(param_1 + 2))(param_1 + 2,&local_68);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *param_1);
    }
  }
  return;
}


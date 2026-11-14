
void FUN_01d7f8f4(long *param_1,char *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  char local_48 [4];
  undefined4 local_44;
  
  if ((((param_4 != 0) && (param_3 != (void *)0x0)) && (local_48[0] = *param_2, local_48[0] != -1))
     && (lVar4 = param_1[4], lVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 6);
    uVar2 = param_4;
    if (*(uint *)(param_1 + 5) < uVar1 + param_4) {
      local_44 = 0x12;
      if ((*(int *)(DAT_05358908 + 0x38) != 0) && (*(char *)(DAT_05358908 + 0xfd8) == '\0')) {
        plVar5 = *(long **)(DAT_05ae6a60 + 0x30);
        uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (((uVar3 & 1) == 0) && (uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5), (uVar3 & 1) == 0))
        {
          FUN_0387de70(plVar5,&DAT_05b03f00,0xe,0x14,0x12);
        }
      }
      uVar2 = (int)param_1[5] - (int)param_1[6];
    }
    memcpy((void *)(lVar4 + (ulong)uVar1),param_3,(ulong)uVar2);
    param_4 = (int)param_1[6] + param_4;
    *(uint *)(param_1 + 6) = param_4;
    if (*(uint *)((long)param_1 + 0x2c) <= param_4) {
      (**(code **)(*param_1 + 0x38))(param_1,local_48);
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
  }
  return;
}


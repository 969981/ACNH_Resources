
void FUN_00512490(long param_1,long param_2,uint param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int local_38;
  char local_34 [4];
  
  FUN_005121d0(param_1,param_3,local_34,&local_38,param_4);
  if (local_34[0] == '\0') {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    iVar4 = (int)param_4[1];
    if (0 < iVar4) {
      lVar7 = 0;
      do {
        lVar3 = *(long *)(*param_4 + lVar7 * 8);
        if (*(char *)(lVar3 + 0x130) != '\0') {
          param_2 = FUN_00514bd0(lVar3,param_1,param_2);
          iVar4 = (int)param_4[1];
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar4);
    }
  }
  else {
    if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < (int)param_3) {
      uVar2 = FUN_00426720(PTR_DAT_048607b8,param_3,8,*(undefined8 *)(param_1 + 0xe0),
                           *(undefined4 *)(param_1 + 0xe8));
      *(undefined8 *)(param_1 + 0xe0) = uVar2;
    }
    uVar5 = *(uint *)(param_1 + 0xe8);
    if ((int)uVar5 < (int)param_3) {
      *(uint *)(param_1 + 0xe8) = param_3;
      memset((void *)(*(long *)(param_1 + 0xe0) + (long)(int)uVar5 * 8),0,
             (ulong)(~uVar5 + param_3) * 8 + 8);
    }
    else if ((int)param_3 < (int)uVar5) {
      *(uint *)(param_1 + 0xe8) = param_3;
    }
    if ((int)(*(uint *)(param_1 + 0xfc) & 0x3fffffff) < (int)param_3) {
      uVar2 = FUN_00426720(PTR_DAT_048607b8,param_3,1,*(undefined8 *)(param_1 + 0xf0),
                           *(undefined4 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf0) = uVar2;
    }
    uVar5 = *(uint *)(param_1 + 0xf8);
    if ((int)uVar5 < (int)param_3) {
      *(uint *)(param_1 + 0xf8) = param_3;
      memset((void *)(*(long *)(param_1 + 0xf0) + (long)(int)uVar5),0,(ulong)(~uVar5 + param_3) + 1)
      ;
    }
    else if ((int)param_3 < (int)uVar5) {
      *(uint *)(param_1 + 0xf8) = param_3;
    }
    if (0 < (int)param_3) {
      uVar5 = 0;
      uVar6 = 0;
      do {
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = uVar5 / param_3;
        }
        *(ulong *)(*(long *)(param_1 + 0xe0) + uVar6 * 8) = (ulong)uVar1 + param_2;
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + local_38;
      } while (param_3 != uVar6);
    }
  }
  return;
}



void FUN_003b3680(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  param_1[9] = ((ulong)*(ushort *)(*param_1 + 0x3c) + (ulong)*(ushort *)(*param_1 + 0x3a)) * 0x30;
  if (*(char *)((long)param_1 + 10) != '\0') {
    lVar3 = 0;
    uVar4 = 0;
    do {
      local_80 = 0;
      uStack_78 = 0;
      FUN_0034fb50(&local_80);
      lVar1 = param_1[8] + lVar3;
      local_80 = CONCAT44(0x50,(int)param_1[9]);
      FUN_00347b80(lVar1);
      FUN_00347b9c(lVar1,param_2,&local_80,param_3,param_4,param_1[9]);
      FUN_003b4940(lVar1,"g3d_SkeletonUniformBlock");
      lVar2 = param_1[9];
      local_70 = 0;
      uStack_68 = 0;
      FUN_0034fb50(&local_70);
      local_70 = CONCAT44(0x50,((uint)*(ushort *)(*param_1 + 0x3c) +
                               (uint)*(ushort *)(*param_1 + 0x3a)) * 0x30);
      lVar1 = FUN_00347a58(param_2,&local_70);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x48;
      param_4 = ((lVar2 + lVar1) - 1U & -lVar1) + param_4;
    } while (uVar4 < *(byte *)((long)param_1 + 10));
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 1;
  return;
}


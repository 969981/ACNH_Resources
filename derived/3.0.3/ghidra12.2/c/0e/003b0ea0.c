
void FUN_003b0ea0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar2 = *(ushort *)(*param_1 + 0x9e);
  if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
    memset((void *)param_1[2],0,(ulong)*(uint *)((long)param_1 + 0x24) << 2);
  }
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xfe;
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar5 = 0x14;
    do {
      if (-1 < *(int *)(*(long *)(*param_1 + 0x50) + lVar5)) {
        lVar6 = (uVar4 >> 5 & 0x7ffffff) * 4;
        *(uint *)(param_1[2] + lVar6) =
             *(uint *)(param_1[2] + lVar6) | 1 << (ulong)((uint)uVar4 & 0x1f);
        *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) | 1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar2 != uVar4);
  }
  iVar3 = (int)param_1[4];
  if ((1 < iVar3) && (uVar1 = *(uint *)((long)param_1 + 0x24), 0 < (int)uVar1)) {
    iVar7 = 0;
    while( true ) {
      if (0 < (int)uVar1) {
        memset((void *)(param_1[3] + (long)(int)(iVar7 * uVar1) * 4),0,(ulong)uVar1 << 2);
        iVar3 = (int)param_1[4];
      }
      iVar7 = iVar7 + 1;
      if (iVar3 <= iVar7) break;
      uVar1 = *(uint *)((long)param_1 + 0x24);
    }
  }
  param_1[0xc] = (ulong)*(ushort *)(*param_1 + 0xa4);
  if (*(char *)((long)param_1 + 10) != '\0') {
    lVar5 = 0;
    uVar4 = 0;
    do {
      local_80 = 0;
      uStack_78 = 0;
      FUN_0034fb50(&local_80);
      local_80 = CONCAT44(0x10,(int)param_1[0xc]);
      lVar6 = param_1[8] + lVar5;
      FUN_00347b80(lVar6);
      FUN_00347b9c(lVar6,param_2,&local_80,param_3,param_4,param_1[0xc]);
      FUN_003b4940(lVar6,"g3d_MaterialUniformBlock");
      lVar8 = param_1[0xc];
      local_70 = 0;
      uStack_68 = 0;
      FUN_0034fb50(&local_70);
      local_70 = CONCAT44(0x10,(uint)*(ushort *)(*param_1 + 0xa4));
      lVar6 = FUN_00347a58(param_2,&local_70);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x48;
      param_4 = ((lVar8 + lVar6) - 1U & -lVar6) + param_4;
    } while (uVar4 < *(byte *)((long)param_1 + 10));
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | 1;
  return;
}


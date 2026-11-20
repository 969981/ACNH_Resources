
undefined8 * FUN_03ebfbe0(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 local_70;
  long local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    lVar3 = 0;
    iVar5 = 1;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar3);
      if (puVar1[0xe] == 0) {
        puVar1[0xe] = param_2;
        *(undefined4 *)((long)puVar1 + 0x7c) = 0;
        *(undefined1 *)(puVar1 + 0xf) = 0xff;
        *(undefined2 *)((long)puVar1 + 0x7a) = 0;
        if (param_4 != 0) {
          uVar2 = *(ushort *)(param_4 + 0x7a);
          if ((uVar2 >> 3 & 1) == 0) {
            uVar4 = 0x80;
          }
          else {
            uVar4 = 0x88;
            *(undefined2 *)((long)puVar1 + 0x7a) = 8;
            uVar2 = *(ushort *)(param_4 + 0x7a);
          }
          if ((uVar2 >> 7 & 1) != 0) {
            *(undefined2 *)((long)puVar1 + 0x7a) = uVar4;
          }
        }
        *(undefined4 *)(puVar1 + 10) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)((long)puVar1 + 0x54) = 0;
        *(undefined2 *)((long)puVar1 + 0x5c) = 0;
        puVar1[0x12] = 0;
        puVar1[0x10] = 0xbf800000;
        puVar1[0x11] = 0xbf800000bf800000;
        puVar1[4] = 0xffffffffffffffff;
        puVar1[5] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[0xc] = 0xffffffff;
        puVar1[0xd] = 0;
        *(undefined4 *)((long)puVar1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
        FUN_03ed2d40(param_2,param_1 + (long)*(int *)(param_1 + 0xf0) * 0x10 + 0xc0);
        local_70 = *(undefined8 *)(param_1 + 0x18);
        local_60 = 0x3f800000;
        if ((*(byte *)(param_4 + 0x7b) & 1) != 0) {
          *(ushort *)((long)puVar1 + 0x7a) = *(ushort *)((long)puVar1 + 0x7a) | 0x100;
        }
        local_68 = param_1;
        local_58 = param_3;
        FUN_03ebfd90(param_1,param_2);
        *(ushort *)((long)puVar1 + 0x7a) = *(ushort *)((long)puVar1 + 0x7a) | 0x10;
        (**(code **)(*param_2 + 0xa0))(param_2,&local_70,puVar1);
        *(ushort *)((long)puVar1 + 0x7a) = *(ushort *)((long)puVar1 + 0x7a) & 0xffef;
        if (iVar5 + -1 < *(int *)(param_1 + 0x138)) {
          return puVar1;
        }
        *(int *)(param_1 + 0x138) = iVar5;
        return puVar1;
      }
      lVar3 = lVar3 + 0x98;
      iVar5 = iVar5 + 1;
    } while ((ulong)*(uint *)(param_1 + 0x48) * 0x98 != lVar3);
  }
  return (undefined8 *)0x0;
}


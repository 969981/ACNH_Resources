
undefined8
FUN_03ed327c(undefined8 param_1,undefined8 *param_2,long *param_3,long *param_4,uint param_5,
            int *param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 local_70;
  long lStack_68;
  
  local_70 = *param_2;
  lStack_68 = param_2[1];
  if ((param_5 & 1) == 0) {
    plVar3 = param_4;
    if ((long *)*param_3 == param_4) {
      lVar7 = 0;
    }
    else if ((long *)param_3[1] == param_4) {
      lVar7 = 1;
    }
    else if ((long *)param_3[2] == param_4) {
      lVar7 = 2;
    }
    else {
      if ((long *)param_3[3] != param_4) {
        return 0;
      }
      lVar7 = 3;
    }
  }
  else {
    lVar7 = 0;
    plVar3 = (long *)*param_3;
  }
  if (plVar3 == (long *)0x0) {
    puVar5 = (undefined8 *)FUN_03ebfbe0(lStack_68,param_4,param_2[3],param_3);
    param_3[lVar7 + 5] = (long)puVar5;
  }
  else {
    puVar5 = (undefined8 *)param_3[lVar7 + 5];
    *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(lStack_68 + 0x78);
    FUN_03ed0160(plVar3,param_2,puVar5);
    puVar5[0xe] = param_4;
    *(undefined4 *)((long)puVar5 + 0x7c) = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0xff;
    *(undefined2 *)((long)puVar5 + 0x7a) = 0;
    uVar1 = *(ushort *)((long)param_3 + 0x7a);
    if ((uVar1 >> 3 & 1) == 0) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0x88;
      *(undefined2 *)((long)puVar5 + 0x7a) = 8;
      uVar1 = *(ushort *)((long)param_3 + 0x7a);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      *(undefined2 *)((long)puVar5 + 0x7a) = uVar4;
    }
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[0x10] = 0xbf800000;
    puVar5[0x11] = 0xbf800000bf800000;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined2 *)((long)puVar5 + 0x5c) = 0;
    puVar5[0x12] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0xffffffffffffffff;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[0xc] = 0xffffffff;
    puVar5[0xd] = 0;
    FUN_03ebfd90(param_2[1],param_4);
    *(ushort *)((long)puVar5 + 0x7a) = *(ushort *)((long)puVar5 + 0x7a) | 0x10;
    (**(code **)(*param_4 + 0xa0))(param_4,param_2,puVar5);
    *(ushort *)((long)puVar5 + 0x7a) = *(ushort *)((long)puVar5 + 0x7a) & 0xffef;
  }
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  *(undefined4 *)(puVar5 + 9) = 0x3f800000;
  uVar2 = (**(code **)(*param_4 + 0x78))
                    (*(undefined4 *)(param_2[1] + 0xa8),param_4,&local_70,puVar5);
  *(undefined4 *)(param_2[3] + 0x4c) = uVar2;
  iVar6 = (int)lVar7;
  *(short *)((long)param_3 + 0x5a) = (short)lVar7;
  param_3[lVar7] = (long)param_4;
  *(undefined2 *)((long)param_3 + lVar7 * 2 + 0x20) = *(undefined2 *)((long)param_4 + 10);
  if ((iVar6 != 0) && (lVar7 = *param_3, lVar7 != 0)) {
    puVar5 = (undefined8 *)param_3[5];
    *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    FUN_03ed0160(lVar7,param_2,puVar5);
    puVar5[0xe] = 0;
    *(undefined4 *)((long)puVar5 + 0x7c) = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0xff;
    *(undefined2 *)((long)puVar5 + 0x7a) = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined2 *)((long)puVar5 + 0x5c) = 0;
    puVar5[0x12] = 0;
    puVar5[0x10] = 0xbf800000;
    puVar5[0x11] = 0xbf800000bf800000;
    puVar5[0xc] = 0xffffffff;
    puVar5[0xd] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0xffffffffffffffff;
    puVar5[5] = 0;
    *(undefined2 *)(param_3 + 4) = 0xffff;
    *param_3 = 0;
  }
  if ((iVar6 != 1) && (lVar7 = param_3[1], lVar7 != 0)) {
    puVar5 = (undefined8 *)param_3[6];
    *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    FUN_03ed0160(lVar7,param_2,puVar5);
    puVar5[0xe] = 0;
    *(undefined4 *)((long)puVar5 + 0x7c) = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0xff;
    *(undefined2 *)((long)puVar5 + 0x7a) = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined2 *)((long)puVar5 + 0x5c) = 0;
    puVar5[0x12] = 0;
    puVar5[0x10] = 0xbf800000;
    puVar5[0x11] = 0xbf800000bf800000;
    puVar5[0xc] = 0xffffffff;
    puVar5[0xd] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0xffffffffffffffff;
    puVar5[5] = 0;
    *(undefined2 *)((long)param_3 + 0x22) = 0xffff;
    param_3[1] = 0;
  }
  if ((iVar6 != 2) && (lVar7 = param_3[2], lVar7 != 0)) {
    puVar5 = (undefined8 *)param_3[7];
    *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    FUN_03ed0160(lVar7,param_2,puVar5);
    puVar5[0xe] = 0;
    *(undefined4 *)((long)puVar5 + 0x7c) = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0xff;
    *(undefined2 *)((long)puVar5 + 0x7a) = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined2 *)((long)puVar5 + 0x5c) = 0;
    puVar5[0x12] = 0;
    puVar5[0x10] = 0xbf800000;
    puVar5[0x11] = 0xbf800000bf800000;
    puVar5[0xc] = 0xffffffff;
    puVar5[0xd] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0xffffffffffffffff;
    puVar5[5] = 0;
    *(undefined2 *)((long)param_3 + 0x24) = 0xffff;
    param_3[2] = 0;
  }
  if ((iVar6 != 3) && (lVar7 = param_3[3], lVar7 != 0)) {
    puVar5 = (undefined8 *)param_3[8];
    *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    FUN_03ed0160(lVar7,param_2,puVar5);
    puVar5[0xe] = 0;
    *(undefined4 *)((long)puVar5 + 0x7c) = 0;
    *(undefined1 *)(puVar5 + 0xf) = 0xff;
    *(undefined2 *)((long)puVar5 + 0x7a) = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined8 *)((long)puVar5 + 0x54) = 0;
    *(undefined2 *)((long)puVar5 + 0x5c) = 0;
    puVar5[0x12] = 0;
    puVar5[0x10] = 0xbf800000;
    puVar5[0x11] = 0xbf800000bf800000;
    puVar5[0xc] = 0xffffffff;
    puVar5[0xd] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0xffffffffffffffff;
    puVar5[5] = 0;
    *(undefined2 *)((long)param_3 + 0x26) = 0xffff;
    param_3[3] = 0;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar6;
  }
  return 1;
}


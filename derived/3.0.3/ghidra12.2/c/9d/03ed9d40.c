
void FUN_03ed9d40(undefined8 param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  char local_24 [4];
  
  param_3[0x12] = param_4;
  if (param_4 == 0) {
    lVar6 = *param_3;
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)param_3[5];
      *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
      FUN_03ed0160(lVar6,param_2,puVar5);
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
      *(undefined2 *)((long)param_3 + 0x5a) = 0xffff;
    }
    lVar6 = param_3[1];
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)param_3[6];
      *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
      FUN_03ed0160(lVar6,param_2,puVar5);
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
      *(undefined2 *)((long)param_3 + 0x5a) = 0xffff;
    }
    lVar6 = param_3[2];
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)param_3[7];
      *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
      FUN_03ed0160(lVar6,param_2,puVar5);
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
      *(undefined2 *)((long)param_3 + 0x5a) = 0xffff;
    }
    lVar6 = param_3[3];
    if (lVar6 == 0) {
      return;
    }
    puVar5 = (undefined8 *)param_3[8];
    *(undefined4 *)((long)puVar5 + 0x7c) = *(undefined4 *)(*(long *)(param_2 + 8) + 0x78);
    FUN_03ed0160(lVar6,param_2,puVar5);
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
    *(undefined2 *)((long)param_3 + 0x5a) = 0xffff;
    return;
  }
  uVar3 = FUN_03ed327c(param_1,param_2,param_3,param_4,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar1 = *(ushort *)((long)param_3 + 0x5a);
  if ((short)uVar1 < 0) {
    lVar6 = param_3[0x12];
  }
  else {
    uVar3 = (ulong)uVar1;
    lVar6 = param_3[0x12];
    local_24[0] = '\0';
    if (3 < uVar1) {
      uVar3 = 0;
    }
    lVar4 = param_3[uVar3];
    if (lVar4 != 0) {
      lVar4 = FUN_03ec8314(*(undefined8 *)(lVar4 + 0x10),lVar4,lVar6,*(undefined8 *)(param_2 + 8),
                           param_3,local_24);
      bVar2 = local_24[0] != '\0';
      goto LAB_03ed9fdc;
    }
  }
  bVar2 = false;
  lVar4 = 0;
LAB_03ed9fdc:
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
  if ((!bVar2) && (lVar6 != 0)) {
    if ((param_5 & 1) == 0) {
      FUN_03ed2218(param_1,param_2,param_3);
    }
    else {
      FUN_03ed327c();
    }
  }
  return;
}


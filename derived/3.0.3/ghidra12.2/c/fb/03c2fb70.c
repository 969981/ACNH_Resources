
ulong FUN_03c2fb70(ulong *param_1,uint *param_2,ulong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  *param_1 = 0;
  uVar8 = 5;
  if (param_4 == 1) {
    uVar8 = 1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 < uVar8) {
    return uVar8;
  }
  if (param_2 == (uint *)0x0) {
    return 0xffffffffffffffff;
  }
  if (param_4 == 1) {
    lVar4 = 1;
    puVar5 = param_2;
  }
  else {
    if (*param_2 != 0xfd2fb528) {
      if (*param_2 >> 4 != 0x184d2a5) {
        return 0xfffffffffffffff6;
      }
      if (param_3 < 8) {
        return 8;
      }
      *param_1 = (ulong)param_2[1];
      *(undefined4 *)((long)param_1 + 0x14) = 1;
      return 0;
    }
    if (param_3 < 5) {
      uVar7 = 0xffffffffffffffb8;
      if (param_3 < 0xffffffffffffffb8) {
        return 0xffffffffffffffb8;
      }
      goto LAB_03c2fc34;
    }
    puVar5 = param_2 + 1;
    lVar4 = 5;
  }
  bVar2 = (byte)*puVar5;
  lVar4 = *(long *)(&DAT_04057b20 + ((ulong)bVar2 & 3) * 8) + lVar4 +
          *(long *)(&DAT_040587a0 + ((ulong)(bVar2 >> 3) & 0x18));
  if ((bVar2 & 0x20) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar7 = lVar4 + (ulong)((uint)(bVar2 < 0x40) & (bVar2 & 0x20) >> 5);
  if (param_3 < uVar7) {
    return uVar7;
  }
LAB_03c2fc34:
  *(int *)(param_1 + 3) = (int)uVar7;
  bVar2 = *(byte *)((long)param_2 + (uVar8 - 1));
  if ((bVar2 >> 3 & 1) != 0) {
    return 0xfffffffffffffff2;
  }
  if ((bVar2 >> 5 & 1) == 0) {
    bVar1 = *(byte *)((long)param_2 + uVar8);
    if (0xaf < (ulong)bVar1) {
      return 0xfffffffffffffff0;
    }
    uVar8 = uVar8 + 1;
    uVar7 = 1L << (ulong)(bVar1 >> 3) + 10;
    uVar7 = uVar7 + (uVar7 >> 3) * ((ulong)bVar1 & 7);
  }
  else {
    uVar7 = 0;
  }
  bVar1 = bVar2 & 3;
  bVar3 = bVar2 >> 6;
  if (bVar1 == 3) {
    uVar6 = *(uint *)((long)param_2 + uVar8);
    uVar8 = uVar8 + 4;
  }
  else if (bVar1 == 2) {
    uVar6 = (uint)*(ushort *)((long)param_2 + uVar8);
    uVar8 = uVar8 + 2;
  }
  else if (bVar1 == 1) {
    uVar6 = (uint)*(byte *)((long)param_2 + uVar8);
    uVar8 = uVar8 + 1;
  }
  else {
    uVar6 = 0;
  }
  if (bVar3 == 1) {
    uVar8 = (ulong)*(ushort *)((long)param_2 + uVar8) + 0x100;
  }
  else if (bVar3 == 2) {
    uVar8 = (ulong)*(uint *)((long)param_2 + uVar8);
  }
  else if (bVar3 == 3) {
    uVar8 = *(ulong *)((long)param_2 + uVar8);
  }
  else if ((bVar2 >> 5 & 1) == 0) {
    uVar8 = 0xffffffffffffffff;
  }
  else {
    uVar8 = (ulong)*(byte *)((long)param_2 + uVar8);
  }
  *(uint *)((long)param_1 + 0x1c) = uVar6;
  *(uint *)(param_1 + 4) = bVar2 >> 2 & 1;
  if ((bVar2 & 0x20) != 0) {
    uVar7 = uVar8;
  }
  *param_1 = uVar8;
  param_1[1] = uVar7;
  if (0x1ffff < uVar7) {
    uVar7 = 0x20000;
  }
  *(int *)(param_1 + 2) = (int)uVar7;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return 0;
}


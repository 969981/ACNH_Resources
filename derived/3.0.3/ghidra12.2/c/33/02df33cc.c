
void FUN_02df33cc(long *param_1)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *local_50;
  uint local_48;
  int iStack_44;
  int local_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  int local_36;
  undefined4 local_30;
  undefined8 local_2c;
  byte local_24;
  
  lVar2 = (**(code **)(*param_1 + 0x218))(param_1,2);
  if (lVar2 != 0) {
    uVar3 = (uint)*(byte *)((long)param_1 + 0x222);
    uVar1 = *(ushort *)(param_1 + 0x44);
    if (uVar3 - 0xd < 0xfffffff4) {
      uVar3 = 1;
    }
    if (((uVar1 & 3) == 0) &&
       (((uVar1 & 0xf) == 0 ||
        0x28f5c28 < ((uint)uVar1 * -0x3d70a3d7 >> 2 | (uint)uVar1 * 0x40000000)) && uVar3 == 2)) {
      local_48 = 0x1d;
    }
    else {
      local_48 = (uint)(byte)(&DAT_0416812f)[uVar3];
    }
    local_30 = 0;
    local_2c = 0x60000000c;
    local_50 = PTR_DAT_04bc9c78 + 0x10;
    iStack_44 = local_48 - (int)*(char *)((long)param_1 + 0x223);
    uStack_3c = 0x1010000;
    local_24 = *(byte *)(param_1 + 0x3f);
    local_38 = 0x101;
    if (7 < local_24) {
      local_24 = 0xff;
    }
    local_36 = (uint)(*(int *)((long)param_1 + 0x214) == 2) << 8;
    local_40 = iStack_44;
    FUN_03864290(lVar2,&local_50);
    uVar4 = 1;
    if (*(int *)((long)param_1 + 0x214) == 3) {
      uVar4 = 2;
    }
    if (((((*(int *)(lVar2 + 0x2f8) != 0) && (*(int *)(lVar2 + 0x208) != 0)) &&
         (*(long *)(lVar2 + 0x270) != 0)) && (*(long *)(*(long *)(lVar2 + 0x270) + 8) != 0)) &&
       ((((*(long *)(lVar2 + 0x480) == 0 || (*(int *)(*(long *)(lVar2 + 0x480) + 0x14) != -1)) &&
         ((*(long *)(lVar2 + 0x2d8) != 0 &&
          ((0 < *(int *)(lVar2 + 0x3d8) && (*(int *)(lVar2 + 0x3d4) != 0)))))) &&
        (*(uint *)(lVar2 + 0x298) < 2)))) {
      *(undefined4 *)(lVar2 + 0x2e4) = uVar4;
      FUN_03ebb160(lVar2 + 0x290,3);
    }
  }
  return;
}


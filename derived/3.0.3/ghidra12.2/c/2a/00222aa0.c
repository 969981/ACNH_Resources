
uint FUN_00222aa0(undefined4 *param_1,byte *param_2,undefined8 param_3,byte *param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1[0x1e] != 0) {
    FUN_002229d0(param_1,param_1 + 6);
    param_1[0x1e] = 0;
  }
  *param_1 = 3;
  *(ulong *)(param_1 + 0x1c) = *(long *)(param_1 + 0x1c) + (ulong)param_5;
  if (param_5 != 0) {
    puVar2 = param_1 + 6;
    uVar5 = param_5;
    do {
      iVar4 = param_1[0x1f];
      if (iVar4 == 0) {
        uVar1 = param_1[0x20] + 1;
        param_1[0x20] = uVar1;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        param_1[0xd] = uVar1 >> 0x10 | uVar1 << 0x10;
        (**(code **)(param_1 + 4))(param_1 + 0xe,param_1 + 10,*(undefined8 *)(param_1 + 2));
        iVar4 = param_1[0x1f];
      }
      bVar3 = *(byte *)((long)(param_1 + 0xe) + (long)iVar4) ^ *param_4;
      *param_2 = bVar3;
      *(byte *)((long)puVar2 + (long)(int)param_1[0x1f]) =
           *(byte *)((long)puVar2 + (long)(int)param_1[0x1f]) ^ bVar3;
      uVar1 = param_1[0x1f] + 1 & 0xf;
      param_1[0x1f] = uVar1;
      if (uVar1 == 0) {
        FUN_002229d0(param_1,puVar2);
      }
      uVar5 = uVar5 - 1;
      param_4 = param_4 + 1;
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
  }
  return param_5;
}


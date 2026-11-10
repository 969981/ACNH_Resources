
void FUN_00222790(undefined4 *param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *__dest;
  
  __dest = (undefined8 *)(param_1 + 10);
  *__dest = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  if (param_3 == 0xc) {
    memcpy(__dest,param_2,0xc);
    uVar2 = 1;
    *(undefined1 *)((long)param_1 + 0x37) = 1;
  }
  else {
    uVar2 = param_3 << 3;
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) ^ *param_2;
      *(byte *)((long)param_1 + 0x29) = *(byte *)((long)param_1 + 0x29) ^ param_2[1];
      *(byte *)((long)param_1 + 0x2a) = *(byte *)((long)param_1 + 0x2a) ^ param_2[2];
      *(byte *)((long)param_1 + 0x2b) = *(byte *)((long)param_1 + 0x2b) ^ param_2[3];
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) ^ param_2[4];
      *(byte *)((long)param_1 + 0x2d) = *(byte *)((long)param_1 + 0x2d) ^ param_2[5];
      *(byte *)((long)param_1 + 0x2e) = *(byte *)((long)param_1 + 0x2e) ^ param_2[6];
      *(byte *)((long)param_1 + 0x2f) = *(byte *)((long)param_1 + 0x2f) ^ param_2[7];
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) ^ param_2[8];
      *(byte *)((long)param_1 + 0x31) = *(byte *)((long)param_1 + 0x31) ^ param_2[9];
      *(byte *)((long)param_1 + 0x32) = *(byte *)((long)param_1 + 0x32) ^ param_2[10];
      *(byte *)((long)param_1 + 0x33) = *(byte *)((long)param_1 + 0x33) ^ param_2[0xb];
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) ^ param_2[0xc];
      *(byte *)((long)param_1 + 0x35) = *(byte *)((long)param_1 + 0x35) ^ param_2[0xd];
      *(byte *)((long)param_1 + 0x36) = *(byte *)((long)param_1 + 0x36) ^ param_2[0xe];
      *(byte *)((long)param_1 + 0x37) = *(byte *)((long)param_1 + 0x37) ^ param_2[0xf];
      FUN_002229d0(param_1,__dest);
      param_2 = param_2 + 0x10;
    }
    uVar1 = ((ulong)uVar2 & 0xff00ff00ff00ff00) >> 8 | ((ulong)uVar2 & 0xff00ff00ff00ff) << 8;
    if (param_3 != 0) {
      if (param_3 == 1) {
        uVar3 = 0;
      }
      else {
        uVar4 = 0;
        do {
          uVar3 = uVar4 + 2;
          *(byte *)((long)param_1 + uVar4 + 0x28) =
               *(byte *)((long)param_1 + uVar4 + 0x28) ^ param_2[uVar4];
          *(byte *)((long)param_1 + uVar4 + 0x29) =
               *(byte *)((long)param_1 + uVar4 + 0x29) ^ (param_2 + uVar4)[1];
          uVar4 = uVar3;
        } while (((ulong)param_3 & 0xfffffffe) != uVar3);
      }
      if ((param_3 & 1) != 0) {
        *(byte *)((long)__dest + uVar3) = *(byte *)((long)__dest + uVar3) ^ param_2[uVar3];
      }
      FUN_002229d0(param_1,__dest);
    }
    *(ulong *)(param_1 + 0xc) =
         *(ulong *)(param_1 + 0xc) ^ (uVar1 >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10) << 0x20;
    FUN_002229d0(param_1,__dest);
    uVar2 = (param_1[0xd] & 0xff00ff00) >> 8 | (param_1[0xd] & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  }
  param_1[0x20] = uVar2;
  (**(code **)(param_1 + 4))(param_1 + 0x12,__dest,*(undefined8 *)(param_1 + 2));
  *param_1 = 2;
  return;
}


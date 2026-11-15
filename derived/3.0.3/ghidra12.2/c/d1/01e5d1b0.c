
void FUN_01e5d1b0(long param_1,undefined4 *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0x4d0) = *param_2;
  *(undefined4 *)(param_1 + 0x4d4) = param_2[1];
  *(undefined4 *)(param_1 + 0x4d8) = param_2[2];
  if (*(int *)(param_1 + 0x378) < 0x23) {
    *(undefined4 *)(param_1 + 0x390) = *param_2;
    *(undefined4 *)(param_1 + 0x394) = param_2[1];
    *(undefined4 *)(param_1 + 0x398) = param_2[2];
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x358) + 0x180))();
  if (((((uVar3 & 1) != 0) && (*(char *)(param_1 + 0x418) == '\0')) &&
      (lVar4 = *(long *)(*(long *)(param_1 + 0x358) + 0x690), lVar4 != 0)) &&
     ((*(uint *)(param_1 + 0x360) < 0x20 &&
      ((1 << (ulong)(*(uint *)(param_1 + 0x360) & 0x1f) & 0x80000feeU) != 0)))) {
    uVar1 = *(uint *)(param_1 + 0x360);
    *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) & 0x3f | (byte)(uVar1 << 6);
    *(byte *)(lVar4 + 9) = *(byte *)(lVar4 + 9) & 0xf0 | (byte)(uVar1 >> 2) & 0xf;
    bVar2 = (byte)((uint)(int)*(float *)(param_1 + 0x4d0) >> 8);
    *(char *)(lVar4 + 0xd) = (char)(int)*(float *)(param_1 + 0x4d0);
    *(byte *)(lVar4 + 0xe) = *(byte *)(lVar4 + 0xe) & 0xf0 | bVar2 & 0xf;
    fVar5 = *(float *)(param_1 + 0x4d8);
    *(char *)(lVar4 + 0xf) = (char)((uint)(int)fVar5 >> 4);
    *(byte *)(lVar4 + 0xe) = bVar2 & 0xf | (byte)((int)fVar5 << 4);
  }
  return;
}


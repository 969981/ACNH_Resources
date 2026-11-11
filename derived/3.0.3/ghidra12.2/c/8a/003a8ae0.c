
void FUN_003a8ae0(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  float fVar4;
  
  uVar3 = (ulong)*(ushort *)((long)param_1 + 10);
  if (*(ushort *)((long)param_1 + 10) != 0) {
    puVar2 = (undefined8 *)*param_1;
    uVar1 = 0;
    do {
      fVar4 = *(float *)((long)puVar2 + 0x44);
      if (0.001 <= ABS(fVar4)) {
        if (((*(byte *)((long)param_1 + 0xc) & 1) == 0) && (0.001 <= ABS(fVar4 + -1.0))) {
          fVar4 = 1.0 / fVar4;
          puVar2[1] = CONCAT44((float)((ulong)puVar2[1] >> 0x20) * fVar4,(float)puVar2[1] * fVar4);
          *puVar2 = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar4,(float)*puVar2 * fVar4);
          puVar2[3] = CONCAT44((float)((ulong)puVar2[3] >> 0x20) * fVar4,(float)puVar2[3] * fVar4);
          puVar2[2] = CONCAT44((float)((ulong)puVar2[2] >> 0x20) * fVar4,(float)puVar2[2] * fVar4);
        }
        *(undefined4 *)((long)puVar2 + 0x44) = 0x3f800000;
        uVar3 = (ulong)*(ushort *)((long)param_1 + 10);
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 10;
    } while (uVar1 < uVar3);
  }
  *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xfffffffb ^ 0xc;
  return;
}


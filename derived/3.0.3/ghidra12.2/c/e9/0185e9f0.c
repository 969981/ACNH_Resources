
/* WARNING: Removing unreachable block (ram,0x0185eaac) */
/* WARNING: Removing unreachable block (ram,0x0185eac4) */

undefined8 FUN_0185e9f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte local_70 [12];
  undefined4 local_64;
  
  fVar8 = *(float *)(*(long *)(param_1 + 0x300) + 0x278);
  fVar7 = *(float *)(*(long *)(param_1 + 0x300) + 0x280);
  FUN_02507c6c(local_70,7,1,1,0);
  puVar2 = PTR_DAT_04bb5038;
  if (local_70[0] < 8) {
    do {
      uVar4 = (ulong)local_70[0];
      local_64 = 2;
      lVar1 = uVar4 * 0x8c;
      if (((&DAT_0548ed4c)[lVar1] != '\0') &&
         (fVar5 = *(float *)((long)&DAT_0548ed58 + lVar1 + 4),
         fVar6 = *(float *)((long)&DAT_0548ed60 + lVar1 + 4),
         (int)((float)(int)fVar8 / 10.0) - (uint)(fVar8 < 0.0) ==
         (int)((float)(int)fVar5 / 10.0) - (uint)(fVar5 < 0.0) &&
         (int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0) ==
         (int)((float)(int)fVar6 / 10.0) - (uint)(fVar6 < 0.0))) {
        return 1;
      }
      do {
        if (uVar4 == 7) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        uVar3 = FUN_02507924(local_70,puVar2 + uVar4);
      } while ((uVar3 & 1) == 0);
      local_70[0] = puVar2[uVar4];
    } while (local_70[0] < 8);
  }
  return 0;
}


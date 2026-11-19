
void FUN_03aca690(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_5c;
  float fStack_58;
  float local_54;
  
  puVar2 = PTR_DAT_04bb5ab0;
  iVar3 = *(int *)(param_1 + 0x238);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      uVar1 = uVar5;
      if (*(uint *)(param_1 + 0x370) <= uVar5) {
        uVar1 = 0;
      }
      lVar4 = *(long *)(param_1 + 0x378) + (ulong)uVar1 * 0x5d0;
      if (*(char *)(lVar4 + 0x5bc) != '\0') {
        FUN_03acc68c(0,0,lVar4,lVar4 + 800,1,puVar2);
        fVar6 = *(float *)(lVar4 + 0x170);
        local_5c = -fVar6;
        fVar7 = *(float *)(lVar4 + 0x174);
        fVar8 = *(float *)(lVar4 + 0x178);
        fStack_58 = -fVar7;
        local_54 = -fVar8;
        fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
        if (0.0 < fVar6) {
          fVar6 = 1.0 / fVar6;
          local_5c = fVar6 * local_5c;
          fStack_58 = fVar6 * fStack_58;
          local_54 = fVar6 * local_54;
        }
        FUN_03acd660(0xbf800000,0x3f800000,lVar4,lVar4 + 0x270,lVar4 + 0x2a0,&local_5c,0);
        iVar3 = *(int *)(param_1 + 0x238);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
  }
  return;
}


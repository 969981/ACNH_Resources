
void FUN_023d7734(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *local_38;
  char *pcStack_30;
  
  lVar3 = *(long *)(param_1 + 0x68);
  fVar4 = *(float *)(lVar3 + 0x278);
  *(float *)(param_1 + 0x228c) = fVar4;
  fVar5 = *(float *)(lVar3 + 0x27c);
  *(float *)(param_1 + 0x2290) = fVar5;
  fVar6 = *(float *)(lVar3 + 0x280);
  *(float *)(param_1 + 0x2294) = fVar6;
  if (*(int *)(param_1 + 0x178) == 0) {
    fVar4 = fVar4 - *(float *)(lVar3 + 0x278);
    fVar5 = fVar5 - *(float *)(lVar3 + 0x27c);
    fVar6 = fVar6 - *(float *)(lVar3 + 0x280);
    if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6) < 1.0) &&
       (*(char *)(param_1 + 0x17ac) == '\0')) {
      local_38 = (undefined *)CONCAT44(local_38._4_4_,0x1f);
      if (*(int *)(param_1 + 0xec8) < 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x60);
        if (puVar2 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052461c0), iVar1 != 0))
          {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
            puVar2 = &DAT_05240280;
          }
          else {
            puVar2 = &DAT_05240280;
          }
        }
        local_38 = PTR_DAT_04bb2020 + 0x10;
        pcStack_30 = "FixDirWalkWait";
        FUN_01707d90(puVar2,&local_38,6,0,0);
        if (*(int *)(param_1 + 0x178) != 0) {
          return;
        }
      }
    }
    *(byte *)(param_1 + 0x18f5) = *(byte *)(param_1 + 0x18f5) | 4;
  }
  return;
}


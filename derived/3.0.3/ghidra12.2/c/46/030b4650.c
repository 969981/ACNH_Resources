
void FUN_030b4650(long param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  byte local_7560 [30000];
  
  iVar2 = 0;
  do {
    local_7560[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 30000);
  if (*(long *)(param_1 + 0xafcc0) == param_1 + 0xafcb8) {
    iVar2 = 0;
  }
  else {
    lVar4 = (long)*(int *)(param_1 + 0xafccc);
    iVar2 = 0;
    uVar3 = 0;
    pfVar5 = (float *)(*(long *)(param_1 + 0xafcc0) - lVar4);
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_04bbdbc0);
    fVar8 = (float)NEON_ucvtf(DAT_04c4a02c);
    do {
      if ((uVar3 < 0x752e) && (*(char *)((long)pfVar5 + 0x15) != '\0')) {
        if ((*(char *)(pfVar5 + 5) != '\0') && (*(char *)((long)pfVar5 + 0x17) != '\0')) {
          iVar2 = iVar2 + 1;
          iVar6 = (int)((520.0 / fVar8) * pfVar5[1]);
          uVar1 = iVar6 + (int)((768.0 / fVar7) * *pfVar5) * 0x208;
          local_7560[uVar3 + 1] = (byte)(uVar1 >> 3);
          local_7560[uVar3] = (byte)(uVar1 >> 0xb);
          local_7560[uVar3 + 2] =
               local_7560[uVar3 + 2] | (byte)(iVar6 << 5) |
               *(byte *)((long)pfVar5 + 0x16) | (byte)(((uint)pfVar5[2] & 3) << 3) |
               (*(byte *)(pfVar5 + 4) & 3) << 1;
          uVar3 = uVar3 + 3;
        }
      }
      else if (0x752d < uVar3) break;
      pfVar5 = (float *)(*(long *)((long)pfVar5 + lVar4 + 8) - lVar4);
    } while (pfVar5 != (float *)((param_1 + 0xafcb8) - lVar4));
  }
  if (param_2 != (void *)0x0) {
    memcpy(param_2,local_7560,30000);
    *(int *)((long)param_2 + 0x7534) = iVar2;
  }
  return;
}


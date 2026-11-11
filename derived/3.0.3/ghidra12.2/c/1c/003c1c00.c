
void FUN_003c1c00(long param_1,long param_2,float *param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  
  cVar2 = *(char *)(param_4 + 0x30);
  if ((*(char *)(param_2 + 0xc0) != '\0') != (cVar2 != '\0')) {
    *(char *)(param_4 + 0x30) = *(char *)(param_2 + 0xc0);
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
    cVar2 = *(char *)(param_4 + 0x30);
  }
  if (cVar2 != '\0') {
    fVar1 = param_4[0x34];
    if ((int)*(float *)(param_2 + 0xd0) <= (int)param_4[0x34]) {
      fVar1 = *(float *)(param_2 + 0xd0);
    }
    if (0 < (int)fVar1) {
      uVar5 = 0;
      do {
        cVar2 = *(char *)(*(long *)(param_2 + 200) + uVar5);
        if ((cVar2 != '\0') != (*(char *)(*(long *)(param_4 + 0x32) + uVar5) != '\0')) {
          *(char *)(*(long *)(param_4 + 0x32) + uVar5) = cVar2;
          *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
        }
        uVar5 = uVar5 + 1;
      } while ((uint)fVar1 != uVar5);
    }
    iVar3 = (**(code **)(**(long **)(param_1 + 0x280) + 0x10))();
    iVar4 = (**(code **)(**(long **)(param_1 + 0x280) + 8))();
    uVar5 = (ulong)(uint)(iVar4 * iVar3);
    if (0 < iVar4 * iVar3) {
      uVar6 = uVar5;
      pfVar7 = param_3;
      pfVar8 = param_4;
      do {
        if (*pfVar7 != *pfVar8) {
          *pfVar8 = *pfVar7;
          *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
        }
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      param_4 = param_4 + 0x18;
      param_3 = param_3 + 0x18;
      do {
        if (*param_3 != *param_4) {
          *param_4 = *param_3;
          *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
        }
        uVar5 = uVar5 - 1;
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


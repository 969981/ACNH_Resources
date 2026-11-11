
void FUN_003e3e30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  uVar1 = FUN_003c5b84();
  uVar5 = (ulong)*(ushort *)(param_1 + 0x2b0);
  lVar4 = 0;
  piVar3 = (int *)(param_1 + 0x23c);
  do {
    if ((uVar5 & 1) != 0) {
      lVar2 = FUN_003cbb70(uVar1,0x30,1);
      *(undefined4 *)(lVar2 + 8) = 0x38;
      *(long *)(lVar2 + 0x18) = param_1 + 0x300;
      *(int *)(lVar2 + 0x20) = 1 << (ulong)((uint)lVar4 & 0x1f);
      if (*piVar3 < piVar3[-1]) {
        fVar6 = (float)piVar3[-3] +
                (((float)piVar3[-2] - (float)piVar3[-3]) * (float)*piVar3) / (float)piVar3[-1];
      }
      else {
        fVar6 = (float)piVar3[-2];
      }
      *(float *)(lVar2 + 0x24) = fVar6;
      FUN_003cc15c(uVar1);
    }
    lVar4 = lVar4 + 1;
    uVar5 = uVar5 >> 1;
    piVar3 = piVar3 + 4;
  } while (lVar4 != 8);
  return;
}


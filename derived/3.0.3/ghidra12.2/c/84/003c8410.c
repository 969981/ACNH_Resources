
void FUN_003c8410(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  
  fVar7 = (*(float *)(param_1 + 0xf8) *
          (float)((uint)*(ushort *)(param_1 + 0x112) * (uint)*(byte *)(param_1 + 0x111))) / 60000.0;
  if (fVar7 == 0.0) {
    return;
  }
  uVar5 = (long)param_2 * 0x50000;
  uVar3 = (ulong)((*(float *)(param_1 + 0xfc) * 65536.0) / fVar7);
  if (uVar3 < uVar5) {
    do {
      if (*(short *)(param_1 + 0x118) < *(short *)(param_1 + 0x116)) {
        *(short *)(param_1 + 0x118) = *(short *)(param_1 + 0x118) + 1;
      }
      bVar1 = false;
      uVar5 = uVar5 - uVar3;
      lVar6 = 0x140;
      do {
        lVar4 = *(long *)(param_1 + lVar6);
        if (lVar4 != 0) {
          FUN_003bdd60(lVar4);
          iVar2 = FUN_003bddf0(lVar4,1);
          if ((iVar2 < 0) && (*(long *)(param_1 + lVar6) != 0)) {
            FUN_003bdc00();
            (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
                      (*(long **)(param_1 + 0x128),*(undefined8 *)(param_1 + lVar6));
            *(undefined8 *)(param_1 + lVar6) = 0;
          }
          bVar1 = (bool)(*(char *)(lVar4 + 9) != '\0' | bVar1);
        }
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0x1c0);
      if (!bVar1) {
        FUN_003c62e8(param_1);
        *(undefined1 *)(param_1 + 0x3b) = 1;
        return;
      }
      *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
      fVar7 = (*(float *)(param_1 + 0xf8) *
              (float)((uint)*(ushort *)(param_1 + 0x112) * (uint)*(byte *)(param_1 + 0x111))) /
              60000.0;
      if (fVar7 == 0.0) {
        return;
      }
      uVar3 = (ulong)(65536.0 / fVar7);
    } while (uVar3 < uVar5);
  }
  *(float *)(param_1 + 0xfc) = fVar7 * (float)(uVar3 - uVar5) * 1.5258789e-05;
  return;
}


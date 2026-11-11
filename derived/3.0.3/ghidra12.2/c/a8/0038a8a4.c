
void FUN_0038a8a4(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_2 == (long *)0x0) || (iVar2 = (**(code **)(*param_2 + 0xb8))(param_2), iVar2 == 1)) {
    uVar1 = *(ushort *)(param_1 + 0x114);
    uVar4 = uVar1 >> 2 & 1;
    if (*(long **)(param_1 + 0xf0) != param_2) {
      uVar4 = 1;
    }
    uVar3 = 4;
    if (uVar4 == 0) {
      uVar3 = 0;
    }
    *(ushort *)(param_1 + 0x114) = uVar3 | uVar1 & 0xfffb;
    if (*(long **)(param_1 + 0xf0) != param_2) {
      *(long **)(param_1 + 0xf0) = param_2;
      if (param_2 == (long *)0x0) {
        *(ushort *)(param_1 + 0x114) = uVar1 | 4;
        if ((*(float *)(param_1 + 0xf8) != 0.0) || (*(float *)(param_1 + 0xfc) != 0.0)) {
          if (*(float *)(param_1 + 0xfc) == 0.0) {
            *(undefined8 *)(param_1 + 0xf8) = 0;
            return;
          }
          *(undefined8 *)(param_1 + 0xf8) = 0;
          *(undefined4 *)(param_1 + 0x118) = 0x7fc00000;
          *(undefined4 *)(param_1 + 0x134) = 0x7fc00000;
          return;
        }
      }
      else {
        iVar2 = (**(code **)(*param_2 + 0x20))(param_2);
        fVar8 = (float)iVar2;
        iVar2 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x28))();
        fVar5 = (float)iVar2;
        fVar6 = *(float *)(param_1 + 0xf8);
        fVar7 = *(float *)(param_1 + 0xfc);
        uVar4 = 4;
        if ((fVar7 == fVar5 && fVar6 == fVar8) && (*(ushort *)(param_1 + 0x114) & 4) == 0) {
          uVar4 = 0;
        }
        *(ushort *)(param_1 + 0x114) = uVar4 | *(ushort *)(param_1 + 0x114) & 0xfffb;
        if (fVar7 != fVar5 || fVar6 != fVar8) {
          if (fVar7 != 0.0) {
            *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar5,fVar8);
            *(float *)(param_1 + 0x118) =
                 (fVar5 / fVar8) * (fVar6 / fVar7) * *(float *)(param_1 + 0x118);
            *(float *)(param_1 + 0x134) =
                 (fVar5 / fVar8) * (fVar6 / fVar7) * *(float *)(param_1 + 0x134);
            return;
          }
          *(float *)(param_1 + 0xf8) = fVar8;
          *(float *)(param_1 + 0xfc) = fVar5;
        }
      }
    }
  }
  return;
}


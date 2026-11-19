
void FUN_0392b344(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  
  if (*(uint *)(param_2 + 0x48) < 10) {
    uVar2 = *(uint *)(param_2 + 0x68);
    switch(*(uint *)(param_2 + 0x48)) {
    case 0:
      lVar1 = param_1 + 0x960 + (ulong)uVar2 * 0x28;
      if (0x27 < uVar2) {
        lVar1 = param_1 + 0x960;
      }
      if ((*(float *)(lVar1 + 0x18) != 0.0) || (*(float *)(lVar1 + 0x1c) != 1.0))
      goto switchD_0392b368_caseD_6;
      fVar3 = *(float *)(lVar1 + 0x20);
      break;
    case 1:
      lVar1 = param_1 + 0x960 + (ulong)uVar2 * 0x28;
      if (0x27 < uVar2) {
        lVar1 = param_1 + 0x960;
      }
      if (((*(float *)(lVar1 + 0x18) != 1.0) || (*(float *)(lVar1 + 0x1c) != 1.0)) ||
         (*(float *)(lVar1 + 0x20) != 1.0)) goto switchD_0392b368_caseD_6;
      fVar3 = *(float *)(lVar1 + 0x24);
      break;
    case 2:
      lVar1 = param_1 + 0x960 + (ulong)uVar2 * 0x28;
      if (0x27 < uVar2) {
        lVar1 = param_1 + 0x960;
      }
      if (((*(float *)(lVar1 + 0x18) != 0.0) || (*(float *)(lVar1 + 0x1c) != 0.0)) ||
         (*(float *)(lVar1 + 0x20) != 0.0)) goto switchD_0392b368_caseD_6;
      goto LAB_0392b440;
    case 3:
    case 9:
      lVar1 = param_1 + 0x960 + (ulong)uVar2 * 0x28;
      if (0x27 < uVar2) {
        lVar1 = param_1 + 0x960;
      }
      fVar3 = *(float *)(lVar1 + 0x18);
      break;
    case 4:
    case 5:
      lVar1 = param_1 + 0x960 + (ulong)uVar2 * 0x28;
      if (0x27 < uVar2) {
        lVar1 = param_1 + 0x960;
      }
      if (*(float *)(lVar1 + 0x18) != 1.0) goto switchD_0392b368_caseD_6;
      fVar3 = *(float *)(lVar1 + 0x1c);
      break;
    default:
      goto switchD_0392b368_caseD_6;
    }
    if (fVar3 == 1.0) {
LAB_0392b440:
      *(byte *)(param_2 + 0x71) = *(byte *)(param_2 + 0x71) | 1;
      return;
    }
  }
switchD_0392b368_caseD_6:
  *(byte *)(param_2 + 0x71) = *(byte *)(param_2 + 0x71) & 0xfe;
  return;
}


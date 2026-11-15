
void FUN_023bab68(long param_1)

{
  byte bVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x870) != '\0') {
    if (*(int *)(param_1 + 0x178) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    bVar1 = *(byte *)(param_1 + 0x1914);
    if (7 < bVar1) {
      bVar1 = 0;
    }
    FUN_023752f4(param_1,bVar1,6);
    return;
  }
  sVar2 = *(short *)(param_1 + 0x190e);
  local_48 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_40 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  if (((local_48 != 0.0) || (local_40 != 0.0)) && (*(char *)(param_1 + 0x871) == '\0')) {
    fVar3 = local_48 - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    fVar4 = local_40 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    if (10.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) goto LAB_023bac28;
    *(undefined1 *)(param_1 + 0x871) = 1;
  }
  local_40 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  local_48 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  sVar2 = *(short *)(param_1 + 0x1904);
LAB_023bac28:
  local_30 = 0;
  uStack_28 = 6;
  local_38 = *(long *)(param_1 + 0x68) + 0x2b4;
  fStack_44 = (float)(int)sVar2 * 0.25;
  bVar1 = FUN_02416248(param_1,&local_48);
  *(byte *)(param_1 + 0x870) =
       *(byte *)(param_1 + 0x870) | bVar1 & 1 | 0x1c2 < *(uint *)(param_1 + 0x1c04);
  return;
}


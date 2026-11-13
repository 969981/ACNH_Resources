
void FUN_011ee9a0(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  
  iVar2 = *param_1;
  if (iVar2 != 0 && iVar2 != 3) {
    if (iVar2 == 1) {
      param_1[10] = 0;
      param_1[0xb] = 0;
      *(undefined2 *)(param_1 + 0xd) = 0x100;
      param_1[0xc] = 10;
      *param_1 = 2;
      local_28 = 0xed30;
      FUN_0277d4ac(&local_28);
      FUN_011ea660(&local_28,param_1 + 3,&DAT_0405c462);
      iVar2 = *param_1;
    }
    if ((iVar2 == 2) && (*(char *)((long)param_1 + 0x35) != '\0')) {
      iVar2 = (**(code **)(*(long *)(param_1 + 8) + (ulong)*(byte *)(param_1 + 0xd) * 8))
                        (param_1 + 8);
      param_1[10] = iVar2;
      fVar4 = 0.0;
      if (*(char *)((long)param_1 + 0x35) != '\0') {
        iVar1 = param_1[0xc];
        fVar4 = 1.0;
        if ((iVar1 != 0) && (fVar4 = 1.0, iVar2 < iVar1)) {
          fVar3 = (float)iVar2 / (float)iVar1;
          fVar5 = 1.0;
          if (fVar3 <= 1.0) {
            fVar5 = fVar3;
          }
          fVar4 = 0.0;
          if (0.0 <= fVar3) {
            fVar4 = fVar5;
          }
        }
      }
      FUN_012253d0((1.0 - fVar4) + fVar4 * 0.0,0,0,0,0,DAT_0514f7f0,param_1,param_1 + 1,param_1 + 3,
                   0);
      if ((*(char *)((long)param_1 + 0x35) != '\0') && (param_1[0xc] <= param_1[10])) {
        *(undefined1 *)((long)param_1 + 0x35) = 0;
        *param_1 = 3;
        param_1[10] = param_1[0xb];
      }
    }
  }
  return;
}


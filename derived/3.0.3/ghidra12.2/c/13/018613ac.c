
undefined8 FUN_018613ac(undefined4 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = (**(code **)(param_2[0x9b] + (ulong)*(byte *)((long)param_2 + 0x4ec) * 8))(param_2 + 0x9b)
  ;
  iVar1 = (int)param_2[0x9d];
  *(int *)(param_2 + 0x9c) = iVar4;
  iVar2 = *(int *)((long)param_2 + 0x4e4);
  iVar6 = iVar2;
  if (iVar2 <= iVar1) {
    iVar6 = iVar1;
    iVar1 = iVar2;
  }
  if ((iVar1 < iVar4 && iVar6 != iVar4) && (iVar4 <= iVar1 || iVar4 <= iVar6)) {
    uVar7 = (**(code **)(*param_2 + 0x2b0))(param_2);
    if ((uVar7 & 1) == 0) {
      iVar6 = *(int *)((long)param_2 + 0x4ac);
      if ((iVar6 == 0) || (iVar6 == 2)) {
        *(undefined4 *)((long)param_2 + 0x4ac) = 1;
      }
      else if (iVar6 == 3) {
        if ((int)param_2[0x50] == 7) {
          return 1;
        }
        FUN_03ebb160(param_2 + 0x4f,7);
        return 1;
      }
      iVar4 = (**(code **)(param_2[0xa1] + (ulong)*(byte *)((long)param_2 + 0x51c) * 8))
                        (param_2 + 0xa1);
      iVar1 = (int)param_2[0xa3];
      *(int *)(param_2 + 0xa2) = iVar4;
      iVar2 = *(int *)((long)param_2 + 0x514);
      iVar6 = iVar2;
      if (iVar2 <= iVar1) {
        iVar6 = iVar1;
        iVar1 = iVar2;
      }
      if ((iVar4 <= iVar1) || (iVar6 <= iVar4)) {
        bVar3 = FUN_01878c90(param_1,param_2);
        *(byte *)((long)param_2 + 0x4b9) = bVar3 & 1;
        *(undefined4 *)(param_2 + 0xa2) = *(undefined4 *)((long)param_2 + 0x514);
      }
      uVar5 = (**(code **)(param_2[0x98] + (ulong)*(byte *)((long)param_2 + 0x4d4) * 8))
                        (param_2 + 0x98);
      *(undefined4 *)(param_2 + 0x99) = uVar5;
      iVar6 = (**(code **)(param_2[0x9e] + (ulong)*(byte *)((long)param_2 + 0x504) * 8))
                        (param_2 + 0x9e);
      *(int *)(param_2 + 0x9f) = iVar6;
      if ((char)param_2[0x79] == '\0') {
        return 0;
      }
      if (((char)param_2[0x97] == '\0') || (*(char *)((long)param_2 + 0x4b9) == '\0')) {
        iVar2 = (int)param_2[0x9a];
        iVar4 = *(int *)((long)param_2 + 0x4cc);
        iVar1 = iVar4;
        if (iVar4 <= iVar2) {
          iVar1 = iVar2;
          iVar2 = iVar4;
        }
        if (((char)param_2[0x97] != '\0') ||
           (iVar2 < (int)param_2[0x99] && (int)param_2[0x99] < iVar1)) {
          iVar2 = (int)param_2[0xa0];
          iVar4 = *(int *)((long)param_2 + 0x4fc);
          iVar1 = iVar4;
          if (iVar4 <= iVar2) {
            iVar1 = iVar2;
            iVar2 = iVar4;
          }
          if (((iVar2 < iVar6) && (iVar6 < iVar1)) &&
             (fVar8 = *(float *)(param_2[0x60] + 0x278) - *(float *)(param_2 + 0x65),
             fVar9 = *(float *)(param_2[0x60] + 0x280) - *(float *)(param_2 + 0x66),
             *(float *)((long)param_2 + 0x3ac) < fVar9 * fVar9 + fVar8 * fVar8)) {
            return 0;
          }
        }
      }
      *(undefined1 *)(param_2 + 0x97) = 0;
      (**(code **)(*param_2 + 0x2e8))(param_2);
      *(undefined4 *)(param_2 + 0x9f) = *(undefined4 *)((long)param_2 + 0x4fc);
      *(undefined4 *)(param_2 + 0x99) = *(undefined4 *)((long)param_2 + 0x4cc);
      return 0;
    }
    *(undefined1 *)((long)param_2 + 0x4ba) = 1;
    if ((int)param_2[0x50] == 1) {
      return 1;
    }
  }
  else if ((int)param_2[0x50] == 1) {
    return 1;
  }
  FUN_03ebb160(param_2 + 0x4f,1);
  return 1;
}


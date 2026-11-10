
bool FUN_0021ea40(long *param_1)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_3c;
  undefined4 local_34;
  
  if ((short)param_1[0xc] == 0) {
    local_34 = 0;
    local_3c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_3c);
    uVar2 = *(ushort *)(param_1 + 0x12);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x12);
  }
  uVar8 = (ulong)uVar2;
  if (uVar8 != 0) {
    piVar5 = (int *)param_1[0x11];
    if (piVar5 != (int *)0x0) {
      uVar6 = 0;
      bVar3 = true;
      while ((*(char *)((long)piVar5 + 9) == '\0' || (*piVar5 != 6))) {
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 3;
        bVar3 = uVar6 < uVar8;
        if (uVar8 == uVar6) {
          return bVar3;
        }
      }
      return bVar3;
    }
    lVar7 = 0;
    lVar4 = 0;
    uVar8 = 0;
    do {
      if (lVar4 == 0) {
        local_3c = 0x800000000000000;
        local_34 = 0;
        (**(code **)(*param_1 + 0x10))(param_1,&local_3c);
        lVar4 = param_1[0x11];
        cVar1 = *(char *)(lVar4 + lVar7 + 9);
      }
      else {
        cVar1 = *(char *)(lVar4 + lVar7 + 9);
      }
      if ((cVar1 != '\0') && (*(int *)(lVar4 + lVar7) == 6)) {
        return true;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (uVar8 < *(ushort *)(param_1 + 0x12));
  }
  return false;
}


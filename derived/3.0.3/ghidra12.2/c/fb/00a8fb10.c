
undefined8 FUN_00a8fb10(long param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  char cVar4;
  short sVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  
  uVar8 = FUN_00a8d9f0(param_1,param_1 + 0x651f0,param_1 + 0x651e0);
  if (uVar8 < *(uint *)(DAT_04da7238 + 0x100)) {
    lVar9 = *(long *)(*(long *)(DAT_04da7238 + 0x108) + (long)(int)uVar8 * 8);
  }
  else {
    lVar9 = 0;
  }
  plVar10 = (long *)(**(code **)(*(long *)(lVar9 + 0x30) + 0xf0))();
  puVar3 = PTR_DAT_04bb6298;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_00a8fcfc:
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if ((undefined1 *)plVar10[1] == &DAT_0409624f) {
      return 1;
    }
    uVar12 = 0;
    bVar7 = true;
    do {
      cVar4 = ((undefined1 *)plVar10[1])[uVar12];
      if (cVar4 != (&DAT_0409624f)[uVar12]) break;
      if (cVar4 == '\0') {
        if (bVar7) {
          return 1;
        }
        break;
      }
      bVar7 = uVar12 < 0x80000;
      uVar12 = uVar12 + 1;
    } while (uVar12 != 0x80001);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if ((undefined1 *)plVar10[1] != &DAT_040b0216) {
      uVar12 = 0;
      bVar7 = true;
      do {
        cVar4 = ((undefined1 *)plVar10[1])[uVar12];
        if (cVar4 != (&DAT_040b0216)[uVar12]) break;
        if (cVar4 == '\0') {
          if (bVar7) goto LAB_00a8fed0;
          break;
        }
        bVar7 = uVar12 < 0x80000;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 0x80001);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      if ((undefined1 *)plVar10[1] != &DAT_040e3f7c) {
        uVar12 = 0;
        bVar7 = true;
        do {
          cVar4 = ((undefined1 *)plVar10[1])[uVar12];
          if (cVar4 != (&DAT_040e3f7c)[uVar12]) break;
          if (cVar4 == '\0') {
            if (bVar7) goto LAB_00a8fed0;
            break;
          }
          bVar7 = uVar12 < 0x80000;
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x80001);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        pcVar13 = (char *)plVar10[1];
        if (pcVar13 != "Fine06") {
          if (*pcVar13 == 'F') {
            lVar9 = 0;
            while ((lVar9 != 0x80000 &&
                   (lVar6 = lVar9 + 1, pcVar13[lVar6] == (&DAT_0408c0ca)[lVar9]))) {
              lVar9 = lVar9 + 1;
              if (pcVar13[lVar6] == '\0') {
                return 2;
              }
            }
          }
          goto LAB_00a8fec8;
        }
      }
    }
LAB_00a8fed0:
    uVar11 = 2;
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x1e & 1) == 0) {
      piVar1 = (int *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        piVar1 = (int *)PTR_DAT_04bc39f8;
      }
      if (*piVar1 < 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if ((undefined1 *)plVar10[1] == &DAT_040e3f83) {
          return 3;
        }
        uVar12 = 0;
        bVar7 = true;
        do {
          cVar4 = ((undefined1 *)plVar10[1])[uVar12];
          if (cVar4 != (&DAT_040e3f83)[uVar12]) break;
          if (cVar4 == '\0') {
            if (bVar7) {
              return 3;
            }
            break;
          }
          bVar7 = uVar12 < 0x80000;
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x80001);
      }
      sVar5 = *(short *)puVar3;
      if (sVar5 == -1) goto LAB_00a8fcfc;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x11 & 1) == 0) {
        puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
        if (0xff < (uint)(int)sVar5) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_00a8fcfc;
      }
    }
LAB_00a8fec8:
    uVar11 = 0;
  }
  return uVar11;
}



uint FUN_00a8f7a0(long param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  short *psVar13;
  
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  uVar10 = (ulong)(short)uVar5;
  if (uVar10 == 0xffffffffffffffff) {
LAB_00a8f890:
    psVar13 = (short *)(DAT_04da7238 + 0x651c8);
    if (*psVar13 == 0) {
      psVar13 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    }
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar5 * 8);
    if (0xff < (uint)(int)(short)uVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      piVar2 = (int *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
      if (0xff < uVar5) {
        piVar2 = (int *)PTR_DAT_04bc39f8;
      }
      if (-1 < *piVar2) {
        puVar3 = PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8;
        if (0xff < uVar5) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_00a8f890;
      }
    }
    psVar13 = (short *)(DAT_04da7238 + 0x651e0);
  }
  uVar10 = FUN_00a8117c(psVar13);
  if (((uVar10 & 1) == 0) && ((char)psVar13[2] != '\x04')) {
    uVar7 = FUN_00a8d9f0(param_1,param_1 + 0x651f0,psVar13);
    if (uVar7 < *(uint *)(DAT_04da7238 + 0x100)) {
      lVar8 = *(long *)(*(long *)(DAT_04da7238 + 0x108) + (long)(int)uVar7 * 8);
    }
    else {
      lVar8 = 0;
    }
    plVar9 = (long *)(**(code **)(*(long *)(lVar8 + 0x30) + 0xf0))();
    (**(code **)(*plVar9 + 0x18))();
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((undefined1 *)plVar9[1] != &DAT_0409624f) {
      uVar10 = 0;
      bVar6 = true;
      do {
        cVar4 = ((undefined1 *)plVar9[1])[uVar10];
        if (cVar4 != (&DAT_0409624f)[uVar10]) break;
        if (cVar4 == '\0') {
          if (bVar6) goto LAB_00a8fae8;
          break;
        }
        bVar6 = uVar10 < 0x80000;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x80001);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      if ((undefined1 *)plVar9[1] != &DAT_040b0216) {
        uVar10 = 0;
        bVar6 = true;
        do {
          cVar4 = ((undefined1 *)plVar9[1])[uVar10];
          if (cVar4 != (&DAT_040b0216)[uVar10]) break;
          if (cVar4 == '\0') {
            if (bVar6) goto LAB_00a8fae8;
            break;
          }
          bVar6 = uVar10 < 0x80000;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 0x80001);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        if ((undefined1 *)plVar9[1] != &DAT_040e3f7c) {
          uVar10 = 0;
          bVar6 = true;
          do {
            cVar4 = ((undefined1 *)plVar9[1])[uVar10];
            if (cVar4 != (&DAT_040e3f7c)[uVar10]) break;
            if (cVar4 == '\0') {
              if (bVar6) goto LAB_00a8fae8;
              break;
            }
            bVar6 = uVar10 < 0x80000;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 0x80001);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar11 = (char *)plVar9[1];
          if (pcVar11 != "Fine06") {
            if (*pcVar11 == 'F') {
              uVar10 = 0;
              do {
                uVar12 = uVar10;
                uVar10 = uVar12;
                if (uVar12 == 0x80000) goto LAB_00a8fb00;
                if (pcVar11[uVar12 + 1] != (&DAT_0408c0ca)[uVar12]) {
                  uVar10 = 0;
                  goto LAB_00a8fb00;
                }
                uVar10 = uVar12 + 1;
              } while (pcVar11[uVar12 + 1] != '\0');
              uVar10 = 1;
LAB_00a8fb00:
              return (uint)(uVar12 < 0x80000) & (uint)uVar10;
            }
            goto LAB_00a8f8cc;
          }
        }
      }
    }
LAB_00a8fae8:
    uVar7 = 1;
  }
  else {
LAB_00a8f8cc:
    uVar7 = 0;
  }
  return uVar7;
}


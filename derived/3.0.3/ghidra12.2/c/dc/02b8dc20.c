
undefined8 FUN_02b8dc20(undefined4 param_1,short *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auStack_28 [2];
  undefined1 auStack_26 [2];
  short local_24 [2];
  
  puVar5 = PTR_DAT_04bc4688;
  puVar4 = PTR_DAT_04bc4680;
  if (*param_2 == -1) {
    return 0;
  }
  if (((param_2[1] == -1) || (param_2[2] == -1)) || ((ushort)param_2[3] == 0xffff)) {
LAB_02b8dd98:
    uVar6 = 0;
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb5008;
    uVar3 = (uint)(ushort)param_2[3] - (uint)*(ushort *)(lVar7 + 0x1df0);
    if (((uVar3 < *(uint *)(lVar7 + 0x1dd0)) &&
        (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1dd8) + (long)(int)uVar3 * 8),
        puVar8 != (uint *)0x0)) && (uVar3 = *puVar8, uVar3 != 0)) {
      cVar9 = *PTR_DAT_04bc4680;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          uVar3 = *puVar8;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar2) {
            if ((((char *)((ulong)uVar2 + (long)puVar8) != (char *)0x0) &&
                (*(char *)((ulong)uVar2 + (long)puVar8) != '\0')) &&
               (param_2[4] == *(short *)PTR_DAT_04bb3170)) goto LAB_02b8dd98;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)uVar3;
        if ((puVar10 == (uint *)0x0) || (puVar8 == puVar10)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar10);
        if (lVar7 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar7 + 4);
        while (piVar12[-1] != -0x7641e271) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_02b8dda0;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 0x14) = iVar1;
        uVar3 = *puVar8;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_02b8dda0:
    FUN_02b8de30(param_1,*param_2);
    FUN_02b8dff0(param_1,param_2[1]);
    FUN_02b8e1b0(param_1,param_2[2]);
    FUN_02b8e370(param_1,param_2[3]);
    FUN_02b8e530(local_24,param_1);
    if (param_2[4] != local_24[0]) {
      FUN_007ef010(auStack_26,param_2 + 4);
      FUN_007ef010(auStack_28,local_24);
      FUN_02652f70(auStack_26,auStack_28);
    }
    uVar6 = 1;
  }
  return uVar6;
}


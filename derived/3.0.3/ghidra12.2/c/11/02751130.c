
void FUN_02751130(ushort *param_1,uint param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  ushort *puVar8;
  int iVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bb6408;
  puVar4 = PTR_DAT_04bb6400;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar7 + 0x1900) < 1) {
    if ((*(long *)(lVar7 + 0x17f0) == 0) ||
       (puVar6 = *(uint **)(*(long *)(lVar7 + 0x17f0) + 8), puVar6 == (uint *)0x0))
    goto LAB_027512b0;
    if (((param_2 < *(uint *)(lVar7 + 0x1808)) &&
        (*(char *)(*(long *)(lVar7 + 0x1810) + (long)(int)param_2) == '\0')) ||
       (((*puVar6 <= param_2 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0)))) goto LAB_027512b8;
    iVar9 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar9) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar7 + 0x1900) <= param_2) {
LAB_027512b8:
      FUN_02750d70(param_1,param_2,param_3);
      return;
    }
    uVar1 = param_2;
    if (*(uint *)(lVar7 + 0x18f0) <= param_2) {
      uVar1 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x18f8) + (ulong)uVar1 * 8);
  }
  if (puVar6 != (uint *)0x0) {
    puVar8 = param_1;
    if (*puVar6 == 0) {
LAB_02751238:
      FUN_02750d70(param_1,param_2,(uint)*puVar8 + param_3);
      return;
    }
    cVar10 = *PTR_DAT_04bb6400;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar1 = *(uint *)(puVar5 + 0x10);
        if (-1 < (int)uVar1) {
          if (((ushort *)((ulong)uVar1 + (long)puVar6) != (ushort *)0x0) &&
             (uVar3 = *(ushort *)((ulong)uVar1 + (long)puVar6), uVar3 < 0x48)) {
            puVar8 = param_1 + uVar3;
          }
          goto LAB_02751238;
        }
        if (uVar1 != 0xffffffff) goto LAB_02751238;
      }
      lVar7 = (long)puVar6 - (ulong)*puVar6;
      if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_02751238;
      lVar2 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar7 == 0) goto LAB_02751238;
      uVar11 = (ulong)*(ushort *)(lVar7 + 8);
      *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
      if (uVar11 == 0) goto LAB_02751238;
      piVar12 = (int *)(lVar2 + lVar7 + 4);
      while (piVar12[-1] != 0x54706054) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_02751238;
      }
      iVar9 = 0;
      if (*piVar12 != -1) {
        iVar9 = *piVar12;
      }
      *(int *)(puVar5 + 0x10) = iVar9;
      if (*puVar6 == 0) goto LAB_02751238;
    } while( true );
  }
LAB_027512b0:
  FUN_02750d70(param_1,param_2,param_3);
  return;
}


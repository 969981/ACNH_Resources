
/* WARNING: Removing unreachable block (ram,0x0125f508) */
/* WARNING: Removing unreachable block (ram,0x0125f4c0) */
/* WARNING: Removing unreachable block (ram,0x0125f4e4) */
/* WARNING: Removing unreachable block (ram,0x0125f52c) */

undefined8 FUN_0125f450(float *param_1,short param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  float *pfVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  uint local_14;
  
  pcVar7 = *(char **)PTR_DAT_04bb27a8;
  pcVar8 = pcVar7;
  if ((pcVar7 != (char *)0x0) && (pcVar8 = pcVar7 + 0x4b30, *pcVar8 != '\0')) {
    uVar1 = *(uint *)(pcVar7 + 0x4b34);
    FUN_01260194(0xe7);
    pcVar8 = (char *)(ulong)uVar1;
  }
  lVar2 = FUN_01260194(pcVar8,0xe7);
  local_14 = 0;
  if (((((DAT_05618008 == param_2) || (local_14 = 1, DAT_05618028 == param_2)) ||
       (local_14 = 2, DAT_05618048 == param_2)) || (local_14 = 3, DAT_05618068 == param_2)) &&
     ((local_14 < *(uint *)(lVar2 + 0x420) &&
      (lVar2 = *(long *)(*(long *)(lVar2 + 0x428) + (long)(int)local_14 * 8), lVar2 != 0)))) {
    plVar9 = (long *)(lVar2 + 0x68);
    piVar3 = (int *)(**(code **)(*plVar9 + 0xf0))(plVar9);
    iVar11 = *piVar3;
    lVar4 = (**(code **)(*plVar9 + 0xf0))(plVar9);
    iVar12 = *(int *)(lVar4 + 4);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar2 + 0xa0) + 0xf0))((long *)(lVar2 + 0xa0));
    fVar10 = *pfVar5;
    uVar6 = 1;
    *param_1 = (float)iVar11 * 5.0;
    param_1[1] = fVar10;
    param_1[2] = (float)iVar12 * 5.0;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


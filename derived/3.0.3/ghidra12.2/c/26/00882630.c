
void FUN_00882630(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *__s;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  undefined *local_70;
  char *pcStack_68;
  
  puVar3 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "TodayGlobalEventId";
  uVar5 = FUN_0273ea30(&local_70);
  __s = PTR_DAT_04bb3250;
  puVar4 = PTR_DAT_04bb3248;
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(param_2 + 0x420);
  if ((uVar5 < *(uint *)(param_2 + 0x400)) &&
     (puVar10 = *(uint **)(*(long *)(param_2 + 0x408) + (long)(int)uVar5 * 8),
     puVar10 != (uint *)0x0)) {
    uVar5 = *puVar10;
  }
  else {
    puVar10 = *(uint **)(*(long *)(param_2 + 0x408) + (ulong)*(ushort *)(param_2 + 0x420) * -8);
    uVar5 = *puVar10;
  }
  if (uVar5 != 0) {
    cVar11 = *PTR_DAT_04bb3248;
    do {
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *puVar4 = 1;
        memset(__s,0xff,0x288);
      }
      else {
        uVar5 = *(uint *)(__s + 0x148);
        if (-1 < (int)uVar5) {
          lVar7 = (ulong)uVar5 + (long)puVar10;
          goto LAB_0088279c;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar8 = (uint *)(ulong)*puVar10;
      lVar7 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar8)) goto LAB_0088279c;
      lVar7 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar8)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar1 = (long)puVar10 + (lVar7 - (long)puVar8);
      if (lVar1 == 0) break;
      uVar6 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar8));
      *(undefined4 *)(__s + 0x148) = 0xfffffffe;
      lVar7 = 0;
      if (uVar6 == 0) goto LAB_0088279c;
      piVar9 = (int *)(lVar1 + 4);
      while (piVar9[-1] != 0x443c0fb7) {
        piVar9 = piVar9 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          lVar7 = 0;
          goto LAB_0088279c;
        }
      }
      iVar2 = 0;
      if (*piVar9 != -1) {
        iVar2 = *piVar9;
      }
      *(int *)(__s + 0x148) = iVar2;
    } while (*puVar10 != 0);
  }
  lVar7 = 0;
LAB_0088279c:
  lVar1 = *(long *)PTR_PTR_04bb3260;
  if (lVar7 != 0) {
    lVar1 = lVar7;
  }
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = lVar1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x02b8ece0) */
/* WARNING: Removing unreachable block (ram,0x02b8ec98) */
/* WARNING: Removing unreachable block (ram,0x02b8ec74) */
/* WARNING: Removing unreachable block (ram,0x02b8ecbc) */
/* WARNING: Removing unreachable block (ram,0x02b8ed04) */

bool FUN_02b8ec50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((((DAT_05641c34 == param_1) || (DAT_05641c38 == param_1)) || (DAT_05641c3c == param_1)) ||
     ((DAT_05641c40 == param_1 || (DAT_05641c44 == param_1)))) {
    uVar6 = FUN_02b8ee60(param_1);
    puVar5 = PTR_DAT_04bb5c78;
    puVar4 = PTR_DAT_04bb5c70;
    lVar7 = *(long *)PTR_DAT_04bb5008;
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x17f0);
    if ((uVar6 < *(uint *)(lVar7 + 0x17d0)) &&
       ((puVar8 = *(uint **)(*(long *)(lVar7 + 0x17d8) + (long)(int)uVar6 * 8),
        puVar8 != (uint *)0x0 && (uVar6 = *puVar8, uVar6 != 0)))) {
      cVar9 = *PTR_DAT_04bb5c70;
      while( true ) {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          uVar6 = *puVar8;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0xc);
          if (-1 < (int)uVar2) {
            if ((char *)((ulong)uVar2 + (long)puVar8) == (char *)0x0) {
              return false;
            }
            return *(char *)((ulong)uVar2 + (long)puVar8) != '\0';
          }
          if (uVar2 != 0xffffffff) {
            return false;
          }
        }
        puVar3 = (uint *)(ulong)uVar6;
        if (puVar3 == (uint *)0x0) {
          return false;
        }
        if (puVar8 == puVar3) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar3)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar3);
        if (lVar7 == 0) {
          return false;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar3));
        *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
        if (uVar10 == 0) {
          return false;
        }
        piVar11 = (int *)(lVar7 + 4);
        while (piVar11[-1] != 0x3440cdd7) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return false;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 0xc) = iVar1;
        uVar6 = *puVar8;
        if (uVar6 == 0) {
          return false;
        }
      }
      return false;
    }
  }
  return false;
}


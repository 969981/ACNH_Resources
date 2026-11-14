
void FUN_01dafe10(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  char *pcVar14;
  uint *puVar15;
  ulong uVar16;
  char local_24 [4];
  
  puVar8 = PTR_DAT_04bc14a8;
  if ((*(char *)(param_1 + 0x98) != '\0') && (*(int *)(param_1 + 0x9c) == 1)) {
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar12 + 0x473);
    pcVar14 = PTR_DAT_04bc1220;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      uVar16 = (long)(char)bVar6 & 0xffffffff;
      puVar15 = (uint *)(lVar12 + 0x48) + uVar16 * 0x20;
      if (7 < bVar6) {
        puVar15 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar15 >> 3 & 1) != 0) {
        lVar1 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
        lVar2 = lVar1 + uVar16 * 0xc;
        if (0xb < bVar6) {
          lVar2 = lVar1;
        }
        if (*(char *)(lVar2 + 10) == '\0') {
          return;
        }
      }
      if ((*puVar15 & 8) != 0) {
        pcVar14 = (char *)(lVar12 + 0x473);
      }
    }
    iVar11 = *(int *)(param_1 + 0x94);
    if (iVar11 != 0) {
      cVar5 = *pcVar14;
      puVar15 = *(uint **)(param_1 + 0x88);
      uVar13 = *(uint *)(param_1 + 0x90);
      do {
        bVar9 = uVar13 < 0x10;
        uVar13 = uVar13 - 0x10;
        if (bVar9) break;
        uVar7 = *puVar15;
        uVar3 = *(uint *)puVar8;
        if ((int)uVar3 <= (int)uVar7) break;
        uVar4 = puVar15[3];
        *(uint *)(param_1 + 0x90) = uVar13;
        if (uVar4 <= uVar13) {
          if ((((uVar7 < uVar3) &&
               (plVar10 = *(long **)(*(long *)(puVar8 + 8) + (long)(int)uVar7 * 8),
               plVar10 != (long *)0x0)) && (cVar5 != -1)) && (uVar4 != 0)) {
            local_24[0] = cVar5;
            (**(code **)(*plVar10 + 8))(plVar10,local_24,puVar15 + 4,uVar4);
            uVar13 = *(uint *)(param_1 + 0x90);
            iVar11 = *(int *)(param_1 + 0x94);
          }
          uVar13 = uVar13 - uVar4;
          puVar15 = (uint *)((long)(puVar15 + 4) + (ulong)uVar4);
          iVar11 = iVar11 + -1;
          *(uint *)(param_1 + 0x90) = uVar13;
          *(int *)(param_1 + 0x94) = iVar11;
        }
      } while (iVar11 != 0);
    }
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}


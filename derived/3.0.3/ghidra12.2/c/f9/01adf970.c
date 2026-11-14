
void FUN_01adf970(long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  uint *puVar12;
  char cVar13;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    pcVar8 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_01adfbec:
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)pcVar8;
  }
  else {
    uVar7 = FUN_01ae59b0();
    puVar5 = PTR_DAT_04bbfe90;
    puVar3 = PTR_DAT_04bbfe88;
    puVar12 = *(uint **)(param_2 + 0x10);
    if ((uVar7 & 1) != 0) {
      if (*puVar12 != 0) {
        cVar13 = *PTR_DAT_04bbfe88;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *puVar3 = 1;
            memset(puVar5,0xff,0x1ac);
          }
          else {
            uVar4 = *(uint *)(puVar5 + 0x194);
            if (-1 < (int)uVar4) {
              pcVar8 = (char *)((ulong)uVar4 + (long)puVar12);
              goto LAB_01adfa98;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar12;
          pcVar8 = (char *)0x0;
          if ((*puVar12 == 0) || (puVar12 == puVar10)) goto LAB_01adfa98;
          lVar2 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar12 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar7 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
          *(undefined4 *)(puVar5 + 0x194) = 0xfffffffe;
          pcVar8 = (char *)0x0;
          if (uVar7 == 0) goto LAB_01adfa98;
          piVar11 = (int *)(lVar2 + 4);
          while (piVar11[-1] != 0x48ef0398) {
            piVar11 = piVar11 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              pcVar8 = (char *)0x0;
              goto LAB_01adfa98;
            }
          }
          iVar6 = 0;
          if (*piVar11 != -1) {
            iVar6 = *piVar11;
          }
          *(int *)(puVar5 + 0x194) = iVar6;
        } while (*puVar12 != 0);
      }
      pcVar8 = (char *)0x0;
LAB_01adfa98:
      pcVar1 = PTR_DAT_04c48538;
      if (pcVar8 != (char *)0x0) {
        pcVar1 = pcVar8;
      }
      if (*pcVar1 == '\0') {
        if (((DAT_0532a940 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0532a940), iVar6 != 0)) {
          DAT_0532a930 = PTR_DAT_04bb2020 + 0x10;
          DAT_0532a938 = "TemplateDummyFurniture1x1";
          __cxa_guard_release(&DAT_0532a940);
        }
        pcVar8 = DAT_0532a938;
        goto LAB_01adfbec;
      }
      puVar12 = *(uint **)(param_2 + 0x10);
    }
    puVar5 = PTR_DAT_04bbfe90;
    puVar3 = PTR_DAT_04bbfe88;
    if (*puVar12 != 0) {
      cVar13 = *PTR_DAT_04bbfe88;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *puVar3 = 1;
          memset(puVar5,0xff,0x1ac);
        }
        else {
          uVar4 = *(uint *)(puVar5 + 0x194);
          if (-1 < (int)uVar4) {
            puVar9 = (undefined *)((ulong)uVar4 + (long)puVar12);
            goto LAB_01adfb8c;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar12;
        puVar9 = (undefined *)0x0;
        if ((*puVar12 == 0) || (puVar12 == puVar10)) goto LAB_01adfb8c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar12 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x194) = 0xfffffffe;
        puVar9 = (undefined *)0x0;
        if (uVar7 == 0) goto LAB_01adfb8c;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x48ef0398) {
          piVar11 = piVar11 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            puVar9 = (undefined *)0x0;
            goto LAB_01adfb8c;
          }
        }
        iVar6 = 0;
        if (*piVar11 != -1) {
          iVar6 = *piVar11;
        }
        *(int *)(puVar5 + 0x194) = iVar6;
      } while (*puVar12 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_01adfb8c:
    puVar3 = PTR_DAT_04c48538;
    if (puVar9 != (undefined *)0x0) {
      puVar3 = puVar9;
    }
    *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
    param_1[1] = (long)puVar3;
  }
  return;
}


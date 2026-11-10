
int FUN_00179414(long *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  void *__ptr;
  size_t sVar7;
  size_t sVar8;
  undefined8 uVar9;
  long lVar10;
  FILE *pFVar11;
  long lVar12;
  void *pvVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  size_t local_58;
  
  lVar12 = *param_1;
  pvVar13 = *(void **)(lVar12 + 0x1150);
  *param_2 = 1;
  FUN_00146d90(lVar12);
  lVar10 = *param_1;
  puVar14 = *(undefined8 **)(lVar10 + 0x1e8);
  if ((*(byte *)(lVar12 + 0xf63) >> 1 & 1) == 0) {
    pFVar11 = (FILE *)puVar14[2];
    lVar10 = FUN_00179358(pFVar11);
    iVar4 = FUN_00179944(param_1);
    if (iVar4 != 0) {
      return iVar4;
    }
    lVar15 = *(long *)(lVar12 + 0x1518);
    if (lVar15 < 0) {
      if (lVar10 < 0) {
        FUN_0014d5f8(lVar12,"Can\'t get the size of file.");
        return 0x1a;
      }
      lVar15 = lVar15 + lVar10;
      *(long *)(lVar12 + 0x1518) = lVar15;
    }
    if (lVar10 < lVar15) {
      FUN_0014d5f8(lVar12,"failed to resume file:// transfer");
    }
    else if ((lVar15 == 0) || (iVar4 = fseek(pFVar11,lVar15,0), lVar15 == iVar4)) {
      FUN_00146c9c(lVar12,7);
      lVar10 = 0;
      while( true ) {
        sVar8 = fread(pvVar13,1,*(long *)(lVar12 + 0xc30) - 1,pFVar11);
        if ((long)sVar8 < 1) {
          iVar4 = 0;
          goto LAB_0017972c;
        }
        *(undefined1 *)((long)pvVar13 + sVar8) = 0;
        iVar4 = FUN_0014d948(param_1,1,pvVar13,sVar8);
        if (iVar4 != 0) {
          return iVar4;
        }
        lVar10 = sVar8 + lVar10;
        FUN_00146f34(lVar12,lVar10);
        iVar4 = FUN_001466d0(param_1);
        if (iVar4 != 0) break;
        auVar16 = FUN_00147178();
        iVar4 = FUN_001628cc(lVar12,auVar16._0_8_,auVar16._8_8_);
        if (iVar4 != 0) {
LAB_0017972c:
          iVar5 = FUN_001466d0(param_1);
          if (iVar5 != 0) {
            iVar4 = 0x2a;
          }
          return iVar4;
        }
      }
      iVar4 = 0x2a;
      goto LAB_0017972c;
    }
    return 0x24;
  }
  pcVar6 = strchr((char *)*puVar14,0x5c);
  pvVar13 = *(void **)(lVar10 + 0x1150);
  *(void **)(lVar10 + 0x1e0) = pvVar13;
  if ((pcVar6 == (char *)0x0) || (pcVar6[1] == '\0')) {
    return 0x25;
  }
  pcVar6 = "w+";
  if (*(long *)(lVar10 + 0x1518) != 0) {
    pcVar6 = "a";
  }
  pFVar11 = fopen((char *)*puVar14,pcVar6);
  if (pFVar11 == (FILE *)0x0) {
    uVar9 = *puVar14;
    pcVar6 = "Can\'t open %s for writing";
LAB_001796a8:
    FUN_0014d5f8(lVar10,pcVar6,uVar9);
    iVar4 = 0x17;
  }
  else {
    if (*(long *)(lVar10 + 0x1538) != -1) {
      FUN_00146c74(lVar10);
    }
    if (*(long *)(lVar10 + 0x1518) < 0) {
      lVar12 = FUN_00179358(pFVar11);
      if (lVar12 == -1) {
        fclose(pFVar11);
        uVar9 = *puVar14;
        pcVar6 = "Can\'t get the size of %s";
        goto LAB_001796a8;
      }
      *(long *)(lVar10 + 0x1518) = lVar12;
    }
    lVar12 = 0;
    while( true ) {
      local_58 = 0;
      iVar4 = FUN_0015fde4(param_1,*(undefined8 *)(lVar10 + 0xc30),&local_58);
      if (iVar4 != 0) break;
      if (local_58 == 0) {
        iVar5 = FUN_001466d0(param_1);
        iVar4 = 0;
        if (iVar5 != 0) {
          iVar4 = 0x2a;
        }
        break;
      }
      lVar15 = *(long *)(lVar10 + 0x1518);
      if (lVar15 == 0) {
        __ptr = pvVar13;
        sVar8 = local_58;
      }
      else {
        sVar8 = local_58 - lVar15;
        bVar3 = sVar8 == 0;
        lVar1 = lVar15;
        if (bVar3 || (long)local_58 < lVar15) {
          lVar1 = 0;
        }
        lVar2 = 0;
        if (bVar3 || (long)local_58 < lVar15) {
          lVar2 = lVar15 - local_58;
        }
        *(long *)(lVar10 + 0x1518) = lVar2;
        if (bVar3 || (long)local_58 < lVar15) {
          sVar8 = 0;
        }
        __ptr = (void *)((long)pvVar13 + lVar1);
      }
      sVar7 = fwrite(__ptr,1,sVar8,pFVar11);
      if (sVar7 != sVar8) {
        iVar4 = 0x37;
        break;
      }
      lVar12 = sVar8 + lVar12;
      FUN_00146f3c(lVar10,lVar12);
      iVar4 = FUN_001466d0(param_1);
      if (iVar4 != 0) {
        iVar4 = 0x2a;
        break;
      }
      auVar16 = FUN_00147178();
      iVar4 = FUN_001628cc(lVar10,auVar16._0_8_,auVar16._8_8_);
      if (iVar4 != 0) break;
    }
    fclose(pFVar11);
  }
  return iVar4;
}


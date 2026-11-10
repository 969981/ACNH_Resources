
void FUN_001b88c0(long param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  ulong uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  char *param3;
  char *param5;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined *local_518 [3];
  char *local_500;
  undefined1 auStack_4f0 [144];
  char acStack_460 [1024];
  
  uVar4 = *(int *)(param_1 + 0x10) - 1;
  if (uVar4 < 3) {
    iVar3 = snprintf(acStack_460,0x400,
                     &DAT_0410b4c0 + *(int *)(&DAT_0410b4c0 + (long)(int)uVar4 * 4));
    lVar9 = (long)iVar3;
    iVar3 = FUN_001e1884(*(undefined8 *)(param_1 + 8));
    if (iVar3 != 0) goto LAB_001b8960;
LAB_001b8924:
    sVar2 = FUN_001e14f8(*(undefined8 *)(param_1 + 8));
    if (sVar2 != 0) goto LAB_001b89d8;
    iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x88);
    if (iVar3 == 0) {
      bVar1 = false;
      goto LAB_001b8ac4;
    }
LAB_001b8a54:
    FUN_001e17ec(auStack_4f0,iVar3,0);
    FUN_001e18ec(local_518,auStack_4f0);
    iVar3 = snprintf(acStack_460 + lVar9,0x400,"%s%s%s","Pa","=",local_500);
    lVar9 = lVar9 + iVar3;
    local_518[0] = PTR_DAT_04bc0ec8 + 0x10;
    FUN_0018b1a0(local_518);
    FUN_001e1868(auStack_4f0);
  }
  else {
    lVar9 = 0;
    iVar3 = FUN_001e1884(*(undefined8 *)(param_1 + 8));
    if (iVar3 == 0) goto LAB_001b8924;
LAB_001b8960:
    bVar1 = iVar3 != 0;
    iVar3 = snprintf(acStack_460 + lVar9,0x400,"%s%s","address",&DAT_040c2bc3);
    lVar9 = lVar9 + iVar3;
    FUN_001e188c(*(undefined8 *)(param_1 + 8),acStack_460 + lVar9,0x400 - lVar9);
    sVar5 = strlen(acStack_460 + lVar9);
    lVar9 = sVar5 + lVar9;
    sVar2 = FUN_001e14f8(*(undefined8 *)(param_1 + 8));
    if (sVar2 == 0) {
      if (*(int *)(*(long *)(param_1 + 8) + 0x88) == 0) goto LAB_001b8ac4;
LAB_001b8a30:
      iVar3 = snprintf(acStack_460 + lVar9,0x400,";");
      lVar9 = lVar9 + iVar3;
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x88);
      goto LAB_001b8a54;
    }
    iVar3 = snprintf(acStack_460 + lVar9,0x400,";");
    lVar9 = lVar9 + iVar3;
LAB_001b89d8:
    uVar4 = FUN_001e14f8(*(undefined8 *)(param_1 + 8));
    iVar3 = snprintf(acStack_460 + lVar9,0x400,"%s%s%u","port","=",uVar4 & 0xffff);
    lVar9 = lVar9 + iVar3;
    if (*(int *)(*(long *)(param_1 + 8) + 0x88) != 0) goto LAB_001b8a30;
  }
  bVar1 = true;
LAB_001b8ac4:
  plVar14 = *(long **)(param_1 + 0x30);
  plVar10 = (long *)(param_1 + 0x38);
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar14 != plVar10) goto LAB_001b8c18;
  do {
    if (plVar11 == (long *)(param_1 + 0x20)) {
      if (*(long *)(param_1 + 0x58) != 0) {
        iVar3 = snprintf(acStack_460 + lVar9,0x400,"#");
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 != (long *)(param_1 + 0x50)) {
          lVar9 = lVar9 + iVar3;
          bVar1 = false;
          do {
            if (bVar1) {
              iVar3 = snprintf(acStack_460 + lVar9,0x400,";");
              lVar9 = lVar9 + iVar3;
            }
            iVar3 = snprintf(acStack_460 + lVar9,0x400,"%s%s%s",(char *)plVar10[7],"=",
                             (char *)plVar10[0xc]);
            plVar11 = (long *)plVar10[1];
            plVar14 = plVar10;
            if ((long *)plVar10[1] == (long *)0x0) {
              do {
                plVar10 = (long *)plVar14[2];
                bVar1 = (long *)*plVar10 != plVar14;
                plVar14 = plVar10;
              } while (bVar1);
            }
            else {
              do {
                plVar10 = plVar11;
                plVar11 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            lVar9 = lVar9 + iVar3;
            bVar1 = true;
          } while (plVar10 != (long *)(param_1 + 0x50));
        }
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_00187e4c(*(long *)(param_1 + 0x60) + -4);
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined1 *)(param_1 + 0x69) = 0;
      }
      sVar5 = strlen(acStack_460);
      if (sVar5 < 0x201) {
        sVar7 = strlen(acStack_460);
        puVar8 = (undefined4 *)FUN_00187df4(sVar7 + 5);
        *puVar8 = (int)(sVar7 + 1);
        *(undefined4 **)(param_1 + 0x60) = puVar8 + 1;
        strncpy((char *)(puVar8 + 1),acStack_460,sVar7 + 1);
        *(undefined1 *)(*(long *)(param_1 + 0x60) + sVar7) = 0;
      }
      *(bool *)(param_1 + 0x69) = sVar5 < 0x201;
      *(undefined1 *)(param_1 + 0x6a) = 1;
      *(undefined1 *)(param_1 + 0x68) = 1;
      return;
    }
LAB_001b8c18:
    do {
      if (bVar1) {
        iVar3 = snprintf(acStack_460 + lVar9,0x400,";");
        lVar9 = lVar9 + iVar3;
      }
      if (plVar14 == plVar10) {
        param3 = (char *)plVar11[7];
        uVar6 = plVar11[9];
        plVar14 = (long *)plVar11[1];
        plVar12 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar12[2];
            bVar1 = (long *)*plVar11 != plVar12;
            plVar12 = plVar11;
          } while (bVar1);
        }
        else {
          do {
            plVar11 = plVar14;
            plVar14 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
        plVar14 = plVar10;
LAB_001b8d70:
        iVar3 = snprintf(acStack_460 + lVar9,0x400,"%s%s%lu",param3,"=",uVar6);
      }
      else {
        if (plVar11 == (long *)(param_1 + 0x20)) {
          param3 = (char *)plVar14[7];
          param5 = (char *)plVar14[0xc];
          plVar12 = (long *)plVar14[1];
          plVar13 = plVar14;
          if ((long *)plVar14[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar13[2];
              bVar1 = (long *)*plVar14 != plVar13;
              plVar13 = plVar14;
            } while (bVar1);
          }
          else {
            do {
              plVar14 = plVar12;
              plVar12 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        }
        else {
          uVar6 = FUN_0018b4e0(plVar14 + 4,plVar11 + 4);
          if ((uVar6 & 1) == 0) {
            param3 = (char *)plVar11[7];
            uVar6 = plVar11[9];
            plVar12 = (long *)plVar11[1];
            plVar13 = plVar11;
            if ((long *)plVar11[1] == (long *)0x0) {
              do {
                plVar11 = (long *)plVar13[2];
                bVar1 = (long *)*plVar11 != plVar13;
                plVar13 = plVar11;
              } while (bVar1);
            }
            else {
              do {
                plVar11 = plVar12;
                plVar12 = (long *)*plVar11;
              } while ((long *)*plVar11 != (long *)0x0);
            }
            goto LAB_001b8d70;
          }
          param3 = (char *)plVar14[7];
          param5 = (char *)plVar14[0xc];
          plVar12 = (long *)plVar14[1];
          plVar13 = plVar14;
          if ((long *)plVar14[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar13[2];
              bVar1 = (long *)*plVar14 != plVar13;
              plVar13 = plVar14;
            } while (bVar1);
          }
          else {
            do {
              plVar14 = plVar12;
              plVar12 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        }
        uVar6 = 0;
        if (param5 == (char *)0x0) goto LAB_001b8d70;
        iVar3 = snprintf(acStack_460 + lVar9,0x400,"%s%s%s",param3,"=",param5);
      }
      bVar1 = true;
      lVar9 = lVar9 + iVar3;
    } while (plVar14 != plVar10);
    bVar1 = true;
  } while( true );
}


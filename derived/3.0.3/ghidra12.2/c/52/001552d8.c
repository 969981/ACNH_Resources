
undefined4 FUN_001552d8(char *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  bool bVar9;
  char *pcVar10;
  undefined8 local_578;
  undefined1 auStack_570 [1024];
  undefined1 auStack_170 [256];
  char *local_70 [2];
  
  lVar8 = *param_2;
  local_70[0] = param_1;
  FUN_001556c8(param_2);
  bVar9 = false;
  bVar2 = false;
LAB_00155344:
  do {
    memset(auStack_170,0,0x100);
    memset(auStack_570,0,0x400);
    cVar1 = *param_1;
    while ((cVar1 != '\0' && (iVar3 = FUN_00146528(), iVar3 != 0))) {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    local_70[0] = param_1;
    uVar4 = FUN_001551d0(param_1,auStack_170,auStack_570,local_70);
    if ((uVar4 & 1) == 0) {
      if ((lVar8 != 0) && ((*(byte *)((long)param_2 + 0x3c) & 1) == 0)) {
        return 0x3d;
      }
      uVar7 = 0x3d;
      if (*param_2 != 0) {
        uVar7 = 0;
      }
      return uVar7;
    }
    iVar3 = FUN_00144a90(auStack_170,"nonce");
    if (iVar3 != 0) {
      FUN_00143300(*param_2);
      lVar5 = FUN_00143320(auStack_570);
      *param_2 = lVar5;
joined_r0x001555b0:
      if (lVar5 == 0) {
        return 0x1b;
      }
      goto LAB_001553c0;
    }
    iVar3 = FUN_00144a90(auStack_170,"stale");
    if (iVar3 != 0) {
      iVar3 = FUN_00144a90(auStack_570,&DAT_040a395f);
      if (iVar3 != 0) {
        *(byte *)((long)param_2 + 0x3c) = *(byte *)((long)param_2 + 0x3c) | 1;
        *(undefined4 *)(param_2 + 7) = 1;
      }
      goto LAB_001553c0;
    }
    iVar3 = FUN_00144a90(auStack_170,"realm");
    if (iVar3 == 0) {
      iVar3 = FUN_00144a90(auStack_170,"opaque");
      if (iVar3 != 0) {
        FUN_00143300(param_2[4]);
        lVar5 = FUN_00143320(auStack_570);
        param_2[4] = lVar5;
        goto joined_r0x0015549c;
      }
      iVar3 = FUN_00144a90(auStack_170,&DAT_040f7317);
      if (iVar3 != 0) {
        local_578 = 0;
        lVar5 = FUN_00143320(auStack_570);
        if (lVar5 == 0) {
          return 0x1b;
        }
        lVar6 = FUN_0014e158(lVar5,&DAT_0408f28c,&local_578);
        if (lVar6 != 0) {
          do {
            iVar3 = FUN_00144a90(lVar6,&DAT_040e1e41);
            if (iVar3 == 0) {
              iVar3 = FUN_00144a90(lVar6,"auth-int");
              bVar2 = (bool)(iVar3 != 0 | bVar2);
            }
            else {
              bVar9 = true;
            }
            lVar6 = FUN_0014e158(0,&DAT_0408f28c,&local_578);
          } while (lVar6 != 0);
        }
        FUN_00143300(lVar5);
        if (bVar9) {
          FUN_00143300(param_2[5]);
          pcVar10 = "auth";
        }
        else {
          if (!bVar2) goto LAB_001553c0;
          FUN_00143300(param_2[5]);
          pcVar10 = "auth-int";
        }
        lVar5 = FUN_00143320(pcVar10);
        param_2[5] = lVar5;
        goto joined_r0x001555b0;
      }
      iVar3 = FUN_00144a90(auStack_170,"algorithm");
      if (iVar3 == 0) {
        iVar3 = FUN_00144a90(auStack_170,"userhash");
        if ((iVar3 != 0) && (iVar3 = FUN_00144a90(auStack_570,&DAT_040a395f), iVar3 != 0)) {
          *(byte *)((long)param_2 + 0x3c) = *(byte *)((long)param_2 + 0x3c) | 2;
        }
      }
      else {
        FUN_00143300(param_2[6]);
        lVar5 = FUN_00143320(auStack_570);
        param_2[6] = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        iVar3 = FUN_00144a90(auStack_570,"MD5-sess");
        if (iVar3 == 0) {
          iVar3 = FUN_00144a90(auStack_570,&DAT_040ec432);
          if (iVar3 != 0) {
            *(undefined4 *)(param_2 + 3) = 0;
            goto LAB_001553c0;
          }
          iVar3 = FUN_00144a90(auStack_570,&DAT_0408f28e);
          if (iVar3 == 0) {
            iVar3 = FUN_00144a90(auStack_570,"SHA-256-SESS");
            if (iVar3 == 0) {
              iVar3 = FUN_00144a90(auStack_570,"SHA-512-256");
              if (iVar3 == 0) {
                iVar3 = FUN_00144a90(auStack_570,"SHA-512-256-SESS");
                if (iVar3 == 0) {
                  return 0x3d;
                }
                uVar7 = 5;
              }
              else {
                uVar7 = 4;
              }
            }
            else {
              uVar7 = 3;
            }
          }
          else {
            uVar7 = 2;
          }
        }
        else {
          uVar7 = 1;
        }
        *(undefined4 *)(param_2 + 3) = uVar7;
      }
    }
    else {
      FUN_00143300(param_2[2]);
      lVar5 = FUN_00143320(auStack_570);
      param_2[2] = lVar5;
joined_r0x0015549c:
      if (lVar5 == 0) {
        return 0x1b;
      }
    }
LAB_001553c0:
    pcVar10 = local_70[0];
    param_1 = local_70[0];
    if (*local_70[0] != '\0') {
      do {
        pcVar10 = param_1 + 1;
        iVar3 = FUN_00146528();
        if (iVar3 == 0) {
          local_70[0] = param_1;
          if (*param_1 == ',') {
            param_1 = pcVar10;
            local_70[0] = pcVar10;
          }
          goto LAB_00155344;
        }
        param_1 = pcVar10;
      } while (*pcVar10 != '\0');
    }
    param_1 = pcVar10;
    local_70[0] = pcVar10;
  } while( true );
}


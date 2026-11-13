
/* WARNING: Removing unreachable block (ram,0x01202038) */
/* WARNING: Removing unreachable block (ram,0x01201ec0) */
/* WARNING: Removing unreachable block (ram,0x01201d48) */
/* WARNING: Removing unreachable block (ram,0x01201bf4) */
/* WARNING: Removing unreachable block (ram,0x01201e04) */
/* WARNING: Removing unreachable block (ram,0x01201f7c) */
/* WARNING: Removing unreachable block (ram,0x012020f4) */

void FUN_01201bc0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  
  iVar4 = FUN_0277d6c4(param_2);
  if (iVar4 == DAT_04c47ee0) {
LAB_01201c20:
    lVar5 = 0;
  }
  else {
    iVar4 = FUN_0277d6c4(param_2);
    if (iVar4 == iRam0000000004c47ee4) {
LAB_01201c3c:
      lVar5 = 1;
      goto LAB_01201ccc;
    }
    iVar4 = FUN_0277d6c4(param_2);
    if (iVar4 == iRam0000000004c47ee8) {
LAB_01201c58:
      lVar5 = 2;
      goto LAB_01201ccc;
    }
    iVar4 = FUN_0277d6c4(param_2);
    if (iVar4 == iRam0000000004c47eec) {
LAB_01201c74:
      lVar5 = 3;
      goto LAB_01201ccc;
    }
    iVar4 = FUN_0277d6c4(param_2);
    if (iVar4 == iRam0000000004c47ef0) {
LAB_01201c90:
      lVar5 = 4;
      goto LAB_01201ccc;
    }
    iVar4 = FUN_0277d6c4(param_2);
    if (iVar4 == iRam0000000004c47ef4) {
LAB_01201cac:
      lVar5 = 5;
      goto LAB_01201ccc;
    }
    iVar4 = FUN_0277d6c4(param_2);
    puVar2 = PTR_DAT_04987220;
    if (iVar4 != DAT_04c47ef8) {
      iVar4 = FUN_0277d6c4(param_2);
      if (iVar4 == *(int *)puVar2) goto LAB_01201c20;
      iVar4 = FUN_0277d6c4(param_2);
      if (iVar4 == *(int *)(puVar2 + 4)) goto LAB_01201c3c;
      iVar4 = FUN_0277d6c4(param_2);
      if (iVar4 == *(int *)(puVar2 + 8)) goto LAB_01201c58;
      iVar4 = FUN_0277d6c4(param_2);
      if (iVar4 == *(int *)(puVar2 + 0xc)) goto LAB_01201c74;
      iVar4 = FUN_0277d6c4(param_2);
      if (iVar4 == *(int *)(puVar2 + 0x10)) goto LAB_01201c90;
      iVar4 = FUN_0277d6c4(param_2);
      if (iVar4 == *(int *)(puVar2 + 0x14)) goto LAB_01201cac;
      iVar4 = FUN_0277d6c4(param_2);
      puVar3 = PTR_DAT_04987228;
      if (iVar4 != *(int *)(puVar2 + 0x18)) {
        iVar4 = FUN_0277d6c4(param_2);
        if (iVar4 == *(int *)puVar3) goto LAB_01201c20;
        iVar4 = FUN_0277d6c4(param_2);
        if (iVar4 == *(int *)(puVar3 + 4)) goto LAB_01201c3c;
        iVar4 = FUN_0277d6c4(param_2);
        if (iVar4 == *(int *)(puVar3 + 8)) goto LAB_01201c58;
        iVar4 = FUN_0277d6c4(param_2);
        if (iVar4 == *(int *)(puVar3 + 0xc)) goto LAB_01201c74;
        iVar4 = FUN_0277d6c4(param_2);
        if (iVar4 == *(int *)(puVar3 + 0x10)) goto LAB_01201c90;
        iVar4 = FUN_0277d6c4(param_2);
        if (iVar4 == *(int *)(puVar3 + 0x14)) goto LAB_01201cac;
        iVar4 = FUN_0277d6c4(param_2);
        puVar2 = PTR_DAT_04987230;
        if (iVar4 != *(int *)(puVar3 + 0x18)) {
          iVar4 = FUN_0277d6c4(param_2);
          if (iVar4 == *(int *)puVar2) goto LAB_01201c20;
          iVar4 = FUN_0277d6c4(param_2);
          if (iVar4 == *(int *)(puVar2 + 4)) goto LAB_01201c3c;
          iVar4 = FUN_0277d6c4(param_2);
          if (iVar4 == *(int *)(puVar2 + 8)) goto LAB_01201c58;
          iVar4 = FUN_0277d6c4(param_2);
          if (iVar4 == *(int *)(puVar2 + 0xc)) goto LAB_01201c74;
          iVar4 = FUN_0277d6c4(param_2);
          if (iVar4 == *(int *)(puVar2 + 0x10)) goto LAB_01201c90;
          iVar4 = FUN_0277d6c4(param_2);
          if (iVar4 == *(int *)(puVar2 + 0x14)) goto LAB_01201cac;
          iVar4 = FUN_0277d6c4(param_2);
          puVar3 = PTR_DAT_04987238;
          if (iVar4 != *(int *)(puVar2 + 0x18)) {
            iVar4 = FUN_0277d6c4(param_2);
            if (iVar4 == *(int *)puVar3) goto LAB_01201c20;
            iVar4 = FUN_0277d6c4(param_2);
            if (iVar4 == *(int *)(puVar3 + 4)) goto LAB_01201c3c;
            iVar4 = FUN_0277d6c4(param_2);
            if (iVar4 == *(int *)(puVar3 + 8)) goto LAB_01201c58;
            iVar4 = FUN_0277d6c4(param_2);
            if (iVar4 == *(int *)(puVar3 + 0xc)) goto LAB_01201c74;
            iVar4 = FUN_0277d6c4(param_2);
            if (iVar4 == *(int *)(puVar3 + 0x10)) goto LAB_01201c90;
            iVar4 = FUN_0277d6c4(param_2);
            if (iVar4 == *(int *)(puVar3 + 0x14)) goto LAB_01201cac;
            iVar4 = FUN_0277d6c4(param_2);
            puVar2 = PTR_DAT_04987240;
            if (iVar4 != *(int *)(puVar3 + 0x18)) {
              iVar4 = FUN_0277d6c4(param_2);
              if (iVar4 == *(int *)puVar2) goto LAB_01201c20;
              iVar4 = FUN_0277d6c4(param_2);
              if (iVar4 == *(int *)(puVar2 + 4)) goto LAB_01201c3c;
              iVar4 = FUN_0277d6c4(param_2);
              if (iVar4 == *(int *)(puVar2 + 8)) goto LAB_01201c58;
              iVar4 = FUN_0277d6c4(param_2);
              if (iVar4 == *(int *)(puVar2 + 0xc)) goto LAB_01201c74;
              iVar4 = FUN_0277d6c4(param_2);
              if (iVar4 == *(int *)(puVar2 + 0x10)) goto LAB_01201c90;
              iVar4 = FUN_0277d6c4(param_2);
              if (iVar4 == *(int *)(puVar2 + 0x14)) goto LAB_01201cac;
              iVar4 = FUN_0277d6c4(param_2);
              puVar3 = PTR_DAT_04987248;
              if (iVar4 != *(int *)(puVar2 + 0x18)) {
                iVar4 = FUN_0277d6c4(param_2);
                if (iVar4 == *(int *)puVar3) goto LAB_01201c20;
                iVar4 = FUN_0277d6c4(param_2);
                if (iVar4 == *(int *)(puVar3 + 4)) goto LAB_01201c3c;
                iVar4 = FUN_0277d6c4(param_2);
                if (iVar4 == *(int *)(puVar3 + 8)) goto LAB_01201c58;
                iVar4 = FUN_0277d6c4(param_2);
                if (iVar4 == *(int *)(puVar3 + 0xc)) goto LAB_01201c74;
                iVar4 = FUN_0277d6c4(param_2);
                if (iVar4 == *(int *)(puVar3 + 0x10)) goto LAB_01201c90;
                iVar4 = FUN_0277d6c4(param_2);
                if (iVar4 == *(int *)(puVar3 + 0x14)) goto LAB_01201cac;
                iVar4 = FUN_0277d6c4(param_2);
                if (iVar4 != *(int *)(puVar3 + 0x18)) {
                  uVar1 = param_2[1];
                  *param_1 = *param_2;
                  param_1[1] = uVar1;
                  return;
                }
              }
            }
          }
        }
      }
    }
    lVar5 = 6;
  }
LAB_01201ccc:
  if (param_3 - 1U < 6) {
    puVar6 = (undefined4 *)(&PTR_DAT_04987220)[(int)(param_3 - 1U)];
  }
  else {
    puVar6 = &DAT_04c47ee0;
  }
  uVar1 = puVar6[lVar5];
  *(undefined2 *)((long)param_1 + 2) = 0;
  param_1[1] = 0;
  *(short *)param_1 = (short)uVar1;
  FUN_0277d4ac(param_1);
  return;
}


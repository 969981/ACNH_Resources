
void FUN_0215c650(long param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  void *__dest;
  uint uVar10;
  void *__src;
  long lVar11;
  undefined *local_b0;
  char *local_a8;
  undefined4 local_a0;
  char local_9c [63];
  undefined1 local_5d;
  undefined8 local_58;
  
  pcVar6 = (char *)param_2[1];
  if ((((*pcVar6 != 'M') || (pcVar6[1] != 'a')) || (pcVar6[2] != 'R')) || (pcVar6[3] != 'e')) {
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    local_58 = (ulong)(uint)local_58;
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
    FUN_01e5a930(0x40000000,lVar7,0xd,PTR_DAT_04bb2150,&local_b0,(long)&local_58 + 4,
                 PTR_DAT_04bc1600,6);
    __dest = *(void **)(lVar7 + 0x3b8);
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = 0;
      do {
        if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_0215c7cc;
        lVar11 = param_2[1] + lVar8;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0215c7cc;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0215c7cc;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0215c7cc:
      iVar5 = (int)lVar8;
      if (*(int *)(lVar7 + 0x3c0) <= (int)lVar8) {
        iVar5 = *(int *)(lVar7 + 0x3c0) + -1;
      }
      memcpy(__dest,__src,(long)iVar5);
      *(undefined1 *)((long)__dest + (long)iVar5) = 0;
    }
    *(undefined4 *)(lVar7 + 0x3a0) = 0;
    *(undefined1 *)(lVar7 + 0x410) = 0;
    uVar4 = *(uint *)(param_1 + 0x7f0) & 0xfffffff7;
    goto LAB_0215c804;
  }
  local_b0 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = "MaRe";
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = 0;
  iVar5 = -1;
  do {
    if (*(char *)(param_2[1] + lVar7) == '\0') {
LAB_0215c830:
      if (3 < (int)lVar7) {
        iVar5 = -1;
        lVar7 = (ulong)((int)lVar7 - 4) + 1;
        goto LAB_0215c85c;
      }
      iVar5 = -1;
      break;
    }
    lVar8 = param_2[1] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_0215c830;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_0215c830;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  goto LAB_0215c8dc;
  while (lVar7 = lVar7 + -1, 0 < (int)lVar7) {
LAB_0215c85c:
    lVar11 = param_2[1];
    lVar8 = lVar11 + lVar7;
    (**(code **)(local_b0 + 0x18))(&local_b0);
    if (((char *)(lVar8 + -1) == local_a8) ||
       ((cVar1 = *(char *)(lVar8 + -1), cVar1 == *local_a8 &&
        ((cVar1 == '\0' ||
         ((cVar1 = *(char *)(lVar11 + lVar7), cVar1 == local_a8[1] &&
          ((cVar1 == '\0' ||
           ((*(char *)(lVar8 + 1) == local_a8[2] &&
            ((*(char *)(lVar8 + 1) == '\0' || (*(char *)(lVar8 + 2) == local_a8[3])))))))))))))) {
      iVar5 = (int)lVar7 + -1;
      break;
    }
  }
LAB_0215c8dc:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = param_2[1];
  lVar7 = 0;
  do {
    if (*(char *)(lVar8 + lVar7) == '\0') goto LAB_0215c93c;
    if (*(char *)(lVar8 + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_0215c93c;
    }
    if (*(char *)(lVar8 + lVar7 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_0215c93c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_0215c93c:
  local_5d = 0;
  pcVar6 = *(char **)(PTR_PTR_04bb2238 + 8);
  if ((int)(iVar5 + 4U) <= (int)lVar7 && -5 < iVar5) {
    pcVar6 = (char *)(lVar8 + (ulong)(iVar5 + 4U));
  }
  local_a0 = 0x40;
  local_a8 = local_9c;
  if (local_9c != pcVar6) {
    lVar7 = 0;
    do {
      if (pcVar6[lVar7] == '\0') {
LAB_0215c9bc:
        iVar5 = (int)lVar7;
        if (0x3f < iVar5) {
          iVar5 = 0x3f;
        }
        goto LAB_0215c9c8;
      }
      if (pcVar6[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0215c9bc;
      }
      if (pcVar6[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0215c9bc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    iVar5 = 0;
LAB_0215c9c8:
    memcpy(local_9c,pcVar6,(long)iVar5);
    local_9c[iVar5] = '\0';
  }
  puVar2 = PTR_s_EmotEnd_04bb4608;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  uVar4 = 0;
  do {
    if ((int)uVar4 < 0x6d) {
      pcVar6 = "";
      if (uVar4 < 0x6d) {
        puVar3 = puVar2 + 0x528;
        uVar10 = uVar4;
LAB_0215ca4c:
        pcVar6 = *(char **)(puVar3 + (ulong)uVar10 * 8);
      }
    }
    else {
      pcVar6 = "";
      if (uVar4 < 0x79) {
        puVar3 = (undefined *)FUN_007c3ad0();
        uVar10 = uVar4 - 0x6d;
        goto LAB_0215ca4c;
      }
    }
    (**(code **)(local_b0 + 0x18))(&local_b0);
    if (pcVar6 == local_a8) goto LAB_0215cae4;
    if (*pcVar6 == *local_a8) {
      if (*pcVar6 == '\0') goto LAB_0215cae4;
      lVar7 = 0x7fffe;
      pcVar9 = local_a8;
      while( true ) {
        if (pcVar6[1] != pcVar9[1]) break;
        if (pcVar6[1] == '\0') goto LAB_0215cae4;
        if (pcVar6[2] != pcVar9[2]) break;
        if (pcVar6[2] == '\0') goto LAB_0215cae4;
        if ((lVar7 == 0) || (cVar1 = pcVar6[3], cVar1 != pcVar9[3])) break;
        lVar7 = lVar7 + -3;
        pcVar9 = pcVar9 + 3;
        pcVar6 = pcVar6 + 3;
        if (cVar1 == '\0') goto LAB_0215cae4;
      }
    }
    uVar10 = 0x79;
    if ((int)uVar4 < 0x79) {
      uVar10 = uVar4 + 1;
    }
    uVar4 = uVar10;
  } while (uVar10 != 0x79);
  uVar4 = 0;
LAB_0215cae4:
  local_58 = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  FUN_01e5a930(0x40000000,lVar7,0xc,PTR_DAT_04bb2150,(long)&local_58 + 4,&local_58,PTR_DAT_04bc1600,
               6);
  *(uint *)(lVar7 + 0x3ac) = uVar4;
  uVar4 = *(uint *)(param_1 + 0x7f0) | 8;
LAB_0215c804:
  *(uint *)(param_1 + 0x7f0) = uVar4;
  return;
}


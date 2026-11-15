
void FUN_01ed8340(long param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  void *__dest;
  uint uVar10;
  void *__src;
  char *pcVar11;
  undefined8 local_38;
  
  puVar4 = PTR_s_EmotEnd_04bb4608;
  if (*(char *)(param_1 + 0x7d0f) != '\0') {
    return;
  }
  if (**(char **)(param_1 + 0x78a8) == '\0') {
    local_38 = 0;
    FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,(long)&local_38 + 4,
                 &local_38,PTR_DAT_04bc1600,6);
  }
  else {
    lVar8 = param_1 + 0x78a0;
    uVar9 = 0;
    do {
      if ((int)uVar9 < 0x6d) {
        pcVar11 = "";
        if (uVar9 < 0x6d) {
          puVar5 = puVar4 + 0x528;
          uVar10 = uVar9;
LAB_01ed83e4:
          pcVar11 = *(char **)(puVar5 + (ulong)uVar10 * 8);
        }
      }
      else {
        pcVar11 = "";
        if (uVar9 < 0x79) {
          puVar5 = (undefined *)FUN_007c3ad0();
          uVar10 = uVar9 - 0x6d;
          goto LAB_01ed83e4;
        }
      }
      (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(lVar8);
      pcVar6 = *(char **)(param_1 + 0x78a8);
      if (pcVar11 == pcVar6) {
LAB_01ed8470:
        local_38 = 0;
        lVar8 = *(long *)(param_1 + 0x10);
        FUN_01e5a930(0x40000000,lVar8,0xc,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                     PTR_DAT_04bc1600,6);
        *(uint *)(lVar8 + 0x3ac) = uVar9;
        return;
      }
      if (*pcVar11 == *pcVar6) {
        if (*pcVar11 == '\0') goto LAB_01ed8470;
        lVar7 = 0x7fffe;
        while( true ) {
          if (pcVar11[1] != pcVar6[1]) break;
          if (pcVar11[1] == '\0') goto LAB_01ed8470;
          if (pcVar11[2] != pcVar6[2]) break;
          if (pcVar11[2] == '\0') goto LAB_01ed8470;
          if ((lVar7 == 0) || (cVar3 = pcVar11[3], cVar3 != pcVar6[3])) break;
          lVar7 = lVar7 + -3;
          pcVar11 = pcVar11 + 3;
          pcVar6 = pcVar6 + 3;
          if (cVar3 == '\0') goto LAB_01ed8470;
        }
      }
      uVar10 = 0x79;
      if ((int)uVar9 < 0x79) {
        uVar10 = uVar9 + 1;
      }
      uVar9 = uVar10;
    } while (uVar10 != 0x79);
    local_38 = 0;
    lVar7 = *(long *)(param_1 + 0x10);
    FUN_01e5a930(0x40000000,lVar7,0xd,PTR_DAT_04bb2150,(long)&local_38 + 4,&local_38,
                 PTR_DAT_04bc1600,6);
    __dest = *(void **)(lVar7 + 0x3b8);
    (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(lVar8);
    __src = *(void **)(param_1 + 0x78a8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x78a0) + 0x18))(lVar8);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x78a8) + lVar8) == '\0') goto LAB_01ed85a4;
        lVar1 = *(long *)(param_1 + 0x78a8) + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_01ed85a4;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_01ed85a4;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_01ed85a4:
      iVar2 = (int)lVar8;
      if (*(int *)(lVar7 + 0x3c0) <= (int)lVar8) {
        iVar2 = *(int *)(lVar7 + 0x3c0) + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    *(undefined4 *)(lVar7 + 0x3a0) = 0;
    *(undefined1 *)(lVar7 + 0x410) = 0;
  }
  return;
}



bool FUN_02930400(long *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  void *__src;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  short sVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  char *pcVar16;
  undefined *local_50;
  char *local_48;
  
  plVar15 = *(long **)PTR_DAT_04bb2640;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "Stage";
  iVar5 = (**(code **)(*plVar15 + 0x10))(plVar15);
  if (iVar5 < 1) {
    iVar5 = -1;
  }
  else {
    iVar5 = 0;
    do {
      puVar7 = (undefined8 *)(**(code **)(*plVar15 + 0x18))(plVar15,iVar5);
      pcVar16 = (char *)*puVar7;
      (**(code **)(local_50 + 0x18))(&local_50);
      if (pcVar16 == local_48) goto LAB_02930528;
      if (*pcVar16 == *local_48) {
        if (*pcVar16 == '\0') goto LAB_02930528;
        lVar10 = 0x7fffe;
        pcVar9 = local_48;
        while( true ) {
          if (pcVar16[1] != pcVar9[1]) break;
          if (pcVar16[1] == '\0') goto LAB_02930528;
          if (pcVar16[2] != pcVar9[2]) break;
          if (pcVar16[2] == '\0') goto LAB_02930528;
          if ((lVar10 == 0) || (cVar2 = pcVar16[3], cVar2 != pcVar9[3])) break;
          lVar10 = lVar10 + -3;
          pcVar9 = pcVar9 + 3;
          pcVar16 = pcVar16 + 3;
          if (cVar2 == '\0') goto LAB_02930528;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
    } while (iVar5 < iVar6);
    iVar5 = -1;
  }
LAB_02930528:
  puVar3 = PTR_DAT_04bb2720;
  sVar12 = *(short *)PTR_DAT_04bb6298;
  if (sVar12 != -1) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0xf);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar12 * 8);
    if (0xff < (uint)(int)sVar12) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0xf & 1) != 0) {
      uVar8 = 1;
      goto LAB_02930584;
    }
  }
  uVar8 = 0;
LAB_02930584:
  FUN_03c3faa0(*(undefined8 *)PTR_DAT_04bb2720,iVar5,0,uVar8);
  cVar2 = *(char *)(*(long *)puVar3 + 0x344);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1);
    pvVar4 = DAT_055cdb40;
    __src = (void *)param_1[1];
    if (DAT_055cdb40 != __src) {
      lVar10 = 0;
      do {
        if (*(char *)((long)__src + lVar10) == '\0') goto LAB_0293061c;
        if (*(char *)((long)__src + lVar10 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_0293061c;
        }
        if (*(char *)((long)__src + lVar10 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_0293061c;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_0293061c:
      iVar5 = (int)lVar10;
      if (DAT_055cdb48 <= (int)lVar10) {
        iVar5 = DAT_055cdb48 + -1;
      }
      memcpy(DAT_055cdb40,__src,(long)iVar5);
      *(undefined1 *)((long)pvVar4 + (long)iVar5) = 0;
    }
    (**(code **)(DAT_055cdb38 + 0x18))(&DAT_055cdb38);
    iVar5 = FUN_006bd550(DAT_055cdb40,0);
    puVar7 = DAT_055c1b60;
    DAT_055cdb70 = iVar5;
    if (DAT_055c1b60 == &DAT_055c1b58) {
      iVar6 = 0xffff;
      *(undefined2 *)PTR_DAT_04bc39f0 = 0xffff;
      lVar10 = *(long *)PTR_DAT_04bb27d0;
    }
    else {
      puVar11 = DAT_055c1b60 + -8;
      sVar12 = 0;
      puVar13 = DAT_055c1b60;
      puVar14 = puVar11;
      do {
        if (*(int *)(puVar14 + 7) == iVar5) goto LAB_029306b4;
        puVar13 = (undefined8 *)puVar13[1];
        sVar12 = sVar12 + 1;
        puVar14 = puVar13 + -8;
      } while (puVar13 != &DAT_055c1b58);
      sVar12 = -1;
LAB_029306b4:
      iVar6 = 0;
      *(short *)PTR_DAT_04bc39f0 = sVar12;
      lVar10 = *(long *)PTR_DAT_04bb27d0;
      do {
        if (*(int *)(puVar11 + 7) == iVar5) goto LAB_02930714;
        puVar7 = (undefined8 *)puVar7[1];
        iVar6 = iVar6 + 1;
        puVar11 = puVar7 + -8;
      } while (puVar7 != &DAT_055c1b58);
      iVar6 = 0xffff;
    }
LAB_02930714:
    FUN_01d69f00(*(undefined8 *)(lVar10 + 0x10),iVar6);
  }
  return cVar2 != '\0';
}



bool FUN_00188dd0(void *param_1)

{
  char *__s;
  void *pvVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  ThreadType *pTVar5;
  undefined8 *puVar6;
  size_t sVar7;
  long *plVar8;
  code *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  
  plVar8 = *(long **)((long)param_1 + 0x30);
  if ((DAT_04c57f08 == '\0') && (plVar8[1] == 0)) {
    lVar14 = *(long *)((long)param_1 + 0x48);
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar6 = malloc((lVar14 + 0x100aU & 0xfffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined8 *)(*DAT_04c57ea0)();
    }
    puVar3 = PTR_DAT_04bcba28;
    *(int *)(puVar6 + 2) = (int)lVar14 + 0xfff;
    *puVar6 = *(undefined8 *)puVar3;
    plVar8 = *(long **)((long)param_1 + 0x30);
    plVar8[1] = (long)puVar6 + 0x14;
    pTVar5 = (ThreadType *)*plVar8;
  }
  else {
    pTVar5 = (ThreadType *)*plVar8;
  }
  if (pTVar5 == (ThreadType *)0x0) {
    if (DAT_04c57ea0 == (code *)0x0) {
      puVar6 = malloc(0x1d0);
    }
    else {
      puVar6 = (undefined8 *)(*DAT_04c57ea0)(0x1d0);
    }
    pTVar5 = (ThreadType *)(puVar6 + 2);
    *puVar6 = DAT_04c57ea8;
    plVar8 = *(long **)((long)param_1 + 0x30);
    *plVar8 = (long)pTVar5;
  }
  *(undefined1 *)(plVar8 + 2) = 0;
  pvVar1 = (void *)((plVar8[1] & 0xfffffffffffff000U) + 0x1000);
  if (*(int *)((long)param_1 + 0x54) == -0x80000000) {
    iVar4 = nn::os::CreateThread
                      (pTVar5,(_func_void_void_ptr *)PTR_LAB_04bcbd50,param_1,pvVar1,
                       *(ulong *)((long)param_1 + 0x48),*(int *)((long)param_1 + 0x40));
  }
  else {
    iVar4 = nn::os::CreateThread
                      (pTVar5,(_func_void_void_ptr *)PTR_LAB_04bcbd50,param_1,pvVar1,
                       *(ulong *)((long)param_1 + 0x48),*(int *)((long)param_1 + 0x40),
                       *(int *)((long)param_1 + 0x54));
  }
  if (iVar4 != 0) {
    if (**(long **)((long)param_1 + 0x30) != 0) {
      puVar6 = (undefined8 *)(**(long **)((long)param_1 + 0x30) + -0x10);
      pcVar9 = (code *)*puVar6;
      if (pcVar9 == (code *)0x0) {
        free(puVar6);
      }
      else {
        (*pcVar9)();
      }
    }
    **(undefined8 **)((long)param_1 + 0x30) = 0;
    goto LAB_00188ff8;
  }
  pcVar15 = *(char **)((long)param_1 + 0x20);
  sVar7 = strlen(pcVar15);
  uVar16 = sVar7 + 1;
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar6 = malloc((sVar7 + 0xc & 0xfffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined8 *)(*DAT_04c57ea0)();
  }
  puVar3 = PTR_DAT_04bcba28;
  __s = (char *)((long)puVar6 + 0x14);
  *(int *)(puVar6 + 2) = (int)uVar16;
  *puVar6 = *(undefined8 *)puVar3;
  pcVar10 = __s;
  pcVar11 = __s;
  if (uVar16 < 2) {
LAB_00188f64:
    if (uVar16 != 0) goto LAB_00188f68;
  }
  else {
    do {
      cVar2 = *pcVar15;
      pcVar11 = pcVar10;
      if (cVar2 == '\0') goto LAB_00188f64;
      uVar16 = uVar16 - 1;
      pcVar15 = pcVar15 + 1;
      pcVar11 = pcVar10 + 1;
      *pcVar10 = cVar2;
      pcVar10 = pcVar11;
    } while (uVar16 != 1);
LAB_00188f68:
    uVar12 = uVar16 - 1;
    uVar13 = uVar16 & 3;
    if (uVar13 != 0) {
      uVar16 = uVar16 & 0xfffffffffffffffc;
      pcVar15 = pcVar11;
      do {
        uVar13 = uVar13 - 1;
        pcVar11 = pcVar15 + 1;
        *pcVar15 = '\0';
        pcVar15 = pcVar11;
      } while (uVar13 != 0);
    }
    if (2 < uVar12) {
      do {
        uVar16 = uVar16 - 4;
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        pcVar11 = pcVar11 + 4;
      } while (uVar16 != 0);
    }
  }
  sVar7 = strlen(__s);
  if (0x20 < sVar7) {
    *(undefined1 *)((long)puVar6 + 0x33) = 0;
  }
  nn::os::SetThreadName((ThreadType *)**(undefined8 **)((long)param_1 + 0x30),__s);
  if ((code *)*puVar6 == (code *)0x0) {
    free(puVar6);
  }
  else {
    (*(code *)*puVar6)(puVar6);
  }
  nn::os::StartThread((ThreadType *)**(undefined8 **)((long)param_1 + 0x30));
  *(undefined8 *)((long)param_1 + 0x38) = **(undefined8 **)((long)param_1 + 0x30);
LAB_00188ff8:
  return iVar4 == 0;
}


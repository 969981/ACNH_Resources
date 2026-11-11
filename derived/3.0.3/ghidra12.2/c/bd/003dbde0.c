
/* WARNING: Type propagation algorithm not settling */

bool FUN_003dbde0(long param_1,undefined4 param_2,long *param_3,int *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined1 auVar3 [4];
  char cVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  int iVar15;
  uint local_1a8;
  uint uStack_1a4;
  undefined1 auStack_19c [92];
  char local_140;
  char local_e8 [64];
  undefined1 local_a8 [4];
  char local_a4 [64];
  char local_64;
  int local_60;
  long *local_58;
  
  local_60 = param_4[0x36];
  pcVar10 = *(char **)(param_1 + 0x20);
  local_58 = param_3;
  if (pcVar10 == (char *)0x0) {
    puVar11 = (undefined8 *)((ulong)local_a8 | 4);
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
  }
  else {
    lVar13 = 0;
    cVar8 = *pcVar10;
    while (cVar8 != '\0') {
      local_a4[lVar13] = cVar8;
      if (((int)lVar13 == 0x3e) || (pcVar10[lVar13 + 1] == '\0')) {
        pcVar5 = local_a4 + 1;
        lVar12 = lVar13 + 1;
        goto LAB_003dbe80;
      }
      local_a4[lVar13 + 1] = pcVar10[lVar13 + 1];
      lVar13 = lVar13 + 2;
      cVar8 = pcVar10[lVar13];
    }
    pcVar5 = local_a4;
    lVar12 = lVar13;
LAB_003dbe80:
    pcVar5[lVar13] = '\0';
    pcVar10 = pcVar10 + lVar12;
    do {
      cVar8 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar8 != '\0');
  }
  local_64 = *(char *)(param_1 + 3);
  local_a8 = (undefined1  [4])param_2;
  iVar6 = (**(code **)(param_1 + 8))(local_a8,*(undefined8 *)(param_1 + 0x10));
  if (iVar6 == 0) goto LAB_003dc084;
  cVar8 = local_64;
  if (local_64 != '\0') {
    if (0 < param_4[0x36]) {
      iVar15 = 0;
      do {
        (**(code **)(*param_3 + 0x10))(param_3,&local_1a8,iVar15);
        lVar13 = 0;
        do {
          cVar4 = *(char *)(((ulong)local_a8 | 4) + lVar13);
          cVar8 = local_e8[lVar13];
          if (cVar8 == '\0' || cVar8 != cVar4) break;
          iVar9 = (int)lVar13;
          lVar13 = lVar13 + 1;
        } while (iVar9 != 0x3f);
        if (cVar8 == cVar4) {
          *(int *)(param_1 + 0x18) = iVar15;
          lVar12 = 0;
          puVar1 = (undefined4 *)local_a8;
          lVar13 = param_1;
          goto joined_r0x003dbf6c;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < param_4[0x36]);
    }
    cVar8 = '\0';
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 (*) [4])(param_1 + 0x18) = local_a8;
  auVar3 = local_a8;
  goto LAB_003dbfd8;
joined_r0x003dbf6c:
  if (local_a4[0] == '\0') goto LAB_003dbf9c;
  *(char *)(lVar13 + 0x480) = local_a4[0];
  if (((int)lVar12 == 0x3e) || (*(char *)((long)puVar1 + 5) == '\0')) {
    puVar14 = (undefined1 *)(lVar13 + 0x481);
    pcVar10 = local_a4 + 1;
    goto LAB_003dbfc0;
  }
  *(char *)(lVar13 + 0x481) = *(char *)((long)puVar1 + 5);
  lVar2 = lVar12 + 2;
  puVar1 = (undefined4 *)((long)local_a8 + lVar2);
  lVar13 = param_1 + lVar2;
  local_a4[0] = local_a4[lVar12 + 2];
  lVar12 = lVar2;
  goto joined_r0x003dbf6c;
LAB_003dbf9c:
  puVar14 = (undefined1 *)(lVar13 + 0x480);
  pcVar10 = local_a4;
LAB_003dbfc0:
  *puVar14 = 0;
  pcVar10 = pcVar10 + lVar12;
  do {
    cVar8 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar8 != '\0');
  *(long *)(param_1 + 0x20) = param_1 + 0x480;
  auVar3 = *(undefined1 (*) [4])(param_1 + 0x18);
  cVar8 = local_64;
LAB_003dbfd8:
  *(char *)(param_1 + 3) = cVar8;
  uVar7 = (**(code **)(*param_3 + 0x10))(param_3,&local_1a8,auVar3);
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_4 + 6);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    *(ulong *)(param_1 + 0x30) = (ulong)local_1a8;
    *(ulong *)(param_1 + 0x38) = (ulong)uStack_1a4;
    *(bool *)(param_1 + 0x40) = *(char *)(param_1 + 1) == '\0' || local_140 != '\0';
    if (*param_4 == 2) {
      if (0 < param_4[0x18]) {
        lVar12 = 0;
        lVar13 = param_1 + 0x84;
        puVar14 = auStack_19c;
        do {
          lVar12 = lVar12 + 1;
          *(undefined2 *)(lVar13 + -4) = *(undefined2 *)(puVar14 + -4);
          puVar1 = (undefined4 *)(puVar14 + -2);
          puVar14 = puVar14 + 6;
          *(undefined4 *)(lVar13 + -2) = *puVar1;
          lVar13 = lVar13 + 0x40;
        } while (lVar12 < param_4[0x18]);
      }
      *(ulong *)(param_1 + 0x48) = (ulong)local_1a8;
    }
  }
LAB_003dc084:
  return iVar6 != 0;
}


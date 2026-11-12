
void FUN_008a2fc8(long param_1,byte *param_2,char *param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  char cVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined *puVar11;
  byte bVar12;
  long *plVar13;
  uint *puVar14;
  char *pcVar15;
  undefined4 local_8;
  undefined2 local_4;
  undefined1 local_2;
  
  if (param_4 != 0xc) {
    return;
  }
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar10 = *(undefined2 *)(param_3 + 7);
  cVar8 = *param_3;
  cVar5 = param_3[1];
  cVar6 = param_3[9];
  if (param_3[2] != '\0') {
    if (*(char *)(param_1 + 0x1d) == '\0') {
      return;
    }
    cVar5 = '\x03';
    if (*(char *)(param_1 + 0x28) != -1) {
      cVar5 = *(char *)(param_1 + 0x28);
    }
    if (cVar8 != cVar5) {
      return;
    }
    plVar13 = *(long **)PTR_DAT_04bb27d0;
    if (((plVar13[2] == 0) || ((*(uint *)(plVar13 + 0x10) & 0xfffffffe) != 2)) ||
       (*(int *)(plVar13[2] + 0x3e4) == 1)) {
      *(bool *)(param_1 + 0x6a) = cVar6 != '\0';
      *(undefined1 *)(param_1 + 0x69) = 1;
      return;
    }
    local_8 = 0;
    local_2 = 0;
    pcVar15 = (char *)(param_1 + 0x54);
    *pcVar15 = cVar8;
    *(bool *)(param_1 + 0x5d) = cVar6 != '\0';
    *(undefined1 *)(param_1 + 0x56) = 1;
    local_4 = 0xff01;
    iVar3 = *(int *)(*(long *)(param_1 + 0x60) + 8);
    if (-1 < iVar3) {
      FUN_01db1df0(*plVar13 + 0x480,iVar3,&local_8,pcVar15,0xc,0);
    }
    *pcVar15 = -1;
    return;
  }
  uVar7 = *(undefined2 *)(param_3 + 10);
  if ((*(char *)(param_1 + 0x54) != -1) && (*(char *)(param_1 + 0x54) <= cVar8)) {
    return;
  }
  *(char *)(param_1 + 0x54) = cVar8;
  *(char *)(param_1 + 0x55) = cVar5;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(char *)(param_1 + 0x5d) = cVar6;
  *(undefined4 *)(param_1 + 0x57) = uVar4;
  *(undefined2 *)(param_1 + 0x5b) = uVar10;
  puVar11 = PTR_DAT_04bb27d0;
  *(undefined2 *)(param_1 + 0x5e) = uVar7;
  bVar12 = *param_2;
  bVar9 = *(byte *)(**(long **)puVar11 + 0x473);
  puVar14 = (uint *)PTR_DAT_04bb32e0;
  if ((long)(char)bVar9 != 0xffffffffffffffff) {
    puVar1 = (uint *)(**(long **)puVar11 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
    if (7 < bVar9) {
      puVar2 = puVar1;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      if (bVar12 != 0xff) {
        puVar2 = puVar1 + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
        if (7 < bVar12) {
          puVar2 = puVar1;
        }
        if ((*puVar2 & 1) != 0) {
          puVar14 = puVar2 + 0x1e;
        }
      }
      goto LAB_008a3150;
    }
  }
  puVar14 = (uint *)PTR_DAT_04bb5038;
  if (*PTR_DAT_04bc1220 != bVar12) {
    puVar14 = (uint *)PTR_DAT_04bb32e0;
  }
LAB_008a3150:
  bVar12 = (byte)*puVar14;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  *(byte *)(param_1 + 0x68) = bVar12;
  return;
}


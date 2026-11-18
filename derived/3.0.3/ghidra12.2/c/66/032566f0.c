
uint FUN_032566f0(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  char *pcVar14;
  char cVar15;
  int iVar16;
  int *piVar17;
  undefined4 local_34;
  
  uVar9 = FUN_0279d168();
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] != "BootPhone") {
    uVar13 = 0;
    bVar8 = true;
    do {
      cVar15 = ((char *)param_2[1])[uVar13];
      if (cVar15 != "BootPhone"[uVar13]) break;
      if (cVar15 == '\0') {
        if (bVar8) goto LAB_03256804;
        break;
      }
      bVar8 = uVar13 < 0x80000;
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar14 = (char *)param_2[1];
    if (pcVar14 != "BootPhoneBeginner") {
      if (*pcVar14 != 'B') goto LAB_03256970;
      lVar12 = 0;
      do {
        if ((lVar12 == 0x80000) ||
           (lVar4 = lVar12 + 1, pcVar14[lVar4] != "BootPhoneBeginner"[lVar12 + 1]))
        goto LAB_03256970;
        lVar12 = lVar12 + 1;
      } while (pcVar14[lVar4] != '\0');
    }
  }
LAB_03256804:
  iVar10 = FUN_02798760(param_1,param_2);
  lVar12 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar11 = (uint *)FUN_01b1ee90(lVar12 + 0x1b80,&local_34);
  puVar7 = PTR_DAT_04bb6448;
  puVar6 = PTR_DAT_04bb6440;
  if ((puVar11 != (uint *)0x0) && (uVar2 = *puVar11, uVar2 != 0)) {
    cVar15 = *PTR_DAT_04bb6440;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        uVar2 = *puVar11;
      }
      else {
        uVar3 = *(uint *)(puVar7 + 0xc);
        if (-1 < (int)uVar3) {
          if ((int *)((ulong)uVar3 + (long)puVar11) == (int *)0x0) break;
          iVar16 = *(int *)((ulong)uVar3 + (long)puVar11);
          goto LAB_03256964;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar5 = (uint *)(ulong)uVar2;
      iVar16 = 0;
      if ((puVar5 == (uint *)0x0) || (iVar16 = 0, puVar11 == puVar5)) goto LAB_03256964;
      lVar12 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar11 + (lVar12 - (long)puVar5);
      iVar16 = 0;
      if (lVar12 == 0) goto LAB_03256964;
      uVar13 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
      *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
      if (uVar13 == 0) break;
      piVar17 = (int *)(lVar12 + 4);
      while (piVar17[-1] != -0x31f6cc04) {
        piVar17 = piVar17 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_03256960;
      }
      iVar16 = 0;
      iVar1 = 0;
      if (*piVar17 != -1) {
        iVar1 = *piVar17;
      }
      *(int *)(puVar7 + 0xc) = iVar1;
      uVar2 = *puVar11;
      if (uVar2 == 0) goto LAB_03256964;
    } while( true );
  }
LAB_03256960:
  iVar16 = 0;
LAB_03256964:
  if (iVar10 < iVar16) {
    uVar9 = 0;
  }
LAB_03256970:
  return uVar9 & 1;
}


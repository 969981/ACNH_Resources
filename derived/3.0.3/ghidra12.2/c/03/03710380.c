
void FUN_03710380(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  char cVar14;
  long *plVar15;
  uint *puVar16;
  long lVar17;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  puVar8 = PTR_DAT_04bb2d88;
  uVar7 = s_invalid_name_040e8f53._8_4_;
  uVar6 = s_invalid_name_040e8f53._0_8_;
  local_6d = 0;
  local_e0 = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_f0 = 0x80;
  local_ec = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_e4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar9 = FUN_03853d00(param_1,&local_100);
  if ((uVar9 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_100,param_2);
  }
  local_f0 = 0x80;
  plVar2 = param_1 + 0x44;
  local_6d = 0;
  local_ec = (char  [8])uVar6;
  local_e4 = (char  [4])uVar7;
  local_e0 = 0;
  local_100 = puVar1;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar9 = FUN_03853d00(plVar2,&local_100);
  if ((uVar9 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  local_6d = 0;
  local_f0 = 0x80;
  pcStack_f8 = local_ec;
  local_100 = puVar8 + 0x10;
  local_ec = (char  [8])uVar6;
  plVar2 = param_1 + 0x84;
  local_e4 = (char  [4])uVar7;
  local_e0 = 0;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar9 = FUN_03853d00(plVar2,&local_100);
  if ((uVar9 & 1) != 0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_100,param_2);
  }
  plVar2 = param_1 + 0xc4;
  memset(plVar2,0xff,1000);
  puVar8 = PTR_DAT_04bc0678;
  puVar1 = PTR_DAT_04bc0670;
  uVar9 = 0;
  cVar14 = *PTR_DAT_04bc0670;
  do {
    if ((int)*(uint *)(param_1 + 0x38) < 1) {
      lVar17 = param_1[0x16];
      if (lVar17 == 0) {
        return;
      }
      uVar10 = 0;
      if (*(uint **)(lVar17 + 8) != (uint *)0x0) {
        uVar10 = (ulong)**(uint **)(lVar17 + 8);
      }
      if (uVar10 <= uVar9) {
        return;
      }
      if ((((lVar17 != 0) && (puVar16 = *(uint **)(lVar17 + 8), puVar16 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x19) <= uVar9 || (*(char *)(param_1[0x1a] + uVar9) != '\0')))) &&
         (((uVar9 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar16 = (uint *)((ulong)(puVar16[1] * (int)uVar9 + (uint)(ushort)puVar16[2] * 8 + iVar13)
                          + (long)puVar16);
        goto joined_r0x03710738;
      }
    }
    else {
      if (*(uint *)(param_1 + 0x38) <= uVar9) {
        return;
      }
      uVar10 = uVar9 & 0xffffffff;
      if (*(uint *)(param_1 + 0x36) <= uVar9) {
        uVar10 = 0;
      }
      puVar16 = *(uint **)(param_1[0x37] + uVar10 * 8);
joined_r0x03710738:
      if (puVar16 != (uint *)0x0) {
        uVar4 = *puVar16;
        while (uVar4 != 0) {
          if (cVar14 != '\0') {
            uVar10 = (ulong)*(uint *)(puVar8 + 0x40);
            if ((int)*(uint *)(puVar8 + 0x40) < 0) {
              if (uVar10 == 0xffffffff) goto LAB_037105c0;
            }
            else if (((ushort *)(uVar10 + (long)puVar16) != (ushort *)0x0) &&
                    (499 < *(ushort *)(uVar10 + (long)puVar16))) goto LAB_0371052c;
LAB_03710610:
            if (*puVar16 != 0) goto LAB_03710618;
            break;
          }
          cVar14 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
LAB_037105c0:
          lVar17 = (long)puVar16 - (ulong)*puVar16;
          if ((*puVar16 == 0) || (lVar17 == 0)) {
LAB_03710740:
            uVar10 = 0xffffffff;
            goto LAB_03710610;
          }
          lVar3 = 0xc;
          if (*(char *)(lVar17 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar17 == 0) goto LAB_03710740;
          uVar10 = (ulong)*(ushort *)(lVar17 + 8);
          *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
          if (uVar10 == 0) {
LAB_0371060c:
            uVar10 = 0xfffffffe;
            goto LAB_03710610;
          }
          piVar11 = (int *)(lVar3 + lVar17 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0371060c;
          }
          iVar13 = 0;
          if (*piVar11 != -1) {
            iVar13 = *piVar11;
          }
          *(int *)(puVar8 + 0x40) = iVar13;
          uVar4 = *puVar16;
        }
LAB_03710524:
        plVar15 = plVar2;
LAB_03710528:
        *(short *)plVar15 = (short)uVar9;
      }
    }
LAB_0371052c:
    uVar9 = uVar9 + 1;
  } while( true );
LAB_03710618:
  if (cVar14 == '\0') {
    cVar14 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar1 = 1;
    *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
  }
  else {
    if (-1 < (int)uVar10) {
      if (((ushort *)(uVar10 + (long)puVar16) != (ushort *)0x0) &&
         (uVar5 = *(ushort *)(uVar10 + (long)puVar16), uVar5 < 500)) {
        plVar15 = (long *)((long)plVar2 + (ulong)uVar5 * 2);
        goto LAB_03710528;
      }
      goto LAB_03710524;
    }
    if (uVar10 != 0xffffffff) goto LAB_03710524;
  }
  lVar17 = (long)puVar16 - (ulong)*puVar16;
  if ((*puVar16 == 0) || (lVar17 == 0)) goto LAB_03710524;
  lVar3 = 0xc;
  if (*(char *)(lVar17 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar17 == 0) goto LAB_03710524;
  uVar10 = (ulong)*(ushort *)(lVar17 + 8);
  *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_03710524;
  puVar12 = (uint *)(lVar3 + lVar17 + 4);
  while (puVar12[-1] != 0x54706054) {
    puVar12 = puVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_03710524;
  }
  uVar10 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar10 = (ulong)*puVar12;
  }
  *(int *)(puVar8 + 0x40) = (int)uVar10;
  if (*puVar16 == 0) goto LAB_03710524;
  goto LAB_03710618;
}


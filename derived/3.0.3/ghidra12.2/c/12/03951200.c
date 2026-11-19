
void FUN_03951200(long *param_1,long param_2,int param_3)

{
  long lVar1;
  char cVar2;
  undefined1 *puVar3;
  long *plVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 local_1b4;
  undefined **local_1b0;
  undefined1 *local_1a8;
  uint local_1a0;
  undefined1 local_19c [255];
  undefined1 local_9d;
  long *local_98;
  uint local_90;
  undefined **local_88;
  undefined1 *local_80;
  
  local_90 = 0;
  local_88 = &PTR_LAB_048f9770;
  local_80 = &DAT_04064e67;
  local_98 = param_1;
  (**(code **)(*param_1 + 0x18))();
  lVar9 = 0;
  do {
    if (*(char *)(param_1[1] + lVar9) == '\0') {
LAB_039512bc:
      uVar7 = (int)lVar9 + 1;
      goto LAB_039512c0;
    }
    lVar10 = param_1[1] + lVar9;
    if (*(char *)(lVar10 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_039512bc;
    }
    if (*(char *)(lVar10 + 2) == '\0') {
      lVar9 = lVar9 + 2;
      goto LAB_039512bc;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  uVar7 = 1;
LAB_039512c0:
  lVar9 = 0;
  do {
    uVar5 = local_90;
    plVar4 = local_98;
    uVar12 = (ulong)local_90;
    if (local_98 == param_1 && local_90 == uVar7) {
      return;
    }
    local_9d = 0;
    local_1a0 = 0x100;
    local_19c[0] = 0;
    local_1b0 = &PTR_LAB_048f9a70;
    local_1a8 = local_19c;
    (**(code **)(*local_98 + 0x18))(local_98);
    lVar10 = 0;
    do {
      if (*(char *)(plVar4[1] + lVar10) == '\0') {
LAB_039513b8:
        iVar8 = (int)lVar10;
        goto joined_r0x039513f4;
      }
      lVar1 = plVar4[1] + lVar10;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_039513b8;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        iVar8 = (int)lVar10 + 2;
        goto joined_r0x039513f4;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    iVar8 = 0;
joined_r0x039513f4:
    if ((-1 < (int)uVar5) && ((int)uVar5 <= iVar8)) {
      (*(code *)local_1b0[3])(&local_1b0);
      puVar3 = local_1a8;
      uVar14 = (ulong)local_1a0;
      if (0 < (int)local_1a0) {
        uVar13 = 0;
        do {
          lVar10 = local_98[1];
          if (*(char *)(lVar10 + uVar12) == '\0') {
LAB_039512f0:
            local_90 = (int)uVar12 + 1;
            puVar3[uVar13 & 0xffffffff] = 0;
            break;
          }
          (*(code *)local_88[3])(&local_88);
          uVar11 = 0;
          bVar6 = true;
          cVar2 = *(char *)(lVar10 + uVar12);
          do {
            if (local_80[uVar11] == '\0') break;
            if (local_80[uVar11] == cVar2) {
              if (bVar6) goto LAB_039512f0;
              break;
            }
            if (local_80[uVar11 + 1] == '\0') break;
            if (local_80[uVar11 + 1] == cVar2) goto LAB_039512f0;
            if (local_80[uVar11 + 2] == '\0') break;
            if (local_80[uVar11 + 2] == cVar2) goto LAB_039512f0;
            bVar6 = uVar11 < 0x7fffe;
            uVar11 = uVar11 + 3;
          } while (uVar11 != 0x80001);
          puVar3[uVar13] = cVar2;
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar13 != uVar14);
      }
    }
    uVar12 = FUN_038d52a0(&local_1b4,&local_1b0);
    uVar15 = local_1b4;
    if ((uVar12 & 1) == 0) {
      uVar15 = 0;
    }
    *(undefined4 *)(param_2 + lVar9 * 4) = uVar15;
    lVar9 = lVar9 + 1;
    if ((int)lVar9 == param_3) {
      return;
    }
  } while( true );
}


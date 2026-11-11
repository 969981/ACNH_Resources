
void FUN_004c8ed0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  long local_68;
  
  local_88 = 0;
  local_80 = -0x8000000000000000;
  FUN_0043d3a0(auStack_78);
  local_68 = param_2;
  FUN_004c9a40(&local_88,param_2);
  puVar4 = PTR_DAT_048607b8;
  if (*(int *)(param_2 + 0x30) < 1) {
LAB_004c938c:
    if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) {
      puVar8 = (undefined8 *)FUN_00426d40(*param_1,0x10);
      uVar7 = 0x80000000;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x24);
      plVar6 = (long *)FUN_00426d40(*param_1,0x10);
      *plVar6 = (long)iVar5;
      uVar12 = *param_1;
      uVar7 = FUN_004adce0(*(undefined8 *)(param_2 + 0x10),
                           *(int *)(param_2 + 0x18) - (int)*(undefined8 *)(param_2 + 0x10));
      puVar8 = (undefined8 *)FUN_00426d40(uVar12,8);
    }
    *puVar8 = uVar7;
    FUN_0043d280(auStack_78);
    if (0 < (int)local_80) {
      lVar14 = local_88 + (long)(int)local_80 * 0x10;
      iVar5 = (int)local_80;
      do {
        lVar14 = lVar14 + -0x10;
        FUN_0043be10(lVar14);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    lVar14 = local_80;
    uVar10 = local_80._4_4_;
    local_80 = (ulong)local_80._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_88 != 0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_88,0x10,uVar10 & 0x3fffffff);
    }
    return;
  }
  lVar14 = 0;
LAB_004c8f4c:
  lVar11 = *(long *)(param_2 + 0x28);
  switch(*(undefined1 *)(lVar11 + lVar14 * 0x10)) {
  case 1:
    lVar11 = *(long *)(lVar11 + lVar14 * 0x10 + 8);
    if (lVar11 != 0) {
      uVar1 = *(undefined4 *)(lVar11 + 0x10);
      uVar2 = *(undefined4 *)(lVar11 + 0x28);
      lVar9 = lVar11 + 0x18;
      uVar7 = 0;
LAB_004c9378:
      FUN_004c8580(param_1,lVar11,uVar1,lVar9,uVar2,0,uVar7,&local_88);
      lVar14 = lVar14 + 1;
      if (*(int *)(param_2 + 0x30) <= lVar14) goto LAB_004c938c;
      goto LAB_004c8f4c;
    }
    break;
  case 2:
    lVar11 = *(long *)(lVar11 + lVar14 * 0x10 + 8);
    if ((lVar11 != 0) && (iVar5 = *(int *)(param_1 + 5), 0 < iVar5)) {
      uVar15 = 0;
      do {
        pcVar13 = (char *)**(undefined8 **)(param_1[4] + uVar15 * 8);
        if (pcVar13 != (char *)0x0) {
          if (*pcVar13 == '#') {
            do {
              pcVar13 = pcVar13 + 1;
            } while (*pcVar13 == '#');
            bVar3 = true;
            iVar5 = FUN_00429ab0(lVar11,pcVar13);
          }
          else {
            bVar3 = false;
            iVar5 = FUN_00429ab0(lVar11,pcVar13);
          }
          if (iVar5 == 0) {
            if (bVar3) {
              **(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8) = pcVar13;
            }
            puVar8 = *(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = 0;
              lVar14 = lVar14 + 1;
              if (lVar14 < *(int *)(param_2 + 0x30)) goto LAB_004c8f4c;
              goto LAB_004c938c;
            }
            break;
          }
          iVar5 = *(int *)(param_1 + 5);
        }
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)iVar5);
    }
    break;
  case 3:
    lVar11 = *(long *)(lVar11 + lVar14 * 0x10 + 8);
    if ((lVar11 != 0) && (iVar5 = *(int *)(param_1 + 5), 0 < iVar5)) {
      uVar15 = 0;
      do {
        pcVar13 = (char *)**(undefined8 **)(param_1[4] + uVar15 * 8);
        if (pcVar13 != (char *)0x0) {
          if (*pcVar13 == '#') {
            do {
              pcVar13 = pcVar13 + 1;
            } while (*pcVar13 == '#');
            bVar3 = true;
            iVar5 = FUN_00429ab0(lVar11,pcVar13);
          }
          else {
            bVar3 = false;
            iVar5 = FUN_00429ab0(lVar11,pcVar13);
          }
          if (iVar5 == 0) {
            if (bVar3) {
              **(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8) = pcVar13;
            }
            puVar8 = *(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8);
            if (puVar8 != (undefined8 *)0x0) {
              uVar7 = FUN_004adce0(*(undefined8 *)(lVar11 + 0x10),
                                   *(int *)(lVar11 + 0x18) - (int)*(undefined8 *)(lVar11 + 0x10));
              *puVar8 = uVar7;
              lVar14 = lVar14 + 1;
              if (lVar14 < *(int *)(param_2 + 0x30)) goto LAB_004c8f4c;
              goto LAB_004c938c;
            }
            break;
          }
          iVar5 = *(int *)(param_1 + 5);
        }
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)iVar5);
    }
    break;
  case 8:
    lVar11 = *(long *)(lVar11 + lVar14 * 0x10 + 8);
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != *(long *)(lVar11 + 0x18))) {
      local_98 = *(long *)(lVar11 + 0x10);
      uStack_90 = *(undefined8 *)(lVar11 + 0x18);
      iVar5 = FUN_004c8350(&local_88,&local_98);
      if (-1 < iVar5) {
        lVar11 = param_1[3];
        uVar10 = *(uint *)(lVar11 + 0xe0);
        if (uVar10 == (*(uint *)(lVar11 + 0xe4) & 0x3fffffff)) {
          FUN_00426990(puVar4,lVar11 + 0xd8,0x20);
          uVar10 = *(uint *)(lVar11 + 0xe0);
        }
        *(uint *)(lVar11 + 0xe0) = uVar10 + 1;
        puVar8 = (undefined8 *)(*(long *)(lVar11 + 0xd8) + (long)(int)uVar10 * 0x20);
        *puVar8 = 0;
        FUN_0043bf00(puVar8,local_98,uStack_90);
        *(int *)(puVar8 + 1) = iVar5;
        puVar8[2] = param_1;
        puVar8[3] = 0;
        lVar14 = lVar14 + 1;
        if (*(int *)(param_2 + 0x30) <= lVar14) goto LAB_004c938c;
        goto LAB_004c8f4c;
      }
    }
    break;
  case 10:
    lVar11 = *(long *)(lVar11 + lVar14 * 0x10 + 8);
    if (lVar11 == 0) break;
    FUN_004c87d0(param_1,lVar11,*(undefined8 *)(lVar11 + 0x10));
    lVar14 = lVar14 + 1;
    if (*(int *)(param_2 + 0x30) <= lVar14) goto LAB_004c938c;
    goto LAB_004c8f4c;
  case 0xb:
    lVar11 = *(long *)(lVar11 + lVar14 * 0x10 + 8);
    if ((lVar11 != 0) && (iVar5 = *(int *)(param_1 + 5), 0 < iVar5)) {
      uVar15 = 0;
      do {
        pcVar13 = (char *)**(undefined8 **)(param_1[4] + uVar15 * 8);
        if (pcVar13 != (char *)0x0) {
          if (*pcVar13 == '#') {
            do {
              pcVar13 = pcVar13 + 1;
            } while (*pcVar13 == '#');
            bVar3 = true;
            iVar5 = FUN_00429ab0(lVar11,pcVar13);
          }
          else {
            bVar3 = false;
            iVar5 = FUN_00429ab0(lVar11,pcVar13);
          }
          if (iVar5 == 0) {
            if (bVar3) {
              **(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8) = pcVar13;
            }
            puVar8 = *(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8);
            if (puVar8 != (undefined8 *)0x0) {
              *puVar8 = 0;
            }
            break;
          }
          iVar5 = *(int *)(param_1 + 5);
        }
        uVar15 = uVar15 + 1;
      } while ((long)uVar15 < (long)iVar5);
    }
    break;
  case 0xc:
    lVar11 = *(long *)(lVar11 + lVar14 * 0x10 + 8);
    if (lVar11 != 0) {
      iVar5 = *(int *)(param_1 + 5);
      if (0 < iVar5) {
        uVar15 = 0;
        do {
          pcVar13 = (char *)**(undefined8 **)(param_1[4] + uVar15 * 8);
          if (pcVar13 != (char *)0x0) {
            if (*pcVar13 == '#') {
              do {
                pcVar13 = pcVar13 + 1;
              } while (*pcVar13 == '#');
              bVar3 = true;
              iVar5 = FUN_00429ab0(lVar11,pcVar13);
            }
            else {
              bVar3 = false;
              iVar5 = FUN_00429ab0(lVar11,pcVar13);
            }
            if (iVar5 == 0) {
              if (bVar3) {
                **(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8) = pcVar13;
              }
              puVar8 = *(undefined8 **)(param_1[4] + (uVar15 & 0xffffffff) * 8);
              if (puVar8 != (undefined8 *)0x0) {
                *puVar8 = 0;
              }
              break;
            }
            iVar5 = *(int *)(param_1 + 5);
          }
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)iVar5);
      }
      uVar1 = *(undefined4 *)(lVar11 + 0x2c);
      uVar2 = *(undefined4 *)(lVar11 + 0x40);
      lVar9 = lVar11 + 0x30;
      uVar7 = 0xffffffff;
      goto LAB_004c9378;
    }
  }
  lVar14 = lVar14 + 1;
  if (*(int *)(param_2 + 0x30) <= lVar14) goto LAB_004c938c;
  goto LAB_004c8f4c;
}


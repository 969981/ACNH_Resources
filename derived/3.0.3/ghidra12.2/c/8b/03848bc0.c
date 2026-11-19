
/* WARNING: Removing unreachable block (ram,0x03848d44) */

undefined8
FUN_03848bc0(long param_1,float *param_2,float *param_3,undefined1 *param_4,long param_5,
            long param_6,long param_7)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  char *__src;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_75;
  
  puVar5 = PTR_DAT_04bb26a8;
  lVar10 = *(long *)(param_5 + 0x1b8);
  if ((lVar10 == 0) &&
     ((*(long *)(param_5 + 0x110) == 0 ||
      (lVar10 = *(long *)(*(long *)(param_5 + 0x110) + 0x110), lVar10 == 0)))) {
    if ((DAT_05aebb78 == 0) || (*(long *)(DAT_05aebb78 + 0x28) == 0)) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)(DAT_05aebb78 + 0x28) + 0x88);
    }
  }
  local_a0 = (char *)0x0;
  local_98 = 0;
  local_a8 = (undefined **)0x0;
  if ((param_7 == 0) || ((*(ushort *)(param_7 + 0x98) >> 9 & 1) == 0)) {
    local_d4 = 0;
    local_cc = 0;
    if (param_6 != 0) {
      puVar6 = *(undefined8 **)(param_6 + 0x50);
      if (puVar6 == (undefined8 *)0x0) {
        lVar9 = *(long *)(param_6 + 0x40);
        if (lVar9 != 0) {
          if (*(char *)(param_6 + 0x48) == '\0') {
            local_cc = *(undefined4 *)(lVar9 + 0x2c);
            local_d4 = CONCAT44(*(undefined4 *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0xc));
          }
          else {
            local_d4 = *(undefined8 *)(lVar9 + 0x30);
            local_cc = (undefined4)*(undefined8 *)(lVar9 + 0x38);
          }
        }
      }
      else {
        local_cc = *(undefined4 *)(puVar6 + 1);
        local_d4 = *puVar6;
      }
    }
  }
  else {
    local_d4 = *(undefined8 *)(param_7 + 0xc0);
    local_cc = *(undefined4 *)(param_7 + 200);
  }
  local_c8 = 0;
  local_c0 = 0.0;
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
  local_b8 = *(undefined8 *)(lVar9 + 0x130);
  local_b0 = (undefined4)*(undefined8 *)(lVar9 + 0x138);
  FUN_02a1e144(lVar9,&local_c8,&local_d4,&local_b8,0);
  fVar12 = local_c0;
  FUN_02a1e4c0(local_c8,lVar9,&local_a8);
  fVar13 = local_a0._4_4_;
  if (*(long *)(lVar10 + 0x90) != 0) {
    fVar12 = *(float *)(*(long *)(lVar10 + 0x90) + 0x50);
    if (fVar12 <= local_a8._0_4_ / 10.0) {
      return 0;
    }
  }
  local_75 = 0;
  pcVar1 = (char *)((long)&local_98 + 4);
  local_98 = CONCAT35(local_98._5_3_,0x20);
  local_a8 = &PTR_LAB_048f9700;
  local_b8 = CONCAT44(local_b8._4_4_,1);
  lVar10 = *(long *)(lVar10 + 0x68);
  if (lVar10 != 0) {
    plVar11 = (long *)(lVar10 + 8);
    local_a0 = pcVar1;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    __src = *(char **)(lVar10 + 0x10);
    if (pcVar1 != __src) {
      (**(code **)(*(long *)(lVar10 + 8) + 0x18))(plVar11);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(lVar10 + 0x10) + lVar9) == '\0') goto LAB_03848df0;
        lVar2 = *(long *)(lVar10 + 0x10) + lVar9;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_03848df0;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_03848df0;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_03848df0:
      iVar3 = (int)lVar9;
      if ((int)local_98 <= (int)lVar9) {
        iVar3 = (int)local_98 + -1;
      }
      memcpy(pcVar1,__src,(long)iVar3);
      pcVar1[iVar3] = '\0';
    }
    pcVar1 = local_a0;
    if ((((((*local_a0 == 'L') && (local_a0[1] == 'a')) && (local_a0[2] == 'y')) &&
         ((local_a0[3] == 'e' && (local_a0[4] == 'r')))) &&
        ((local_a0[5] == 'R' && ((local_a0[6] == 'e' && (local_a0[7] == 'v')))))) &&
       ((local_a0[8] == 'e' &&
        (((local_a0[9] == 'r' && (local_a0[10] == 'b')) && (local_a0[0xb] == '_')))))) {
      (*(code *)local_a8[3])(&local_a8);
      lVar10 = 0;
      do {
        if (local_a0[lVar10] == '\0') {
LAB_03848f44:
          if ((((4 < (int)lVar10) && (uVar7 = (ulong)((int)lVar10 - 5), pcVar1[uVar7] == '_')) &&
              ((pcVar1[uVar7 + 1] == 'L' &&
               ((pcVar1[uVar7 + 2] == 'o' && (pcVar1[uVar7 + 3] == 'u')))))) &&
             (pcVar1[uVar7 + 4] == 'd')) {
            *param_4 = 1;
            lVar10 = *(long *)puVar5;
            if (*(char *)(param_1 + 0x35) == '\0') {
              lVar9 = lVar10 + 0x19d2b8;
              lVar10 = lVar10 + 0x19d878;
            }
            else {
              lVar9 = lVar10 + 0x19d598;
              lVar10 = lVar10 + 0x19db58;
            }
            if (*(char *)(param_1 + 0x36) != '\0') {
              lVar9 = lVar10;
            }
            goto LAB_0384900c;
          }
          break;
        }
        if (local_a0[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_03848f44;
        }
        if (local_a0[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_03848f44;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      *param_4 = 0;
      if (*(char *)(param_1 + 0x35) == '\0') {
        lVar9 = *(long *)puVar5;
        uVar4 = 0x19d148;
        uVar8 = 0xd708;
      }
      else {
        lVar9 = *(long *)puVar5;
        uVar4 = 0x19d428;
        uVar8 = 0xd9e8;
      }
      uVar8 = uVar8 | 0x190000;
      if (*(char *)(param_1 + 0x36) == '\0') {
        uVar8 = uVar4;
      }
      lVar9 = lVar9 + (ulong)uVar8;
LAB_0384900c:
      puVar5 = PTR_PTR_04bb4f70;
      fVar14 = (fVar13 / 10.0) / *(float *)(lVar9 + 8);
      (**(code **)(PTR_PTR_04bb4f70 + (ulong)*(byte *)(lVar9 + 0x20) * 8))
                (fVar14,(byte *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x18));
      fVar13 = fVar12;
      (**(code **)(puVar5 + (ulong)*(byte *)(lVar9 + 0xd0) * 8))
                (fVar14,(byte *)(lVar9 + 0xd0),*(undefined8 *)(lVar9 + 200));
      *param_2 = fVar12;
      *param_3 = fVar13;
      return 1;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x02a55ccc) */

undefined8
FUN_02a55ba0(float *param_1,float *param_2,undefined1 *param_3,long param_4,long param_5,
            long param_6,long param_7,undefined8 param_8,byte param_9,byte param_10)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  char *__src;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_75;
  undefined8 local_70;
  float local_68;
  
  if (((param_7 == 0) && (param_7 = *(long *)(param_4 + 0x1b8), param_7 == 0)) &&
     ((*(long *)(param_4 + 0x110) == 0 ||
      (param_7 = *(long *)(*(long *)(param_4 + 0x110) + 0x110), param_7 == 0)))) {
    if ((*(long *)PTR_DAT_04bc3ee8 == 0) ||
       (lVar7 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28), lVar7 == 0)) {
      param_7 = 0;
    }
    else {
      param_7 = *(long *)(lVar7 + 0x88);
    }
  }
  local_a0 = (char *)0x0;
  local_98 = 0;
  local_a8 = (undefined **)0x0;
  if ((param_6 == 0) || ((*(ushort *)(param_6 + 0x98) >> 9 & 1) == 0)) {
    local_70 = 0;
    local_68 = 0.0;
    if (param_5 != 0) {
      puVar9 = *(undefined8 **)(param_5 + 0x50);
      if (puVar9 == (undefined8 *)0x0) {
        lVar7 = *(long *)(param_5 + 0x40);
        if (lVar7 != 0) {
          if (*(char *)(param_5 + 0x48) == '\0') {
            local_68 = *(float *)(lVar7 + 0x2c);
            local_70 = CONCAT44(*(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0xc));
          }
          else {
            local_70 = *(undefined8 *)(lVar7 + 0x30);
            local_68 = (float)*(undefined8 *)(lVar7 + 0x38);
          }
        }
      }
      else {
        local_68 = *(float *)(puVar9 + 1);
        local_70 = *puVar9;
      }
    }
  }
  else {
    local_70 = *(undefined8 *)(param_6 + 0xc0);
    local_68 = *(float *)(param_6 + 200);
  }
  lVar7 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar7 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20);
  }
  if ((0 < *(int *)(lVar7 + 0x10)) && (**(long **)(lVar7 + 0x18) != 0)) {
    fVar13 = local_68;
    FUN_03baa168(**(long **)(lVar7 + 0x18),&local_70,&local_a8);
    fVar14 = local_a0._4_4_;
    if (*(long *)(param_7 + 0x90) != 0) {
      fVar13 = *(float *)(*(long *)(param_7 + 0x90) + 0x50);
      if (fVar13 <= local_a8._0_4_ / 10.0) {
        return 0;
      }
    }
    local_75 = 0;
    pcVar1 = (char *)((long)&local_98 + 4);
    local_98 = CONCAT35(local_98._5_3_,0x20);
    local_a8 = &PTR_LAB_048f9700;
    local_70 = CONCAT44(local_70._4_4_,1);
    lVar7 = *(long *)(param_7 + 0x68);
    if (lVar7 != 0) {
      plVar12 = (long *)(lVar7 + 8);
      local_a0 = pcVar1;
      (**(code **)(*plVar12 + 0x18))(plVar12);
      __src = *(char **)(lVar7 + 0x10);
      if (pcVar1 != __src) {
        (**(code **)(*(long *)(lVar7 + 8) + 0x18))(plVar12);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(lVar7 + 0x10) + lVar8) == '\0') goto LAB_02a55dbc;
          lVar2 = *(long *)(lVar7 + 0x10) + lVar8;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_02a55dbc;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_02a55dbc;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_02a55dbc:
        iVar3 = (int)lVar8;
        if ((int)local_98 <= (int)lVar8) {
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
        lVar7 = 0;
        do {
          if (local_a0[lVar7] == '\0') {
LAB_02a55f04:
            if ((((4 < (int)lVar7) && (uVar10 = (ulong)((int)lVar7 - 5), pcVar1[uVar10] == '_')) &&
                ((pcVar1[uVar10 + 1] == 'L' &&
                 ((pcVar1[uVar10 + 2] == 'o' && (pcVar1[uVar10 + 3] == 'u')))))) &&
               (pcVar1[uVar10 + 4] == 'd')) {
              bVar6 = (param_10 & 1) == 0;
              *param_3 = 1;
              if ((param_9 & 1) == 0) {
                uVar10 = 0x19d2b8;
                uVar11 = 0xd878;
              }
              else {
                uVar10 = 0x19d598;
                uVar11 = 0xdb58;
              }
              goto LAB_02a55fb8;
            }
            break;
          }
          if (local_a0[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_02a55f04;
          }
          if (local_a0[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_02a55f04;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        *param_3 = 0;
        if ((param_9 & 1) == 0) {
          bVar6 = (param_10 & 1) == 0;
          uVar10 = 0x19d148;
          uVar11 = 0xd708;
        }
        else {
          bVar6 = (param_10 & 1) == 0;
          uVar10 = 0x19d428;
          uVar11 = 0xd9e8;
        }
LAB_02a55fb8:
        puVar5 = PTR_PTR_04bb4f70;
        uVar4 = (ulong)(uVar11 | 0x190000);
        if (bVar6) {
          uVar4 = uVar10;
        }
        lVar7 = DAT_055f6860 + uVar4;
        fVar15 = (fVar14 / 10.0) / *(float *)(lVar7 + 8);
        (**(code **)(PTR_PTR_04bb4f70 + (ulong)*(byte *)(lVar7 + 0x20) * 8))
                  (fVar15,(byte *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x18));
        fVar14 = fVar13;
        (**(code **)(puVar5 + (ulong)*(byte *)(lVar7 + 0xd0) * 8))
                  (fVar15,(byte *)(lVar7 + 0xd0),*(undefined8 *)(lVar7 + 200));
        *param_1 = fVar13;
        *param_2 = fVar14;
        return 1;
      }
    }
  }
  return 0;
}


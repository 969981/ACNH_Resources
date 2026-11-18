
void FUN_0345db20(uint *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  void *__src;
  int iVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  void *__dest;
  uint *puVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_80;
  undefined4 local_78;
  
  if (param_1 != param_2) {
    uVar18 = param_1[1];
    if ((int)*param_2 <= (int)param_1[1]) {
      uVar18 = *param_2;
    }
    if (0 < (int)*param_1) {
      lVar6 = 0;
      puVar11 = *(undefined8 **)(param_1 + 4);
      do {
        puVar13 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar6 * 8);
        lVar6 = lVar6 + 1;
        *puVar13 = puVar11;
        *(undefined8 **)(param_1 + 4) = puVar13;
        puVar11 = puVar13;
      } while (lVar6 < (int)*param_1);
    }
    *param_1 = 0;
    if ((0 < (int)uVar18) && (0 < (int)param_1[1])) {
      lVar6 = 0;
      uVar10 = 0;
      do {
        if ((int)uVar10 < (int)param_1[1]) {
          puVar13 = *(undefined8 **)(param_1 + 4);
          puVar11 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar6);
          if (puVar13 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar13;
          }
          uVar15 = *puVar11;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar11 + 1);
          *puVar13 = uVar15;
          uVar10 = *param_1;
          if ((int)uVar10 < (int)param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)(int)uVar10 * 8) = puVar13;
            uVar10 = *param_1 + 1;
            *param_1 = uVar10;
          }
        }
        lVar6 = lVar6 + 8;
      } while ((ulong)uVar18 * 8 != lVar6);
    }
  }
  if (*(long *)(param_1 + 0xbc) != 0) {
    lVar6 = 0;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    do {
      puVar17 = param_1 + lVar6 * 0x24 + 0x104;
      if (lVar6 < (int)*param_1) {
        puVar11 = &DAT_0407ebb1;
        uVar18 = **(uint **)(*(long *)(param_1 + 2) + lVar6 * 8);
        if (uVar18 < 0x40) {
          puVar11 = (undefined8 *)(&PTR_DAT_04a36040)[uVar18];
        }
        FUN_006d8678(&local_b8,puVar11);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        pcVar12 = (char *)CONCAT44(uStack_ac,local_b0);
        (**(code **)(*(long *)(param_1 + lVar6 * 0x24 + 0x106) + 0x18))
                  (param_1 + lVar6 * 0x24 + 0x106);
        pcVar7 = *(char **)(param_1 + lVar6 * 0x24 + 0x108);
        if (pcVar12 != pcVar7) {
          cVar3 = *(char *)CONCAT44(uStack_ac,local_b0);
          if (cVar3 == *pcVar7) {
            if (cVar3 != '\0') {
              lVar14 = 0x7fffe;
              pcVar12 = (char *)CONCAT44(uStack_ac,local_b0);
              do {
                if (pcVar12[1] != pcVar7[1]) goto LAB_0345dea0;
                if (pcVar12[1] == '\0') break;
                if (pcVar12[2] != pcVar7[2]) goto LAB_0345dea0;
                if (pcVar12[2] == '\0') break;
                if ((lVar14 == 0) || (cVar4 = pcVar12[3], cVar4 != pcVar7[3])) goto LAB_0345dea0;
                lVar14 = lVar14 + -3;
                pcVar7 = pcVar7 + 3;
                pcVar12 = pcVar12 + 3;
              } while (cVar4 != '\0');
            }
          }
          else {
LAB_0345dea0:
            uVar8 = (ulong)*puVar17;
            if (*puVar17 != 0xffffffff) {
              lVar14 = *(long *)(param_1 + lVar6 * 2 + 0xc4);
              if (lVar14 != 0) {
                uVar18 = param_1[0x102];
                if (*(uint *)(lVar14 + 0x208) <= uVar18) {
                  uVar18 = 0;
                }
                plVar16 = *(long **)(*(long *)(lVar14 + 0x210) + (long)(int)uVar18 * 8);
                if (plVar16 != (long *)0x0) {
                  local_78 = 0x1f;
                  local_80 = puVar1;
                  (**(code **)(*plVar16 + 0x18))(plVar16,&local_80);
                  (**(code **)(plVar16[3] + 0x208))(plVar16[1],0,0,param_1 + 0x53c);
                  local_78 = 7;
                  local_80 = puVar1;
                  (**(code **)(*plVar16 + 0x18))(plVar16,&local_80);
                  (**(code **)(plVar16[3] + 0x88))(plVar16[1],0);
                  uVar8 = (ulong)*puVar17;
                }
              }
              if (uVar8 < 0x10e) {
                lVar14 = *(long *)(param_1 + 0xbc) + 8 + uVar8 * 0x1a8;
                if (*(int *)(lVar14 + 0x1a0) != 0) {
                  lVar9 = *(long *)(param_1 + 0xbc) + 8 + uVar8 * 0x1a8;
                  **(undefined1 **)(lVar9 + 0x60) = 0;
                  *(undefined1 *)(lVar9 + 0xf0) = 0;
                  if (((*(int *)(lVar9 + 0x100) != 1) && ((*(byte *)(lVar9 + 0x18) >> 1 & 1) != 0))
                     && (*(int *)(lVar9 + 0x140) == -1)) {
                    *(undefined4 *)(lVar9 + 0x140) = 1;
                  }
                  *(undefined4 *)(lVar14 + 0x1a0) = 0;
                }
              }
              *puVar17 = 0xffffffff;
              **(undefined1 **)(param_1 + lVar6 * 0x24 + 0x108) = 0;
              param_1[lVar6 * 0x24 + 0x11c] = 0;
              *(undefined1 *)(param_1 + lVar6 * 0x24 + 0x126) = 0;
              (param_1 + lVar6 * 0x24 + 0x120)[0] = 0xffffffff;
              (param_1 + lVar6 * 0x24 + 0x120)[1] = 0xffffffff;
              cVar3 = *(char *)CONCAT44(uStack_ac,local_b0);
            }
            if ((cVar3 != '\0') || (uVar18 = 0xffffffff, *(short *)PTR_DAT_04bb37e0 != -2)) {
              uVar18 = 0;
              iVar5 = 0;
              do {
                if ((*(int *)(*(long *)(param_1 + 0xbc) + 8 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
                   (lVar14 = *(long *)(param_1 + 0xbc) + 8 + (long)iVar5 * 0x1a8,
                   (*(byte *)(lVar14 + 0x18) >> 1 & 1) == 0)) {
                  FUN_03412d40(lVar14,&local_b8,PTR_DAT_04bb37e0,0x1c);
                  goto LAB_0345e058;
                }
                iVar5 = iVar5 + 1;
                uVar18 = uVar18 + 1;
              } while (iVar5 != 0x10e);
              uVar18 = 0xffffffff;
            }
LAB_0345e058:
            *puVar17 = uVar18;
            __dest = *(void **)(param_1 + lVar6 * 0x24 + 0x108);
            (**(code **)(local_b8 + 0x18))(&local_b8);
            __src = (void *)CONCAT44(uStack_ac,local_b0);
            if (__dest != __src) {
              (**(code **)(local_b8 + 0x18))(&local_b8);
              lVar14 = 0;
              do {
                if (*(char *)(CONCAT44(uStack_ac,local_b0) + lVar14) == '\0') goto LAB_0345e0d0;
                lVar9 = CONCAT44(uStack_ac,local_b0) + lVar14;
                if (*(char *)(lVar9 + 1) == '\0') {
                  lVar14 = lVar14 + 1;
                  goto LAB_0345e0d0;
                }
                if (*(char *)(lVar9 + 2) == '\0') {
                  lVar14 = lVar14 + 2;
                  goto LAB_0345e0d0;
                }
                lVar14 = lVar14 + 3;
              } while (lVar14 != 0x80001);
              lVar14 = 0;
LAB_0345e0d0:
              iVar5 = (int)lVar14;
              if ((int)param_1[lVar6 * 0x24 + 0x10a] <= (int)lVar14) {
                iVar5 = param_1[lVar6 * 0x24 + 0x10a] - 1;
              }
              memcpy(__dest,__src,(long)iVar5);
              *(undefined1 *)((long)__dest + (long)iVar5) = 0;
            }
            param_1[lVar6 * 0x24 + 0x11c] = 0x1c;
            *(undefined1 *)(param_1 + lVar6 * 0x24 + 0x126) = 1;
          }
        }
      }
      else {
        lVar14 = *(long *)(param_1 + lVar6 * 2 + 0xc4);
        if (lVar14 != 0) {
          uVar18 = param_1[0x102];
          if (*(uint *)(lVar14 + 0x208) <= uVar18) {
            uVar18 = 0;
          }
          plVar16 = *(long **)(*(long *)(lVar14 + 0x210) + (long)(int)uVar18 * 8);
          if (plVar16 != (long *)0x0) {
            puVar2 = PTR_DAT_04bc0cb8 + 0x10;
            local_b0 = 0x1f;
            local_b8 = puVar2;
            (**(code **)(*plVar16 + 0x18))(plVar16,&local_b8);
            (**(code **)(plVar16[3] + 0x208))(plVar16[1],0,0,param_1 + 0x53c);
            local_b0 = 7;
            local_b8 = puVar2;
            (**(code **)(*plVar16 + 0x18))(plVar16,&local_b8);
            (**(code **)(plVar16[3] + 0x88))(plVar16[1],0);
          }
        }
        uVar18 = *puVar17;
        if (uVar18 < 0x10e) {
          lVar14 = *(long *)(param_1 + 0xbc) + 8 + (ulong)uVar18 * 0x1a8;
          if (*(int *)(lVar14 + 0x1a0) != 0) {
            lVar9 = *(long *)(param_1 + 0xbc) + 8 + (ulong)uVar18 * 0x1a8;
            **(undefined1 **)(lVar9 + 0x60) = 0;
            *(undefined1 *)(lVar9 + 0xf0) = 0;
            if (((*(int *)(lVar9 + 0x100) != 1) && ((*(byte *)(lVar9 + 0x18) >> 1 & 1) != 0)) &&
               (*(int *)(lVar9 + 0x140) == -1)) {
              *(undefined4 *)(lVar9 + 0x140) = 1;
            }
            *(undefined4 *)(lVar14 + 0x1a0) = 0;
          }
        }
        *puVar17 = 0xffffffff;
        **(undefined1 **)(param_1 + lVar6 * 0x24 + 0x108) = 0;
        param_1[lVar6 * 0x24 + 0x11c] = 0;
        *(undefined1 *)(param_1 + lVar6 * 0x24 + 0x126) = 0;
        (param_1 + lVar6 * 0x24 + 0x120)[0] = 0xffffffff;
        (param_1 + lVar6 * 0x24 + 0x120)[1] = 0xffffffff;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x1e);
  }
  param_1[0x54f] = 0;
  FUN_0345e1f0(param_1,param_2[0xbc]);
  plVar16 = *(long **)(param_1 + 0xbe);
  if (plVar16 != (long *)0x0) {
    uVar18 = param_1[0x54f];
    fVar19 = (float)param_1[0xc2];
    fVar20 = (float)param_1[0x544];
    local_b0 = 8;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_b8 = puVar1;
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_b8);
    puVar11 = (undefined8 *)(**(code **)(plVar16[3] + 0xa0))(plVar16[1]);
    local_78 = *(undefined4 *)(puVar11 + 1);
    local_b0 = 8;
    plVar16 = *(long **)(param_1 + 0xbe);
    local_80 = (undefined *)CONCAT44(fVar20 + (float)(int)uVar18 * fVar19,(int)*puVar11);
    local_b8 = puVar1;
    (**(code **)(*plVar16 + 0x18))(plVar16,&local_b8);
    (**(code **)(plVar16[3] + 0x98))(plVar16[1],&local_80);
  }
  return;
}


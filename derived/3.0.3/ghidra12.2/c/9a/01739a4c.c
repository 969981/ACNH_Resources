
/* WARNING: Removing unreachable block (ram,0x01739ad8) */
/* WARNING: Removing unreachable block (ram,0x01739cd4) */

undefined8 FUN_01739a4c(long *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 local_198;
  undefined8 uStack_190;
  long local_188;
  long *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  long *local_160;
  undefined *local_158;
  char *pcStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  if ((char)param_1[6] != '\0') {
    return 0;
  }
  lVar8 = *param_1;
  local_168 = 0;
  local_160 = (long *)0x0;
  local_178 = 0;
  uStack_170 = 0;
  if (*(long *)(lVar8 + 0x1138) == 0) {
    local_198 = (ulong)local_198._4_4_ << 0x20;
    iVar9 = 0;
    goto LAB_01739bd8;
  }
  uVar2 = *(uint *)(lVar8 + 0x1698) >> 1;
  local_198 = CONCAT44(local_198._4_4_,uVar2) & 0xffffffff00000001;
  local_158 = (undefined *)CONCAT44(local_158._4_4_,0x3b);
  uVar4 = FUN_03850a90(*(long *)(lVar8 + 0x1138),0x3b,&local_178,uVar2 & 1);
  if ((uVar4 & 1) != 0) {
    if (local_160 == (long *)0x0) {
      iVar9 = 1;
      goto LAB_01739bd8;
    }
    if (*local_160 == 0) {
      local_45 = 0;
      local_148 = 0x100;
      pcStack_150 = local_144;
      local_144[0] = 0;
      local_158 = PTR_DAT_04bb21f8 + 0x10;
      lVar7 = *(long *)(local_160[2] + 8);
      FUN_038d1270(&local_158,"%s.as",lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
    }
    else {
      iVar9 = *(int *)(*local_160 + 8);
      if (0x5fffffff < iVar9) {
        uVar2 = iVar9 + 0xa0000000;
        if (*(uint *)(local_168 + 0x80) <= uVar2) {
          uVar2 = 0;
        }
        lVar7 = *(long *)(local_168 + 0x88) + (ulong)uVar2 * 0x32;
        iVar9 = *(int *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x20));
        goto LAB_01739bd8;
      }
      piVar1 = (int *)(*(long *)(local_160[2] + 8) + (long)iVar9);
      if (0 < *piVar1) {
        iVar9 = *(int *)(((ulong)(uint)piVar1[1] & 0xfffffff) + *(long *)(local_160[2] + 8) + 4);
        goto LAB_01739bd8;
      }
    }
  }
  iVar9 = 0;
LAB_01739bd8:
  if (*(int *)((long)param_1 + 0x24) == 0) {
    local_188 = 0;
    local_180 = (long *)0x0;
    local_198 = 0;
    uStack_190 = 0;
    if (*(long *)(lVar8 + 0x1138) != 0) {
      local_158 = (undefined *)CONCAT44(local_158._4_4_,0x12);
      uVar4 = FUN_03850a90(*(long *)(lVar8 + 0x1138),0x12,&local_198,
                           *(uint *)(lVar8 + 0x1698) >> 1 & 1);
      if ((uVar4 & 1) != 0) {
        pcStack_150 = (char *)0x0;
        if (local_180 != (long *)0x0) {
          if (*local_180 == 0) {
            local_45 = 0;
            local_148 = 0x100;
            pcStack_150 = local_144;
            local_144[0] = 0;
            local_158 = PTR_DAT_04bb21f8 + 0x10;
            lVar7 = *(long *)(local_180[2] + 8);
            FUN_038d1270(&local_158,"%s.as",
                         lVar7 + *(int *)(lVar7 + 0x24) + (long)*(int *)(lVar7 + 8));
            puVar3 = PTR_PTR_04bb2238;
            (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
            pcStack_150 = *(char **)(puVar3 + 8);
          }
          else {
            iVar9 = *(int *)(*local_180 + 8);
            if (iVar9 < 0x60000000) {
              lVar7 = *(long *)(local_180[2] + 8);
              if (*(int *)(lVar7 + iVar9) < 1) {
                pcStack_150 = (char *)&DAT_0407ebb1;
              }
              else {
                pcStack_150 = (char *)(lVar7 + *(int *)(lVar7 + 0x24) +
                                      (long)*(int *)(((ulong)(uint)((int *)(lVar7 + iVar9))[1] &
                                                     0xfffffff) + lVar7 + 4));
              }
            }
            else {
              uVar2 = iVar9 + 0xa0000000;
              if (*(uint *)(local_188 + 0x80) <= uVar2) {
                uVar2 = 0;
              }
              lVar7 = *(long *)(local_188 + 0x88) + (ulong)uVar2 * 0x32;
              pcStack_150 = *(char **)(lVar7 + (ulong)*(byte *)(lVar7 + 0x20));
            }
          }
        }
        local_158 = PTR_DAT_04bb2020 + 0x10;
        FUN_01707d90(lVar8,&local_158,0,7,0);
        *(undefined4 *)(param_1 + 5) = 2;
        return 0;
      }
    }
    if ((int)param_1[5] == 0) {
      FUN_01707f58(lVar8,0,7,0);
    }
    else {
      local_158 = (undefined *)CONCAT44(local_158._4_4_,7);
      if ((((*(long *)(lVar8 + 0x1138) == 0) ||
           (uVar4 = FUN_03850368(*(long *)(lVar8 + 0x1138),7), (uVar4 & 1) != 0)) ||
          (*(long *)(lVar8 + 0x1138) == 0)) ||
         (((uVar4 = FUN_03850368(*(long *)(lVar8 + 0x1138),7), (uVar4 & 1) != 0 ||
           (uVar4 = FUN_0384fca4(*(undefined8 *)(lVar8 + 0x1138),7), (uVar4 & 1) != 0)) ||
          ((int)param_1[5] == 2)))) {
        FUN_01707f58(lVar8,0,7,0);
        *(undefined4 *)(param_1 + 5) = 0;
      }
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    puVar3 = PTR_DAT_04bb2020;
    local_158 = PTR_DAT_04bb2020 + 0x10;
    pcStack_150 = "TalkMouthType";
    if (((*(long *)(lVar8 + 0x1138) != 0) &&
        (lVar7 = *(long *)(*(long *)(lVar8 + 0x1138) + 0x78), lVar7 != 0)) &&
       (plVar5 = *(long **)(lVar7 + 0x48), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_158,iVar9);
    }
    if (iVar9 != 3) {
      if ((int)param_1[5] != 0) {
        local_198 = CONCAT44(local_198._4_4_,7);
        local_158 = (undefined *)CONCAT44(local_158._4_4_,7);
        if (((((*(long *)(lVar8 + 0x1138) != 0) &&
              (uVar6 = FUN_03850368(*(long *)(lVar8 + 0x1138),7), uVar4 = local_198,
              (uVar6 & 1) == 0)) && (*(long *)(lVar8 + 0x1138) != 0)) &&
            ((uVar6 = FUN_03850368(*(long *)(lVar8 + 0x1138),local_198 & 0xffffffff),
             (uVar6 & 1) == 0 &&
             (uVar4 = FUN_0384fca4(*(undefined8 *)(lVar8 + 0x1138),uVar4 & 0xffffffff),
             (uVar4 & 1) == 0)))) && ((int)param_1[5] != 2)) {
          return 1;
        }
      }
      local_158 = puVar3 + 0x10;
      *(undefined4 *)(param_1 + 5) = 1;
      pcStack_150 = "TalkMouth";
      FUN_01707310(lVar8,&local_158,0,7,0);
      FUN_01707750(lVar8,&local_158);
      return 1;
    }
  }
  return 0;
}


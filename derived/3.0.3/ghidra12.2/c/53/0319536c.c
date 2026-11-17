
void FUN_0319536c(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  uint *puVar11;
  long *plVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  uint *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  lVar14 = param_1 + 0x1f8;
  iVar7 = FUN_02672e00(lVar14);
  uVar8 = param_2;
  if (iVar7 <= (int)param_2 || 0x7fffffff < param_2) {
    uVar8 = 0xffffffff;
  }
  if (uVar8 < 0x28) {
    puVar9 = (undefined2 *)FUN_02677ea0(lVar14);
  }
  else {
    puVar9 = &DAT_05586008;
  }
  puVar6 = PTR_DAT_04bb43c0;
  uVar5 = *puVar9;
  uVar3 = *(undefined1 *)(puVar9 + 1);
  uVar4 = *(undefined1 *)((long)puVar9 + 3);
  uVar2 = *(undefined4 *)(puVar9 + 2);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  local_68 = uVar5;
  local_66 = uVar3;
  local_65 = uVar4;
  local_64 = uVar2;
  uVar8 = FUN_0277d6c4(&local_68);
  lVar16 = *(long *)puVar6;
  if (lVar16 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_03195654;
    local_80 = PTR_DAT_04bc0510 + 0x10;
    local_70 = (uint *)0x0;
    local_78 = uVar5;
    local_76 = uVar3;
    local_75 = uVar4;
    local_74 = uVar2;
    uVar8 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar6 != 0) {
      lVar15 = *(long *)(lVar16 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_68);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar8 < *(uint *)(lVar15 + 0x1d8)) {
          puVar11 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8);
          if (puVar11 != (uint *)0x0) {
            uVar8 = *puVar11;
            local_70 = puVar11;
            if ((uVar8 != 0) && (puVar11 != (uint *)(ulong)uVar8)) {
              puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar8);
              if ((*puVar13 != 0) &&
                 ((uVar8 = puVar13[1], uVar8 != 0 && ((ulong)(ushort)puVar13[2] != 0)))) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar15 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar15) / (ulong)uVar8);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_05326ec0) &&
                     (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) == 0x59)) {
                    iVar7 = FUN_01aedd20(&local_80);
                    if (iVar7 + param_3 * -10 < 1) goto LAB_03195654;
                    FUN_01aedf10(auStack_88);
                    goto joined_r0x031955d0;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar10 = FUN_03421c10(&local_68);
    if ((uVar10 & 1) != 0) {
      FUN_01af3d60(auStack_88,&local_68,param_3);
joined_r0x031955d0:
      if (param_2 == 0xffffffff) {
        uVar10 = FUN_02672fb0(lVar14);
        if ((uVar10 & 1) != 0) {
          FUN_026738b0(lVar14,auStack_88,1,0);
        }
      }
      else {
        uVar8 = param_2;
        if (0x27 < param_2) {
          uVar8 = 0xffffffff;
        }
        FUN_02674700(lVar14,uVar8,auStack_88,1,0);
      }
      lVar14 = *(long *)puVar6;
      uVar8 = FUN_0277d6c4(auStack_88);
      if (*(long *)puVar6 == 0) {
        return;
      }
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (*(uint *)(lVar14 + 0x1d8) <= uVar8) {
        return;
      }
      if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) == 0) {
        return;
      }
      lVar14 = *(long *)(param_1 + 0x210);
      if ((int)param_2 < 0x14) {
        plVar12 = (long *)(lVar14 + 0x590) + param_2;
        if (0x13 < param_2) {
          plVar12 = (long *)(lVar14 + 0x590);
        }
      }
      else if (param_2 < 0x28) {
        plVar12 = (long *)(lVar14 + (ulong)(param_2 - 0x14) * 8 + 0x630);
      }
      else if (param_2 == 0x28) {
        plVar12 = (long *)(lVar14 + 0x6d0);
      }
      else if (param_2 < 0x2a) {
        plVar12 = (long *)(lVar14 + 0x6d8);
      }
      else {
        if (param_2 != 0x2a) {
          return;
        }
        plVar12 = (long *)(lVar14 + 0x6e0);
      }
      lVar14 = *plVar12;
      if (lVar14 == 0) {
        return;
      }
      FUN_03421d30(**(undefined8 **)(lVar14 + 0x2e0),
                   *(undefined8 *)
                    (*(long *)(lVar14 + 0x2f0) + (ulong)(2 < *(uint *)(lVar14 + 0x2e8)) * 0x10),
                   auStack_88);
      return;
    }
  }
LAB_03195654:
  FUN_031956f8(param_1,param_2);
  return;
}


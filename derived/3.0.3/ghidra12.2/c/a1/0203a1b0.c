
void FUN_0203a1b0(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined4 local_8e4;
  undefined1 auStack_8e0 [1536];
  undefined8 local_2e0;
  undefined1 *local_2d8;
  undefined8 ******local_2d0;
  undefined8 ******local_2c8;
  undefined8 ******local_2c0 [3];
  undefined8 ******local_2a8 [3];
  undefined8 ******local_290 [3];
  undefined8 ******local_278 [3];
  undefined8 ******local_260 [3];
  undefined8 ******local_248 [3];
  undefined8 ******local_230 [3];
  undefined8 ******local_218 [3];
  undefined8 ******local_200 [3];
  undefined8 ******local_1e8 [3];
  undefined8 ******local_1d0 [3];
  undefined8 ******local_1b8 [3];
  undefined8 ******local_1a0 [3];
  undefined8 *****local_188 [3];
  undefined8 ****local_170 [3];
  undefined8 ***local_158 [3];
  undefined8 **local_140 [3];
  undefined8 *local_128 [3];
  undefined8 local_110 [3];
  undefined1 auStack_f8 [152];
  int local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb4978;
  local_2c0[0] = local_2a8;
  local_2a8[0] = local_290;
  local_2d8 = (undefined1 *)0x0;
  local_290[0] = local_278;
  local_278[0] = local_260;
  local_230[0] = local_218;
  local_218[0] = local_200;
  local_200[0] = local_1e8;
  uVar13 = *(undefined8 *)PTR_DAT_04bb4978;
  local_1e8[0] = local_1d0;
  local_2d0 = local_2c0;
  local_1d0[0] = local_1b8;
  local_260[0] = local_248;
  local_1b8[0] = local_1a0;
  local_248[0] = local_230;
  local_1a0[0] = local_188;
  local_188[0] = local_170;
  local_170[0] = local_158;
  local_158[0] = local_140;
  local_140[0] = local_128;
  local_128[0] = local_110;
  local_2e0 = 0;
  local_110[0] = 0;
  if (auStack_f8 != (undefined1 *)0x0) {
    local_2e0 = 0x1300000000;
    local_2d8 = auStack_f8;
  }
  local_2c8 = local_2d0;
  puVar7 = (uint *)FUN_036fd750(uVar13);
  puVar4 = PTR_DAT_04bc2550;
  puVar3 = PTR_DAT_04bc2548;
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 != 0) {
      cVar10 = *PTR_DAT_04bc2548;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 0x28);
          if (-1 < (int)uVar1) {
            if ((char *)((ulong)uVar1 + (long)puVar7) != (char *)0x0) {
              iVar14 = (int)*(char *)((ulong)uVar1 + (long)puVar7);
              goto LAB_0203a3a0;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        iVar14 = 0;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_0203a3a0;
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
        if (lVar9 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar12 = (int *)(lVar9 + 4);
        while (piVar12[-1] != 0x38501139) {
          piVar12 = piVar12 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0203a39c;
        }
        iVar14 = 0;
        if (*piVar12 != -1) {
          iVar14 = *piVar12;
        }
        *(int *)(puVar4 + 0x28) = iVar14;
        if (*puVar7 == 0) break;
      } while( true );
    }
LAB_0203a39c:
    iVar14 = 0;
LAB_0203a3a0:
    uVar8 = FUN_0291e130(auStack_8e0,&local_48,iVar14);
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)PTR_DAT_04bb2720;
      if (lVar9 == 0) {
        puVar15 = &DAT_055c04a0;
      }
      else {
        puVar15 = &DAT_055c04a0;
        if (*(long *)(lVar9 + 0x330) != 0) {
          puVar15 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
          iVar6 = FUN_006bd550(*puVar15,0);
          puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar15 = &DAT_055c04a0;
          }
        }
      }
      FUN_017baf44(*(undefined4 *)(puVar15 + 7));
      local_8e4 = 0;
      if (local_48 != 0) {
        iVar6 = 0;
        do {
          if (param_1[1] <= *param_1) {
            return;
          }
          uVar8 = FUN_036f7930(uVar13,iVar14,iVar6,&local_8e4);
          if ((uVar8 & 1) != 0) {
            if (param_1[1] <= *param_1) {
              return;
            }
            puVar15 = *(undefined8 **)(param_1 + 4);
            if (puVar15 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar15;
            }
            *(undefined4 *)((long)puVar15 + 0xc) = 0;
            *(undefined8 *)((long)puVar15 + 4) = 0;
            local_44 = local_8e4;
            *(undefined4 *)puVar15 = local_8e4;
            uVar16 = *(undefined8 *)puVar2;
            FUN_036f98d0(uVar16,&local_44);
            bVar5 = FUN_036fef60(uVar16,&local_44);
            *(byte *)(puVar15 + 2) = bVar5 & 1;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar15;
              *param_1 = *param_1 + 1;
            }
          }
          iVar6 = iVar6 + 1;
        } while (local_48 != iVar6);
      }
    }
  }
  return;
}


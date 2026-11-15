
void FUN_02015670(long param_1,short *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  short sVar9;
  char cVar10;
  ushort uVar11;
  uint *puVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined1 *__src;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  long lVar18;
  undefined *local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined *local_120;
  undefined1 *puStack_118;
  int local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  short local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  puVar4 = PTR_DAT_04bb43c0;
  sVar3 = *param_2;
  uVar15 = (undefined1)param_2[1];
  sVar9 = -2;
  uVar16 = *(undefined1 *)((long)param_2 + 3);
  uVar17 = *(undefined4 *)(param_2 + 2);
  local_148 = *(undefined8 *)param_2;
  local_70 = sVar3;
  local_6e = uVar15;
  local_6d = uVar16;
  local_6c = uVar17;
  if (sVar3 != -2) {
    local_150 = PTR_DAT_04bc0510 + 0x10;
    local_140 = 0;
    uStack_13c = 0;
    lVar18 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_148);
    if (*(long *)puVar4 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar18 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar18 + 0x1d8)) &&
           (lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar6 * 8), lVar18 != 0)) {
          local_140 = (undefined4)lVar18;
          uStack_13c = (undefined4)((ulong)lVar18 >> 0x20);
        }
      }
    }
    uVar7 = FUN_01ad9cb4(&local_150);
    sVar9 = sVar3;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_1 + 0x5f88) == 1) {
        local_70 = *(short *)(param_1 + 0x60c4);
        uVar15 = *(undefined1 *)(param_1 + 0x60c6);
        uVar16 = *(undefined1 *)(param_1 + 0x60c7);
        uVar17 = *(undefined4 *)(param_1 + 0x60c8);
      }
      else {
        if (*(int *)(param_1 + 0x5f88) != 0) goto LAB_0201593c;
        uVar14 = *(undefined8 *)PTR_DAT_04bb4138;
        (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(param_1 + 0x5f48);
        local_78 = FUN_006bd550(*(undefined8 *)(param_1 + 0x5f50),0);
        puVar8 = (uint *)FUN_0079e770(uVar14,&local_78);
        puVar5 = PTR_DAT_04bb40b8;
        puVar4 = PTR_DAT_04bb40b0;
        if (puVar8 == (uint *)0x0) goto LAB_0201593c;
        if (*puVar8 != 0) {
          cVar10 = *PTR_DAT_04bb40b0;
          do {
            if (cVar10 == '\0') {
              cVar10 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(uint *)(puVar5 + 0x50);
              if (-1 < (int)uVar6) {
                if ((ushort *)((ulong)uVar6 + (long)puVar8) != (ushort *)0x0) {
                  uVar11 = *(ushort *)((ulong)uVar6 + (long)puVar8);
                  goto LAB_02015904;
                }
                break;
              }
              if (uVar6 != 0xffffffff) break;
            }
            puVar12 = (uint *)(ulong)*puVar8;
            uVar11 = 0xfffe;
            if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_02015904;
            lVar18 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar8 + (lVar18 - (long)puVar12);
            if (lVar18 == 0) break;
            uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
            *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
            if (uVar7 == 0) break;
            piVar13 = (int *)(lVar18 + 4);
            while (piVar13[-1] != -0x78f0e1d7) {
              piVar13 = piVar13 + 2;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_02015900;
            }
            iVar2 = 0;
            if (*piVar13 != -1) {
              iVar2 = *piVar13;
            }
            *(int *)(puVar5 + 0x50) = iVar2;
            if (*puVar8 == 0) break;
          } while( true );
        }
LAB_02015900:
        uVar11 = 0xfffe;
LAB_02015904:
        local_78 = (uint)uVar11;
        local_74 = 0;
        FUN_0277d4ac(&local_78);
        local_70 = (short)local_78;
        uVar15 = local_78._2_1_;
        uVar16 = local_78._3_1_;
        uVar17 = local_74;
      }
      local_6e = uVar15;
      local_6d = uVar16;
      local_6c = uVar17;
      sVar9 = local_70;
    }
  }
LAB_0201593c:
  *(short *)(param_1 + 0x60c4) = sVar9;
  *(undefined1 *)(param_1 + 0x60c6) = uVar15;
  *(undefined1 *)(param_1 + 0x60c7) = uVar16;
  *(undefined4 *)(param_1 + 0x60c8) = uVar17;
  local_8d = 0;
  local_150 = (undefined *)0xffffffff00000000;
  local_148 = 0;
  uStack_13c = 0x3f800000;
  uStack_138 = 0;
  local_110 = 0x80;
  local_120 = PTR_DAT_04bb2d88 + 0x10;
  local_10c[0] = 0;
  local_80 = 0;
  local_84 = 0;
  local_134 = 0;
  local_12c = 0;
  local_140 = 0;
  local_88 = 7;
  puStack_118 = local_10c;
  (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(param_1 + 0x5f48);
  __src = *(undefined1 **)(param_1 + 0x5f50);
  if (local_10c != __src) {
    (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(param_1 + 0x5f48);
    lVar18 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x5f50) + lVar18) == '\0') goto LAB_02015a20;
      lVar1 = *(long *)(param_1 + 0x5f50) + lVar18;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_02015a20;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_02015a20;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_02015a20:
    iVar2 = (int)lVar18;
    if (local_110 <= (int)lVar18) {
      iVar2 = local_110 + -1;
    }
    memcpy(local_10c,__src,(long)iVar2);
    local_10c[iVar2] = 0;
  }
  local_84 = CONCAT11(local_84._1_1_,*(undefined1 *)(*(long *)(param_1 + 0x48) + 0x224));
  FUN_017327f0(*(undefined8 *)(param_1 + 0x6098),&local_70,param_3,&local_150,0xffffffff);
  return;
}


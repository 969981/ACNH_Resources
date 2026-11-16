
void FUN_025ab2c0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  undefined4 uVar8;
  uint *puVar9;
  long lVar10;
  char cVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined2 uVar15;
  ulong uVar16;
  uint *puVar17;
  int *piVar18;
  long lVar19;
  uint uVar20;
  uint local_1a4;
  undefined *local_1a0;
  char *pcStack_198;
  uint local_18c;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 *******local_178;
  undefined8 *******pppppppuStack_170;
  undefined8 *******local_168;
  undefined8 *******local_160;
  undefined8 *******local_158;
  undefined8 *******local_150;
  undefined8 *******local_148;
  undefined8 *******local_140;
  undefined8 *******local_138;
  undefined8 *******local_130;
  undefined8 *******local_128;
  undefined8 ******local_120;
  undefined8 *****local_118;
  undefined8 ****local_110;
  undefined8 ***local_108;
  undefined8 **local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [136];
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  local_168 = &local_160;
  local_160 = &local_158;
  local_188 = 0;
  local_180 = (undefined1 *)0x0;
  local_158 = &local_150;
  local_150 = &local_148;
  local_178 = &local_168;
  local_148 = &local_140;
  local_140 = &local_138;
  local_138 = &local_130;
  local_130 = &local_128;
  local_128 = &local_120;
  local_120 = &local_118;
  local_118 = &local_110;
  local_110 = &local_108;
  local_108 = &local_100;
  local_100 = &local_f8;
  local_f8 = &local_f0;
  local_f0 = 0;
  if (local_e8 != (undefined1 *)0x0) {
    local_188 = 0x1000000000;
    local_180 = local_e8;
  }
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
    return;
  }
  puVar13 = *(undefined8 **)(lVar12 + 0x10);
  pppppppuStack_170 = local_178;
  if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
    lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
    if (lVar12 == 0) {
      return;
    }
    lVar12 = lVar12 + 0x70;
  }
  else {
    if (puVar13 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar13[0x26] == (long *)0x0) {
      return;
    }
    lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
    if (lVar12 == 0) {
      return;
    }
  }
  if ((*(long **)(lVar12 + 0x1bf260) == (long *)0x0) ||
     (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x1bf260), puVar13 == (undefined8 *)0x0)) {
    local_1a4 = 0;
  }
  else {
    local_1a4 = (**(code **)*puVar13)();
  }
  puVar6 = PTR_DAT_04bbbac0;
  puVar5 = PTR_DAT_04bb4130;
  puVar4 = PTR_DAT_04bb40a8;
  uVar20 = 0;
LAB_025ab430:
  pppppppuVar7 = local_178;
  local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,uVar20);
  puVar9 = (uint *)(*(long *)(lVar12 + 0x1bf248) + *(long *)(lVar12 + 0x1bf240) + 0x44);
  puVar17 = puVar9 + uVar20;
  if (6 < uVar20) {
    puVar17 = puVar9;
  }
  local_18c = *puVar17;
  if (0xb < local_18c) {
    local_18c = 0;
  }
  if (local_18c == 0) {
    if ((int)local_188 < local_188._4_4_) {
      if (local_178 != (undefined8 *******)0x0) {
        local_178 = (undefined8 *******)*local_178;
      }
      *(undefined2 *)pppppppuVar7 = 0;
      if ((int)local_188 < local_188._4_4_) {
        *(undefined8 ********)(local_180 + (long)(int)local_188 * 8) = pppppppuVar7;
        local_188 = CONCAT44(local_188._4_4_,(int)local_188 + 1);
      }
      *(undefined2 *)pppppppuVar7 = 0;
    }
    goto LAB_025ab424;
  }
  if (local_18c != 4) {
    puVar13 = &DAT_0407ebb1;
    if (local_18c < 0xc) {
      puVar13 = *(undefined8 **)(puVar6 + (ulong)local_18c * 8 + 0x38);
    }
    if ((local_188._4_4_ <= (int)local_188) || (lVar19 = *(long *)puVar5, lVar19 == 0))
    goto LAB_025ab424;
    uVar8 = FUN_006bd550(puVar13,0);
    local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,uVar8);
    puVar9 = (uint *)FUN_0079e4d0(lVar19,&local_1a0);
    if (puVar9 == (uint *)0x0) goto LAB_025ab424;
    if (*puVar9 == 0) goto LAB_025ab718;
    cVar11 = *PTR_DAT_04bb40a0;
    do {
      puVar3 = PTR_DAT_04bb40a0;
      if (cVar11 == '\0') {
        cVar11 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 0x40);
        if (-1 < (int)uVar2) goto LAB_025ab708;
        if (uVar2 != 0xffffffff) goto LAB_025ab718;
      }
      puVar17 = (uint *)(ulong)*puVar9;
      uVar15 = 0;
      if ((*puVar9 == 0) || (puVar9 == puVar17)) goto LAB_025ab71c;
      lVar19 = 0xc;
      if (*(char *)((long)puVar9 + (10 - (long)puVar17)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar9 + (lVar19 - (long)puVar17);
      if (lVar19 == 0) goto LAB_025ab718;
      uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar17));
      *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
      uVar15 = 0;
      if (uVar16 == 0) goto LAB_025ab71c;
      piVar18 = (int *)(lVar19 + 4);
      while (piVar18[-1] != 0x54706054) {
        piVar18 = piVar18 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar15 = 0;
          goto LAB_025ab71c;
        }
      }
      iVar1 = 0;
      if (*piVar18 != -1) {
        iVar1 = *piVar18;
      }
      *(int *)(puVar4 + 0x40) = iVar1;
    } while (*puVar9 != 0);
    uVar15 = 0;
    goto LAB_025ab71c;
  }
  if (((int)local_188 < local_188._4_4_) && (lVar19 = *(long *)puVar5, lVar19 != 0)) {
    uVar8 = FUN_006bd550(&DAT_04071901,0);
    local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,uVar8);
    puVar9 = (uint *)FUN_0079e4d0(lVar19,&local_1a0);
    if (puVar9 == (uint *)0x0) goto LAB_025ab424;
    if (*puVar9 != 0) {
      cVar11 = *PTR_DAT_04bb40a0;
      do {
        puVar3 = PTR_DAT_04bb40a0;
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x40);
          if (-1 < (int)uVar2) goto LAB_025ab708;
          if (uVar2 != 0xffffffff) goto LAB_025ab718;
        }
        puVar17 = (uint *)(ulong)*puVar9;
        uVar15 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar17)) goto LAB_025ab71c;
        lVar19 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar17)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar9 + (lVar19 - (long)puVar17);
        if (lVar19 == 0) goto LAB_025ab718;
        uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar17));
        *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
        uVar15 = 0;
        if (uVar16 == 0) goto LAB_025ab71c;
        piVar18 = (int *)(lVar19 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) {
            uVar15 = 0;
            goto LAB_025ab71c;
          }
        }
        iVar1 = 0;
        if (*piVar18 != -1) {
          iVar1 = *piVar18;
        }
        *(int *)(puVar4 + 0x40) = iVar1;
      } while (*puVar9 != 0);
      uVar15 = 0;
      goto LAB_025ab71c;
    }
    goto LAB_025ab718;
  }
  goto LAB_025ab424;
LAB_025ab708:
  if ((undefined2 *)((ulong)uVar2 + (long)puVar9) == (undefined2 *)0x0) {
LAB_025ab718:
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined2 *)((ulong)uVar2 + (long)puVar9);
  }
LAB_025ab71c:
  pppppppuVar7 = local_178;
  if ((int)local_188 < local_188._4_4_) {
    if (local_178 != (undefined8 *******)0x0) {
      local_178 = (undefined8 *******)*local_178;
    }
    *(undefined2 *)pppppppuVar7 = 0;
    if ((int)local_188 < local_188._4_4_) {
      *(undefined8 ********)(local_180 + (long)(int)local_188 * 8) = pppppppuVar7;
      local_188 = CONCAT44(local_188._4_4_,(int)local_188 + 1);
    }
    *(undefined2 *)pppppppuVar7 = uVar15;
  }
LAB_025ab424:
  uVar20 = uVar20 + 1;
  if (uVar20 == 7) {
    if (0 < (int)local_188) {
      lVar19 = 0;
      do {
        lVar14 = *(long *)(param_1 + 0x28);
        lVar10 = nn::prepo::Array::GetBuffer();
        if (lVar10 != 0) {
          nn::prepo::Array::Add(lVar14 + 8);
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)local_188);
    }
    local_1a0 = PTR_DAT_04bb2020 + 0x10;
    pcStack_198 = "ScheduledVisitor";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_1a0,*(undefined8 *)(param_1 + 0x28));
    }
    if ((((local_1a4 & 1) != 0) && (*(long *)(lVar12 + 0x1bf260) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x1bf260) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    return;
  }
  goto LAB_025ab430;
}


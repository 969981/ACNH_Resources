
void FUN_01fa09e0(long param_1)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 *__src;
  float fVar19;
  float fVar20;
  undefined4 local_28c;
  undefined *local_288;
  int local_280;
  int iStack_27c;
  long local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 *******local_260;
  undefined8 *******local_258;
  undefined8 *******local_250;
  undefined8 *******local_248;
  undefined8 *******local_240;
  undefined8 ******local_238;
  undefined8 local_230 [4];
  undefined8 local_210;
  undefined *local_208;
  undefined1 *local_200;
  int local_1f8;
  undefined1 auStack_1f4 [63];
  undefined1 local_1b5;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined2 local_1a0;
  undefined4 local_134;
  undefined4 local_130;
  char *local_f8;
  int local_f0;
  undefined4 local_6c;
  
  puVar6 = PTR_DAT_04bb37e0;
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0) {
    FUN_01fa1410(param_1);
    return;
  }
  *(undefined2 *)(param_1 + 0xae84) = *(undefined2 *)PTR_DAT_04bb37e0;
  *(undefined *)(param_1 + 0xae86) = puVar6[2];
  *(undefined *)(param_1 + 0xae87) = puVar6[3];
  *(undefined4 *)(param_1 + 0xae88) = *(undefined4 *)(puVar6 + 4);
  iVar10 = *(int *)(*(long *)(param_1 + 8) + 0x750);
  if (iVar10 == 3) {
    FUN_01e63f1c(&local_210);
    local_6c = 0;
    *(long *)(param_1 + 0x12220) = param_1;
    *(code **)(param_1 + 0x12228) = FUN_01fc443c;
    local_1a8 = CONCAT31(local_1a8._1_3_,1);
    local_210 = CONCAT44(local_210._4_4_,1);
    local_1ac = 1;
    local_208 = (undefined *)(param_1 + 0x12218);
    *(undefined8 *)(param_1 + 0x12230) = 0;
    *(undefined8 *)(param_1 + 0x121f0) = 0;
    *(long *)(param_1 + 0x121e0) = param_1;
    *(code **)(param_1 + 0x121e8) = FUN_01fc4494;
    local_200 = (undefined1 *)(param_1 + 0x121d8);
    FUN_01fb1020(param_1,&local_210,0);
    if (*(int *)(param_1 + 0xaf88) != 1) {
      return;
    }
    pfVar12 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17730) + 0xf0))();
    fVar19 = *pfVar12 * 30.0;
    uVar9 = 0;
    if (fVar19 != (float)(int)fVar19) {
      uVar9 = (uint)(fVar19 < 0.0);
    }
    *(uint *)(param_1 + 0xb098) = (int)fVar19 - uVar9;
    if ((*(byte *)(param_1 + 0xafb1) >> 3 & 1) != 0) {
      *(uint *)(param_1 + 0xb098) = ((int)fVar19 - uVar9) + 900;
    }
    *(undefined4 *)(param_1 + 0x12084) = 0;
    return;
  }
  if ((iVar10 == 1) && (*(int *)(param_1 + 0xaf88) == 1)) {
    local_260 = (undefined8 *******)((ulong)local_260 & 0xffffffff00000000);
    lVar15 = (long)&local_268 + 4;
    local_270 = (undefined *)0x0;
    local_268 = (undefined8 *)0xfffe00000000;
    FUN_0277d4ac(lVar15);
    local_238 = (undefined8 ******)0x0;
    local_230[0]._0_4_ = 0;
    uVar9 = local_28c >> 0x10;
    local_258 = (undefined8 *******)(PTR_DAT_04bbc1a0 + 0x10);
    local_250 = (undefined8 *******)(PTR_DAT_04bb2010 + 0x10);
    local_248 = (undefined8 *******)0x0;
    local_28c = CONCAT22((ushort)uVar9 & 0xff00,0x100);
    local_240 = local_250;
    uVar13 = FUN_01f9cbb0(param_1,&local_270,&local_28c);
    if ((uVar13 & 1) != 0) {
      uVar13 = FUN_0277e294(lVar15);
      puVar5 = PTR_DAT_04bb43c0;
      if ((uVar13 & 1) != 0) {
        local_278 = 0;
        local_288 = PTR_DAT_04bc0510 + 0x10;
        local_280 = local_268._4_4_;
        iStack_27c = (int)local_260;
        lVar18 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(&local_280);
        if (*(long *)puVar5 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(lVar15);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (uVar9 < *(uint *)(lVar18 + 0x1d8)) {
              lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8);
              if (lVar18 != 0) {
                local_278 = lVar18;
              }
            }
          }
        }
        puVar5 = PTR_PTR_04bb2238;
        local_210 = 0;
        local_1b5 = 0;
        local_1f8 = 0x40;
        local_208 = PTR_DAT_04bb2f70 + 0x10;
        local_200 = auStack_1f4;
        (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
        __src = *(undefined1 **)(puVar5 + 8);
        if (auStack_1f4 != __src) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          lVar18 = 0;
          do {
            if (*(char *)(*(long *)(puVar5 + 8) + lVar18) == '\0') goto LAB_01fa0d3c;
            lVar1 = *(long *)(puVar5 + 8) + lVar18;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_01fa0d3c;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_01fa0d3c;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_01fa0d3c:
          iVar10 = (int)lVar18;
          if (local_1f8 <= (int)lVar18) {
            iVar10 = local_1f8 + -1;
          }
          memcpy(auStack_1f4,__src,(long)iVar10);
          auStack_1f4[iVar10] = 0;
        }
        local_1ac = *(undefined4 *)puVar6;
        local_1a8 = *(undefined4 *)(puVar6 + 4);
        local_1b0 = 0;
        uStack_1a4 = 0;
        local_1a0 = 0;
        local_208 = PTR_DAT_04bb2bc0 + 0x10;
        FUN_02080ddc(param_1 + 0xafb8,&local_210,lVar15,&local_250,local_230);
        if (((char)local_1a0 != '\0') &&
           (uVar13 = FUN_01f9d6fc(param_1,lVar15,&local_258,1,0), (uVar13 & 1) != 0)) {
          return;
        }
      }
    }
  }
  pcVar2 = (char *)(param_1 + 0xb0b0);
  FUN_01e63f1c(&local_210);
  cVar4 = *pcVar2;
  local_210 = CONCAT44(local_210._4_4_,1);
  local_1a8 = CONCAT31(local_1a8._1_3_,1);
  lVar15 = *(long *)(param_1 + 8);
  lVar18 = *(long *)(lVar15 + 0x68);
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0xafb1) < '\0')) {
    local_28c = *(uint *)(param_1 + 0xb0b4);
    goto LAB_01fa104c;
  }
  if ((*(int *)(param_1 + 0xaf88) == 0) && ((*(byte *)(param_1 + 0xafb1) >> 2 & 1) == 0)) {
    local_270 = (undefined *)0x0;
    local_268 = (undefined8 *)0x0;
    local_248 = &local_240;
    local_258 = &local_250;
    local_240 = &local_238;
    local_238 = (undefined8 ******)0x0;
    puVar17 = local_230;
    local_260 = local_258;
    local_250 = &local_248;
    if (puVar17 == (undefined8 *)0x0) {
      if (cVar4 != '\0') goto LAB_01fa0ef0;
LAB_01fa0f08:
      if (puVar17 != (undefined8 *)0x0) {
        local_250 = (undefined8 *******)((ulong)&local_248 & 0xffffffff00000000);
        *local_268 = local_258;
        cVar4 = *pcVar2;
        local_270 = (undefined *)CONCAT44(local_270._4_4_,1);
        local_260 = &local_248;
      }
      uVar9 = (uint)(puVar17 != (undefined8 *)0x0);
      if (cVar4 != '\0') goto LAB_01fa0f34;
LAB_01fa0f4c:
      pppppppuVar7 = local_260;
      if (uVar9 < local_270._4_4_) {
        if (local_260 != (undefined8 *******)0x0) {
          local_260 = (undefined8 *******)*local_260;
        }
        *(undefined4 *)pppppppuVar7 = 1;
        uVar9 = (uint)local_270;
        if ((uint)local_270 < local_270._4_4_) {
          local_268[(int)(uint)local_270] = pppppppuVar7;
          uVar9 = (uint)local_270 + 1;
          local_270 = (undefined *)CONCAT44(local_270._4_4_,uVar9);
        }
      }
    }
    else {
      local_270 = (undefined *)0x400000000;
      local_268 = puVar17;
      if (cVar4 == '\0') goto LAB_01fa0f08;
LAB_01fa0ef0:
      local_288 = (undefined *)((ulong)local_288 & 0xffffffff00000000);
      uVar9 = 0;
      if (*(int *)(param_1 + 0xb0b4) != 0) goto LAB_01fa0f08;
LAB_01fa0f34:
      local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
      if (*(int *)(param_1 + 0xb0b4) != 1) goto LAB_01fa0f4c;
    }
    pppppppuVar7 = local_260;
    if (*pcVar2 == '\0') {
LAB_01fa0fb4:
      if (uVar9 < local_270._4_4_) {
        if (local_260 != (undefined8 *******)0x0) {
          local_260 = (undefined8 *******)*local_260;
        }
        *(undefined4 *)pppppppuVar7 = 4;
        uVar9 = (uint)local_270;
        if ((uint)local_270 < local_270._4_4_) {
          local_268[(int)(uint)local_270] = pppppppuVar7;
          uVar9 = (uint)local_270 + 1;
          local_270 = (undefined *)CONCAT44(local_270._4_4_,uVar9);
        }
      }
    }
    else {
      local_288 = (undefined *)CONCAT44(local_288._4_4_,4);
      if (*(int *)(param_1 + 0xb0b4) != 4) goto LAB_01fa0fb4;
    }
    uVar16 = *(uint *)(lVar15 + 0x288);
    *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
    uVar16 = uVar16 ^ uVar16 << 0xb;
    *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
    uVar3 = *(uint *)(lVar15 + 0x294);
    *(uint *)(lVar15 + 0x290) = uVar3;
    uVar16 = uVar16 >> 8 ^ uVar3 >> 0x13 ^ uVar16 ^ uVar3;
    *(uint *)(lVar15 + 0x294) = uVar16;
    local_28c = *(uint *)local_268[(long)((ulong)uVar16 * (ulong)uVar9) >> 0x20];
  }
  else if ((cVar4 == '\0') || (3 < *(int *)(param_1 + 0xb0b4))) {
LAB_01fa0e5c:
    local_28c = 0;
  }
  else {
    local_28c = *(int *)(param_1 + 0xb0b4) + 1;
    if ((local_28c & 0xfffffffe) == 2) {
      local_268 = (undefined8 *)((ulong)local_268 & 0xffffffff00000000);
      lVar15 = *(long *)PTR_DAT_04bb2720;
      if (lVar15 == 0) {
        puVar17 = &DAT_055c04a0;
      }
      else {
        puVar17 = &DAT_055c04a0;
        if (*(long *)(lVar15 + 0x330) != 0) {
          puVar17 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
          iVar10 = FUN_006bd550(*puVar17,0);
          puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar17 = &DAT_055c04a0;
          }
        }
      }
      local_268 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar17 + 7),(undefined4)local_268);
      uVar8 = FUN_017baf44();
      local_260 = (undefined8 *******)(CONCAT71(local_260._1_7_,uVar8) & 0xffffffffffffff01);
      local_270 = PTR_DAT_04bb3140 + 0x10;
      fVar19 = *(float *)(lVar18 + 0x278);
      local_288 = PTR_DAT_04bb2010 + 0x10;
      fVar20 = *(float *)(lVar18 + 0x280);
      local_280 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      iStack_27c = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
      uVar14 = FUN_01a5190c(&local_270,0,&local_288,0);
      iVar10 = FUN_0277d6c4();
      if ((((iVar10 == 0x1002) || (iVar10 = FUN_0277d6c4(uVar14), iVar10 == 0x789)) ||
          (iVar10 = FUN_0277d6c4(uVar14), iVar10 == 0xad8)) ||
         (iVar10 = FUN_0277d6c4(uVar14), iVar10 == 0xd90)) goto LAB_01fa0e5c;
    }
  }
LAB_01fa104c:
  switch(local_28c) {
  case 1:
    if (local_f8 != "NpcBookExist") {
      iVar10 = 0xc;
      if (local_f0 < 0xd) {
        iVar10 = local_f0 + -1;
      }
      memcpy(local_f8,"NpcBookExist",(long)iVar10);
      local_f8[iVar10] = '\0';
    }
    FUN_021e9c30(&local_270,*(undefined8 *)(param_1 + 8),1);
    local_134 = (uint)local_270;
    local_130 = local_270._4_4_;
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x2000000000;
    break;
  case 2:
    if (local_f8 != "NpcDrinkingExist") {
      iVar10 = 0x10;
      if (local_f0 < 0x11) {
        iVar10 = local_f0 + -1;
      }
      memcpy(local_f8,"NpcDrinkingExist",(long)iVar10);
      local_f8[iVar10] = '\0';
    }
    uVar11 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
    local_288 = (undefined *)CONCAT44(local_288._4_4_,uVar11);
    FUN_021ea5f0(&local_270,*(undefined8 *)(param_1 + 8),&local_288);
    goto LAB_01fa11c0;
  case 3:
    if (local_f8 != "NpcEatingExist") {
      iVar10 = 0xe;
      if (local_f0 < 0xf) {
        iVar10 = local_f0 + -1;
      }
      memcpy(local_f8,"NpcEatingExist",(long)iVar10);
      local_f8[iVar10] = '\0';
    }
    uVar11 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
    local_288 = (undefined *)CONCAT44(local_288._4_4_,uVar11);
    FUN_021ea320(&local_270,*(undefined8 *)(param_1 + 8),&local_288);
LAB_01fa11c0:
    local_134 = (uint)local_270;
    local_130 = local_270._4_4_;
    break;
  case 4:
    if (local_f8 != "NpcSpaceOut") {
      iVar10 = 0xb;
      if (local_f0 < 0xc) {
        iVar10 = local_f0 + -1;
      }
      memcpy(local_f8,"NpcSpaceOut",(long)iVar10);
      local_f8[iVar10] = '\0';
    }
  }
  if ((*(uint *)(param_1 + 0xafb0) & 0x208000) == 0) {
    *(undefined8 *)(param_1 + 0x12230) = 0;
    *(long *)(param_1 + 0x12220) = param_1;
    *(undefined1 **)(param_1 + 0x12228) = &LAB_01fc13b0;
    local_208 = (undefined *)(param_1 + 0x12218);
  }
  local_200 = (undefined1 *)(param_1 + 0x121d8);
  *(long *)(param_1 + 0x121e0) = param_1;
  local_1ac = 1;
  *(code **)(param_1 + 0x121e8) = FUN_01fc4494;
  *(undefined8 *)(param_1 + 0x121f0) = 0;
  FUN_01fb1020(param_1,&local_210,0);
  if (*(int *)(param_1 + 0xaf88) == 1) {
    pfVar12 = (float *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17730) + 0xf0))();
    fVar19 = *pfVar12 * 30.0;
    uVar16 = 0;
    if (fVar19 != (float)(int)fVar19) {
      uVar16 = (uint)(fVar19 < 0.0);
    }
    uVar9 = *(uint *)(param_1 + 0xafb0);
    *(uint *)(param_1 + 0xb098) = (int)fVar19 - uVar16;
    if ((uVar9 >> 0xb & 1) != 0) {
      *(uint *)(param_1 + 0xb098) = ((int)fVar19 - uVar16) + 900;
    }
    *(undefined4 *)(param_1 + 0x12084) = 0;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xafb0);
  }
  *(uint *)(param_1 + 0xafb0) = uVar9 & 0xffff7fff;
  *(uint *)(param_1 + 0xb0b4) = local_28c;
  *pcVar2 = '\x01';
  return;
}

